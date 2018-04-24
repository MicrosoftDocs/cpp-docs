// CNetAddressCtrl_s1Dlg.h : header file
//

#pragma once
#include "afxcmn.h"
// These 4 are possibly required to get NET_ADDR_INFO.
#include "winsock2.h"
#include "ws2ipdef.h"
#include "windns.h"
#include "iphlpapi.h"

// CCNetAddressCtrl_s1Dlg dialog
class CCNetAddressCtrl_s1Dlg : public CDialog
{
// Construction
public:
	CCNetAddressCtrl_s1Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CNETADDRESSCTRL_S1_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedRadio3();
	afx_msg void OnBnClickedButton1();
private:
	CNetAddressCtrl m_netAddr;
	int m_Addr_ipv4;
	int m_Addr_ipv6;
	int m_Addr_named;
// <snippet2>
	NC_ADDRESS m_na;
	NET_ADDRESS_INFO m_nai;
// </snippet2>
};
