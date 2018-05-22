#pragma once


// CScrollBarDlg dialog

class CScrollBarDlg : public CDialog
{
	DECLARE_DYNAMIC(CScrollBarDlg)

public:
	CScrollBarDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CScrollBarDlg();

// Dialog Data
	enum { IDD = IDD_NVC_MFC_CSCROLLBAR_DIALOG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// <Snippet2>
   CScrollBar m_ScrollBarHorz;
// </Snippet2>
   CScrollBar m_ScrollBarVert;

	DECLARE_MESSAGE_MAP()
public:
   virtual BOOL OnInitDialog();
};
