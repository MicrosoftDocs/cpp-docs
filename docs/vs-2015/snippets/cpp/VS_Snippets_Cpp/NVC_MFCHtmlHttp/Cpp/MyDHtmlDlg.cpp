// MyDHtmlDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCHtmlHttp.h"
#include "MyDHtmlDlg.h"


// CMyDHtmlDlg dialog

IMPLEMENT_DYNCREATE(CMyDHtmlDlg, CDHtmlDialog)

CMyDHtmlDlg::CMyDHtmlDlg(CWnd* pParent /*=NULL*/)
	: CDHtmlDialog(CMyDHtmlDlg::IDD, CMyDHtmlDlg::IDH, pParent)
   , m_varSliderValue((long)3)
   , m_nItalic(0)
   , m_strBlurDir(_T("Thingy"))
{

}

CMyDHtmlDlg::~CMyDHtmlDlg()
{
}

void CMyDHtmlDlg::DoDataExchange(CDataExchange* pDX)
{
	CDHtmlDialog::DoDataExchange(pDX);

// <Snippet1>
   // COleVariant m_varSliderValue;
   DDX_DHtml_AxControl(pDX, _T("slider1"), 0x0b /* Value */, m_varSliderValue );
// </Snippet1>

// <Snippet2>
   // int m_nItalic;
   DDX_DHtml_CheckBox(pDX, L"italic", m_nItalic);
// </Snippet2>

// <Snippet3>
   // CString m_strBlurDir;
   DDX_DHtml_SelectValue(pDX, L"blurDir", m_strBlurDir);
// </Snippet3>
}

BOOL CMyDHtmlDlg::OnInitDialog()
{
	CDHtmlDialog::OnInitDialog();

	return TRUE;  // return TRUE  unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(CMyDHtmlDlg, CDHtmlDialog)
END_MESSAGE_MAP()

BEGIN_DHTML_EVENT_MAP(CMyDHtmlDlg)
	DHTML_EVENT_ONCLICK(_T("ButtonOK"), OnButtonOK)
	DHTML_EVENT_ONCLICK(_T("ButtonCancel"), OnButtonCancel)
END_DHTML_EVENT_MAP()



// CMyDHtmlDlg message handlers

HRESULT CMyDHtmlDlg::OnButtonOK(IHTMLElement* /*pElement*/)
{
// <Snippet4>
   CComPtr<IHTMLInputButtonElement> spBtn1;
   CComPtr<IHTMLInputButtonElement> spBtn2;
   HRESULT hr = S_OK;

   // Use the template overload
   hr = GetElementInterface(L"Button1", &spBtn1);

   // Use the nontemplate overload
   hr = GetElementInterface(L"Button1", IID_IHTMLInputButtonElement, 
      reinterpret_cast<void**>(&spBtn2));
// </Snippet4>

   OnOK();
	return S_OK;
}

HRESULT CMyDHtmlDlg::OnButtonCancel(IHTMLElement* /*pElement*/)
{
	OnCancel();
	return S_OK;
}
