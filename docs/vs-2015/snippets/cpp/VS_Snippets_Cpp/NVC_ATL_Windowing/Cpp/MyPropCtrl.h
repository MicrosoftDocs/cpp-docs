// MyPropCtrl.h : Declaration of the CMyPropCtrl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif


HRESULT AllowedCLSID(const CLSID& clsid, REFIID iidInterface, void** ppvObj)
{
   // Dummy line just to avoid warnings
   if ((clsid == clsid) || (iidInterface == iidInterface) || (ppvObj == NULL))
   {
      return 0;
   }

   return 0;
}

// CMyPropCtrl
class ATL_NO_VTABLE CMyPropCtrl :
   public CComObjectRootEx<CComSingleThreadModel>,
   public IDispatchImpl<IMyPropCtrl, &IID_IMyPropCtrl, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,
   public IPersistStreamInitImpl<CMyPropCtrl>,
   public IOleControlImpl<CMyPropCtrl>,
   public IOleObjectImpl<CMyPropCtrl>,
   public IOleInPlaceActiveObjectImpl<CMyPropCtrl>,
   public IViewObjectExImpl<CMyPropCtrl>,
   public IOleInPlaceObjectWindowlessImpl<CMyPropCtrl>,
#ifdef _WIN32_WCE // IObjectSafety is required on Windows CE for the control to be loaded correctly
   public IObjectSafetyImpl<CMyPropCtrl, INTERFACESAFE_FOR_UNTRUSTED_CALLER>,
#endif
   public CComCoClass<CMyPropCtrl, &CLSID_MyPropCtrl>,
   public CComControl<CMyPropCtrl>
{
public:


   CMyPropCtrl()
   {
   }

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_MYPROPCTRL)


BEGIN_COM_MAP(CMyPropCtrl)
   COM_INTERFACE_ENTRY(IMyPropCtrl)
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
END_COM_MAP()

// <Snippet103>
BEGIN_PROP_MAP(CMyPropCtrl)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
   PROP_ENTRY_TYPE("Property1", 1, CLSID_MyPropPage1, VT_BSTR)
   PROP_ENTRY_TYPE_EX("Caption", DISPID_CAPTION, CLSID_MyPropPage2, IID_IMyDual1, VT_BSTR)
   PROP_ENTRY_INTERFACE_CALLBACK("CorrectParamCallback", 0, CLSID_MyPropPage1, AllowedCLSID, VT_DISPATCH)
   PROP_ENTRY_INTERFACE_CALLBACK_EX("CorrectParamCallbackEx", 1, IID_IMyDual1, CLSID_MyPropPage2, AllowedCLSID, VT_UNKNOWN)
   PROP_PAGE(CLSID_MyPropPage3)
END_PROP_MAP()
// </Snippet103>

BEGIN_MSG_MAP(CMyPropCtrl)
   CHAIN_MSG_MAP(CComControl<CMyPropCtrl>)
   DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IMyPropCtrl
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
      LPCTSTR pszText = _T("ATL 8.0 : MyPropCtrl");
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
};

OBJECT_ENTRY_AUTO(__uuidof(MyPropCtrl), CMyPropCtrl)
