// MyAxFontCtrl.cpp : Implementation of the CMyAxFontCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFC_AxFont.h"
#include "MyAxFontCtrl.h"
#include "MyAxFontPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxFontCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxFontCtrl, COleControl)
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxFontCtrl, COleControl)
// <Snippet1>
   DISP_STOCKPROP_FONT()
// </Snippet1>
// <Snippet3>
   DISP_STOCKPROP_CAPTION()
// </Snippet3>
// <Snippet5>
   DISP_PROPERTY_EX_ID(CMyAxFontCtrl, "HeadingFont", dispidHeadingFont, 
      GetHeadingFont, SetHeadingFont, VT_DISPATCH)
// </Snippet5>
END_DISPATCH_MAP()



// Event map

BEGIN_EVENT_MAP(CMyAxFontCtrl, COleControl)
END_EVENT_MAP()



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
// <Snippet18>
BEGIN_PROPPAGEIDS(CMyAxFontCtrl, 2)
// </Snippet18>
	PROPPAGEID(CMyAxFontPropPage::guid)
// <Snippet17>
   PROPPAGEID(CLSID_CFontPropPage)
// </Snippet17>
END_PROPPAGEIDS(CMyAxFontCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxFontCtrl, "NVC_MFC_AXFONT.MyAxFontCtrl.1",
	0x565a9384, 0x83ec, 0x4fa1, 0xba, 0x6, 0xbe, 0xfe, 0x2f, 0xc3, 0x5e, 0x7c)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxFontCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFC_AxFont =
		{ 0x350BC14F, 0x5FCB, 0x4C5F, { 0xB6, 0xC6, 0xF7, 0x9F, 0xB8, 0x62, 0x45, 0x93 } };
const IID BASED_CODE IID_DNVC_MFC_AxFontEvents =
		{ 0xE03AC13E, 0xECD9, 0x425C, { 0xB6, 0x81, 0xD0, 0xDD, 0xBC, 0xBC, 0xBB, 0x31 } };



// Control type information

static const DWORD BASED_CODE _dwNVC_MFC_AxFontOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;

IMPLEMENT_OLECTLTYPE(CMyAxFontCtrl, IDS_NVC_MFC_AXFONT, _dwNVC_MFC_AxFontOleMisc)



// CMyAxFontCtrl::CMyAxFontCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxFontCtrl

BOOL CMyAxFontCtrl::CMyAxFontCtrlFactory::UpdateRegistry(BOOL bRegister)
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
			IDS_NVC_MFC_AXFONT,
			IDB_NVC_MFC_AXFONT,
			afxRegApartmentThreading,
			_dwNVC_MFC_AxFontOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}

// <Snippet10>
static const FONTDESC _fontdescHeading =
  { sizeof(FONTDESC), OLESTR("MS Sans Serif"), FONTSIZE( 12 ), FW_BOLD, 
    ANSI_CHARSET, FALSE, FALSE, FALSE };
// </Snippet10>

// CMyAxFontCtrl::CMyAxFontCtrl - Constructor

// <Snippet9>
CMyAxFontCtrl::CMyAxFontCtrl()
   : m_fontHeading(&m_xFontNotification)
{
	InitializeIIDs(&IID_DNVC_MFC_AxFont, &IID_DNVC_MFC_AxFontEvents);
}
// </Snippet9>


// CMyAxFontCtrl::~CMyAxFontCtrl - Destructor

CMyAxFontCtrl::~CMyAxFontCtrl()
{
	// TODO: Cleanup your control's instance data here.
}



// CMyAxFontCtrl::OnDraw - Drawing function

void CMyAxFontCtrl::OnDraw(CDC* pdc, const CRect& rcBounds, const CRect& /*rcInvalid*/)
{
	if (!pdc)
		return;

// <Snippet4>
   CFont* pOldFont;
   TEXTMETRIC tm;
   const CString& strCaption = InternalGetText();

   pOldFont = SelectStockFont(pdc);
   pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH )GetStockObject(WHITE_BRUSH)));
   pdc->Ellipse(rcBounds);
   pdc->GetTextMetrics(&tm);
   pdc->SetTextAlign(TA_CENTER | TA_TOP);
   pdc->ExtTextOut((rcBounds.left + rcBounds.right) / 2, 
      (rcBounds.top + rcBounds.bottom - tm.tmHeight) / 2,
      ETO_CLIPPED, rcBounds, strCaption, strCaption.GetLength(), NULL);

   pdc->SelectObject(pOldFont);
// </Snippet4>

// <Snippet14>
   CFont* pOldHeadingFont;
// </Snippet14>
// <Snippet15>
   pOldHeadingFont = SelectFontObject(pdc, m_fontHeading);
// </Snippet15>
// <Snippet16>
   pdc->SelectObject(pOldHeadingFont);
// </Snippet16>
}


// CMyAxFontCtrl::DoPropExchange - Persistence support

// <Snippet11>
void CMyAxFontCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

   // [...other PX_ function calls...]
   PX_Font(pPX, _T("HeadingFont"), m_fontHeading, &_fontdescHeading);
}
// </Snippet11>


// CMyAxFontCtrl::OnResetState - Reset control to default state

void CMyAxFontCtrl::OnResetState()
{
	COleControl::OnResetState();  // Resets defaults found in DoPropExchange

	// TODO: Reset any other control state here.
}



// CMyAxFontCtrl message handlers

class CWizardGenCtrl
{
   IDispatch* GetHeadingFont();
   void SetHeadingFont(IDispatch* pVal);
   void SetModifiedFlag() {}
};

// <Snippet6>
IDispatch* CWizardGenCtrl::GetHeadingFont(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your dispatch handler code here

   return NULL;
}

void CWizardGenCtrl::SetHeadingFont(IDispatch* /*pVal*/)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   // TODO: Add your property handler code here

   SetModifiedFlag();
}
// </Snippet6>

// <Snippet12>
IDispatch* CMyAxFontCtrl::GetHeadingFont(void)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   return m_fontHeading.GetFontDispatch();
}
// </Snippet12>

// <Snippet13>
void CMyAxFontCtrl::SetHeadingFont(IDispatch* pVal)
{
   AFX_MANAGE_STATE(AfxGetStaticModuleState());

   m_fontHeading.InitializeFont(&_fontdescHeading, pVal);
   OnFontChanged();    //notify any changes
   SetModifiedFlag();
}
// </Snippet13>

// <Snippet20>
STDMETHODIMP_(ULONG) CMyAxFontCtrl::XHeadingFontNotify::AddRef()
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
   return 1;
}
STDMETHODIMP_(ULONG) CMyAxFontCtrl::XHeadingFontNotify::Release()
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
   return 0;
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::QueryInterface(REFIID iid, LPVOID FAR* ppvObj)
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
   if( IsEqualIID(iid, IID_IUnknown) || IsEqualIID(iid, IID_IPropertyNotifySink))
   {
      *ppvObj= this;
      AddRef();
      return NOERROR;
   }
   return ResultFromScode(E_NOINTERFACE);
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::OnChanged(DISPID)
{
   METHOD_MANAGE_STATE(CMyAxFontCtrl, HeadingFontNotify)
   pThis->InvalidateControl();
   return NOERROR;
}

STDMETHODIMP CMyAxFontCtrl::XHeadingFontNotify::OnRequestEdit(DISPID)
{
   return NOERROR;
}
// </Snippet20>
