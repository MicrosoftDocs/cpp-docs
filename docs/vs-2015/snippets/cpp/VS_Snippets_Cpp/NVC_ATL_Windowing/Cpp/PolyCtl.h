// PolyCtl.h : Declaration of the CPolyCtl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"
#include "_IPolyCtlEvents_CP.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CPolyCtl
class ATL_NO_VTABLE CPolyCtl :
   public CComObjectRootEx<CComSingleThreadModel>,
   public CStockPropImpl<CPolyCtl, IPolyCtl>,
   public IPersistStreamInitImpl<CPolyCtl>,
   public IOleControlImpl<CPolyCtl>,
   public IOleObjectImpl<CPolyCtl>,
   public IOleInPlaceActiveObjectImpl<CPolyCtl>,
   public IViewObjectExImpl<CPolyCtl>,
   public IOleInPlaceObjectWindowlessImpl<CPolyCtl>,
   public ISupportErrorInfo,
   public IConnectionPointContainerImpl<CPolyCtl>,
   public CProxy_IPolyCtlEvents<CPolyCtl>,
   public IPersistStorageImpl<CPolyCtl>,
   public ISpecifyPropertyPagesImpl<CPolyCtl>,
   public IQuickActivateImpl<CPolyCtl>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CPolyCtl>,
#endif
   public IProvideClassInfo2Impl<&CLSID_PolyCtl, &__uuidof(_IPolyCtlEvents), &LIBID_NVC_ATL_WindowingLib>,
   public CComCoClass<CPolyCtl, &CLSID_PolyCtl>,
   public CComControl<CPolyCtl>,
// <Snippet62>
   public IObjectSafetyImpl<CPolyCtl, INTERFACESAFE_FOR_UNTRUSTED_CALLER>
// </Snippet62>
{
public:

// <Snippet54>
   CPolyCtl()
   {
// <Snippet45>
      m_nSides = 3;
// </Snippet45>
// <Snippet53>
      m_clrFillColor = RGB(0, 0xFF, 0);
// </Snippet53>
   }
// </Snippet54>

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_POLYCTL)


BEGIN_COM_MAP(CPolyCtl)
   COM_INTERFACE_ENTRY(IPolyCtl)
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
   COM_INTERFACE_ENTRY(IConnectionPointContainer)
   COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
   COM_INTERFACE_ENTRY(IQuickActivate)
   COM_INTERFACE_ENTRY(IPersistStorage)
#ifndef _WIN32_WCE
   COM_INTERFACE_ENTRY(IDataObject)
#endif
   COM_INTERFACE_ENTRY(IProvideClassInfo)
   COM_INTERFACE_ENTRY(IProvideClassInfo2)
// <Snippet63>
   COM_INTERFACE_ENTRY(IObjectSafety)
// </Snippet63>
END_COM_MAP()

// <Snippet61>
BEGIN_PROP_MAP(CPolyCtl)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
#ifndef _WIN32_WCE
   PROP_ENTRY_TYPE("FillColor", DISPID_FILLCOLOR, CLSID_StockColorPage, VT_UI4)
#endif
// <Snippet60>
   PROP_ENTRY_TYPE("Sides", 1, CLSID_PolyProp, VT_INT)
// </Snippet60>
   // Example entries
   // PROP_ENTRY("Property Description", dispid, clsid)
   // PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()
// </Snippet61>

// <Snippet101>
BEGIN_CONNECTION_POINT_MAP(CPolyCtl)
   CONNECTION_POINT_ENTRY(__uuidof(_IPolyCtlEvents))
END_CONNECTION_POINT_MAP()
// </Snippet101>

BEGIN_MSG_MAP(CPolyCtl)
   MESSAGE_HANDLER(WM_LBUTTONDOWN, OnLButtonDown)
   CHAIN_MSG_MAP(CComControl<CPolyCtl>)
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
         &IID_IPolyCtl,
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

// IPolyCtl
public:
   HRESULT OnDraw(ATL_DRAWINFO& di);

   OLE_COLOR m_clrFillColor;
   void OnFillColorChanged()
   {
      ATLTRACE(_T("OnFillColorChanged\n"));
   }

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

// <Snippet51>
   void FinalRelease()
   {
   }
public:
   STDMETHOD(get_Sides)(short* pVal);
   STDMETHOD(put_Sides)(short newVal);
// <Snippet50>
   void CalcPoints(const RECT& rc);
// </Snippet50>
// </Snippet51>
// <Snippet44>
   short m_nSides;
// </Snippet44>

// <Snippet48>
   POINT m_arrPoint[100];
// </Snippet48>
public:
   LRESULT OnLButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

OBJECT_ENTRY_AUTO(__uuidof(PolyCtl), CPolyCtl)
