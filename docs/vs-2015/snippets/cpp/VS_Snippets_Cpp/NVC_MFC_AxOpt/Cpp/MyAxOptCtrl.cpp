// MyAxOptCtrl.cpp : Implementation of the CMyAxOptCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxOpt.h"
#include "MyAxOptCtrl.h"
#include "MyAxOptPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxOptCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxOptCtrl, COleControl)
   ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxOptCtrl, COleControl)
   DISP_PROPERTY_NOTIFY_ID(CMyAxOptCtrl, "BoolProp", dispidBoolProp, m_BoolProp, OnBoolPropChanged, VT_BOOL)
   DISP_PROPERTY_NOTIFY_ID(CMyAxOptCtrl, "ShortProp", dispidShortProp, m_ShortProp, OnShortPropChanged, VT_I2)
   DISP_PROPERTY_NOTIFY_ID(CMyAxOptCtrl, "ColorProp", dispidColorProp, m_ColorProp, OnColorPropChanged, VT_COLOR)
   DISP_PROPERTY_NOTIFY_ID(CMyAxOptCtrl, "StringProp", dispidStringProp, m_StringProp, OnStringPropChanged, VT_BSTR)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxOptCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
// <Snippet21>
BEGIN_PROPPAGEIDS(CMyAxOptCtrl, 4)
   PROPPAGEID(CMyAxOptPropPage::guid)
   PROPPAGEID(CLSID_CFontPropPage)
   PROPPAGEID(CLSID_CColorPropPage)
   PROPPAGEID(CLSID_CPicturePropPage)
END_PROPPAGEIDS(CMyAxOptCtrl)
// </Snippet21>


// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxOptCtrl, "NVC_MFC_AXOpt.MyAxOptCtrl.1",
   0x8950e123, 0x1887, 0x4124, 0xa4, 0xb8, 0x6, 0xe2, 0xd7, 0xe2, 0xa1, 0x64)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxOptCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxOpt =
      { 0x2C8C9B43, 0xE122, 0x4593, { 0xA6, 0xEB, 0x16, 0x3B, 0x2E, 0x82, 0x40, 0xB1 } };
const IID BASED_CODE IID_DNVC_MFC_AxOptEvents =
      { 0x1C6B3943, 0xA197, 0x4098, { 0x88, 0xDA, 0x91, 0x71, 0x2, 0xCF, 0xD1, 0xAF } };



// Control type information

// <Snippet9>
static const DWORD BASED_CODE _dwNVC_MFC_AxOptOleMisc =
   OLEMISC_SETCLIENTSITEFIRST |
   OLEMISC_INSIDEOUT |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_RECOMPOSEONRESIZE;
// </Snippet9>

// <Snippet12>
static const DWORD BASED_CODE _dwMyOleMisc =
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_IGNOREACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST |
   OLEMISC_INSIDEOUT |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_RECOMPOSEONRESIZE;
// </Snippet12>

IMPLEMENT_OLECTLTYPE(CMyAxOptCtrl, IDS_NVC_MFC_AXOpt, _dwNVC_MFC_AxOptOleMisc)



// CMyAxOptCtrl::CMyAxOptCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxOptCtrl

BOOL CMyAxOptCtrl::CMyAxOptCtrlFactory::UpdateRegistry(BOOL bRegister)
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
         IDS_NVC_MFC_AXOpt,
         IDB_NVC_MFC_AXOpt,
         afxRegApartmentThreading,
         _dwNVC_MFC_AxOptOleMisc,
         _tlid,
         _wVerMajor,
         _wVerMinor);
   else
      return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxOptCtrl::CMyAxOptCtrl - Constructor

CMyAxOptCtrl::CMyAxOptCtrl()
{
   InitializeIIDs(&IID_DNVC_MFC_AxOpt, &IID_DNVC_MFC_AxOptEvents);
   // TODO: Initialize your control's instance data here.
}



// CMyAxOptCtrl::~CMyAxOptCtrl - Destructor

CMyAxOptCtrl::~CMyAxOptCtrl()
{
   // TODO: Cleanup your control's instance data here.
}



// CMyAxOptCtrl::OnDraw - Drawing function

class CNonOptCtrl
{
   COLORREF TranslateColor(OLE_COLOR /*clr*/) { return RGB(0, 0, 0); }
   OLE_COLOR GetForeColor() { return 0; }
   OLE_COLOR GetBackColor() { return 0; }

// <Snippet15>
   void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
   {
      CPen pen(PS_SOLID, 0, TranslateColor(GetForeColor()));
      CBrush brush(TranslateColor(GetBackColor()));
      CPen* pPenSave = pdc->SelectObject(&pen);
      CBrush* pBrushSave = pdc->SelectObject(&brush);
      pdc->Rectangle(rcBounds);
      pdc->SelectObject(pPenSave);
      pdc->SelectObject(pBrushSave);
   }
// </Snippet15>
};

class CSomeOptCtrl
{
   COLORREF TranslateColor(OLE_COLOR /*clr*/) { return RGB(0, 0, 0); }
   OLE_COLOR GetForeColor() { return 0; }
   OLE_COLOR GetBackColor() { return 0; }

// <Snippet18>
   void OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
   {
      CPen pen(PS_SOLID, 0, TranslateColor(GetForeColor()));
      CBrush brush(TranslateColor(GetBackColor()));
      CPen* pPenSave = pdc->SelectObject(&pen);
      CBrush* pBrushSave = pdc->SelectObject(&brush);
      pdc->Rectangle(rcBounds);
      pdc->SelectObject(pPenSave);
      pdc->SelectObject(pBrushSave);
   }
// </Snippet18>

   CPen m_pen;
   CBrush m_brush;
};

// <Snippet20>
void CMyAxOptCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (m_pen.m_hObject == NULL)
      m_pen.CreatePen(PS_SOLID, 0, TranslateColor(GetForeColor()));
   if (m_brush.m_hObject == NULL)
      m_brush.CreateSolidBrush(TranslateColor(GetBackColor()));
   CPen* pPenSave = pdc->SelectObject(&m_pen);
   CBrush* pBrushSave = pdc->SelectObject(&m_brush);
   pdc->Rectangle(rcBounds);
   if (! IsOptimizedDraw())
   {
      pdc->SelectObject(pPenSave);
      pdc->SelectObject(pBrushSave);
   }
}
// </Snippet20>



// CMyAxOptCtrl::DoPropExchange - Persistence support

// <Snippet1>
void CMyAxOptCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   PX_Bool(pPX, _T("BoolProp"), m_BoolProp, TRUE);
   PX_Short(pPX, _T("ShortProp"), m_ShortProp, 0);
   PX_Color(pPX, _T("ColorProp"), m_ColorProp, RGB(0xFF,0x00,0x00));
   PX_String(pPX, _T("StringProp"), m_StringProp, _T(""));
}
// </Snippet1>


// CMyAxOptCtrl::GetControlFlags -
// Flags to customize MFC's implementation of ActiveX controls.
//
// <Snippet5>
DWORD CMyAxOptCtrl::GetControlFlags()
{
   DWORD dwFlags = COleControl::GetControlFlags();
// </Snippet5>

// <Snippet6>
   // The control can activate without creating a window.
   dwFlags |= windowlessActivate;
// </Snippet6>

// <Snippet10>
   // The control can receive mouse notifications when inactive.
   dwFlags |= pointerInactive;
// </Snippet10>

   // The control can optimize its OnDraw method, by not restoring
   // the original GDI objects in the device context.
   dwFlags |= canOptimizeDraw;

// <Snippet13>
   dwFlags |= noFlickerActivate;
// </Snippet13>

// <Snippet14>
   dwFlags &= ~clipPaintDC;
// </Snippet14>

// <Snippet7>
   return dwFlags;
}
// </Snippet7>



// CMyAxOptCtrl::OnResetState - Reset control to default state

// <Snippet4>
void CMyAxOptCtrl::OnResetState()
{
   ResetVersion(MAKELONG(_wVerMinor, _wVerMajor));
   ResetStockProps();

   m_BoolProp = TRUE;
   m_ShortProp = 0;
   m_ColorProp = RGB(0xFF,0x00,0x00);
   m_StringProp.Empty();
}
// </Snippet4>


// CMyAxOptCtrl message handlers

void CMyAxOptCtrl::OnBoolPropChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

void CMyAxOptCtrl::OnShortPropChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

void CMyAxOptCtrl::OnColorPropChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

void CMyAxOptCtrl::OnStringPropChanged(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

// <Snippet2>
void CMyAxOptCtrl::Serialize(CArchive& ar)
{ 
    SerializeVersion(ar, MAKELONG(_wVerMinor, _wVerMajor));
    SerializeExtent(ar);
    SerializeStockProps(ar);

    if (ar.IsLoading())
    {
        ar >> m_BoolProp;
        ar >> m_ShortProp;
        ar >> m_ColorProp;
        ar >> m_StringProp;
    }
    else
    {
        ar << m_BoolProp;
        ar << m_ShortProp;
        ar << m_ColorProp;
        ar << m_StringProp;
    }
}
// </Snippet2>

void CMyAxOptCtrl::AlternateSerialize(CArchive& ar)
{
// <Snippet3>
   if (ar.IsLoading())
   {
      BYTE bTmp;
      ar >> bTmp;
      m_BoolProp = (BOOL)bTmp;
      // other properties...
   }
   else
   {
      ar << (BYTE)m_BoolProp;
      // other properties...
   }
// </Snippet3>
}

// <Snippet8>
IDropTarget* CMyAxOptCtrl::GetWindowlessDropTarget()
{
   m_DropTarget.m_xDropTarget.AddRef();
   return &m_DropTarget.m_xDropTarget;
}
// </Snippet8>

// <Snippet11>
DWORD CMyAxOptCtrl::GetActivationPolicy()
{
   return POINTERINACTIVE_ACTIVATEONDRAG;
}
// </Snippet11>

// <Snippet19>
void CMyAxOptCtrl::OnForeColorChanged()
{
   m_pen.DeleteObject();
}

void CMyAxOptCtrl::OnBackColorChanged()
{
   m_brush.DeleteObject();
}
// </Snippet19>