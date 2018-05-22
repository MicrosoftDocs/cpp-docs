// ATLAsync.h : Declaration of the CATLAsync
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CATLAsync
class ATL_NO_VTABLE CATLAsync :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IATLAsync, &IID_IATLAsync, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CATLAsync>,
   public IOleControlImpl<CATLAsync>,
   public IOleObjectImpl<CATLAsync>,
   public IOleInPlaceActiveObjectImpl<CATLAsync>,
   public IViewObjectExImpl<CATLAsync>,
   public IOleInPlaceObjectWindowlessImpl<CATLAsync>,
   public IPersistStorageImpl<CATLAsync>,
   public IQuickActivateImpl<CATLAsync>,
   public IDataObjectImpl<CATLAsync>,
   public IPersistPropertyBagImpl<CATLAsync>,
   public IPerPropertyBrowsingImpl<CATLAsync>,
   public IProvideClassInfo2Impl<&CLSID_ATLAsync, NULL, &LIBID_NVC_ATL_WindowingLib>,
   public IObjectSafetyImpl<CATLAsync, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
   public CComCoClass<CATLAsync, &CLSID_ATLAsync>,
   public CComControl<CATLAsync>
{
public:

   CContainedWindow m_EditCtrl;

   CATLAsync() : m_EditCtrl(_T("EDIT"), this, 1)
   {
      m_bWindowOnly = TRUE;
   }

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_ATLASYNC)


BEGIN_COM_MAP(CATLAsync)
   COM_INTERFACE_ENTRY(IATLAsync)
   COM_INTERFACE_ENTRY(IDispatch)
   COM_INTERFACE_ENTRY(IViewObjectEx)
   COM_INTERFACE_ENTRY(IViewObject2)
   COM_INTERFACE_ENTRY(IViewObject)
   COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless)
   COM_INTERFACE_ENTRY(IOleInPlaceObject)
   COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless)
   COM_INTERFACE_ENTRY(IOleInPlaceActiveObject)
   COM_INTERFACE_ENTRY(IOleControl)
   COM_INTERFACE_ENTRY(IOleObject)
   COM_INTERFACE_ENTRY(IPersistStreamInit)
   COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit)
   COM_INTERFACE_ENTRY_IMPL_IID(IID_IPersist, IPersistPropertyBag)
   COM_INTERFACE_ENTRY_IMPL(IPersistPropertyBag)
   COM_INTERFACE_ENTRY(IQuickActivate)
   COM_INTERFACE_ENTRY(IPersistStorage)
   COM_INTERFACE_ENTRY(IDataObject)
   COM_INTERFACE_ENTRY(IProvideClassInfo)
   COM_INTERFACE_ENTRY(IProvideClassInfo2)
   COM_INTERFACE_ENTRY_IID(IID_IObjectSafety, IObjectSafety)
END_COM_MAP()

BEGIN_PROP_MAP(CATLAsync)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   PROP_ENTRY_TYPE("URL", 0, CLSID_NULL, VT_BSTR)
END_PROP_MAP()


BEGIN_MSG_MAP(CATLAsync)
   MESSAGE_HANDLER(WM_CREATE, OnCreate)
   CHAIN_MSG_MAP(CComControl<CATLAsync>)
   DEFAULT_REFLECTION_HANDLER()
ALT_MSG_MAP(1)
   MESSAGE_HANDLER(WM_LBUTTONDBLCLK, OnLButtonDblClk)
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IATLAsync
public:
      HRESULT OnDraw(ATL_DRAWINFO& /*di*/)
      {
         return S_OK;
      }


   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }
public:
   CComBSTR m_bstrText;    //holds data received from the URL
   CComBSTR m_bstrURL; //string representing a URL

   //OnData will be used as a callback function by the CBindStatusCallback object.
   //OnData will be called periodically with data from the asynchronous transfer
// <Snippet87>
   void OnData(CBindStatusCallback<CATLAsync>* , BYTE* pBytes, DWORD /*cBytes*/)
   {
      ATLTRACE(_T("OnData called\n"));

      m_bstrText.Append((LPCSTR)pBytes);
      if (::IsWindow(m_EditCtrl.m_hWnd))
      {
         USES_CONVERSION;
         _ATLTRY {
            ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0, 
               (LPARAM)(LPCTSTR)COLE2CT((BSTR)m_bstrText));
         }
         _ATLCATCH( e ) {
            e; // unused
            // COLE2CT threw an exception!
            ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0, 
               (LPARAM)_T("Could not allocate enough memory!!!"));
         }
      }
   }
// </Snippet87>

   STDMETHOD(get_URL)(BSTR* pVal)
   {
      ATLTRACE(_T("IATLAsync::get_URL\n"));
      if ( ( *pVal = m_bstrURL.Copy() ) == NULL && m_bstrURL != NULL )
         return E_OUTOFMEMORY;
      else 
         return S_OK;
   }
public:
// <Snippet86>
   STDMETHOD(put_URL)(BSTR newVal)
   {
      HRESULT hResult = E_UNEXPECTED;

      ATLTRACE(_T("IATLAsync::put_URL\n"));
      m_bstrURL = newVal;

      if (::IsWindow(m_EditCtrl.m_hWnd))
      {
         ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0,  (LPARAM)_T(""));
         hResult = CBindStatusCallback<CATLAsync>::Download(this, &CATLAsync::OnData, 
            m_bstrURL, m_spClientSite, FALSE);
      }

      return hResult;
   }
// </Snippet86>
public:
   LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
   {
      RECT rc;
      GetWindowRect(&rc);
      rc.right -= rc.left;
      rc.bottom -= rc.top;
      rc.top = rc.left = 0;

      m_EditCtrl.Create(m_hWnd, rc, NULL, WS_CHILD | WS_VISIBLE | ES_MULTILINE | ES_AUTOVSCROLL);
      ::SendMessage(m_EditCtrl.m_hWnd, WM_SETTEXT, 0,  (LPARAM)_T("Double click on this window or set the URL property to initiate download."));
      return 0;
   }
public:
   LRESULT OnLButtonDblClk(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
   {
      put_URL(CComBSTR(_T("http://www.microsoft.com")));

      return 0;
   }

   STDMETHOD(SetObjectRects)(LPCRECT prcPos,LPCRECT prcClip)
   {
      IOleInPlaceObjectWindowlessImpl<CATLAsync>::SetObjectRects(prcPos, prcClip);
      int cx, cy;
      cx = prcPos->right - prcPos->left;
      cy = prcPos->bottom - prcPos->top;
      ::SetWindowPos(m_EditCtrl.m_hWnd, NULL, 0, 0, cx, cy, SWP_NOZORDER | SWP_NOACTIVATE);
      return S_OK;
   }

};

OBJECT_ENTRY_AUTO(__uuidof(ATLAsync), CATLAsync)
