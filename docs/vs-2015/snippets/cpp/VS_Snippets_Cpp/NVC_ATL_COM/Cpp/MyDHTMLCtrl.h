// MyDHTMLCtrl.h : Declaration of the CMyDHTMLCtrl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_COM.h"

#ifdef _WIN32_WCE
#error "ATL does not support HTML controls for Windows CE."
#endif
class ATL_NO_VTABLE CMyDHTMLCtrlUI :
   public IDispatchImpl<IMyDHTMLCtrlUI, &IID_IMyDHTMLCtrlUI, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public CComObjectRootEx<CComSingleThreadModel>
{
BEGIN_COM_MAP(CMyDHTMLCtrlUI)
   COM_INTERFACE_ENTRY(IMyDHTMLCtrlUI)
   COM_INTERFACE_ENTRY(IDispatch)
END_COM_MAP()
// IMyDHTMLCtrl
public:
   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

   // Example method called by the HTML to change the <BODY> background color
// <Snippet4>
   STDMETHOD(OnClick)(IDispatch* pdispBody, VARIANT varColor)
// </Snippet4>
   {
      CComQIPtr<IHTMLBodyElement> spBody(pdispBody);
      if (spBody != NULL)
         spBody->put_bgColor(varColor);
      return S_OK;
   }
public:
   STDMETHOD(HelloHTML)(void);
};



// CMyDHTMLCtrl
class ATL_NO_VTABLE CMyDHTMLCtrl :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyDHTMLCtrl, &IID_IMyDHTMLCtrl, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyDHTMLCtrl>,
   public IOleControlImpl<CMyDHTMLCtrl>,
   public IOleObjectImpl<CMyDHTMLCtrl>,
   public IOleInPlaceActiveObjectImpl<CMyDHTMLCtrl>,
   public IViewObjectExImpl<CMyDHTMLCtrl>,
   public IOleInPlaceObjectWindowlessImpl<CMyDHTMLCtrl>,
   public ISupportErrorInfo,
   public IPersistStorageImpl<CMyDHTMLCtrl>,
   public ISpecifyPropertyPagesImpl<CMyDHTMLCtrl>,
   public IQuickActivateImpl<CMyDHTMLCtrl>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CMyDHTMLCtrl>,
#endif
   public IProvideClassInfo2Impl<&CLSID_MyDHTMLCtrl, NULL, &LIBID_NVC_ATL_COMLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyDHTMLCtrl, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CMyDHTMLCtrl, &CLSID_MyDHTMLCtrl>,
   public CComControl<CMyDHTMLCtrl>
{
public:


   CMyDHTMLCtrl()
   {
      m_bWindowOnly = TRUE;
   }

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_MYDHTMLCTRL)


BEGIN_COM_MAP(CMyDHTMLCtrl)
   COM_INTERFACE_ENTRY(IMyDHTMLCtrl)
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
   COM_INTERFACE_ENTRY(ISupportErrorInfo)
   COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
   COM_INTERFACE_ENTRY(IQuickActivate)
   COM_INTERFACE_ENTRY(IPersistStorage)
#ifndef _WIN32_WCE
   COM_INTERFACE_ENTRY(IDataObject)
#endif
   COM_INTERFACE_ENTRY(IProvideClassInfo)
   COM_INTERFACE_ENTRY(IProvideClassInfo2)
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   COM_INTERFACE_ENTRY_IID(IID_IObjectSafety, IObjectSafety)
#endif
END_COM_MAP()

BEGIN_PROP_MAP(CMyDHTMLCtrl)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   // Example entries
   // PROP_ENTRY("Property Description", dispid, clsid)
   // PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()


BEGIN_MSG_MAP(CMyDHTMLCtrl)
   MESSAGE_HANDLER(WM_CREATE, OnCreate)
   CHAIN_MSG_MAP(CComControl<CMyDHTMLCtrl>)
   DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
   {
      static const IID* arr[] =
      {
         &IID_IMyDHTMLCtrl,
      };

      for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
      {
         if (InlineIsEqualGUID(*arr[i], riid))
            return S_OK;
      }
      return S_FALSE;
   }

// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IMyDHTMLCtrl

   LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/)
   {
      CAxWindow wnd(m_hWnd);
      wnd.ModifyStyle(0, WS_HSCROLL | WS_VSCROLL);
      HRESULT hr = wnd.CreateControl(IDH_MYDHTMLCTRL);
      if (SUCCEEDED(hr))
      {
         CComObject<CMyDHTMLCtrlUI> *pObject = NULL;
         hr = CComObject<CMyDHTMLCtrlUI>::CreateInstance(&pObject);
         if (SUCCEEDED(hr) && pObject != NULL)
            hr = wnd.SetExternalDispatch(static_cast<IMyDHTMLCtrlUI*>(pObject));
      }
      if (SUCCEEDED(hr))
         hr = wnd.QueryControl(IID_IWebBrowser2, (void**)&m_spBrowser);
      return SUCCEEDED(hr) ? 0 : -1;
   }

   STDMETHOD(TranslateAccelerator)(LPMSG pMsg)
   {
      CComPtr<IOleInPlaceActiveObject> spIOleInPlaceActiveObject;

      HRESULT hr = m_spBrowser->QueryInterface(&spIOleInPlaceActiveObject);
      if (SUCCEEDED(hr))
         hr = spIOleInPlaceActiveObject->TranslateAccelerator(pMsg);
      if (hr != S_OK)
         hr = IOleInPlaceActiveObjectImpl<CMyDHTMLCtrl>::TranslateAccelerator(pMsg);

      return hr;
   }
   CComPtr<IWebBrowser2> m_spBrowser;

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }
public:
   STDMETHOD(MethodInvoked)(void);
public:
   STDMETHOD(GoToURL)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(MyDHTMLCtrl), CMyDHTMLCtrl)
