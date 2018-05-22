// MyBoundCtrl.cpp : Implementation of the CMyBoundCtrl ActiveX Control class.

#include "stdafx.h"
#include "MyBound.h"
#include "MyBoundCtrl.h"
#include "MyBoundPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyBoundCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyBoundCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyBoundCtrl, COleControl)
   DISP_PROPERTY_EX_ID(CMyBoundCtrl, "MyBoundProp", dispidMyBoundProp, GetMyBoundProp, SetMyBoundProp, VT_BSTR)
   DISP_DEFVALUE(CMyBoundCtrl, "MyBoundProp")
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyBoundCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyBoundCtrl, 1)
	PROPPAGEID(CMyBoundPropPage::guid)
END_PROPPAGEIDS(CMyBoundCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyBoundCtrl, "MYBOUND.MyBoundCtrl.1",
	0x4e9077d3, 0x28f0, 0x4943, 0xb2, 0x90, 0x40, 0x9d, 0x8f, 0xb8, 0xe3, 0x5f)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyBoundCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DMyBound =
		{ 0xDF55EF63, 0x8F37, 0x474A, { 0xB1, 0xD2, 0x4E, 0xB, 0xF5, 0xA6, 0xCD, 0x18 } };
const IID BASED_CODE IID_DMyBoundEvents =
		{ 0x4948205, 0x3968, 0x4C52, { 0xBC, 0xCD, 0xA4, 0x70, 0x85, 0x8D, 0xCE, 0x67 } };



// Control type information

static const DWORD BASED_CODE _dwMyBoundOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyBoundCtrl, IDS_MYBOUND, _dwMyBoundOleMisc)



// CMyBoundCtrl::CMyBoundCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyBoundCtrl

BOOL CMyBoundCtrl::CMyBoundCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_MYBOUND,
			IDB_MYBOUND,
			afxRegApartmentThreading,
			_dwMyBoundOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyBoundCtrl::CMyBoundCtrl - Constructor

CMyBoundCtrl::CMyBoundCtrl()
{
	InitializeIIDs(&IID_DMyBound, &IID_DMyBoundEvents);

   m_strMyBoundProp = _T("Not bound.");
}



// CMyBoundCtrl::~CMyBoundCtrl - Destructor

CMyBoundCtrl::~CMyBoundCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyBoundCtrl::OnDraw - Drawing function

void CMyBoundCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
   UNREFERENCED_PARAMETER(rcInvalid);

	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->TextOut(rcBounds.left + 3, rcBounds.top + 3, m_strMyBoundProp);
}



// CMyBoundCtrl::DoPropExchange - Persistence support

void CMyBoundCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

	// TODO: Call PX_ functions for each persistent custom property.
}



// CMyBoundCtrl::OnResetState - Reset control to default state

void CMyBoundCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CMyBoundCtrl message handlers

BSTR CMyBoundCtrl::GetMyBoundProp(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   CString strResult;

   strResult = m_strMyBoundProp;

   return strResult.AllocSysString();
}

void CMyBoundCtrl::SetMyBoundProp(LPCTSTR newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   m_strMyBoundProp = newVal;

   SetModifiedFlag();
}
