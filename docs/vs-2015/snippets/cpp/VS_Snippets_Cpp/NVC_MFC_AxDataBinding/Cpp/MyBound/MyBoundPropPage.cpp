// MyBoundPropPage.cpp : Implementation of the CMyBoundPropPage property page class.

#include "stdafx.h"
#include "MyBound.h"
#include "MyBoundPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyBoundPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyBoundPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyBoundPropPage, "MYBOUND.MyBoundPropPage.1",
	0x8d435f54, 0xdf6b, 0x4de1, 0x8e, 0xb4, 0xfe, 0xa8, 0x26, 0x9f, 0xf3, 0xb2)



// CMyBoundPropPage::CMyBoundPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyBoundPropPage

BOOL CMyBoundPropPage::CMyBoundPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_MYBOUND_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyBoundPropPage::CMyBoundPropPage - Constructor

CMyBoundPropPage::CMyBoundPropPage() :
	COlePropertyPage(IDD, IDS_MYBOUND_PPG_CAPTION)
{
}



// CMyBoundPropPage::DoDataExchange - Moves data between page and properties

void CMyBoundPropPage::DoDataExchange(CDataExchange* pDX)
{
	DDP_PostProcessing(pDX);
}



// CMyBoundPropPage message handlers
