// MyAxPpg.cpp : Implementation of the CMyAxPropPage property page class.

#include "stdafx.h"
#include "NVC_MFCAxCtl.h"
#include "MyAxPpg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMyAxPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxPropPage, "NVC_MFCAXCTL.MyAxPropPage.1",
	0xeda2e94c, 0x7634, 0x495a, 0xbd, 0xaa, 0xd, 0xec, 0x1a, 0x7d, 0xc, 0xa1)



// CMyAxPropPage::CMyAxPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxPropPage

BOOL CMyAxPropPage::CMyAxPropPageFactory::UpdateRegistry(BOOL bRegister)
{
	if (bRegister)
		return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
			m_clsid, IDS_NVC_MFCAXCTL_PPG);
	else
		return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMyAxPropPage::CMyAxPropPage - Constructor

CMyAxPropPage::CMyAxPropPage() :
	COlePropertyPage(IDD, IDS_NVC_MFCAXCTL_PPG_CAPTION)
{
   m_NeedlePosition = 0;
}



// CMyAxPropPage::DoDataExchange - Moves data between page and properties

// <Snippet15>
void CMyAxPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_Text(pDX, IDC_POSITIONEDIT, m_NeedlePosition, _T("NeedlePosition"));
   DDX_Text(pDX, IDC_POSITIONEDIT, m_NeedlePosition);
   DDV_MinMaxInt(pDX, m_NeedlePosition, 0, 3);
   DDP_PostProcessing(pDX);
}
// </Snippet15>


// CMyAxPropPage message handlers
