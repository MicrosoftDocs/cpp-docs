// MyAxDataCtrl.cpp : Implementation of the CMyAxDataCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxData.h"
#include "MyAxDataCtrl.h"
#include "MyAxDataPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxDataCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxDataCtrl, COleControl)
	ON_MESSAGE(OCM_COMMAND, &CMyAxDataCtrl::OnOcmCommand)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxDataCtrl, COleControl)
   DISP_STOCKPROP_TEXT()
   DISP_PROPERTY_EX_ID(CMyAxDataCtrl, "MyProp", dispidMyProp, GetMyProp, SetMyProp, VT_I2)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxDataCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyAxDataCtrl, 1)
	PROPPAGEID(CMyAxDataPropPage::guid)
END_PROPPAGEIDS(CMyAxDataCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxDataCtrl, "NVC_MFC_AXDATA.MyAxDataCtrl.1",
	0x147103a9, 0x2872, 0x4281, 0x96, 0xa, 0x9f, 0xc3, 0x95, 0x31, 0x5f, 0xb5)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxDataCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxData =
		{ 0x9D86563F, 0xD282, 0x4D14, { 0xBC, 0x67, 0xFA, 0x10, 0xFA, 0x95, 0x7C, 0x24 } };
const IID BASED_CODE IID_DNVC_MFC_AxDataEvents =
		{ 0xB3270EED, 0x290, 0x4AA9, { 0xBB, 0x76, 0x5, 0x18, 0x19, 0x54, 0x23, 0xF2 } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxDataOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxDataCtrl, IDS_NVC_MFC_AXDATA, _dwNVC_MFC_AxDataOleMisc)



// CMyAxDataCtrl::CMyAxDataCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxDataCtrl

BOOL CMyAxDataCtrl::CMyAxDataCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_NVC_MFC_AXDATA,
			IDB_NVC_MFC_AXDATA,
			afxRegApartmentThreading,
			_dwNVC_MFC_AxDataOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxDataCtrl::CMyAxDataCtrl - Constructor

CMyAxDataCtrl::CMyAxDataCtrl()
{
	InitializeIIDs(&IID_DNVC_MFC_AxData, &IID_DNVC_MFC_AxDataEvents);
	// TODO: Initialize your control's instance data here.
}



// CMyAxDataCtrl::~CMyAxDataCtrl - Destructor

CMyAxDataCtrl::~CMyAxDataCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyAxDataCtrl::OnDraw - Drawing function

void CMyAxDataCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
	if (!pdc)
		return;

// <Snippet3>
   if(!AmbientUserMode())
   {
      // Draw the Text property at design-time
      pdc->FillRect(rcBounds, 
         CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
      pdc->DrawText(m_strText, -1, (LPRECT)&rcBounds, 
         DT_LEFT | DT_TOP | DT_SINGLELINE);
   }
   else
   {
      DoSuperclassPaint(pdc, rcBounds);
   }
// </Snippet3>
}



// CMyAxDataCtrl::DoPropExchange - Persistence support

void CMyAxDataCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

// <Snippet5>
   PX_String(pPX, _T("MyProp"), m_strText);
// </Snippet5>
}



// CMyAxDataCtrl::OnResetState - Reset control to default state

void CMyAxDataCtrl::OnResetState()
{
// <Snippet6>
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange
   m_strText = AmbientDisplayName();
// </Snippet6>
}



// CMyAxDataCtrl::PreCreateWindow - Modify parameters for CreateWindowEx

BOOL CMyAxDataCtrl::PreCreateWindow(CREATESTRUCT& cs)
{
	cs.lpszClass = _T("EDIT");
	return COleControl::PreCreateWindow(cs);
}



// CMyAxDataCtrl::IsSubclassedControl - This is a subclassed control

BOOL CMyAxDataCtrl::IsSubclassedControl()
{
	return TRUE;
}



// CMyAxDataCtrl::OnOcmCommand - Handle command messages

LRESULT CMyAxDataCtrl::OnOcmCommand(WPARAM wParam, LPARAM /*lParam*/)
{
// <Snippet1>
#ifdef _WIN32
   WORD wNotifyCode = HIWORD(wParam);
#else
   WORD wNotifyCode = HIWORD(lParam);
#endif

   if(wNotifyCode==EN_CHANGE)
   {
      if(!BoundPropertyRequestEdit(DISPID_TEXT))
      {
         SetNotSupported();
      }
      else
      {
         GetText();
         // Notify container of change
         BoundPropertyChanged(DISPID_TEXT);
      }
   }

   return 0;
// </Snippet1>
}



// CMyAxDataCtrl message handlers

SHORT CMyAxDataCtrl::GetMyProp(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

// <Snippet7>
   if(AmbientUserMode())
   {
      GetWindowText(m_strText);
      m_nMyNum = (short)_ttoi(m_strText);
   }
   return m_nMyNum;
// </Snippet7>
}

void CMyAxDataCtrl::SetMyProp(SHORT newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

// <Snippet2>
   if(!BoundPropertyRequestEdit(1))
   {
      SetNotSupported();
      return;
   }
   else
   {
      if(AmbientUserMode()) // SendMessage only at run-time
      {
         _stprintf_s(m_strText.GetBuffer(10), 10, _T("%d"), newVal);
         SetWindowText(m_strText);
         m_strText.ReleaseBuffer();
      }
      else
      {
         InvalidateControl();
      }

      // Signal a property change
      // This is the MFC equivalent of OnChanged()
      BoundPropertyChanged(1);
      SetModifiedFlag();
   }
// </Snippet2>
}
