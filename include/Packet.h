/***********************************************************
 * Author: Wen Li
 * Date  : 11/08/2019
 * Describe: Packet parse for IP & Goose
 * History:
   <1> 11/08/2019 , create
************************************************************/
#ifndef _PACKET_H_
#define _PACKET_H_ 
#include <BasicType.h>

using namespace std;

enum ETHTYPE
{
    ETH_IPV4  = 0x0800,
    ETH_IPV6  = 0x86DD,
    ETH_ARP   = 0x0806,
    ETH_GOOSE = 0x88B8,
};

class Packet
{
protected:
    DWORD m_PktLen;
    BYTE* m_PktData;

protected:
        
    virtual DWORD ParsePacket() = 0;
    
public:
    Packet (BYTE* PktData, DWORD PktLen)
    {
        m_PktData = new BYTE[PktLen];
        assert (m_PktData != NULL);
        memcpy (m_PktData, PktData, PktLen);

        m_PktLen  = PktLen;
    }

    ~Packet ()
    {
        if (m_PktData != NULL)
        {
            delete m_PktData;
            m_PktData = NULL;
        }
    }

    inline DWORD GetPacketData (BYTE** PktData)
    {
        *PktData = m_PktData;

        return m_PktLen;
    }

};

/*******************************************************************************************
 ethnet protocol
********************************************************************************************/
enum
{
    ETH_HEADER_LEN = 14,
    IPV4_VERSION   = 4,
    IPV6_VERSION   = 6,
    IPHDR_LEN      = 20,
    TCPHDR_LEN     = 20,
    UDPHDR_LEN     = 8,

    GSETH_HEADER_LEN = 26,
};

enum IP_LV4_PROTO
{
	LV4_TCP    = 6,  
	LV4_UDP    = 17,
}; 


struct IpEthHder
{
    BYTE DestMac[6];
    BYTE SrcMac[6];
    WORD EthType;
};


struct Ipv4Hdr  
{ 
	BYTE h_verlen;
	BYTE tos;            
	WORD total_len;      
	WORD ident;           
	WORD frag_and_flags;  
	BYTE ttl;            
	BYTE proto;           
	WORD checksum;        
	DWORD sourceIP;       
	DWORD destIP;       
};

struct TcpHdr 
{
	WORD  wSrcPort;
	WORD  wDstPort;
	DWORD dwSeqNum;
	DWORD dwAckNum; 
	BYTE  bHdrLen;
	BYTE  bTclFlg; 
	WORD  wWindowSize;
	WORD  wCheckSum; 
	WORD  wrgentPointer; 
};


struct UdpHdr 
{
	WORD wSrcPort;       
	WORD wDstPort;     
	WORD wLength ;      
	WORD wCheckSum;    
};

class IpEthPacket:public Packet
{
private:
    IpEthHder *m_EthHeader;
    Ipv4Hdr *m_Ipv4Header;
    TcpHdr  *m_TcpHdr;
    UdpHdr  *m_UdpHdr;

private:
    DWORD EthParse ();
    DWORD Ipv4Parse ();
    DWORD ParsePacket();
    
public:
    IpEthPacket (BYTE* PktData, DWORD PktLen):Packet(PktData, PktLen)
    {
        ParsePacket();
    }
};

/*******************************************************************************************
 goose protocol
********************************************************************************************/
enum
{
    GS_GOOSE = 0X01,
    GS_GSSE  = 0X02,
    GS_SV    = 0X04,
    GS_MASK  = 0X07
};

struct GsEthHder
{
    BYTE DestMac[6];
    BYTE SrcMac[6];
    WORD TPID;
    WORD TCI;
    WORD EthType;
    WORD APPID;
    WORD Length;
    WORD Reserved[2];
};

struct TlvData
{
    DWORD Type;
    DWORD Length;
    BYTE* Value;
};

class GsEthPacket:public Packet
{
private:
    GsEthHder m_EthHeader;
    map<DWORD, TlvData> m_PduMap;

private:
    DWORD EthParse ();
    DWORD Tlv (BYTE* Data, DWORD Offset);
    DWORD ParsePacket();
    
public:
    GsEthPacket (BYTE* PktData, DWORD PktLen):Packet(PktData, PktLen)
    {
        ParsePacket();
    }

    GsEthPacket():Packet(NULL, 0)
    {
    }

    GsEthHder* GetGsHdr ();

    inline VOID SetSrcMac (BYTE SrcMac[6])
    {
        GsEthHder *GsHdr = (GsEthHder*)m_PktData;

        memcpy (GsHdr->SrcMac, SrcMac, sizeof(GsHdr->SrcMac));

        return;
    }
};


#endif


