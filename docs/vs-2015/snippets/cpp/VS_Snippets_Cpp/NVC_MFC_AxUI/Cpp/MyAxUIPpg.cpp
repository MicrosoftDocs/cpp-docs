// MyAxUIPpg.cpp : Implementation of the CMyAxUIPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxUI.h"
#include "MyAxUIPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxUIPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxUIPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxUIPropPage, "NVC_MFC_AXUI.MyAxUIPropPage.1",
   0xbbfbd7d3, 0xdcf5, 0x4674, 0xa2, 0x4d, 0x83, 0x6a, 0x38, 0x7e, 0x8d, 0x3e)



// CMyAxUIPropPage::CMyAxUIPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxUIPropPage

BOOL CMyAxUIPropPage::CMyAxUIPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_NVC_MFC_AXUI_PPG);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxUIPropPage::CMyAxUIPropPage - Constructor

CMyAxUIPropPage::CMyAxUIPropPage() :
   COlePropertyPage(IDD, IDS_NVC_MFC_AXUI_PPG_CAPTION)
      , m_caption(_T(""))
   {
}



// CMyAxUIPropPage::DoDataExchange - Moves data between page and properties

void CMyAxUIPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_PostProcessing(pDX);
// <Snippet31>
   DDP_Text(pDX, IDC_CAPTION, m_caption, _T("Caption"));
// </Snippet31>
}



// CMyAxUIPropPage message handlers
