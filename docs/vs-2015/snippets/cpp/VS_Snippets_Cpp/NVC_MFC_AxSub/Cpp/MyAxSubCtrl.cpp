// MyAxSubCtrl.cpp : Implementation of the CMyAxSubCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxSub.h"
#include "MyAxSubCtrl.h"
#include "MyAxSubPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxSubCtrl, COleControl)



// Message map

// <Snippet7>
BEGIN_MESSAGE_MAP(CMyAxSubCtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CMyAxSubCtrl::OnOcmCommand)
END_MESSAGE_MAP()
// </Snippet7>



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxSubCtrl, COleControl)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxSubCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyAxSubCtrl, 1)
	PROPPAGEID(CMyAxSubPropPage::guid)
END_PROPPAGEIDS(CMyAxSubCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxSubCtrl, "NVC_MFC_AXSUB.MyAxSubCtrl.1",
	0x6e9e4bbd, 0x186a, 0x45cc, 0x96, 0xfa, 0x59, 0x75, 0xb8, 0x41, 0xcf, 0xb9)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxSubCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxSub =
		{ 0xE1EE7929, 0x9E40, 0x484E, { 0x98, 0x6C, 0xB1, 0xD4, 0x81, 0x2C, 0x6A, 0xAF } };
const IID BASED_CODE IID_DNVC_MFC_AxSubEvents =
		{ 0xAA4BDC29, 0x19E1, 0x4911, { 0xA9, 0x6E, 0x2D, 0x91, 0x2C, 0x30, 0xD1, 0x11 } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxSubOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxSubCtrl, IDS_NVC_MFC_AXSUB, _dwNVC_MFC_AxSubOleMisc)



// CMyAxSubCtrl::CMyAxSubCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxSubCtrl

BOOL CMyAxSubCtrl::CMyAxSubCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_NVC_MFC_AXSUB,
			IDB_NVC_MFC_AXSUB,
			afxRegApartmentThreading,
			_dwNVC_MFC_AxSubOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxSubCtrl::CMyAxSubCtrl - Constructor

CMyAxSubCtrl::CMyAxSubCtrl()
{
	InitializeIIDs(&IID_DNVC_MFC_AxSub, &IID_DNVC_MFC_AxSubEvents);
	// TODO: Initialize your control's instance data here.
}



// CMyAxSubCtrl::~CMyAxSubCtrl - Destructor

CMyAxSubCtrl::~CMyAxSubCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyAxSubCtrl::OnDraw - Drawing function

// <Snippet4>
void CMyAxSubCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
	if (!pdc)
		return;

	DoSuperclassPaint(pdc, rcBounds);
}
// </Snippet4>


// CMyAxSubCtrl::DoPropExchange - Persistence support

void CMyAxSubCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CMyAxSubCtrl::OnResetState - Reset control to default state

void CMyAxSubCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}


// <Snippet2>
// CMyAxSubCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CMyAxSubCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("BUTTON");
	return COleControl::PreCreateWindow(cs);
}

// CMyAxSubCtrl::IsSubclassedControl - This is a subclassed control

BOOL CMyAxSubCtrl::IsSubclassedControl()
{
	return TRUE;
}
// </Snippet2>

void StyleExample()
{
   CREATESTRUCT cs;
// <Snippet3>
   cs.style |= BS_CHECKBOX;
// </Snippet3>
}

// CMyAxSubCtrl::OnOcmCommand - Handle command messages

LRESULT CMyAxSubCtrl::OnOcmCommand(WPARAM wParam, LPARAM /*lParam*/)
{
#ifdef _WIN32
	WORD wNotifyCode = HIWORD(wParam);
#else
	WORD wNotifyCode = HIWORD(lParam);
#endif

	wNotifyCode;

	return 0;
}



// CMyAxSubCtrl message handlers
