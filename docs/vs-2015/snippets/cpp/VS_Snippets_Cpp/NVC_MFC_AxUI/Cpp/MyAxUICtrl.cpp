// MyAxUICtrl.cpp : Implementation of the CMyAxUICtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxUI.h"
#include "MyAxUICtrl.h"
#include "MyAxUIPpg.h"
#include "AddtlPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// <Snippet37>
#define MYCTL_E_SPECIALERROR CUSTOM_CTL_SCODE(1000)
// </Snippet37>


IMPLEMENT_DYNCREATE(CMyAxUICtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxUICtrl, COleControl)
   ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
   ON_WM_LBUTTONDOWN()
   ON_WM_RBUTTONDOWN()
END_MESSAGE_MAP()



// Dispatch map

// <Snippet14>
BEGIN_DISPATCH_MAP(CMyAxUICtrl, COleControl)
// </Snippet14>
// <Snippet16>
   DISP_STOCKFUNC_REFRESH()
// </Snippet16>
// <Snippet20>
   DISP_FUNCTION_ID(CMyAxUICtrl, "PtInCircle", dispidPtInCircle, PtInCircle, VT_BOOL, VTS_XPOS_PIXELS VTS_YPOS_PIXELS)
// </Snippet20>
// <Snippet22>
   DISP_STOCKPROP_CAPTION()
// </Snippet22>
// <Snippet27>
   DISP_PROPERTY_EX_ID(CMyAxUICtrl, "CircleOffset", dispidCircleOffset, GetCircleOffset, SetCircleOffset, VT_I2)
// </Snippet27>
   DISP_PROPERTY_EX_ID(CMyAxUICtrl, "MyProperty", dispidMyProperty, GetMyProperty, SetMyProperty, VT_I2)
// <Snippet36>
   DISP_PROPERTY_PARAM_ID(CMyAxUICtrl, "Array", dispidArray, GetArray, SetArray, VT_I2, VTS_I2 VTS_I2)
// </Snippet36>
// <Snippet15>
END_DISPATCH_MAP()
// </Snippet15>



// Event map

// <Snippet3>
BEGIN_EVENT_MAP(CMyAxUICtrl, COleControl)
// </Snippet3>
// <Snippet5>
   EVENT_STOCK_KEYPRESS()
// </Snippet5>
// <Snippet8>
   EVENT_CUSTOM_ID("ClickIn", eventidClickIn, FireClickIn, VTS_XPOS_PIXELS VTS_YPOS_PIXELS)
// </Snippet8>
// <Snippet4>
END_EVENT_MAP()
// </Snippet4>



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
// <Snippet32>
BEGIN_PROPPAGEIDS(CMyAxUICtrl, 2)
   PROPPAGEID(CMyAxUIPropPage::guid)
   PROPPAGEID(CAddtlPropPage::guid)
END_PROPPAGEIDS(CMyAxUICtrl)
// </Snippet32>



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxUICtrl, "NVC_MFC_AXUI.MyAxUICtrl.1",
   0x913e450b, 0xe720, 0x4c71, 0xbc, 0xdf, 0x71, 0xc9, 0x6e, 0xe9, 0x8f, 0xeb)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxUICtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxUI =
      { 0x8FACFDF3, 0xC2CB, 0x4BF8, { 0x84, 0x98, 0x21, 0xAD, 0xFA, 0x1F, 0x1, 0x13 } };
const IID BASED_CODE IID_DNVC_MFC_AxUIEvents =
      { 0x9CED15D4, 0x1A82, 0x42AF, { 0xB1, 0x31, 0x4E, 0x16, 0x84, 0x55, 0x21, 0xFE } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxUIOleMisc =
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST |
   OLEMISC_INSIDEOUT |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxUICtrl, IDS_NVC_MFC_AXUI, _dwNVC_MFC_AxUIOleMisc)



// CMyAxUICtrl::CMyAxUICtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxUICtrl

BOOL CMyAxUICtrl::CMyAxUICtrlFactory::UpdateRegistry(BOOL bRegister)
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
         IDS_NVC_MFC_AXUI,
         IDB_NVC_MFC_AXUI,
         afxRegApartmentThreading,
         _dwNVC_MFC_AxUIOleMisc,
         _tlid,
         _wVerMajor,
         _wVerMinor);
   else
      return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// Licensing strings

// <Snippet40>
static const TCHAR BASED_CODE _szLicFileName[] = _T("NVC_MFC_AxUI.lic");

static const WCHAR BASED_CODE _szLicString[] = L"Copyright (c) 2006 ";
// </Snippet40>


// <Snippet41>
// CMyAxUICtrl::CMyAxUICtrlFactory::VerifyUserLicense -
// Checks for existence of a user license

BOOL CMyAxUICtrl::CMyAxUICtrlFactory::VerifyUserLicense()
{
   return AfxVerifyLicFile(AfxGetInstanceHandle(), _szLicFileName, _szLicString);
}

// CMyAxUICtrl::CMyAxUICtrlFactory::GetLicenseKey -
// Returns a runtime licensing key

BOOL CMyAxUICtrl::CMyAxUICtrlFactory::GetLicenseKey(DWORD /*dwReserved*/,
   BSTR FAR* pbstrKey)
{
   if (pbstrKey == NULL)
      return FALSE;

   *pbstrKey = SysAllocString(_szLicString);
   return (*pbstrKey != NULL);
}
// </Snippet41>



// CMyAxUICtrl::CMyAxUICtrl - Constructor

CMyAxUICtrl::CMyAxUICtrl()
   : m_bReadOnlyMode(true)
{
   InitializeIIDs(&IID_DNVC_MFC_AxUI, &IID_DNVC_MFC_AxUIEvents);

// <Snippet30>
   BOOL bUserMode;
   if(!GetAmbientProperty( DISPID_AMBIENT_USERMODE, VT_BOOL, &bUserMode))
      bUserMode = TRUE;
// </Snippet30>
}



// CMyAxUICtrl::~CMyAxUICtrl - Destructor

CMyAxUICtrl::~CMyAxUICtrl()
{
   // TODO: Cleanup your control's instance data here.
}



// CMyAxUICtrl::OnDraw - Drawing function

// <Snippet1>
void CMyAxUICtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (!pdc)
      return;

   // TODO: Replace the following code with your own drawing code.
   pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->Ellipse(rcBounds);
}
// </Snippet1>


// CMyAxUICtrl::DoPropExchange - Persistence support

// <Snippet43>
void CMyAxUICtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   // TODO: Call PX_ functions for each persistent custom property.
}
// </Snippet43>


// CMyAxUICtrl::OnResetState - Reset control to default state

void CMyAxUICtrl::OnResetState()
{
   COleControl::OnResetState();  // Resets defaults found in DoPropExchange

   // TODO: Reset any other control state here.
}



// CMyAxUICtrl message handlers

// <Snippet10>
void CMyAxUICtrl::OnLButtonDown(UINT nFlags, CPoint point)
{
   if (InCircle(point))
      FireClickIn(point.x, point.y);

    COleControl::OnLButtonDown(nFlags, point);
}
// </Snippet10>

// <Snippet11>
VARIANT_BOOL CMyAxUICtrl::InCircle(CPoint& point)
{
    CRect rc;
    GetClientRect(rc);
    // Determine radii
    double a = (rc.right - rc.left) / 2;
    double b = (rc.bottom - rc.top) / 2;
    
    // Determine x, y
    double x = point.x - (rc.left + rc.right) / 2;
    double y = point.y - (rc.top + rc.bottom) / 2;
    
    // Apply ellipse formula
    return ((x * x) / (a * a) + (y * y) / (b * b) <= 1);
}
// </Snippet11>

// <Snippet21>
VARIANT_BOOL CMyAxUICtrl::PtInCircle(OLE_XPOS_PIXELS xCoord, OLE_YPOS_PIXELS yCoord)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   CPoint point(xCoord, yCoord);
   return InCircle(point);
}
// </Snippet21>

void CMyAxUICtrl::OnRButtonDown(UINT nFlags, CPoint point)
{
   CPaintDC paintDC(this);
   CPaintDC* pdc = &paintDC;
   CRect rcBounds;
   GetClientRect(&rcBounds);
   rcBounds.DeflateRect(5, 5);

// <Snippet24>
   CBrush bkBrush(TranslateColor(GetBackColor()));
   COLORREF clrFore = TranslateColor(GetForeColor());
   pdc->FillRect(rcBounds, &bkBrush);
   pdc->SetTextColor(clrFore);
   pdc->DrawText(InternalGetText(), -1, rcBounds, DT_SINGLELINE | DT_CENTER | DT_VCENTER);
// </Snippet24>

   COleControl::OnRButtonDown(nFlags, point);
}

SHORT CMyAxUICtrl::GetCircleOffset(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your dispatch handler code here

   return 0;
}

// <Snippet28>
void CMyAxUICtrl::SetCircleOffset(SHORT /*newVal*/)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}
// </Snippet28>
SHORT CMyAxUICtrl::GetMyProperty(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your dispatch handler code here

   return 0;
}

// <Snippet29>
void CMyAxUICtrl::SetMyProperty(SHORT newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   if (m_bReadOnlyMode)   //  some control-specific state
   {
      SetNotSupported();
   }
   else
   {
      m_iPropVal = newVal;   //  set property as normal
      SetModifiedFlag();
   }
}
// </Snippet29>

SHORT CMyAxUICtrl::GetArray(SHORT /*row*/, SHORT /*column*/)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your dispatch handler code here

   return 0;
}

void CMyAxUICtrl::SetArray(SHORT /*row*/, SHORT /*column*/, SHORT /*newVal*/)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}

// <Snippet38>
BOOL CMyAxUICtrl::PreTranslateMessage(MSG* pMsg)
{
   BOOL bHandleNow = FALSE;

   switch (pMsg->message)
   {
      case WM_KEYDOWN:
         switch (pMsg->wParam)
         {
         case VK_UP:
         case VK_DOWN:
         case VK_LEFT:
         case VK_RIGHT:
            bHandleNow = TRUE;
            break;
         }
         if (bHandleNow)
         {
            OnKeyDown((UINT)pMsg->wParam, LOWORD(pMsg->lParam), HIWORD(pMsg->lParam));
         }
         break;
   }
   return bHandleNow;
}
// </Snippet38>
