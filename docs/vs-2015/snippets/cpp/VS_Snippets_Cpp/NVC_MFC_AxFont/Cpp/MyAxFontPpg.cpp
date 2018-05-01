// MyAxFontPpg.cpp : Implementation of the CMyAxFontPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxFont.h"
#include "MyAxFontPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxFontPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxFontPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxFontPropPage, "NVC_MFC_AXFONT.MyAxFontPropPage.1",
	0x735f2dc8, 0xf6ec, 0x48d2, 0x85, 0x9d, 0x5b, 0xb0, 0x21, 0xd, 0xcf, 0xb8)



// CMyAxFontPropPage::CMyAxFontPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxFontPropPage

BOOL CMyAxFontPropPage::CMyAxFontPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFC_AXFONT_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxFontPropPage::CMyAxFontPropPage - Constructor

CMyAxFontPropPage::CMyAxFontPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFC_AXFONT_PPG_CAPTION)
{
}



// CMyAxFontPropPage::DoDataExchange - Moves data between page and properties

void CMyAxFontPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyAxFontPropPage message handlers
