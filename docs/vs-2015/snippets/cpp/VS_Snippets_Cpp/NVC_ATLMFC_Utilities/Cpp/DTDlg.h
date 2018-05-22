#pragma once


// CDTDlg dialog

class CDTDlg : public CDialog
{
	DECLARE_DYNAMIC(CDTDlg)

public:
	CDTDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CDTDlg();

// Dialog Data
	enum { IDD = IDD_DTDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
   afx_msg void OnPaint();
};
