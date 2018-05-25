// MyAxLocPpg.cpp : Implementation of the CMyAxLocPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxLoc.h"
#include "MyAxLocPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxLocPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxLocPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxLocPropPage, "NVC_MFC_AXLOC.MyAxLocPropPage.1",
   0xd4950ff, 0x9fd9, 0x4b38, 0xb5, 0xd9, 0xb5, 0xe0, 0x43, 0x3b, 0xbb, 0xb7)



// CMyAxLocPropPage::CMyAxLocPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxLocPropPage

BOOL CMyAxLocPropPage::CMyAxLocPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_NVC_MFC_AXLOC_PPG);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxLocPropPage::CMyAxLocPropPage - Constructor

CMyAxLocPropPage::CMyAxLocPropPage() :
   COlePropertyPage(IDD, IDS_NVC_MFC_AXLOC_PPG_CAPTION)
{
}



// CMyAxLocPropPage::DoDataExchange - Moves data between page and properties

void CMyAxLocPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_PostProcessing(pDX);
}



// CMyAxLocPropPage message handlers

// <Snippet5>
void CMyAxLocPropPage::OnSetPageSite()
{
   LPPROPERTYPAGESITE pSite;
   LCID lcid = 0;
   if((pSite = GetPageSite()) != NULL)
      pSite->GetLocaleID(&lcid);
   HINSTANCE hResource = GetLocalizedResourceHandle(lcid);
   HINSTANCE hResourceSave = NULL;

   if (hResource != NULL)
   {
      hResourceSave = AfxGetResourceHandle();
      AfxSetResourceHandle(hResource);
   }

   //  Load dialog template and caption string.
   COlePropertyPage::OnSetPageSite();

   if (hResource != NULL)
      AfxSetResourceHandle(hResourceSave);
}
// </Snippet5>