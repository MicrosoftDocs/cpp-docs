// MyMultiPageDlg.cpp : implementation file
//

#include "stdafx.h"
#include "NVC_MFCDocView.h"
#include "MyMultiPageDlg.h"


// CMyMultiPageDlg dialog

IMPLEMENT_DYNCREATE(CMyMultiPageDlg, CMultiPageDHtmlDialog)

CMyMultiPageDlg::CMyMultiPageDlg(CWnd* pParent /*=NULL*/)
	: CMultiPageDHtmlDialog(CMyMultiPageDlg::IDD, CMyMultiPageDlg::IDH, pParent)
{

}

CMyMultiPageDlg::~CMyMultiPageDlg()
{
}

void CMyMultiPageDlg::DoDataExchange(CDataExchange* pDX)
{
	CMultiPageDHtmlDialog::DoDataExchange(pDX);
}

BOOL CMyMultiPageDlg::OnInitDialog()
{
	CMultiPageDHtmlDialog::OnInitDialog();
	return TRUE;  // return TRUE  unless you set the focus to a control
}

BEGIN_MESSAGE_MAP(CMyMultiPageDlg, CMultiPageDHtmlDialog)
END_MESSAGE_MAP()


// CMyMultiPageDlg message handlers

HRESULT CMyMultiPageDlg::OnButtonOK(IHTMLElement* /*pElement*/)
{
	OnOK();
	return S_OK;
}

HRESULT CMyMultiPageDlg::OnButtonCancel(IHTMLElement* /*pElement*/)
{
	OnCancel();
	return S_OK;
}

// <Snippet182>
// <Snippet196>
BEGIN_DHTML_URL_EVENT_MAP(CMyMultiPageDlg)

   BEGIN_EMBED_DHTML_EVENT_MAP(CMyMultiPageDlg, Page1)
      DHTML_EVENT_ONCLICK(_T("Next"), OnPage1Next)
   END_EMBED_DHTML_EVENT_MAP()

   BEGIN_EMBED_DHTML_EVENT_MAP(CMyMultiPageDlg, Page2)
      DHTML_EVENT_ONCLICK(_T("Back"), OnPage2Back)
      DHTML_EVENT_ONCLICK(_T("Next"), OnPage2Next)
   END_EMBED_DHTML_EVENT_MAP()

   BEGIN_EMBED_DHTML_EVENT_MAP(CMyMultiPageDlg, Page3)
      DHTML_EVENT_ONCLICK(_T("Back"), OnPage3Back)
   END_EMBED_DHTML_EVENT_MAP()

   BEGIN_URL_ENTRIES(CMyMultiPageDlg)
      URL_EVENT_ENTRY(CMyMultiPageDlg, _T("153"), Page1)
      URL_EVENT_ENTRY(CMyMultiPageDlg, _T("154"), Page2)
      URL_EVENT_ENTRY(CMyMultiPageDlg, _T("155"), Page3)
      // Note: IDR_PAGE1 = 153, IDR_PAGE2 = 154, IDR_PAGE3 = 155
   END_URL_ENTRIES()

END_DHTML_URL_EVENT_MAP(CMyMultiPageDlg)
// </Snippet196>

HRESULT CMyMultiPageDlg::OnPage1Next(IHTMLElement *pElement)
{
   UNREFERENCED_PARAMETER(pElement);
   LoadFromResource(IDR_PAGE2);
   return S_OK;
}

HRESULT CMyMultiPageDlg::OnPage2Next(IHTMLElement *pElement)
{
   UNREFERENCED_PARAMETER(pElement);
   LoadFromResource(IDR_PAGE3);
   return S_OK;
}

HRESULT CMyMultiPageDlg::OnPage2Back(IHTMLElement *pElement)
{
   UNREFERENCED_PARAMETER(pElement);
   LoadFromResource(IDR_PAGE1);
   return S_OK;
}

HRESULT CMyMultiPageDlg::OnPage3Back(IHTMLElement *pElement)
{
   UNREFERENCED_PARAMETER(pElement);
   LoadFromResource(IDR_PAGE2);
   return S_OK;
}
// </Snippet182>