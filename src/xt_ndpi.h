/* 
 * xt_ndpi.h
 * Copyright (C) 2010-2012 G. Elian Gidoni <geg@gnu.org>
 *               2012 Ed Wildgoose <lists@wildgooses.com>
 * 
 * This file is part of nDPI, an open source deep packet inspection
 * library based on the PACE technology by ipoque GmbH
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; version 2 of the License.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#ifndef _LINUX_NETFILTER_XT_NDPI_H
#define _LINUX_NETFILTER_XT_NDPI_H 1

#include <linux/netfilter.h>
#include "ndpi_main.h"

struct xt_ndpi_mtinfo {
        NDPI_PROTOCOL_BITMASK flags;
};

#ifndef NDPI_PROTOCOL_LONG_STRING
#define NDPI_PROTOCOL_LONG_STRING \
	"Unknown","FTP_CONTROL","POP3","SMTP","IMAP","DNS","IPP","HTTP","MDNS","NTP", \
	"NetBIOS","NFS","SSDP","BGP","SNMP","XDMCP","SMB","Syslog","DHCP","PostgreSQL", \
	"MySQL","TDS","Direct_Download_Link","POPS","AppleJuice","DirectConnect","Socrates","WinMX","VMware","SMTPS", \
	"Filetopia","iMESH","Kontiki","OpenFT","FastTrack","Gnutella","eDonkey","BitTorrent","EPP","AVI", \
	"Flash","OggVorbis","MPEG","QuickTime","RealMedia","WindowsMedia","MMS","Xbox","QQ","Move", \
	"RTSP","IMAPS","IceCast","PPLive","PPStream","Zattoo","ShoutCast","Sopcast","Tvants","TVUplayer", \
	"HTTP_APPLICATION_VEOHTV","QQLive","Thunder","Soulseek","SSL_No_Cert","IRC","Ayiya","Unencryped_Jabber","MSN","Oscar", \
	"Yahoo_Software","BattleField","Quake","VRRP","Steam","HalfLife2","WorldOfWarcraft","Telnet","STUN","IPsec", \
	"GRE","ICMP","IGMP","EGP","SCTP","OSPF","IP_in_IP","RTP","RDP","VNC", \
	"PcAnywhere","SSL","SSH","Usenet","MGCP","IAX","TFTP","AFP","Stealthnet","Aimini", \
	"SIP","TruPhone","ICMPV6","DHCPV6","Armagetron","Crossfire","Dofus","Fiesta","Florensia","Guildwars", \
	"HTTP_Application_ActiveSync","Kerberos","LDAP","MapleStory","MsSQL","PPTP","Warcraft3","WorldOfKungFu","Meebo","Facebook", \
	"Twitter","DropBox","GMail","GoogleMaps","YouTube","Skype","Google","DCE_RPC","NetFlow","sFlow", \
	"HTTP_Connect","HTTP_Proxy","Citrix","NetFlix","LastFM","GrooveShark","SkyFile_PrePaid","SkyFile_Rudics","SkyFile_PostPaid","Citrix_Online", \
	"Apple","Webex","WhatsApp","AppleiCloud","Viber","AppleiTunes","Radius","WindowsUpdate","TeamViewer","Tuenti", \
	"LotusNotes","SAP","GTP","UPnP","LLMNR","RemoteScan","Spotify","WebM","H323","OpenVPN", \
	"NOE","CiscoVPN","TeamSpeak","TOR","CiscoSkinny","RTCP","RSYNC","Oracle","Corba","UbuntuONE", \
	"Whois-DAS","Collectd","SOCKS5","SOCKS4","RTMP","FTP_DATA","Wikipedia","MSN","Amazon","eBay", \
	"CNN","DropBox","Skype","Viber","Yahoo","Pando_Media_Booster"
#endif

#ifndef NDPI_PROTOCOL_SHORT_STRING
#define NDPI_PROTOCOL_SHORT_STRING \
	"unk","ftp","pop3","smtp","imap","dns","ipp","http","mdns","ntp", \
	"netbios","nfs","ssdp","bgp","snmp","xdmcp","smb","syslog","dhcp","postgresql", \
	"mysql","tds","directdownloadlink","pops","applejuice","directconnect","socrates","winmx","vmware","smtps", \
	"filetopia","imesh","kontiki","openft","fasttrack","gnutella","edonkey","bittorrent","epp","avi", \
	"flash","oggvorbis","mpeg","quicktime","realmedia","windowsmedia","mms","xbox","qq","move", \
	"rtsp","imaps","icecast","pplive","ppstream","zattoo","shoutcast","sopcast","tvants","tvuplayer", \
	"httpapplicationveohtv","qqlive","thunder","soulseek","sslnocert","irc","ayiya","unencrypedjabber","msn","oscar", \
	"yahoosoftware","battlefield","quake","vrrp","steam","halflife2","worldofwarcraft","telnet","stun","ipsec", \
	"gre","icmp","igmp","egp","sctp","ospf","ipinip","rtp","rdp","vnc", \
	"pcanywhere","ssl","ssh","usenet","mgcp","iax","tftp","afp","stealthnet","aimini", \
	"sip","truphone","icmpv6","dhcpv6","armagetron","crossfire","dofus","fiesta","florensia","guildwars", \
	"httpapplicationactivesync","kerberos","ldap","maplestory","mssql","pptp","warcraft3","worldofkungfu","meebo","facebook", \
	"twitter","dropbox","gmail","googlemaps","youtube","skype","google","dcerpc","netflow","sflow", \
	"httpconnect","httpproxy","citrix","netflix","lastfm","grooveshark","skyfileprepaid","skyfilerudics","skyfilepostpaid","citrixonline", \
	"apple","webex","whatsapp","appleicloud","viber","appleitunes","radius","windowsupdate","teamviewer","tuenti", \
	"lotusnotes","sap","gtp","upnp","llmnr","remotescan","spotify","webm","h323","openvpn", \
	"noe","ciscovpn","teamspeak","tor","ciscoskinny","rtcp","rsync","oracle","corba","ubuntuone", \
	"whoisdas","collectd","socks5","socks4","rtmp","ftpdata","wikipedia","msn","amazon","ebay", \
	"cnn","dropbox","skype","viber","yahoo","pandomediabooster"
#endif


#endif /* _LINUX_NETFILTER_XT_NDPI_H */
