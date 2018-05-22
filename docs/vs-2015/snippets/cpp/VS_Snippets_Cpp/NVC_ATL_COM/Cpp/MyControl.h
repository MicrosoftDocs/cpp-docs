// MyControl.h : Declaration of the CMyControl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_COM.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CMyControl
class ATL_NO_VTABLE CMyControl :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyControl, &IID_IMyControl, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyControl>,
   public IOleControlImpl<CMyControl>,
   public IOleObjectImpl<CMyControl>,
   public IOleInPlaceActiveObjectImpl<CMyControl>,
   public IViewObjectExImpl<CMyControl>,
   public IOleInPlaceObjectWindowlessImpl<CMyControl>,
   public ISupportErrorInfo,
   public IPersistStorageImpl<CMyControl>,
   public ISpecifyPropertyPagesImpl<CMyControl>,
   public IQuickActivateImpl<CMyControl>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CMyControl>,
#endif
   public IProvideClassInfo2Impl<&CLSID_MyControl, NULL, &LIBID_NVC_ATL_COMLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyControl, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CMyControl, &CLSID_MyControl>,
   public CComControl<CMyControl>
{
public:


   CMyControl();

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_MYCONTROL)


DECLARE_NOT_AGGREGATABLE(CMyControl)

BEGIN_COM_MAP(CMyControl)
   COM_INTERFACE_ENTRY(IMyControl)
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

BEGIN_PROP_MAP(CMyControl)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   // Example entries
   // PROP_ENTRY("Property Description", dispid, clsid)
   // PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()


BEGIN_MSG_MAP(CMyControl)
   CHAIN_MSG_MAP(CComControl<CMyControl>)
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
         &IID_IMyControl,
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

// IMyControl
public:
// <Snippet22>
   HRESULT OnDraw(ATL_DRAWINFO& di)
   {
      short nAppearance;
      RECT& rc = *(RECT*)di.prcBounds;

      // draw 3D border if AmbientAppearance is not supported or is set to 1 
      HRESULT hr = GetAmbientAppearance(nAppearance);
      if (hr != S_OK || nAppearance==1)
      {
         DrawEdge(di.hdcDraw, &rc, EDGE_SUNKEN, BF_RECT);
      }
      else
      {
         Rectangle(di.hdcDraw, rc.left, rc.top, rc.right, rc.bottom);
      }

      SetTextAlign(di.hdcDraw, TA_CENTER|TA_BASELINE);
      LPCTSTR pszText = _T("ATL 8.0 : MyControl");

	  // For security reasons, we recommend that you use the lstrlen function
	  // with caution. Here, we can guarantee that pszText is NULL terminated,
	  // and therefore it is safe to use this function.
      TextOut(di.hdcDraw, 
         (rc.left + rc.right) / 2, 
         (rc.top + rc.bottom) / 2, 
         pszText, 
         lstrlen(pszText));

      return S_OK;
   }
// </Snippet22>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }
public:
   STDMETHOD(GetIOleObject)(void);
public:
   STDMETHOD(CComControlCreateControlWindow)(void);
public:
   STDMETHOD(put_MyText)(BSTR newVal);
public:
   STDMETHOD(put_MyTitle)(BSTR newVal);
public:
   STDMETHOD(put_Shape)(int newVal);
public:
   CComBSTR m_bstrMyText;
   CComBSTR m_bstrMyTitle;
   int m_nShape;
public:
   STDMETHOD(TestCWords)(void);
public:
   STDMETHOD(TestVAC)(void);
public:
   STDMETHOD(TestVC)(void);
public:
   STDMETHOD(TestMyAutoCrit)(void);
public:
   STDMETHOD(TestMyCircle)(void);
public:
   STDMETHOD(TestMyAggObject)(void);
public:
   STDMETHOD(UseCComObjectStack)(void);
public:
   STDMETHOD(CComUnkArrayEnd)(void);
public:
   STDMETHOD(DoAtlHiMetricToPixel)(void);
public:
   STDMETHOD(DoAtlMarshalPtrInProc)(void);
public:
   STDMETHOD(MyErrorProneMethod)(void);
public:
   STDMETHOD(TestMyService)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(MyControl), CMyControl)
