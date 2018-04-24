// MyAxSerCtrl.cpp : Implementation of the CMyAxSerCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxSer.h"
#include "MyAxSerCtrl.h"
#include "MyAxSerPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxSerCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxSerCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxSerCtrl, COleControl)
   DISP_PROPERTY_NOTIFY_ID(CMyAxSerCtrl, "CircleShape", dispidCircleShape, m_bCircleShape, OnCircleShapeChanged, VT_BOOL)
   DISP_PROPERTY_NOTIFY_ID(CMyAxSerCtrl, "ReleaseDate", dispidReleaseDate, m_ReleaseDate, OnReleaseDateChanged, VT_I4)
   DISP_PROPERTY_NOTIFY_ID(CMyAxSerCtrl, "OriginalDate", dispidOriginalDate, m_OriginalDate, OnOriginalDateChanged, VT_I4)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxSerCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyAxSerCtrl, 1)
	PROPPAGEID(CMyAxSerPropPage::guid)
END_PROPPAGEIDS(CMyAxSerCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxSerCtrl, "NVC_MFC_AXSER.MyAxSerCtrl.1",
	0x6aaff076, 0xa5b5, 0x43fd, 0xaf, 0x7c, 0xa0, 0x62, 0x32, 0x40, 0xb6, 0x97)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxSerCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxSer =
		{ 0x493A5E91, 0xA63F, 0x4BFA, { 0xA2, 0x98, 0x92, 0xDC, 0x5, 0x17, 0x5E, 0x3A } };
const IID BASED_CODE IID_DNVC_MFC_AxSerEvents =
		{ 0xCD872BCA, 0x68C, 0x4881, { 0x99, 0xBF, 0x1C, 0x61, 0x22, 0x44, 0xC9, 0x29 } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxSerOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxSerCtrl, IDS_NVC_MFC_AXSER, _dwNVC_MFC_AxSerOleMisc)



// CMyAxSerCtrl::CMyAxSerCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxSerCtrl

BOOL CMyAxSerCtrl::CMyAxSerCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_NVC_MFC_AXSER,
			IDB_NVC_MFC_AXSER,
			afxRegApartmentThreading,
			_dwNVC_MFC_AxSerOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxSerCtrl::CMyAxSerCtrl - Constructor

CMyAxSerCtrl::CMyAxSerCtrl()
{
	InitializeIIDs(&IID_DNVC_MFC_AxSer, &IID_DNVC_MFC_AxSerEvents);
	// TODO: Initialize your control's instance data here.
}



// CMyAxSerCtrl::~CMyAxSerCtrl - Destructor

CMyAxSerCtrl::~CMyAxSerCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyAxSerCtrl::OnDraw - Drawing function

void CMyAxSerCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
	if (!pdc)
		return;

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CMyAxSerCtrl::DoPropExchange - Persistence support

// <Snippet4>
// <Snippet1>
void CMyAxSerCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);
// </Snippet1>

   PX_Long(pPX, _T("ReleaseDate"), m_ReleaseDate);
   if (pPX->GetVersion() >= MAKELONG(0, 2))
   {
      PX_Long(pPX, _T("OriginalDate"), m_OriginalDate);
   }
   else
   {
      if (pPX->IsLoading())
         m_OriginalDate = 0;
   }
// </Snippet4>

// <Snippet2>
   PX_Bool(pPX, _T("CircleShape"), m_bCircleShape, TRUE);
// <Snippet3>
}
// </Snippet3>
// </Snippet2>



// CMyAxSerCtrl::OnResetState - Reset control to default state

void CMyAxSerCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CMyAxSerCtrl message handlers

void CMyAxSerCtrl::OnCircleShapeChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

void CMyAxSerCtrl::OnReleaseDateChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

void CMyAxSerCtrl::OnOriginalDateChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}
