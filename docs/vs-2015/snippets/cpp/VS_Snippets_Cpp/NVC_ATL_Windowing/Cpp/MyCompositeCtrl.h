// MyCompositeCtrl.h : Declaration of the CMyCompositeCtrl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CMyCompositeCtrl
class ATL_NO_VTABLE CMyCompositeCtrl :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyCompositeCtrl, &IID_IMyCompositeCtrl, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyCompositeCtrl>,
   public IOleControlImpl<CMyCompositeCtrl>,
   public IOleObjectImpl<CMyCompositeCtrl>,
   public IOleInPlaceActiveObjectImpl<CMyCompositeCtrl>,
   public IViewObjectExImpl<CMyCompositeCtrl>,
   public IOleInPlaceObjectWindowlessImpl<CMyCompositeCtrl>,
   public ISupportErrorInfo,
   public IPersistStorageImpl<CMyCompositeCtrl>,
   public ISpecifyPropertyPagesImpl<CMyCompositeCtrl>,
   public IQuickActivateImpl<CMyCompositeCtrl>,
#ifndef _WIN32_WCE
   public IDataObjectImpl<CMyCompositeCtrl>,
#endif
   public IProvideClassInfo2Impl<&CLSID_MyCompositeCtrl, NULL, &LIBID_NVC_ATL_WindowingLib>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyCompositeCtrl, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CMyCompositeCtrl, &CLSID_MyCompositeCtrl>,
   public CComCompositeControl<CMyCompositeCtrl>,
   public IDispEventImpl<IDC_CALENDAR1,CMyCompositeCtrl>,
   public IDispEventImpl<IDC_CALENDAR2,CMyCompositeCtrl>
{
public:


   CMyCompositeCtrl()
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

DECLARE_REGISTRY_RESOURCEID(IDR_MYCOMPOSITECTRL)


BEGIN_COM_MAP(CMyCompositeCtrl)
   COM_INTERFACE_ENTRY(IMyCompositeCtrl)
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

   DWORD m_nWidth;
   DWORD m_nHeight;

// <Snippet132>
BEGIN_PROP_MAP(CMyCompositeCtrl)
   PROP_DATA_ENTRY("Width", m_nWidth, VT_UI4)
   PROP_DATA_ENTRY("Height", m_nHeight, VT_UI4)
END_PROP_MAP()
// </Snippet132>


BEGIN_MSG_MAP(CMyCompositeCtrl)
   CHAIN_MSG_MAP(CComCompositeControl<CMyCompositeCtrl>)
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// <Snippet104>
BEGIN_SINK_MAP(CMyCompositeCtrl)
   //Make sure the Event Handlers have __stdcall calling convention
   SINK_ENTRY(IDC_CALENDAR1, DISPID_CLICK, &CMyCompositeCtrl::ClickCalendar1)
   SINK_ENTRY(IDC_CALENDAR2, DISPID_CLICK, &CMyCompositeCtrl::ClickCalendar2)
END_SINK_MAP()
// </Snippet104>

   STDMETHOD(OnAmbientPropertyChange)(DISPID dispid)
   {
      if (dispid == DISPID_AMBIENT_BACKCOLOR)
      {
         SetBackgroundColorFromAmbient();
         FireViewChange();
      }
      return IOleControlImpl<CMyCompositeCtrl>::OnAmbientPropertyChange(dispid);
   }
// ISupportsErrorInfo
   STDMETHOD(InterfaceSupportsErrorInfo)(REFIID riid)
   {
      static const IID* arr[] =
      {
         &IID_IMyCompositeCtrl,
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

// IMyCompositeCtrl

   enum { IDD = IDD_MYCOMPOSITECTRL };

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


OBJECT_ENTRY_AUTO(__uuidof(MyCompositeCtrl), CMyCompositeCtrl)
