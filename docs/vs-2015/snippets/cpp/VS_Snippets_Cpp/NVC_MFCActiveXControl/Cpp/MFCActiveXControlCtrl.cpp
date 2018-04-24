// MFCActiveXControlCtrl.cpp : Implementation of the CMFCActiveXControlCtrl ActiveX Control class.

#include "stdafx.h"
#include "MyDataPathProperty.h"
#include "MFCActiveXControl.h"
#include "MFCActiveXControlCtrl.h"
#include "MFCActiveXControlPropPage.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMFCActiveXControlCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMFCActiveXControlCtrl, COleControl)
   ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMFCActiveXControlCtrl, COleControl)
   DISP_STOCKPROP_READYSTATE()
   DISP_FUNCTION_ID(CMFCActiveXControlCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
   DISP_PROPERTY_EX_ID(CMFCActiveXControlCtrl, "EditControlText", dispidEditControlText, GetEditControlText, SetEditControlText, VT_BSTR)
// <Snippet10>
   DISP_PROPERTY_PARAM(CMFCActiveXControlCtrl, "Array", GetArray, SetArray, VT_I2, VTS_I2 VTS_I2 )
// </Snippet10>
// <Snippet12>
   DISP_PROPERTY_PARAM(CMFCActiveXControlCtrl, "Item", GetItem, SetItem, VT_DISPATCH, VTS_I2 VTS_I2 VTS_I2)
// </Snippet12>
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMFCActiveXControlCtrl, COleControl)
   EVENT_STOCK_READYSTATECHANGE()
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMFCActiveXControlCtrl, 1)
   PROPPAGEID(CMFCActiveXControlPropPage::guid)
END_PROPPAGEIDS(CMFCActiveXControlCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMFCActiveXControlCtrl, "MFCACTIVEXCONTRO.MFCActiveXControCtrl.1",
   0x95406549, 0x2c39, 0x4340, 0x81, 0xc9, 0x89, 0x83, 0x4d, 0xc9, 0xd8, 0xc1)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMFCActiveXControlCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DMFCActiveXControl =
      { 0x2360F753, 0xC73A, 0x4DAB, { 0x8D, 0xED, 0xF, 0x68, 0x7B, 0x84, 0xC2, 0xD7 } };
const IID BASED_CODE IID_DMFCActiveXControlEvents =
      { 0x4E12095A, 0xD440, 0x4E22, { 0x86, 0x6A, 0x37, 0x14, 0xB7, 0xEF, 0xBD, 0xE8 } };



// Control type information

static const DWORD BASED_CODE _dwMFCActiveXControlOleMisc =
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST |
   OLEMISC_INSIDEOUT |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMFCActiveXControlCtrl, IDS_MFCACTIVEXCONTROL, _dwMFCActiveXControlOleMisc)



// CMFCActiveXControlCtrl::CMFCActiveXControlCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMFCActiveXControlCtrl

BOOL CMFCActiveXControlCtrl::CMFCActiveXControlCtrlFactory::UpdateRegistry(BOOL bRegister)
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
         IDS_MFCACTIVEXCONTROL,
         IDB_MFCACTIVEXCONTROL,
         afxRegApartmentThreading,
         _dwMFCActiveXControlOleMisc,
         _tlid,
         _wVerMajor,
         _wVerMinor);
   else
      return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMFCActiveXControlCtrl::CMFCActiveXControlCtrl - Constructor

CMFCActiveXControlCtrl::CMFCActiveXControlCtrl()
{
   InitializeIIDs(&IID_DMFCActiveXControl, &IID_DMFCActiveXControlEvents);

   m_lReadyState = READYSTATE_LOADING;

   char sz[] = 
// <Snippet13>
      VTS_COLOR VTS_FONT
// </Snippet13>
      ;
   sz;
}



// CMFCActiveXControlCtrl::~CMFCActiveXControlCtrl - Destructor

CMFCActiveXControlCtrl::~CMFCActiveXControlCtrl()
{
   // TODO: Cleanup your control's instance data here.
}



// CMFCActiveXControlCtrl::OnDraw - Drawing function

void CMFCActiveXControlCtrl::OnDraw(
         CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
   UNREFERENCED_PARAMETER(rcInvalid);

   if (!pdc)
      return;

   // TODO: Replace the following code with your own drawing code.
   pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->Ellipse(rcBounds);
}



// CMFCActiveXControlCtrl::DoPropExchange - Persistence support

// <Snippet14>
void CMFCActiveXControlCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   if (IsConvertingVBX())
      PX_VBXFontConvert(pPX, InternalGetFont());
// </Snippet14>

// <Snippet5>
   PX_DataPath(pPX, _T("DataPath"), EditControlText);
// </Snippet5>
// <Snippet15>
}
// </Snippet15>



// CMFCActiveXControlCtrl::GetControlFlags -
// Flags to customize MFC's implementation of ActiveX controls.
//
DWORD CMFCActiveXControlCtrl::GetControlFlags()
{
   DWORD dwFlags = COleControl::GetControlFlags();


   // The control can activate without creating a window.
   // TODO: when writing the control's message handlers, avoid using
   //		the m_hWnd member variable without first checking that its
   //		value is non-NULL.
   dwFlags |= windowlessActivate;
   return dwFlags;
}



// CMFCActiveXControlCtrl::OnResetState - Reset control to default state

void CMFCActiveXControlCtrl::OnResetState()
{
   COleControl::OnResetState();  // Resets defaults found in DoPropExchange

// <Snippet6>
   EditControlText.ResetData();
// </Snippet6>
}



// CMFCActiveXControlCtrl::AboutBox - Display an "About" box to the user

void CMFCActiveXControlCtrl::AboutBox()
{
   CDialog dlgAbout(IDD_ABOUTBOX_MFCACTIVEXCONTROL);
   dlgAbout.DoModal();
}



// CMFCActiveXControlCtrl message handlers

// <Snippet4>
BSTR CMFCActiveXControlCtrl::GetEditControlText(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   CString strResult;
   strResult = EditControlText.GetPath();	
   return strResult.AllocSysString();
}

void CMFCActiveXControlCtrl::SetEditControlText(LPCTSTR newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   Load(newVal, EditControlText);
   SetModifiedFlag();
}
// </Snippet4>

SHORT CMFCActiveXControlCtrl::GetArray(SHORT row, SHORT column)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   return row * column;
}

void CMFCActiveXControlCtrl::SetArray(SHORT row, SHORT column, SHORT newVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   newVal = row * column;

   SetModifiedFlag();
}

IDispatch* CMFCActiveXControlCtrl::GetItem(SHORT index1, SHORT index2, SHORT index3)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   UNREFERENCED_PARAMETER(index1);
   UNREFERENCED_PARAMETER(index2);
   UNREFERENCED_PARAMETER(index3);

   return NULL;
}

void CMFCActiveXControlCtrl::SetItem(SHORT index1, SHORT index2, SHORT index3, IDispatch* pVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   UNREFERENCED_PARAMETER(index1);
   UNREFERENCED_PARAMETER(index2);
   UNREFERENCED_PARAMETER(index3);
   UNREFERENCED_PARAMETER(pVal);

   SetModifiedFlag();
}
