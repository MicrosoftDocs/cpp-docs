#pragma once

#ifdef _WIN32_WCE
#error "CDHtmlDialog is not supported for Windows CE."
#endif 

// CMyMultiPageDlg dialog

// <Snippet181>
class CMyMultiPageDlg : public CMultiPageDHtmlDialog
{
public:
   // Declare the DHTML event handlers:
   HRESULT OnPage1Next(IHTMLElement *pElement);
   HRESULT OnPage2Next(IHTMLElement *pElement);
   HRESULT OnPage2Back(IHTMLElement *pElement);
   HRESULT OnPage3Back(IHTMLElement *pElement);

   DECLARE_DHTML_URL_EVENT_MAP()
   
   // rest of class declaration omitted
// </Snippet181>

private:
	DECLARE_DYNCREATE(CMyMultiPageDlg)

public:
	CMyMultiPageDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CMyMultiPageDlg();
// Overrides
	HRESULT OnButtonOK(IHTMLElement *pElement);
	HRESULT OnButtonCancel(IHTMLElement *pElement);

// Dialog Data
	enum { IDD = IDD_MYMULTIPAGEDLG, IDH = IDR_PAGE1 };

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
};
