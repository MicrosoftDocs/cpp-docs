// MyAxPicPpg.cpp : Implementation of the CMyAxPicPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxPic.h"
#include "MyAxPicPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxPicPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxPicPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxPicPropPage, "NVC_MFC_AXPIC.MyAxPicPropPage.1",
	0x119e9f5c, 0xb557, 0x4683, 0xb0, 0x39, 0x61, 0x9b, 0x93, 0x31, 0x3, 0x61)



// CMyAxPicPropPage::CMyAxPicPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxPicPropPage

BOOL CMyAxPicPropPage::CMyAxPicPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFC_AXPIC_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxPicPropPage::CMyAxPicPropPage - Constructor

CMyAxPicPropPage::CMyAxPicPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFC_AXPIC_PPG_CAPTION)
{
}



// CMyAxPicPropPage::DoDataExchange - Moves data between page and properties

void CMyAxPicPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyAxPicPropPage message handlers
