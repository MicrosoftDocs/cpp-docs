// MyAxSerPpg.cpp : Implementation of the CMyAxSerPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxSer.h"
#include "MyAxSerPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxSerPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxSerPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxSerPropPage, "NVC_MFC_AXSER.MyAxSerPropPage.1",
	0x332402b4, 0x4648, 0x4c33, 0xa3, 0x55, 0xf9, 0xae, 0x8, 0xcb, 0x7, 0x34)



// CMyAxSerPropPage::CMyAxSerPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxSerPropPage

BOOL CMyAxSerPropPage::CMyAxSerPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFC_AXSER_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxSerPropPage::CMyAxSerPropPage - Constructor

CMyAxSerPropPage::CMyAxSerPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFC_AXSER_PPG_CAPTION)
{
}



// CMyAxSerPropPage::DoDataExchange - Moves data between page and properties

void CMyAxSerPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyAxSerPropPage message handlers
