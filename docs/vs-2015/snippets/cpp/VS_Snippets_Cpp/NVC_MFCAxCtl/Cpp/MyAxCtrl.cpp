// MyAxCtrl.cpp : Implementation of the CMyAxCtrl ActiveX Control class.

#include "stdafx.h"
#include "NVC_MFCAxCtl.h"
#include "MyAxCtrl.h"
#include "MyAxPpg.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


IMPLEMENT_DYNCREATE(CMyAxCtrl, COleControl)



// Message map

BEGIN_MESSAGE_MAP(CMyAxCtrl, COleControl)
// <Snippet5>
	ON_OLEVERB(AFX_IDS_VERB_EDIT, OnEdit)
// </Snippet5>
	ON_OLEVERB(AFX_IDS_VERB_PROPERTIES, OnProperties)
   ON_WM_MOUSEACTIVATE()
END_MESSAGE_MAP()



// Dispatch map

BEGIN_DISPATCH_MAP(CMyAxCtrl, COleControl)
	DISP_FUNCTION_ID(CMyAxCtrl, "AboutBox", DISPID_ABOUTBOX, AboutBox, VT_EMPTY, VTS_NONE)
	DISP_FUNCTION_ID(CMyAxCtrl, "TwiddleFont", 1, TwiddleFont, VT_EMPTY, VTS_NONE)
END_DISPATCH_MAP()



// Event map

// <Snippet16>
BEGIN_EVENT_MAP(CMyAxCtrl, COleControl)
   EVENT_STOCK_CLICK()
END_EVENT_MAP()
// </Snippet16>



// Property pages

// TODO: Add more property pages as needed.  Remember to increase the count!
BEGIN_PROPPAGEIDS(CMyAxCtrl, 1)
	PROPPAGEID(CMyAxPropPage::guid)
END_PROPPAGEIDS(CMyAxCtrl)



// Initialize class factory and guid

IMPLEMENT_OLECREATE_EX(CMyAxCtrl, "NVC_MFCAXCTL.MyAxCtrl.1",
	0xf8b67137, 0x8158, 0x4b2b, 0xbb, 0xae, 0x95, 0xa4, 0x37, 0x67, 0xe6, 0x25)



// Type library ID and version

IMPLEMENT_OLETYPELIB(CMyAxCtrl, _tlid, _wVerMajor, _wVerMinor)



// Interface IDs

const IID BASED_CODE IID_DNVC_MFCAxCtl =
		{ 0x17EB4341, 0x3BF7, 0x4F37, { 0xA7, 0xC3, 0x33, 0x92, 0x59, 0x78, 0xC8, 0x64 } };
const IID BASED_CODE IID_DNVC_MFCAxCtlEvents =
		{ 0xCC665FDC, 0x20FA, 0x4567, { 0x90, 0xB6, 0xB, 0xE4, 0x5D, 0x1E, 0xA, 0x8D } };



// Control type information

// <Snippet10>
static const DWORD BASED_CODE _dwMyOleMisc =
	OLEMISC_ACTIVATEWHENVISIBLE |
	OLEMISC_IGNOREACTIVATEWHENVISIBLE |
	OLEMISC_SETCLIENTSITEFIRST |
	OLEMISC_INSIDEOUT |
	OLEMISC_CANTLINKINSIDE |
	OLEMISC_RECOMPOSEONRESIZE;
// </Snippet10>

IMPLEMENT_OLECTLTYPE(CMyAxCtrl, IDS_NVC_MFCAXCTL, _dwMyOleMisc)



// CMyAxCtrl::CMyAxCtrlFactory::UpdateRegistry -
// Adds or removes system registry entries for CMyAxCtrl

// <Snippet11>
// Member function implementation of class COleObjectFactory::UpdateRegistry 
//
BOOL CMyAxCtrl::CMyAxCtrlFactory::UpdateRegistry(BOOL bRegister)
{
	// TODO: Verify that your control follows apartment-model threading rules.
	// Refer to MFC TechNote 64 for more information.
	// If your control does not conform to the apartment-model rules, then
	// you must modify the code below, changing the 6th parameter from
	// afxRegInsertable | afxRegApartmentThreading to afxRegInsertable.

	if (bRegister)
		return AfxOleRegisterControlClass(
			AfxGetInstanceHandle(),
			m_clsid,
			m_lpszProgID,
			IDS_NVC_MFCAXCTL,
			IDB_NVC_MFCAXCTL,
// <Snippet12>
			afxRegInsertable | afxRegApartmentThreading,
// </Snippet12>
			_dwMyOleMisc,
			_tlid,
			_wVerMajor,
			_wVerMinor);
	else
		return AfxOleUnregisterClass(m_clsid, m_lpszProgID);
}
// </Snippet11>


// CMyAxCtrl::CMyAxCtrl - Constructor

CMyAxCtrl::CMyAxCtrl()
{
	InitializeIIDs(&IID_DNVC_MFCAxCtl, &IID_DNVC_MFCAxCtlEvents);

   m_pMyFont = new CFontHolder(&m_xFontNotification);
   m_pMyFont->InitializeFont();
}



// CMyAxCtrl::~CMyAxCtrl - Destructor

CMyAxCtrl::~CMyAxCtrl()
{
   delete m_pMyFont;
}



// CMyAxCtrl::OnDraw - Drawing function

void CMyAxCtrl::OnDraw(
			CDC* pdc, const CRect& rcBounds, const CRect& rcInvalid)
{
   UNREFERENCED_PARAMETER(rcInvalid);

	if (!pdc)
		return;

   if (NULL == m_MyEdit.m_hWnd)
   {
      m_MyEdit.Create(ES_MULTILINE | WS_CHILD | WS_VISIBLE, CRect(10, 10, 100, 100),
         pdc->GetWindow(), IDC_MYEDIT);
   }

	// TODO: Replace the following code with your own drawing code.
	pdc->FillRect(rcBounds, CBrush::FromHandle((HBRUSH)GetStockObject(WHITE_BRUSH)));
	pdc->Ellipse(rcBounds);
}



// CMyAxCtrl::DoPropExchange - Persistence support

void CMyAxCtrl::DoPropExchange(CPropExchange* pPX)
{
	ExchangeVersion(pPX, MAKELONG(_wVerMinor, _wVerMajor));
	COleControl::DoPropExchange(pPX);

   FONTDESC DefaultFont = {0};
   DefaultFont.cbSizeofstruct = sizeof(DefaultFont);
   DefaultFont.lpstrName = L"Arial";
   DefaultFont.cySize.int64 = 120000;
   DefaultFont.sWeight = FW_NORMAL;

   CString tempString(_T("Arial"));
   CString DefaultName(_T("Arial"));
   BOOL tempBool = FALSE;
   BOOL DefaultValue = FALSE;

// <Snippet4>
   if (!IsConvertingVBX())
   {
// <Snippet3>
      PX_Font(pPX, _T("Font"), *m_pMyFont, &DefaultFont);
// </Snippet3>
   }
   else
   {
      PX_String(pPX, _T("FontName"), tempString, DefaultName);
      m_pMyFont->m_pFont->put_Name(tempString.AllocSysString());
      PX_Bool(pPX, _T("FontUnderline"), tempBool, DefaultValue);
      m_pMyFont->m_pFont->put_Underline(tempBool);
   }
// </Snippet4>
}



// CMyAxCtrl::GetControlFlags -
// Flags to customize MFC's implementation of ActiveX controls.
//
DWORD CMyAxCtrl::GetControlFlags()
{
	DWORD dwFlags = COleControl::GetControlFlags();


	// The control can activate without creating a window.
	// TODO: when writing the control's message handlers, avoid using
	//		the m_hWnd member variable without first checking that its
	//		value is non-NULL.
	dwFlags |= windowlessActivate;

	// The control can receive mouse notifications when inactive.
	// TODO: if you write handlers for WM_SETCURSOR and WM_MOUSEMOVE,
	//		avoid using the m_hWnd member variable without first
	//		checking that its value is non-NULL.
	dwFlags |= pointerInactive;
	return dwFlags;
}



// CMyAxCtrl::OnResetState - Reset control to default state

// <Snippet7>
void CMyAxCtrl::OnResetState()
{
   ResetVersion(MAKELONG(_wVerMinor, _wVerMajor));
   ResetStockProps();

   // initialize custom properties here
}
// </Snippet7>


// CMyAxCtrl::AboutBox - Display an "About" box to the user

void CMyAxCtrl::AboutBox()
{
	CDialog dlgAbout(IDD_ABOUTBOX_NVC_MFCAXCTL);
	dlgAbout.DoModal();
}

void CMyAxCtrl::TwiddleFont()
{
   SetFont(AmbientFont());
}



// CMyAxCtrl message handlers

// <Snippet1>
DWORD CMyAxCtrl::GetActivationPolicy()
{
    return POINTERINACTIVE_ACTIVATEONDRAG;
}
// </Snippet1>

BEGIN_INTERFACE_MAP(CMyAxCtrl, COleControl)
	INTERFACE_PART(CMyAxCtrl, IID_IDropTarget, DropTarget)
END_INTERFACE_MAP()

STDMETHODIMP_(ULONG) CMyAxCtrl::XDropTarget::AddRef()
{
	METHOD_PROLOGUE_EX_(CMyAxCtrl, DropTarget)
	return pThis->ExternalAddRef();
}

STDMETHODIMP_(ULONG) CMyAxCtrl::XDropTarget::Release()
{
	METHOD_PROLOGUE_EX_(CMyAxCtrl, DropTarget)
	return pThis->ExternalRelease();
}

STDMETHODIMP CMyAxCtrl::XDropTarget::QueryInterface(
	REFIID iid, LPVOID* ppvObj)
{
	METHOD_PROLOGUE_EX_(CMyAxCtrl, DropTarget)
	return pThis->ExternalQueryInterface(&iid, ppvObj);
}

STDMETHODIMP CMyAxCtrl::XDropTarget::DragEnter(LPDATAOBJECT, DWORD, POINTL, LPDWORD)
{
   return S_OK;
}
STDMETHODIMP CMyAxCtrl::XDropTarget::DragOver(DWORD, POINTL, LPDWORD)
{
   return S_OK;
}
STDMETHODIMP CMyAxCtrl::XDropTarget::DragLeave()
{
   return S_OK;
}
STDMETHODIMP CMyAxCtrl::XDropTarget::Drop(LPDATAOBJECT, DWORD, POINTL, LPDWORD)
{
   return S_OK;
}

// <Snippet2>
IDropTarget* CMyAxCtrl::GetWindowlessDropTarget()
{
   m_xDropTarget.AddRef();
   return &m_xDropTarget;
}
// </Snippet2>

// <Snippet6>
void CMyAxCtrl::OnFontChanged()
{
   // Always set it to the container's font
   if (m_MyEdit.m_hWnd != NULL)
   {
      IFontDisp* pFontDisp = NULL;
      IFont *pFont = NULL;
      HRESULT hr;

      // Get the container's FontDisp interface
      pFontDisp = AmbientFont();
      if (pFontDisp)
      {
         hr = pFontDisp->QueryInterface(IID_IFont, (LPVOID *) &pFont);
         if (FAILED(hr))
         {
            pFontDisp->Release();
            return;
         }
      }

      HFONT hFont = NULL;
      if (pFont)
      {
         pFont->get_hFont(&hFont);
         m_MyEdit.SendMessage(WM_SETFONT, (WPARAM)hFont, 0L);
      }

      pFontDisp->Release();
   }

   // Invalidate the control
   m_MyEdit.Invalidate();
   m_MyEdit.UpdateWindow();
   
   COleControl::OnFontChanged();
}
// </Snippet6>

// <Snippet8>
void CMyAxCtrl::Serialize(CArchive& ar)
{
   SerializeVersion(ar, MAKELONG(_wVerMinor, _wVerMajor));
   SerializeExtent(ar);
   SerializeStockProps(ar);

   if (ar.IsStoring())
   {	// storing code
   }
   else
   {	// loading code
   }
}
// </Snippet8>

// <Snippet9>
// The code fragment below shows how to UI activate an ActiveX control.
// CMyAxCtrl is a COleControl-derived class.
int CMyAxCtrl::OnMouseActivate(CWnd* pDesktopWnd, UINT nHitTest, UINT message)
{
   OnActivateInPlace(TRUE, NULL);  // OnActivateInPlace() is an undocumented function
   return COleControl::OnMouseActivate(pDesktopWnd, nHitTest, message);
}
// </Snippet9>