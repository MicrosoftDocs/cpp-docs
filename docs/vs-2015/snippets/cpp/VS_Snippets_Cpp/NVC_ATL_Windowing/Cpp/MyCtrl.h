// MyCtrl.h : Declaration of the CMyCtrl
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"
#include "mydlg.h"
#include "DocProperties.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

#define OtherInterfaces \
   public CComObjectRootEx<CComSingleThreadModel>, \
   public IDispatchImpl<IMyCtrl, &IID_IMyCtrl, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>,   \
   public IPersistStreamInitImpl<CMyCtrl>, \
   public IOleControlImpl<CMyCtrl>, \
   public IOleObjectImpl<CMyCtrl>, \
   public IOleInPlaceActiveObjectImpl<CMyCtrl>, \
   public IViewObjectExImpl<CMyCtrl>, \
   public IOleInPlaceObjectWindowlessImpl<CMyCtrl>, \
   public ISupportErrorInfo, \
   public IPersistStorageImpl<CMyCtrl>, \
   public IQuickActivateImpl<CMyCtrl>, \
   public IDataObjectImpl<CMyCtrl>, \
   public IProvideClassInfo2Impl<&CLSID_MyCtrl, NULL, &LIBID_NVC_ATL_WindowingLib>, \
   public CComCoClass<CMyCtrl, &CLSID_MyCtrl>, \
   public CComControl<CMyCtrl>,

#define OtherComMapEntries \
   COM_INTERFACE_ENTRY(IMyCtrl) \
   COM_INTERFACE_ENTRY(IDispatch) \
   COM_INTERFACE_ENTRY(IViewObjectEx) \
   COM_INTERFACE_ENTRY(IViewObject2) \
   COM_INTERFACE_ENTRY(IViewObject) \
   COM_INTERFACE_ENTRY(IOleInPlaceObjectWindowless) \
   COM_INTERFACE_ENTRY(IOleInPlaceObject) \
   COM_INTERFACE_ENTRY2(IOleWindow, IOleInPlaceObjectWindowless) \
   COM_INTERFACE_ENTRY(IOleInPlaceActiveObject) \
   COM_INTERFACE_ENTRY(IOleControl) \
   COM_INTERFACE_ENTRY(IOleObject) \
   COM_INTERFACE_ENTRY(IPersistStreamInit) \
   COM_INTERFACE_ENTRY2(IPersist, IPersistStreamInit) \
   COM_INTERFACE_ENTRY(ISupportErrorInfo) \
   COM_INTERFACE_ENTRY(IQuickActivate) \
   COM_INTERFACE_ENTRY(IPersistStorage) \
   COM_INTERFACE_ENTRY(IDataObject) \
   COM_INTERFACE_ENTRY(IProvideClassInfo) \
   COM_INTERFACE_ENTRY(IProvideClassInfo2)

#define OtherPropMapEntries \
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4) \
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4) \
   PROP_PAGE(CLSID_DocProperties)

// CMyCtrl
// <Snippet72>
class ATL_NO_VTABLE CMyCtrl :
   OtherInterfaces
   public ISpecifyPropertyPagesImpl<CMyCtrl>
{
public:

BEGIN_COM_MAP(CMyCtrl)
   OtherComMapEntries
   COM_INTERFACE_ENTRY(ISpecifyPropertyPages)
END_COM_MAP()

// <Snippet134>
BEGIN_PROP_MAP(CMyCtrl)
   OtherPropMapEntries
   PROP_PAGE(CLSID_DatePage)
   PROP_PAGE(CLSID_StockColorPage)
END_PROP_MAP()
// </Snippet134>

   // Remainder of class declaration omitted.
// </Snippet72>

   CMyCtrl() : m_uIntQITimer(0)
   {
   }

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_MYCTRL)

// <Snippet100>
BEGIN_CATEGORY_MAP(CMyCtrl)
   IMPLEMENTED_CATEGORY(CATID_Insertable)
END_CATEGORY_MAP()
// </Snippet100>

BEGIN_MSG_MAP(CMyCtrl)
   MESSAGE_HANDLER(WM_PAINT, OnPaint)
   CHAIN_MSG_MAP(CComControl<CMyCtrl>)
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
         &IID_IMyCtrl,
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

// IMyCtrl
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
      LPCTSTR pszText = _T("ATL 8.0 : MyCtrl");
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

public:
   STDMETHOD(CWindowAttach)(void);
public:
   LRESULT OnPaint(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, BOOL& /*bHandled*/);
public:
   STDMETHOD(CWindowBringWindowToTop)(void);
public:
   STDMETHOD(CWindowCenterWindow)(void);
public:
   CMyDlg m_MyDlg;
   void CreateAndShowMyDlg();
public:
   STDMETHOD(CWindowDestroyWindow)(void);
public:
   STDMETHOD(CWindowDetach)(void);
public:
   STDMETHOD(CWindowEnableWindow)(void);
public:
   STDMETHOD(CWindowGetClientRect)(void);
public:
   STDMETHOD(CWindowGetDC)(void);
public:
   STDMETHOD(CWindowGetExStyle)(void);
public:
   STDMETHOD(CWindowGetParent)(void);
public:
   STDMETHOD(CWindowGetStyle)(void);
public:
   STDMETHOD(CWindowGetTopWindow)(void);
public:
   STDMETHOD(CWindowGetWindowDC)(void);
public:
   STDMETHOD(CWindowGetWindowProcessID)(void);
public:
   STDMETHOD(CWindowGetWindowThreadID)(void);
public:
   STDMETHOD(CWindowHideCaret)(void);
public:
   STDMETHOD(CWindowInvalidate)(void);
public:
   STDMETHOD(CWindowIsIconic)(void);
public:
   STDMETHOD(CWindowIsWindow)(void);
public:
   STDMETHOD(CWindowIsWindowEnabled)(void);
public:
   STDMETHOD(CWindowIsWindowVisible)(void);
public:
   STDMETHOD(CWindowIsWindowUnicode)(void);
public:
   STDMETHOD(CWindowMessageBox)(void);
public:
   STDMETHOD(CWindowModifyStyle)(void);
public:
   STDMETHOD(CWindowModifyStyleEx)(void);
public:
   STDMETHOD(CWindowPostMessage)(void);
public:
   STDMETHOD(CWindowRedrawWindow)(void);
public:
   STDMETHOD(CWindowSendMessage)(void);
public:
   STDMETHOD(CWindowSetActiveWindow)(void);
public:
   STDMETHOD(CWindowSetFocus)(void);
public:
   STDMETHOD(CWindowSetParent)(void);
public:
   STDMETHOD(CWindowSetRedraw)(void);
public:
   STDMETHOD(CWindowSetText)(void);
public:
   STDMETHOD(CWindowShowCaret)(void);
public:
   STDMETHOD(CWindowShowWindow)(void);
public:
   STDMETHOD(CWindowUpdateWindow)(void);
public:
   STDMETHOD(CAxWindowCreateControl)(void);
public:
   STDMETHOD(TestCustomWndDlg)(void);
public:
   STDMETHOD(CreateCAxWindow)(void);
public:
   STDMETHOD(TestMyChainedWnd)(void);
public:
   STDMETHOD(TestMyComponent)(void);
public:
   STDMETHOD(TestEasySink)(void);
public:
   STDMETHOD(ToggleIntQITimer)(BOOL bStart);
   UINT_PTR m_uIntQITimer;
public:
   STDMETHOD(TestMyClass)(void);
public:
   STDMETHOD(TestpAtlModule)(void);
};

OBJECT_ENTRY_AUTO(__uuidof(MyCtrl), CMyCtrl)
