// MyDHTMLCtrl.cpp : Implementation of CMyDHTMLCtrl
#include "stdafx.h"
#include "MyDHTMLCtrl.h"


// CMyDHTMLCtrl

STDMETHODIMP CMyDHTMLCtrl::MethodInvoked(void)
{
// <Snippet5>
   ::MessageBox(NULL, _T("I'm invoked"), _T("Your Container Message"), MB_OK);
// </Snippet5>

   return S_OK;
}

STDMETHODIMP CMyDHTMLCtrlUI::HelloHTML(void)
{
// <Snippet6>
   ::MessageBox(NULL, _T("Here's your message"), _T("HelloHTML"), MB_OK);
// </Snippet6>

   return S_OK;
}

STDMETHODIMP CMyDHTMLCtrl::GoToURL(void)
{
// <Snippet7>
   m_spBrowser->Navigate(CComBSTR(L"www.microsoft.com"), NULL, NULL, NULL, NULL);
// </Snippet7>

   return S_OK;
}