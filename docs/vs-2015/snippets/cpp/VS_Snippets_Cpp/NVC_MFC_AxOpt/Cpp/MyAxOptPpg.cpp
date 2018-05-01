// MyAxOptPpg.cpp : Implementation of the CMyAxOptPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxOpt.h"
#include "MyAxOptPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxOptPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxOptPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxOptPropPage, "NVC_MFC_AXOpt.MyAxOptPropPage.1",
   0x3b9cae90, 0x4181, 0x4e40, 0xbb, 0x3d, 0xfe, 0xca, 0x35, 0x85, 0xae, 0x23)



// CMyAxOptPropPage::CMyAxOptPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxOptPropPage

BOOL CMyAxOptPropPage::CMyAxOptPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_NVC_MFC_AXOpt_PPG);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxOptPropPage::CMyAxOptPropPage - Constructor

CMyAxOptPropPage::CMyAxOptPropPage() :
   COlePropertyPage(IDD, IDS_NVC_MFC_AXOpt_PPG_CAPTION)
{
}



// CMyAxOptPropPage::DoDataExchange - Moves data between page and properties

void CMyAxOptPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_PostProcessing(pDX);
}



// CMyAxOptPropPage message handlers
