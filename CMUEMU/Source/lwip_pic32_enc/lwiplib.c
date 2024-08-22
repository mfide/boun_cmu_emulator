//*****************************************************************************
//
// lwiplib.c - lwIP TCP/IP Library Abstraction Layer.
//
//*****************************************************************************
//
// Ensure that the lwIP Compile Time Options are included first.
//
//*****************************************************************************

#include "lwiplib.h"

// COREFILES, CORE4FILES: The minimum set of files needed for lwIP.
#include "src/core/init.c"
#include "src/core/def.c"
#include "src/core/dns.c"
#include "src/core/inet_chksum.c"
#include "src/core/ip.c"
#include "src/core/mem.c"
#include "src/core/memp.c"
#include "src/core/netif.c"
#include "src/core/pbuf.c"
#include "src/core/raw.c"
#include "src/core/stats.c"
#include "src/core/sys.c"
#include "src/core/tcp.c"
#include "src/core/tcp_in.c"
#include "src/core/tcp_out.c"
#include "src/core/timeouts.c"
#include "src/core/udp.c"

#include "src/core/ipv4/autoip.c"
#include "src/core/ipv4/dhcp.c"
#include "src/core/ipv4/etharp.c"
#include "src/core/ipv4/icmp.c"
#include "src/core/ipv4/igmp.c"
#include "src/core/ipv4/ip4_frag.c"
#include "src/core/ipv4/ip4.c"
#include "src/core/ipv4/ip4_addr.c"

#include "src/core/ipv6/dhcp6.c"
#include "src/core/ipv6/ethip6.c"
#include "src/core/ipv6/icmp6.c"
#include "src/core/ipv6/inet6.c"
#include "src/core/ipv6/ip6.c"
#include "src/core/ipv6/ip6_addr.c"
#include "src/core/ipv6/ip6_frag.c"
#include "src/core/ipv6/mld6.c"
#include "src/core/ipv6/nd6.c"

// APIFILES: The files which implement the sequential and socket APIs.
#include "src/api/api_lib.c"
#include "src/api/api_msg.c"
#include "src/api/err.c"
#include "src/api/netbuf.c"
#include "src/api/netdb.c"
#include "src/api/netifapi.c"
#include "src/api/sockets.c"
#include "src/api/tcpip.c"

// NETIFFILES: Files implementing various generic network interface functions
#include "src/netif/ethernet.c"
//#include "src/netif/slipif.c"

// SIXLOWPAN: 6LoWPAN
#include "src/netif/lowpan6.c"

// PPPFILES: PPP
#include "src/netif/ppp/auth.c"
#include "src/netif/ppp/ccp.c"
#include "src/netif/ppp/chap-md5.c"
#include "src/netif/ppp/chap_ms.c"
#include "src/netif/ppp/chap-new.c"
#include "src/netif/ppp/demand.c"
#include "src/netif/ppp/eap.c"
#include "src/netif/ppp/ecp.c"
#include "src/netif/ppp/eui64.c"
#include "src/netif/ppp/fsm.c"
#include "src/netif/ppp/ipcp.c"
#include "src/netif/ppp/ipv6cp.c"
#include "src/netif/ppp/lcp.c"
#include "src/netif/ppp/magic.c"
#include "src/netif/ppp/mppe.c"
#include "src/netif/ppp/multilink.c"
#include "src/netif/ppp/ppp.c"
#include "src/netif/ppp/pppapi.c"
#include "src/netif/ppp/pppcrypt.c"
#include "src/netif/ppp/pppoe.c"
#include "src/netif/ppp/pppol2tp.c"
#include "src/netif/ppp/pppos.c"
#include "src/netif/ppp/upap.c"
#include "src/netif/ppp/utils.c"
#include "src/netif/ppp/vj.c"
#include "src/netif/ppp/polarssl/arc4.c"
#include "src/netif/ppp/polarssl/des.c"
#include "src/netif/ppp/polarssl/md4.c"
#include "src/netif/ppp/polarssl/md5.c"
#include "src/netif/ppp/polarssl/sha1.c"

// SNMPFILES: SNMPv2c agent
#include "src/apps/snmp/snmp_asn1.c"
#include "src/apps/snmp/snmp_core.c"
#include "src/apps/snmp/snmp_mib2.c"
#include "src/apps/snmp/snmp_mib2_icmp.c"
#include "src/apps/snmp/snmp_mib2_interfaces.c"
#include "src/apps/snmp/snmp_mib2_ip.c"
#include "src/apps/snmp/snmp_mib2_snmp.c"
#include "src/apps/snmp/snmp_mib2_system.c"
#include "src/apps/snmp/snmp_mib2_tcp.c"
#include "src/apps/snmp/snmp_mib2_udp.c"
#include "src/apps/snmp/snmp_msg.c"
#include "src/apps/snmp/snmpv3.c"
#include "src/apps/snmp/snmp_netconn.c"
#include "src/apps/snmp/snmp_pbuf_stream.c"
#include "src/apps/snmp/snmp_raw.c"
#include "src/apps/snmp/snmp_scalar.c"
#include "src/apps/snmp/snmp_table.c"
#include "src/apps/snmp/snmp_threadsync.c"
#include "src/apps/snmp/snmp_traps.c"
#include "src/apps/snmp/snmpv3_mbedtls.c"


// LWIPERFFILES: IPERF server
#include "src/apps/lwiperf/lwiperf.c"

// SNTPFILES: SNTP client
#include "src/apps/sntp/sntp.c"

// MDNSFILES: MDNS responder
#include "src/apps/mdns/mdns.c"

// NETBIOSNSFILES: NetBIOS name server
#include "src/apps/netbiosns/netbiosns.c"

// TFTPFILES: TFTP server files
#include "src/apps/tftp/tftp_server.c"

// MQTTFILES: MQTT client files
#include "src/apps/mqtt/mqtt.c"

//*****************************************************************************
//
// Include conrib-lwip customized files.
//
//*****************************************************************************
