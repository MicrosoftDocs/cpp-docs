// MyAxSubPpg.cpp : Implementation of the CMyAxSubPropPage property page class.

#include "stdafx.h"
#include "NVC_MFC_AxSub.h"
#include "MyAxSubPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxSubPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxSubPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxSubPropPage, "NVC_MFC_AXSUB.MyAxSubPropPage.1",
	0x3a0257e, 0xd111, 0x48a8, 0xbf, 0x6a, 0xd2, 0xda, 0x8b, 0xf0, 0x3b, 0x2a)



// CMyAxSubPropPage::CMyAxSubPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxSubPropPage

BOOL CMyAxSubPropPage::CMyAxSubPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFC_AXSUB_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxSubPropPage::CMyAxSubPropPage - Constructor

CMyAxSubPropPage::CMyAxSubPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFC_AXSUB_PPG_CAPTION)
{
}



// CMyAxSubPropPage::DoDataExchange - Moves data between page and properties

void CMyAxSubPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyAxSubPropPage message handlers
