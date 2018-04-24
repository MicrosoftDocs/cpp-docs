// MyAxPicCtrl.cpp : Implementation of the CMyAxPicCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxPic.h"
#include "MyAxPicCtrl.h"
#include "MyAxPicPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxPicCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxPicCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxPicCtrl, COleControl)
// <Snippet5>
   DISP_PROPERTY_EX_ID(CMyAxPicCtrl, "ControlPicture", dispidControlPicture, 
      GetControlPicture, SetControlPicture, VT_PICTURE)
// </Snippet5>
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxPicCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
// <Snippet2>
BEGIN_PROPPAGEIDS(CMyAxPicCtrl, 2)
// </Snippet2>
	PROPPAGEID(CMyAxPicPropPage::guid)
// <Snippet1>
   PROPPAGEID(CLSID_CPicturePropPage)
// </Snippet1>
END_PROPPAGEIDS(CMyAxPicCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxPicCtrl, "NVC_MFC_AXPIC.MyAxPicCtrl.1",
	0xcd3d7667, 0x4ebe, 0x4a09, 0xb4, 0xa8, 0xc8, 0xda, 0xf4, 0x1e, 0x56, 0x99)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxPicCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxPic =
		{ 0x3BF68E33, 0x191C, 0x4682, { 0xB5, 0x60, 0xBC, 0xE, 0x70, 0x8B, 0xED, 0x46 } };
const IID BASED_CODE IID_DNVC_MFC_AxPicEvents =
		{ 0xF0E3D02A, 0xC7AF, 0x41C6, { 0x88, 0xD5, 0xA4, 0x15, 0xD4, 0x64, 0x4D, 0x42 } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxPicOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxPicCtrl, IDS_NVC_MFC_AXPIC, _dwNVC_MFC_AxPicOleMisc)



// CMyAxPicCtrl::CMyAxPicCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxPicCtrl

BOOL CMyAxPicCtrl::CMyAxPicCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegApartmentThreading to 0.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_NVC_MFC_AXPIC,
			IDB_NVC_MFC_AXPIC,
			afxRegApartmentThreading,
			_dwNVC_MFC_AxPicOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxPicCtrl::CMyAxPicCtrl - Constructor

CMyAxPicCtrl::CMyAxPicCtrl()
{
	InitializeIIDs(&IID_DNVC_MFC_AxPic, &IID_DNVC_MFC_AxPicEvents);
	// TODO: Initialize your control's instance data here.
}



// CMyAxPicCtrl::~CMyAxPicCtrl - Destructor

CMyAxPicCtrl::~CMyAxPicCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyAxPicCtrl::OnDraw - Drawing function

// <Snippet8>
void CMyAxPicCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
	if (!pdc)
		return;

   m_pic.Render(pdc, rcBounds, rcBounds);
}
// </Snippet8>


// CMyAxPicCtrl::DoPropExchange - Persistence support

void CMyAxPicCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

// <Snippet11>
   PX_Picture(pPX, _T("ControlPicture"), m_pic);
// </Snippet11>
}



// CMyAxPicCtrl::OnResetState - Reset control to default state

void CMyAxPicCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

// <Snippet7>
   m_pic.CreateEmpty();
// </Snippet7>
}



// CMyAxPicCtrl message handlers

class CWizardGenCtrl
{
   IPictureDisp* GetControlPicture();
   void SetControlPicture(IPictureDisp* pVal);
   void SetModifiedFlag() {}
};

// <Snippet6>
IPictureDisp* CWizardGenCtrl::GetControlPicture(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your dispatch handler code here

   return NULL;
}

void CWizardGenCtrl::SetControlPicture(IPictureDisp* /*pVal*/)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}
// </Snippet6>

IPictureDisp* CMyAxPicCtrl::GetControlPicture(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

// <Snippet9>
   return m_pic.GetPictureDispatch();
// </Snippet9>
}

void CMyAxPicCtrl::SetControlPicture(IPictureDisp* pVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

// <Snippet10>
   m_pic.SetPictureDispatch(pVal);
   InvalidateControl();
// </Snippet10>

   SetModifiedFlag();
}
