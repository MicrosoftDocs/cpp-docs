// MFCActiveXControlPropPage.cpp : Implementation of the 
// CMFCActiveXControlPropPage property page class.

#include "stdafx.h"
#include "MyDataPathProperty.h"
#include "MFCActiveXControl.h"
#include "MFCActiveXControlPropPage.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMFCActiveXControlPropPage, COlePropertyPage)



// Message map

BEGIN_MESSAGE_MAP(CMFCActiveXControlPropPage, COlePropertyPage)
END_MESSAGE_MAP()



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControlPropPage, "MFCACTIVEXCONT.MFCActiveXContPropPage.1",
   0x46297c89, 0x20c9, 0x48de, 0xb7, 0x6d, 0x51, 0x2e, 0xb, 0, 0x53, 0x75)



// CMFCActiveXControlPropPage::CMFCActiveXControlPropPageFactory::UpdateRegistry -
// Adds or removes system registry entries for CMFCActiveXControlPropPage

BOOL CMFCActiveXControlPropPage::CMFCActiveXControlPropPageFactory::UpdateRegistry(BOOL bRegister)
{
   if (bRegister)
      return AfxOleRegisterPropertyPageClass(AfxGetInstanceHandle(),
         m_clsid, IDS_MFCACTIVEXCONTROL_PPG);
   else
      return AfxOleUnregisterClass(m_clsid, NULL);
}



// CMFCActiveXControlPropPage::CMFCActiveXControlPropPage - Constructor

CMFCActiveXControlPropPage::CMFCActiveXControlPropPage() :
   COlePropertyPage(IDD, IDS_MFCACTIVEXCONTROL_PPG_CAPTION)
{
}



// CMFCActiveXControlPropPage::DoDataExchange - Moves data between 
// page and properties

void CMFCActiveXControlPropPage::DoDataExchange(CDataExchange* pDX)
{
   DDP_PostProcessing(pDX);
}



// CMFCActiveXControlPropPage message handlers
