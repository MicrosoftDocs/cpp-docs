// MyAxDataPpg.cpp : Implementation of the CMyAxDataPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxData.h"
#include "MyAxDataPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxDataPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxDataPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxDataPropPage, "NVC_MFC_AXDATA.MyAxDataPropPage.1",
	0x331e2fae, 0x67f4, 0x4950, 0x9b, 0xb3, 0x79, 0x77, 0x8b, 0x4b, 0x76, 0xc0)



// CMyAxDataPropPage::CMyAxDataPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxDataPropPage

BOOL CMyAxDataPropPage::CMyAxDataPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFC_AXDATA_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxDataPropPage::CMyAxDataPropPage - Constructor

CMyAxDataPropPage::CMyAxDataPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFC_AXDATA_PPG_CAPTION)
{
}



// CMyAxDataPropPage::DoDataExchange - Moves data between page and properties

void CMyAxDataPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyAxDataPropPage message handlers
