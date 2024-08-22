unit Main;

interface

uses
  Winapi.Windows, Winapi.Messages, System.SysUtils, System.Variants, System.Classes, Vcl.Graphics,
  Vcl.Controls, Vcl.Forms, Vcl.Dialogs, Vcl.StdCtrls, Vcl.ExtCtrls, Vcl.ComCtrls,
  FireDAC.Stan.Intf, FireDAC.Stan.Option, FireDAC.Stan.Param,
  FireDAC.Stan.Error, FireDAC.DatS, FireDAC.Phys.Intf, FireDAC.DApt.Intf,
  Data.DB, FireDAC.Comp.DataSet, FireDAC.Comp.Client, FireDAC.Stan.StorageBin,
  Vcl.Grids, Vcl.DBGrids, FireDAC.Comp.BatchMove.DataSet,
  FireDAC.Comp.BatchMove, FireDAC.Comp.BatchMove.Text, IdUDPBase, IdUDPClient,
  IdBaseComponent, IdComponent, IdTCPConnection, IdTCPClient, IdThreadComponent,
  FireDAC.UI.Intf, FireDAC.VCLUI.Wait, FireDAC.Comp.UI, IdGlobal, IdUDPServer;

type
  TDurations = record
    DD_t: Double;
    DD_i: Double;
    DD_e: Double;
    DD_5: Double;
    DD_R: Double;
    DD_o: Double;
    DD_a: Double;
    DD_n: Double;
    DD_l: Double;
    DD_Return: Double;
  end;

  TMainForm = class(TForm)
    Panel1: TPanel;
    StatusBar1: TStatusBar;
    Log: TRichEdit;
    RadioGroup1: TRadioGroup;
    CMUTable: TFDMemTable;
    FDBatchMove1: TFDBatchMove;
    FDBatchMoveTextReader1: TFDBatchMoveTextReader;
    FDBatchMoveDataSetWriter1: TFDBatchMoveDataSetWriter;
    DBGrid1: TDBGrid;
    DataSource1: TDataSource;
    CMUTablesubject: TStringField;
    CMUTablesessionIndex: TLargeintField;
    CMUTablerep: TLargeintField;
    CMUTableHperiod: TFloatField;
    CMUTableDDperiodt: TFloatField;
    CMUTableUDperiodt: TFloatField;
    CMUTableHt: TFloatField;
    CMUTableDDti: TFloatField;
    CMUTableUDti: TFloatField;
    CMUTableHi: TFloatField;
    CMUTableDDie: TFloatField;
    CMUTableUDie: TFloatField;
    CMUTableHe: TFloatField;
    CMUTableDDefive: TFloatField;
    CMUTableUDefive: TFloatField;
    CMUTableHfive: TFloatField;
    CMUTableDDfiveShiftr: TFloatField;
    CMUTableUDfiveShiftr: TFloatField;
    CMUTableHShiftr: TFloatField;
    CMUTableDDShiftro: TFloatField;
    CMUTableUDShiftro: TFloatField;
    CMUTableHo: TFloatField;
    CMUTableDDoa: TFloatField;
    CMUTableUDoa: TFloatField;
    CMUTableHa: TFloatField;
    CMUTableDDan: TFloatField;
    CMUTableUDan: TFloatField;
    CMUTableHn: TFloatField;
    CMUTableDDnl: TFloatField;
    CMUTableUDnl: TFloatField;
    CMUTableHl: TFloatField;
    CMUTableDDlReturn: TFloatField;
    CMUTableUDlReturn: TFloatField;
    CMUTableHReturn: TFloatField;
    LabeledEdit1: TLabeledEdit;
    LabeledEdit2: TLabeledEdit;
    Tcp: TIdTCPClient;
    Udp: TIdUDPClient;
    FDGUIxWaitCursor1: TFDGUIxWaitCursor;
    Button1: TButton;
    Button2: TButton;
    Button3: TButton;
    procedure TcpStatus(ASender: TObject; const AStatus: TIdStatus;
      const AStatusText: string);
    procedure FormClose(Sender: TObject; var Action: TCloseAction);
    procedure FormCreate(Sender: TObject);
    procedure Button1Click(Sender: TObject);
    procedure Button2Click(Sender: TObject);
    procedure UdpStatus(ASender: TObject; const AStatus: TIdStatus;
      const AStatusText: string);
    procedure Button3Click(Sender: TObject);
  private
    FStop: Boolean;
    procedure UserMessage(var Message: TMessage); message WM_USER;
    procedure AddFrameToLog(const d: array of Byte);
    procedure AddToLog(const s: string);
    procedure ShipToMainThread(const d: PByte; const len: NativeInt);

    function ModeToCharLen(): Byte;
    function ModeToNagle(): Boolean;
    function ModeToProtocol(): String;
    procedure ReadNet(var v: TIdBytes; const len: Int32; const append: Boolean);
    Function NetSendDuration(const d: TDurations; var o: TDurations; const CharLen: Byte = 1; const UseNagle: Boolean = False): Boolean;
  public
  end;

  TCMUPacket = packed record
	  SOH: UInt8;
    Len: UInt8;
    ChrLen: UInt8;
    DD_t: UInt32;
    DD_i: UInt32;
    DD_e: UInt32;
    DD_5: UInt32;
    DD_R: UInt32;
    DD_o: UInt32;
    DD_a: UInt32;
    DD_n: UInt32;
    DD_l: UInt32;
    DD_Return: UInt32;
    CRC16: UInt16;
    EOH : UInt8;
  end;



var
  MainForm: TMainForm;

implementation

Uses
  System.Diagnostics,
  System.Generics.Collections;

{$R *.dfm}

var
  sw: TStopwatch;
  inx: UInt32;
  r: Array[0..15] of UInt32;

procedure TMainForm.ShipToMainThread(const d: PByte; const len: NativeInt);
Var
  P: Pointer;
begin
  GetMem(P, len);
  Move(d^, P^, len);
  PostMessage(Handle, WM_USER, NativeInt(P), len);
end;

function DurToStr(const d: TDurations): String;
begin
  Result := Format('%1.4f,%1.4f,%1.4f,%1.4f,%1.4f,%1.4f,%1.4f,%1.4f,%1.4f,%1.4f',
                   [d.DD_t, d.DD_i, d.DD_e, d.DD_5, d.DD_R, d.DD_o, d.DD_a, d.DD_n, d.DD_l, d.DD_Return]);
end;

procedure TMainForm.Button1Click(Sender: TObject);
var
  dd, oo: TDurations;
  i: NativeInt;
  s: TStopwatch;
begin
  FStop := False;

  Tcp.Host := LabeledEdit1.Text;
  Tcp.Port := StrToIntDef(LabeledEdit2.Text, 55550);

  Udp.Host := LabeledEdit1.Text;
  Udp.Port := StrToIntDef(LabeledEdit2.Text, 55550)+1;

  s := TStopwatch.StartNew;

  // heat up
  i := 0;
  while (i < 20) and (not FStop) do
  begin
    dd.DD_t := 1.0;
    dd.DD_i := 1.0;
    dd.DD_e := 1.0;
    dd.DD_5 := 1.0;
    dd.DD_R := 1.0;
    dd.DD_o := 1.0;
    dd.DD_a := 1.0;
    dd.DD_n := 1.0;
    dd.DD_l := 1.0;
    dd.DD_Return := 1.0;

    If NetSendDuration(dd, oo, ModeToCharLen(), ModeToNagle()) then
    begin
      Inc(i);
      Log.Lines.Add(Format('HEAT%d,%s', [i, DurToStr(oo)]));
      MainForm.Caption := Format('Heating... %d / %d', [i, 20]);
    end;

    Application.ProcessMessages;
  end;

  CMUTable.First;
  while (not CMUTable.Eof) and (not Application.Terminated) and (not FStop) do
  begin
    dd.DD_t := CMUTableDDperiodt.Value;
    dd.DD_i := CMUTableDDti.Value;
    dd.DD_e := CMUTableDDie.Value;
    dd.DD_5 := CMUTableDDefive.Value;
    dd.DD_R := CMUTableDDfiveShiftr.Value;
    dd.DD_o := CMUTableDDShiftro.Value;
    dd.DD_a := CMUTableDDoa.Value;
    dd.DD_n := CMUTableDDan.Value;
    dd.DD_l := CMUTableDDnl.Value;
    dd.DD_Return := CMUTableDDlReturn.Value;

    If NetSendDuration(dd, oo, ModeToCharLen(), ModeToNagle()) then
    begin
      AddToLog(Format('%d,%s', [CMUTable.RecNo, DurToStr(oo)]));
      CMUTable.Next;
    end;

    MainForm.Caption := Format('%d / %d', [CMUTable.RecNo, CMUTable.RecordCount]);
    Application.ProcessMessages;
  end;

  s.Stop;

  Log.Lines.Add(Format('DONE in %s', [s.Elapsed.ToString]));
end;

procedure TMainForm.Button2Click(Sender: TObject);
begin
  FStop := True;
end;

procedure TMainForm.Button3Click(Sender: TObject);
var
  dd, oo: TDurations;
begin
  Udp.Host := LabeledEdit1.Text;
  Udp.Port := StrToIntDef(LabeledEdit2.Text, 55550)+1;

  dd.DD_t := 0.5;
  dd.DD_i := 0.5;
  dd.DD_e := 0.5;
  dd.DD_5 := 0.5;
  dd.DD_R := 0.5;
  dd.DD_o := 0.5;
  dd.DD_a := 0.5;
  dd.DD_n := 0.5;
  dd.DD_l := 0.5;
  dd.DD_Return := 0.5;

  If NetSendDuration(dd, oo, 1, false) then
  begin
    Log.Lines.Add(Format('%s', [DurToStr(oo)]));
  end
  else
   Log.Lines.Add('ERR');
end;

procedure TMainForm.FormClose(Sender: TObject; var Action: TCloseAction);
begin
  if Tcp.Connected then
    Tcp.Disconnect;

  if Udp.Connected then
    Udp.Disconnect;
end;

procedure TMainForm.FormCreate(Sender: TObject);
begin
  FormatSettings := TFormatSettings.Invariant;

  FDBatchMove1.Execute;
  sw := TStopwatch.Create;
end;

function TMainForm.ModeToCharLen: Byte;
begin
  case RadioGroup1.ItemIndex of
    0: Result := 1;
    1: Result := 1;
    2: Result := 1;
    3: Result := 16;
    4: Result := 32;
    Else Result := 1;
  end;
end;

function TMainForm.ModeToNagle: Boolean;
begin
  case RadioGroup1.ItemIndex of
    1: Result := True;
    Else Result := False;
  end;
end;

function TMainForm.ModeToProtocol: String;
begin
  case RadioGroup1.ItemIndex of
    0: Result := 'UDP';
    Else Result := 'TCP';
  end;
end;

procedure TMainForm.ReadNet(var v: TIdBytes; const len: Int32; const append: Boolean);
var
  pl, lenUDP: Int32;
  buf: TIdBytes;
  h: string;
  p: Word;
begin
  if ModeToProtocol() = 'TCP' then Tcp.Socket.ReadBytes(v, len, false)
  else
  begin
    pl := 0;
    SetLength(v, len);
    SetLength(buf, 65536);

    h:= Udp.Binding.IP;
    p := Udp.Binding.Port;
    while (pl < len) do
    begin
      lenUDP := Udp.ReceiveBuffer(Buf, -1);
      if lenUDP > 0 then
      begin
        Inc(pl, lenUDP);
      end;
    end;
  end;
end;

function TMainForm.NetSendDuration(const d: TDurations; var o: TDurations; const CharLen: Byte; const UseNagle: Boolean): Boolean;
var
  p: TCMUPacket;
  arr, v: TIdBytes;
  s: TStopwatch;
begin
  Result := False;
  SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);

  Tcp.UseNagle := UseNagle;

  if ModeToProtocol() = 'UDP' then
  begin
    if not Udp.Connected then
      Udp.Connect;
  end
  else
  begin
    if not Tcp.Connected then
      Tcp.Connect;
  end;

  try
    p.SOH := $7E;
    p.Len := 43;
    p.ChrLen := CharLen;
    p.DD_t := Round(d.DD_t*100000);
    p.DD_i := Round(d.DD_i*100000);
    p.DD_e := Round(d.DD_e*100000);
    p.DD_5 := Round(d.DD_5*100000);
    p.DD_R := Round(d.DD_R*100000);
    p.DD_o := Round(d.DD_o*100000);
    p.DD_a := Round(d.DD_a*100000);
    p.DD_n := Round(d.DD_n*100000);
    p.DD_l := Round(d.DD_l*100000);
    p.DD_Return := Round(d.DD_Return*100000);
    p.CRC16 := $1234;
    p.EOH := $E7;

    s := TStopwatch.Create;
    SetLength(arr, Sizeof(p));
    Move(p, arr[0], Sizeof(p));

    if ModeToProtocol() = 'UDP' then
    begin
      Udp.SendBuffer(arr)
    end
    else
      Tcp.IOHandler.WriteDirect(arr);

    { SOH, 13, '.', 't', 'i', 'e', '5', 'R', 'o', 'a', 'n', 'l', 13, 1, 2, EOH }
    s := s.StartNew;
    ReadNet(v, 2 + CharLen, false);  // SOH, Len, .

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // t
    o.DD_t := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // i
    o.DD_i := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // e
    o.DD_e := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // 5
    o.DD_5 := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // R
    o.DD_R := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // o
    o.DD_o := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // a
    o.DD_a := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // n
    o.DD_n := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // l
    o.DD_l := s.ElapsedTicks / 10000000;

    s := s.StartNew;
    ReadNet(v, CharLen, false);  // Return
    o.DD_Return := s.ElapsedTicks / 10000000;

    ReadNet(v, 3, false);  // CRC0 CRC1 EOH

    Result := True;
  finally
    SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
  end;
end;

procedure TMainForm.TcpStatus(ASender: TObject; const AStatus: TIdStatus; const AStatusText: string);
var
  p: Char;
  b: TList<Byte>;
begin
  b := TList<Byte>.Create();
  try
    for p in AStatusText do
    begin
      b.Add(Ord(p));
    end;

    ShipToMainThread(@b.ToArray[0], b.Count);
  finally
    b.Free;
  end;
end;

procedure TMainForm.UdpStatus(ASender: TObject; const AStatus: TIdStatus; const AStatusText: string);
var
  p: Char;
  b: TList<Byte>;
begin
  b := TList<Byte>.Create();
  try
    for p in AStatusText do
    begin
      b.Add(Ord(p));
    end;

    ShipToMainThread(@b.ToArray[0], b.Count);
  finally
    b.Free;
  end;
end;

procedure TMainForm.UserMessage(var Message: TMessage);
Var
  D: Array of Byte;
begin
 SetLength(D, Message.LParam);
 Move(Pointer(Message.WParam)^, D[0], Message.LParam);
 FreeMem(Pointer(Message.WParam));

 AddFrameToLog(D);
end;

function DateTimeToStrUs(dt: TDateTime): string;
var
    us: string;
begin
    //Spit out most of the result: '20160802 11:34:36.'
    Result := FormatDateTime('yyyymmdd hh":"nn":"ss"."', dt);

    //extract the number of microseconds
    dt := Frac(dt); //fractional part of day
    dt := dt * 24*60*60; //number of seconds in that day
    us := IntToStr(Round(Frac(dt)*1000000));

    //Add the us integer to the end:
    // '20160801 11:34:36.' + '00' + '123456'
    Result := Result + StringOfChar('0', 6-Length(us)) + us;
end;

procedure TMainForm.AddFrameToLog(const d: array of Byte);
var
  i: Integer;
  b: Byte;
begin
  Log.Lines.BeginUpdate;

  Log.SelStart := Log.Perform(EM_LINEINDEX, Log.Lines.Count, 0); // set caret to the end

  Log.SelAttributes.Color := clMaroon;
  Log.SelAttributes.Style := [fsBold];
  Log.SelText := FormatDateTime('[hh:nn:ss.zzz]   ', Now());
  //Log.SelText := DateTimeToStrUs(Now());

  for i := Low(d) to High(d) do
  begin
    b := d[i];

    case b of
      $7E:
        begin
          Log.SelAttributes.Color := clGreen;
          Log.SelAttributes.Style := [fsBold];
          Log.SelText := '[SOH]';
        end;

      $E7:
        begin
          Log.SelAttributes.Color := clOlive;
          Log.SelAttributes.Style := [fsBold];
          Log.SelText := '[EOH]';
        end;

      13:
        begin
          Log.SelAttributes.Color := clBLUE;
          Log.SelAttributes.Style := [fsBold];
          Log.SelText := '[CR]';
        end;

       32..125:
        begin
          Log.SelAttributes.Color := clBlack;
          Log.SelAttributes.Style := [];
          Log.SelText := String(AnsiChar(b));
        end;
       else
        begin
          Log.SelAttributes.Color := clDkGray;
          Log.SelAttributes.Style := [];
          Log.SelText := Format('[%s]', [IntToHex(b, 2)]);
        end;
    end;
  end;

  Log.Lines.Add('');
  Log.Perform(WM_VSCROLL, SB_BOTTOM, 0);
  Log.Lines.EndUpdate;
end;

procedure TMainForm.AddToLog(const s: string);
begin
  Log.Lines.BeginUpdate;
  Log.SelStart := Log.Perform(EM_LINEINDEX, Log.Lines.Count, 0); // set caret to the end
  Log.SelText := s;
  Log.Lines.Add('');
  Log.Perform(WM_VSCROLL, SB_BOTTOM, 0);
  Log.Lines.EndUpdate;
end;

end.
