// MyCompositCtrl2.h : Declaration of the CMyCompositCtrl2
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

// <Snippet141>
#import "PROGID:MSCAL.Calendar.7" no_namespace, raw_interfaces_only
// </Snippet141>

// CMyCompositCtrl2
class ATL_NO_VTABLE CMyCompositCtrl2 :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyCompositCtrl2, &IID_IMyCompositCtrl2, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyCompositCtrl2>,
   public IOleControlImpl<CMyCompositCtrl2>,
   public IOleObjectImpl<CMyCompositCtrl2>,
   public IOleInPlaceActiveObjectImpl<CMyCompositCtrl2>,
   public IViewObjectExImpl<CMyCompositCtrl2>,
   public IOleInPlaceObjectWindowlessImpl<CMyCompositCtrl2>,
   public ISupportErrorInfo,
   public IPersistStorageImpl<CMyCompositCtrl2>,
   public ISpecifyPropertyPagesImpl<CMyCompositCtrl2>,
   public IQuickActivateImpl<CMyCompositCtrl2>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CMyCompositCtrl2>,
#endif
   public IProvideClassInfo2Impl<&CLSID_MyCompositCtrl2, NULL, &LIBID_NVC_ATL_WindowingLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyCompositCtrl2, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CMyCompositCtrl2, &CLSID_MyCompositCtrl2>,
   public CComCompositeControl<CMyCompositCtrl2>,
// <Snippet142>
   public IDispEventImpl<IDC_CALENDAR1, CMyCompositCtrl2, &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>,
   public IDispEventImpl<IDC_CALENDAR2, CMyCompositCtrl2, &__uuidof(DCalendarEvents), &__uuidof(__MSACAL), 7, 0>
// </Snippet142>
{
public:


   CMyCompositCtrl2()
   {
      m_bWindowOnly = TRUE;
      CalcExtent(m_sizeExtent);
   }

   DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
      OLEMISC_INSIDEOUT |
      OLEMISC_ACTIVATEWHENVISIBLE |
      OLEMISC_SETCLIENTSITEFIRST
      )

      DECLARE_REGISTRY_RESOURCEID(IDR_MYCOMPOSITCTRL2)


   BEGIN_COM_MAP(CMyCompositCtrl2)
      COM_INTERFACE_ENTRY(IMyCompositCtrl2)
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

   BEGIN_PROP_MAP(CMyCompositCtrl2)
      PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
      PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
      // Example entries
      // PROP_ENTRY("Property Description", dispid, clsid)
      // PROP_PAGE(CLSID_StockColorPage)
   END_PROP_MAP()


   BEGIN_MSG_MAP(CMyCompositCtrl2)
      CHAIN_MSG_MAP(CComCompositeControl<CMyCompositCtrl2>)
   END_MSG_MAP()
   // Handler prototypes:
   //  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
   //  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
   //  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// <Snippet136>
   BEGIN_SINK_MAP(CMyCompositCtrl2)
      //Make sure the Event Handlers have __stdcall calling convention
      SINK_ENTRY_EX(IDC_CALENDAR1, __uuidof(DCalendarEvents), DISPID_CLICK, 
         &CMyCompositCtrl2::ClickCalendar1)
      SINK_ENTRY_EX(IDC_CALENDAR2, __uuidof(DCalendarEvents), DISPID_CLICK, 
         &CMyCompositCtrl2::ClickCalendar2)
   END_SINK_MAP()
// </Snippet136>

   STDMETHOD(OnAmbientPropertyChange)(DISPID dispid)
   {
      if (dispid == DISPID_AMBIENT_BACKCOLOR)
      {
         SetBackgroundColorFromAmbient();
         FireViewChange();
      }
      return IOleControlImpl<CMyCompositCtrl2>::OnAmbientPropertyChange(dispid);
   }
   // ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
   {
      static const IID* arr[] =
      {
         &IID_IMyCompositCtrl2,
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

   // IMyCompositCtrl2

   enum { IDD = IDD_MYCOMPOSITCTRL2 };

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }
public:
   void __stdcall ClickCalendar1();

public:
   void __stdcall ClickCalendar2();
};

OBJECT_ENTRY_AUTO(__uuidof(MyCompositCtrl2), CMyCompositCtrl2)
