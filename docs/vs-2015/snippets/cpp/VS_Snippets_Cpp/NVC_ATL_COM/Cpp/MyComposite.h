// MyComposite.h : Declaration of the CMyComposite
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_COM.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


// CMyComposite
class ATL_NO_VTABLE CMyComposite :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyComposite, &IID_IMyComposite, &LIBID_NVC_ATL_COMLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyComposite>,
   public IOleControlImpl<CMyComposite>,
   public IOleObjectImpl<CMyComposite>,
   public IOleInPlaceActiveObjectImpl<CMyComposite>,
   public IViewObjectExImpl<CMyComposite>,
   public IOleInPlaceObjectWindowlessImpl<CMyComposite>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyComposite, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public ISpecifyPropertyPagesImpl<CMyComposite>,
   public CComCoClass<CMyComposite, &CLSID_MyComposite>,
   public CComCompositeControl<CMyComposite>
{
public:


   CMyComposite()
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

DECLARE_REGISTRY_RESOURCEID(IDR_MYCOMPOSITE)


DECLARE_NOT_AGGREGATABLE(CMyComposite)

BEGIN_COM_MAP(CMyComposite)
   COM_INTERFACE_ENTRY(IMyComposite)
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
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   COM_INTERFACE_ENTRY_IID(IID_IObjectSafety, IObjectSafety)
#endif
   COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
END_COM_MAP()

BEGIN_PROP_MAP(CMyComposite)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   PROP_PAGE(CLSID_MyCompositeProps)
END_PROP_MAP()


BEGIN_MSG_MAP(CMyComposite)
// <Snippet20>
   MESSAGE_HANDLER(WM_RBUTTONDOWN, OnRButtonDown)
// </Snippet20>
   CHAIN_MSG_MAP(CComCompositeControl<CMyComposite>)
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

BEGIN_SINK_MAP(CMyComposite)
   //Make sure the Event Handlers have __stdcall calling convention
END_SINK_MAP()

   STDMETHOD(OnAmbientPropertyChange)(DISPID dispid)
   {
      if (dispid == DISPID_AMBIENT_BACKCOLOR)
      {
         SetBackgroundColorFromAmbient();
         FireViewChange();
      }
      return IOleControlImpl<CMyComposite>::OnAmbientPropertyChange(dispid);
   }


// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IMyComposite

// <Snippet13>
   enum { IDD = IDD_MYCOMPOSITE };
// </Snippet13>

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }

// <Snippet14>
   // Example for overriding IOleControlImpl::GetControlInfo()
   // This example uses the accelerator table from the project resources
   // with the identifier IDR_ACCELTABLE
   // Define GetControlInfo() in the header of your composite 
   // control class as follows:

   STDMETHOD(GetControlInfo)(CONTROLINFO* pCI)
   {
       // Load the accelerator table from the resource
       pCI->hAccel = LoadAccelerators(_AtlBaseModule.GetResourceInstance(), 
          MAKEINTRESOURCE(IDR_ACCELTABLE));

       if (pCI->hAccel == NULL)
           return E_FAIL;

       // Get the number of accelerators in the table
       pCI->cAccel = (USHORT)CopyAcceleratorTable(pCI->hAccel, NULL, 0);
       // The following is optional if you want your control
       // to process the return and/or escape keys
       // pCI.dwFlags = CTRLINFO_EATS_RETURN | CTRLINFO_EATS_ESCAPE;
       pCI->dwFlags = 0;

       return S_OK;
   }
// </Snippet14>
public:
   LRESULT OnRButtonDown(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
};

OBJECT_ENTRY_AUTO(__uuidof(MyComposite), CMyComposite)
