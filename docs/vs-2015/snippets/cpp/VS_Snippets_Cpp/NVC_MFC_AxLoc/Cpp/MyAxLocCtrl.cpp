// MyAxLocCtrl.cpp : Implementation of the CMyAxLocCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxLoc.h"
#include "MyAxLocCtrl.h"
#include "MyAxLocPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxLocCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxLocCtrl, COleControl)
   ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxLocCtrl, COleControl)
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxLocCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyAxLocCtrl, 1)
   PROPPAGEID(CMyAxLocPropPage::guid)
END_PROPPAGEIDS(CMyAxLocCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxLocCtrl, "NVC_MFC_AXLOC.MyAxLocCtrl.1",
   0x1acba89f, 0xfb9b, 0x450c, 0x86, 0x99, 0xc6, 0x8d, 0xb4, 0xee, 0xc8, 0xdf)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxLocCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxLoc =
      { 0x6FFE13B8, 0xE5, 0x4549, { 0xAC, 0x1, 0x76, 0xBB, 0xA4, 0x95, 0xD5, 0x72 } };
const IID BASED_CODE IID_DNVC_MFC_AxLocEvents =
      { 0x60441EA8, 0xF747, 0x4ECF, { 0xAE, 0xD4, 0x3C, 0xB5, 0x66, 0xB3, 0x86, 0xBA } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxLocOleMisc =
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST |
   OLEMISC_INSIDEOUT |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxLocCtrl, IDS_NVC_MFC_AXLOC, _dwNVC_MFC_AxLocOleMisc)



// CMyAxLocCtrl::CMyAxLocCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxLocCtrl

BOOL CMyAxLocCtrl::CMyAxLocCtrlFactory::UpdateRegistry(BOOL bRegister)
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
         IDS_NVC_MFC_AXLOC,
         IDB_NVC_MFC_AXLOC,
         afxRegApartmentThreading,
         _dwNVC_MFC_AxLocOleMisc,
         _tlid,
         _wVerMajor,
         _wVerMinor);
   else
      return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}



// CMyAxLocCtrl::CMyAxLocCtrl - Constructor

CMyAxLocCtrl::CMyAxLocCtrl()
{
   InitializeIIDs(&IID_DNVC_MFC_AxLoc, &IID_DNVC_MFC_AxLocEvents);

// <Snippet4>
   m_hResDll = GetLocalizedResourceHandle(AmbientLocaleID());
   if (m_hResDll != NULL)
      AfxSetResourceHandle(m_hResDll);
// </Snippet4>
}



// CMyAxLocCtrl::~CMyAxLocCtrl - Destructor

CMyAxLocCtrl::~CMyAxLocCtrl()
{
   // TODO: Cleanup your control's instance data here.
}



// CMyAxLocCtrl::OnDraw - Drawing function

void CMyAxLocCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
   if (!pdc)
      return;

   // TODO: Replace the following code with your own drawing code.
   pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
   pdc->Ellipse(rcBounds);
}



// CMyAxLocCtrl::DoPropExchange - Persistence support

void CMyAxLocCtrl::DoPropExchange(CPropExchange* pPX)
{
   ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
   COleControl::DoPropExchange(pPX);

   // TODO: Call PX_ functions for each persistent custom property.
}



// CMyAxLocCtrl::OnResetState - Reset control to default state

void CMyAxLocCtrl::OnResetState()
{
   COleControl::OnResetState();  // Resets defaults found in DoPropExchange

   // TODO: Reset any other control state here.
}



// CMyAxLocCtrl message handlers

// <Snippet3>
HINSTANCE CMyAxLocCtrl::GetLocalizedResourceHandle(LCID lcid)
{
    LPCTSTR lpszResDll;
    HINSTANCE hResHandle = NULL;
    switch (PRIMARYLANGID(lcid))
    {
    case LANG_ENGLISH:
        lpszResDll = _T("myctlen.dll");
        break;

    case LANG_FRENCH:
        lpszResDll = _T("myctlfr.dll");
        break;

    case LANG_GERMAN:
        lpszResDll = _T("myctlde.dll");
        break;

    case 0:
    default:
        lpszResDll = NULL;
    }

    if (lpszResDll != NULL)
        hResHandle = LoadLibrary(lpszResDll);
    #ifndef _WIN32
        if(hResHandle <= HINSTANCE_ERROR)
           hResHandle = NULL;
    #endif

    return hResHandle;
}
// </Snippet3>