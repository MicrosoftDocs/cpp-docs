// Buddy.h : Declaration of the CBuddy
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"
#include "DBuddyEvents_CP.H"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CBuddy
class ATL_NO_VTABLE CBuddy :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IBuddy, &IID_IBuddy, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CBuddy>,
   public IOleControlImpl<CBuddy>,
   public IOleObjectImpl<CBuddy>,
   public IOleInPlaceActiveObjectImpl<CBuddy>,
   public IViewObjectExImpl<CBuddy>,
   public IOleInPlaceObjectWindowlessImpl<CBuddy>,
   public ISupportErrorInfo,
   public IPersistStorageImpl<CBuddy>,
   public ISpecifyPropertyPagesImpl<CBuddy>,
   public IQuickActivateImpl<CBuddy>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CBuddy>,
#endif
   public IProvideClassInfo2Impl<&CLSID_Buddy, NULL, &LIBID_NVC_ATL_WindowingLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CBuddy, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CBuddy, &CLSID_Buddy>,
   public CComControl<CBuddy>,
   public IConnectionPointContainerImpl<CBuddy>,
   public CProxyDBuddyEvents<CBuddy>
{
public:


   CBuddy()
   {
   }

// <Snippet124>
DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)
// </Snippet124>

DECLARE_REGISTRY_RESOURCEID(IDR_BUDDY)


BEGIN_COM_MAP(CBuddy)
   COM_INTERFACE_ENTRY(IBuddy)
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
   COM_INTERFACE_ENTRY(IConnectionPointContainer)
END_COM_MAP()

BEGIN_PROP_MAP(CBuddy)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   // Example entries
   // PROP_ENTRY("Property Description", dispid, clsid)
   // PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()


BEGIN_MSG_MAP(CBuddy)
   CHAIN_MSG_MAP(CComControl<CBuddy>)
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
         &IID_IBuddy,
      };

      for (int i=0; i<sizeof(arr)/sizeof(arr[0]); i++)
      {
         if (InlineIsEqualGUID(*arr[i], riid))
            return S_OK;
      }
      return S_FALSE;
   }

// IViewObjectEx
// <Snippet126>
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)
// </Snippet126>

// IBuddy
public:
      HRESULT OnDraw(ATL_DRAWINFO& di)
      {
      RECT& rc = *(RECT*)di.prcBounds;
      // Set Clip region to the rectangle specified by di.prcBounds
      HRGN hRgnOld = NULL;
      if (GetClipRgn(di.hdcDraw, hRgnOld) != 1)
         hRgnOld = NULL;
      bool bSelectOldRgn = false;

      HRGN hRgnNew = CreateRectRgn(rc.left, rc.top, rc.right, rc.bottom);

      if (hRgnNew != NULL)
      {
         bSelectOldRgn = (SelectClipRgn(di.hdcDraw, hRgnNew) != ERROR);
      }

      Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
      SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
      LPCTSTR pszText = _T("ATL 8.0 : Buddy");
#ifndef _WIN32_WCE
      TextOut(di.hdcDraw,
         (rc.left + rc.right) / 2,
         (rc.top + rc.bottom) / 2,
         pszText,
         lstrlen(pszText));
#else
      ExtTextOut(di.hdcDraw,
         (rc.left + rc.right) / 2,
         (rc.top + rc.bottom) / 2,
         ETO_OPAQUE,
         NULL,
         pszText,
         ATL::lstrlen(pszText),
         NULL);
#endif

      if (bSelectOldRgn)
         SelectClipRgn(di.hdcDraw, hRgnOld);

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
   STDMETHOD(DoSomething)(void);
public:
   BEGIN_CONNECTION_POINT_MAP(CBuddy)
      CONNECTION_POINT_ENTRY(__uuidof(DBuddyEvents))
   END_CONNECTION_POINT_MAP()
};

OBJECT_ENTRY_AUTO(__uuidof(Buddy), CBuddy)

// <Snippet93>
template <UINT nID, class T>
class CEasySink : public IDispEventImpl<nID, T>
{
public:
   HRESULT EasyAdvise(IUnknown* pUnk) 
   { 
      AtlGetObjectSourceInterface(pUnk,
         &m_libid, &m_iid, &m_wMajorVerNum, &m_wMinorVerNum);
      return DispEventAdvise(pUnk, &m_iid);
   }
   HRESULT EasyUnadvise(IUnknown* pUnk) 
   {
      AtlGetObjectSourceInterface(pUnk,
         &m_libid, &m_iid, &m_wMajorVerNum, &m_wMinorVerNum);
      return DispEventUnadvise(pUnk, &m_iid);
   }
};
// </Snippet93>

// <Snippet95>
// Constructors and operators cannot return error codes, and
// so they are the place where exceptions are generally used.
class CMyClass
{
private:
   CComPtr<IBuddy> m_spBuddy;
public:
   CMyClass()
   {
      HRESULT hr = m_spBuddy.CoCreateInstance(CLSID_Buddy);
      if (FAILED(hr))
         AtlThrow(hr);
   }
   //   methods ..
};
// </Snippet95>