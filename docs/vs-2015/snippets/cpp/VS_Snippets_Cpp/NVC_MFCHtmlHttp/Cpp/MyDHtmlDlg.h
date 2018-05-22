#pragma once

#ifdef _WIN32_WCE
#error "CDHtmlDialog is not supported for Windows CE."
#endif 

// CMyDHtmlDlg dialog

class CMyDHtmlDlg : public CDHtmlDialog
{
	DECLARE_DYNCREATE(CMyDHtmlDlg)

public:
	CMyDHtmlDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyDHtmlDlg();
// Overrides
	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// Dialog Data
	enum { IDD = IDD_MYDHTMLDLG, IDH = IDR_HTML_MYDHTMLDLG };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

   COleVariant m_varSliderValue;
   int m_nItalic;
   CString m_strBlurDir;

	DECLARE_MESSAGE_MAP()
	DECLARE_DHTML_EVENT_MAP()
};
