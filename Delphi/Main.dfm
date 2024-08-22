object MainForm: TMainForm
  Left = 0
  Top = 0
  Caption = 'CMU Dataset Network Emulator v1.0'
  ClientHeight = 475
  ClientWidth = 654
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 654
    Height = 129
    Align = alTop
    TabOrder = 0
    object RadioGroup1: TRadioGroup
      Left = 208
      Top = 9
      Width = 185
      Height = 114
      Caption = 'Protocol'
      ItemIndex = 0
      Items.Strings = (
        'UDP'
        'TCP with Nagle'
        'TCP without Nagle'
        'TCP-SSL-AES128'
        'TCP-SSL-AES256')
      TabOrder = 0
    end
    object LabeledEdit1: TLabeledEdit
      Left = 16
      Top = 36
      Width = 121
      Height = 21
      EditLabel.Width = 56
      EditLabel.Height = 13
      EditLabel.Caption = 'Ip Address:'
      TabOrder = 1
      Text = '192.168.1.8'
    end
    object LabeledEdit2: TLabeledEdit
      Left = 16
      Top = 76
      Width = 121
      Height = 21
      EditLabel.Width = 64
      EditLabel.Height = 13
      EditLabel.Caption = 'Port Number:'
      TabOrder = 2
      Text = '55550'
    end
    object Button1: TButton
      Left = 432
      Top = 88
      Width = 75
      Height = 25
      Caption = 'Start'
      TabOrder = 3
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 528
      Top = 88
      Width = 75
      Height = 25
      Caption = 'Stop'
      TabOrder = 4
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 456
      Top = 16
      Width = 75
      Height = 25
      Caption = 'Button3'
      TabOrder = 5
      OnClick = Button3Click
    end
  end
  object StatusBar1: TStatusBar
    Left = 0
    Top = 456
    Width = 654
    Height = 19
    Panels = <>
  end
  object Log: TRichEdit
    Left = 0
    Top = 249
    Width = 654
    Height = 207
    Align = alClient
    Font.Charset = TURKISH_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
    Zoom = 100
  end
  object DBGrid1: TDBGrid
    Left = 0
    Top = 129
    Width = 654
    Height = 120
    Align = alTop
    DataSource = DataSource1
    Options = [dgTitles, dgIndicator, dgColumnResize, dgColLines, dgRowLines, dgTabs, dgRowSelect, dgAlwaysShowSelection, dgConfirmDelete, dgCancelOnExit]
    TabOrder = 3
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'Tahoma'
    TitleFont.Style = []
  end
  object CMUTable: TFDMemTable
    FieldDefs = <>
    IndexDefs = <>
    FetchOptions.AssignedValues = [evMode, evItems]
    FetchOptions.Mode = fmManual
    FetchOptions.Items = [fiMeta]
    ResourceOptions.AssignedValues = [rvPersistent, rvSilentMode]
    ResourceOptions.Persistent = True
    ResourceOptions.SilentMode = True
    UpdateOptions.AssignedValues = [uvUpdateChngFields, uvUpdateMode, uvLockMode, uvLockPoint, uvLockWait, uvRefreshMode, uvFetchGeneratorsPoint, uvCheckRequired, uvCheckReadOnly, uvCheckUpdatable, uvAutoCommitUpdates]
    UpdateOptions.UpdateChangedFields = False
    UpdateOptions.LockWait = True
    UpdateOptions.RefreshMode = rmManual
    UpdateOptions.FetchGeneratorsPoint = gpNone
    UpdateOptions.CheckRequired = False
    UpdateOptions.CheckReadOnly = False
    UpdateOptions.CheckUpdatable = False
    UpdateOptions.AutoCommitUpdates = True
    StoreDefs = True
    Left = 384
    Top = 336
    object CMUTablesubject: TStringField
      FieldName = 'subject'
      Size = 4
    end
    object CMUTablesessionIndex: TLargeintField
      FieldName = 'sessionIndex'
    end
    object CMUTablerep: TLargeintField
      FieldName = 'rep'
    end
    object CMUTableHperiod: TFloatField
      FieldName = 'H.period'
    end
    object CMUTableDDperiodt: TFloatField
      FieldName = 'DD.period.t'
    end
    object CMUTableUDperiodt: TFloatField
      FieldName = 'UD.period.t'
    end
    object CMUTableHt: TFloatField
      FieldName = 'H.t'
    end
    object CMUTableDDti: TFloatField
      FieldName = 'DD.t.i'
    end
    object CMUTableUDti: TFloatField
      FieldName = 'UD.t.i'
    end
    object CMUTableHi: TFloatField
      FieldName = 'H.i'
    end
    object CMUTableDDie: TFloatField
      FieldName = 'DD.i.e'
    end
    object CMUTableUDie: TFloatField
      FieldName = 'UD.i.e'
    end
    object CMUTableHe: TFloatField
      FieldName = 'H.e'
    end
    object CMUTableDDefive: TFloatField
      FieldName = 'DD.e.five'
    end
    object CMUTableUDefive: TFloatField
      FieldName = 'UD.e.five'
    end
    object CMUTableHfive: TFloatField
      FieldName = 'H.five'
    end
    object CMUTableDDfiveShiftr: TFloatField
      FieldName = 'DD.five.Shift.r'
    end
    object CMUTableUDfiveShiftr: TFloatField
      FieldName = 'UD.five.Shift.r'
    end
    object CMUTableHShiftr: TFloatField
      FieldName = 'H.Shift.r'
    end
    object CMUTableDDShiftro: TFloatField
      FieldName = 'DD.Shift.r.o'
    end
    object CMUTableUDShiftro: TFloatField
      FieldName = 'UD.Shift.r.o'
    end
    object CMUTableHo: TFloatField
      FieldName = 'H.o'
    end
    object CMUTableDDoa: TFloatField
      FieldName = 'DD.o.a'
    end
    object CMUTableUDoa: TFloatField
      FieldName = 'UD.o.a'
    end
    object CMUTableHa: TFloatField
      FieldName = 'H.a'
    end
    object CMUTableDDan: TFloatField
      FieldName = 'DD.a.n'
    end
    object CMUTableUDan: TFloatField
      FieldName = 'UD.a.n'
    end
    object CMUTableHn: TFloatField
      FieldName = 'H.n'
    end
    object CMUTableDDnl: TFloatField
      FieldName = 'DD.n.l'
    end
    object CMUTableUDnl: TFloatField
      FieldName = 'UD.n.l'
    end
    object CMUTableHl: TFloatField
      FieldName = 'H.l'
    end
    object CMUTableDDlReturn: TFloatField
      FieldName = 'DD.l.Return'
    end
    object CMUTableUDlReturn: TFloatField
      FieldName = 'UD.l.Return'
    end
    object CMUTableHReturn: TFloatField
      FieldName = 'H.Return'
    end
  end
  object FDBatchMove1: TFDBatchMove
    Reader = FDBatchMoveTextReader1
    Writer = FDBatchMoveDataSetWriter1
    Mappings = <>
    LogFileName = 'DSL-StrongPasswordData.csv'
    Analyze = [taDelimSep, taFormatSet, taHeader, taFields]
    Left = 456
    Top = 336
  end
  object FDBatchMoveTextReader1: TFDBatchMoveTextReader
    FileName = '.\DSL-StrongPasswordData.csv'
    DataDef.Fields = <
      item
        FieldName = 'subject'
        DataType = atString
        FieldSize = 4
      end
      item
        FieldName = 'sessionIndex'
        DataType = atLongInt
        FieldSize = 1
      end
      item
        FieldName = 'rep'
        DataType = atLongInt
        FieldSize = 2
      end
      item
        FieldName = 'H.period'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.period.t'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.period.t'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.t'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.t.i'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.t.i'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.i'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.i.e'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.i.e'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.e'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.e.five'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.e.five'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.five'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.five.Shift.r'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.five.Shift.r'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.Shift.r'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.Shift.r.o'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.Shift.r.o'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.o'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.o.a'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.o.a'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.a'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.a.n'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.a.n'
        DataType = atFloat
        FieldSize = 7
      end
      item
        FieldName = 'H.n'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.n.l'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.n.l'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.l'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'DD.l.Return'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'UD.l.Return'
        DataType = atFloat
        FieldSize = 6
      end
      item
        FieldName = 'H.Return'
        DataType = atFloat
        FieldSize = 6
      end>
    DataDef.Delimiter = '"'
    DataDef.Separator = ';'
    DataDef.RecordFormat = rfCustom
    DataDef.WithFieldNames = True
    DataDef.FormatSettings.DecimalSeparator = '.'
    DataDef.FormatSettings.DateSeparator = '-'
    DataDef.FormatSettings.ShortDateFormat = 'yyyy/MM/dd'
    DataDef.FormatSettings.ShortTimeFormat = 'HH:mm:ss'
    Left = 536
    Top = 336
  end
  object FDBatchMoveDataSetWriter1: TFDBatchMoveDataSetWriter
    DataSet = CMUTable
    Left = 464
    Top = 392
  end
  object DataSource1: TDataSource
    DataSet = CMUTable
    Left = 376
    Top = 392
  end
  object Tcp: TIdTCPClient
    OnStatus = TcpStatus
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 0
    ReadTimeout = -1
    Left = 448
    Top = 32
  end
  object Udp: TIdUDPClient
    OnStatus = UdpStatus
    Active = True
    Port = 0
    Left = 528
    Top = 32
  end
  object FDGUIxWaitCursor1: TFDGUIxWaitCursor
    Provider = 'Forms'
    Left = 568
    Top = 392
  end
end
