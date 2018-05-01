#pragma once


// CMyDlg dialog

class CMyDlg : public CDialog
{
	DECLARE_DYNAMIC(CMyDlg)

public:
	CMyDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyDlg();

// Dialog Data
	enum { IDD = IDD_CMyDlg };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
   DECLARE_EVENTSINK_MAP()

public:
// <Snippet12>
   BOOL OnRangeMouseDown(UINT CtlID, short MouseButton, short Shift,
      long x, long y);
// </Snippet12>
};
