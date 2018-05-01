// MyWindow.h : Declaration of the CMyWindow
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

#define OtherInheritedClasses \
   public CComObjectRootEx<CComSingleThreadModel>, \
   public IDispatchImpl<IMyWindow, &IID_IMyWindow, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>, \
   public IPersistStreamInitImpl<CMyWindow>, \
   public IOleControlImpl<CMyWindow>, \
   public IOleObjectImpl<CMyWindow>, \
   public IOleInPlaceActiveObjectImpl<CMyWindow>, \
   public IViewObjectExImpl<CMyWindow>, \
   public IOleInPlaceObjectWindowlessImpl<CMyWindow>, \
   public CComCoClass<CMyWindow, &CLSID_MyWindow>,


// CMyWindow
// <Snippet43>
class ATL_NO_VTABLE CMyWindow :
   OtherInheritedClasses
   public CComControl<CMyWindow>
          // CComControl derives from CWindowImpl
{
public:
   // 1. The NULL parameter means ATL will generate a
   //    name for the superclass
   // 2. The "EDIT" parameter means the superclass is
   //    based on the standard Windows Edit box
   DECLARE_WND_SUPERCLASS(NULL, _T("EDIT"))

   // Remainder of class declaration omitted
// </Snippet43>

public:


   CMyWindow()
   {
      m_hWndOther = NULL;
   }

   HWND m_hWndOther;

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_MYWINDOW)


DECLARE_NOT_AGGREGATABLE(CMyWindow)

BEGIN_COM_MAP(CMyWindow)
   COM_INTERFACE_ENTRY(IMyWindow)
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

// <Snippet131>
BEGIN_PROP_MAP(CMyWindow)
   PROP_DATA_ENTRY("_cx", m_sizeExtent.cx, VT_UI4)
   PROP_DATA_ENTRY("_cy", m_sizeExtent.cy, VT_UI4)
END_PROP_MAP()
// </Snippet131>

// <Snippet135>
BEGIN_CATEGORY_MAP(CMyWindow)
   REQUIRED_CATEGORY(CATID_InternetAware)
END_CATEGORY_MAP()
// </Snippet135>

BEGIN_MSG_MAP(CMyWindow)
   CHAIN_MSG_MAP(CComControl<CMyWindow>)
   DEFAULT_REFLECTION_HANDLER()
END_MSG_MAP()
// Handler prototypes:
//  LRESULT MessageHandler(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
//  LRESULT CommandHandler(WORD wNotifyCode, WORD wID, HWND hWndCtl, BOOL& bHandled);
//  LRESULT NotifyHandler(int idCtrl, LPNMHDR pnmh, BOOL& bHandled);

// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IMyWindow
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
      LPCTSTR pszText = _T("ATL 8.0 : MyWindow");
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
   LRESULT OnMsg(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/);
};

OBJECT_ENTRY_AUTO(__uuidof(MyWindow), CMyWindow)

// <Snippet64>
class CMyCustomWnd : public CWindowImpl<CMyCustomWnd>
{
public:
   // Optionally specify name of the new Windows class
   DECLARE_WND_CLASS(_T("MyName")) 
              // If this macro is not specified in your
              // class, ATL will generate a class name

   BEGIN_MSG_MAP(CMyCustomWnd)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some painting code
      return 0;
   }

};
// </Snippet64>

// <Snippet65>
class CMyEdit : public CWindowImpl<CMyEdit>
{
public:
   // "Edit" is the name of the standard Windows class.
   // "MyEdit" is the name of the new Windows class
   // that will be based on the Edit class.
   DECLARE_WND_SUPERCLASS(_T("MyEdit"), _T("Edit"))

   BEGIN_MSG_MAP(CMyEdit)
      MESSAGE_HANDLER(WM_CHAR, OnChar)
   END_MSG_MAP()

   LRESULT OnChar(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some character handling code
      return 0;
   }
};
// </Snippet65>

// <Snippet66>
class CMyDialog : public CDialogImpl<CMyDialog>
{
public:
   enum { IDD = IDD_MYDLG };

   BEGIN_MSG_MAP(CMyDialog)
      MESSAGE_HANDLER(WM_INITDIALOG, OnInitDialog)
      COMMAND_HANDLER(IDCANCEL, BN_CLICKED, OnBnClickedCancel)
   END_MSG_MAP()

   LRESULT OnInitDialog(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some initialization code
      return 1;
   }
public:
   LRESULT OnBnClickedCancel(WORD /*wNotifyCode*/, WORD /*wID*/, HWND /*hWndCtl*/, BOOL& /*bHandled*/);
};
// </Snippet66>

// <Snippet67>
class CMyContainer : public CMessageMap
{
public:
   CContainedWindow m_wndEdit;
   CContainedWindow m_wndList;

   CMyContainer() : m_wndEdit(_T("Edit"), this, 1), 
                    m_wndList(_T("List"), this, 2)
   {
   }

   BEGIN_MSG_MAP(CMyContainer)
   ALT_MSG_MAP(1)
      // handlers for the Edit window go here
   ALT_MSG_MAP(2)
      // handlers for the List window go here
   END_MSG_MAP()

};
// </Snippet67>

class CMyOneAltClass : public CMessageMap
{
public:
   CContainedWindow m_wndEdit;

   CMyOneAltClass() : m_wndEdit(_T("Edit"), this, 1) 
   {
   }

// <Snippet98>
   BEGIN_MSG_MAP(CMyOneAltClass)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
   ALT_MSG_MAP(1)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   END_MSG_MAP()
// </Snippet98>

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
   LRESULT OnSetFocus(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/) 
   {
      return 0;   
   }
};

class CMyTwoAltClass : public CMessageMap
{
public:
   CContainedWindow m_wndEdit;
   CContainedWindow m_wndList;

   CMyTwoAltClass() : m_wndEdit(_T("Edit"), this, 1), 
                      m_wndList(_T("List"), this, 2)
   {
   }

// <Snippet99>
   BEGIN_MSG_MAP(CMyClass)
   ALT_MSG_MAP(1)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   ALT_MSG_MAP(2)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   END_MSG_MAP()
// </Snippet99>

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
   LRESULT OnSetFocus(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/) 
   {
      return 0;   
   }
   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};

class CMyWinTraitsClass
{
public:
// <Snippet68>
   static DWORD GetWndStyle(DWORD dwStyle);
   static DWORD GetWndExStyle(DWORD dwExStyle);
// </Snippet68>
};

class CChainedObj : public CMessageMap
{
public:
   CChainedObj() {}

   BEGIN_MSG_MAP(CChainedObj)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   END_MSG_MAP()

   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};

// <Snippet88>
class CMyChainWnd : public CWindowImpl<CMyChainWnd>,
   public CDynamicChain
{
public:
   CMyChainWnd() {}

   BEGIN_MSG_MAP(CMyChainWnd)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
      // dynamically chain to the default
      // message map in another object
      CHAIN_MSG_MAP_DYNAMIC(1313)
                // '1313' identifies the object
                // and the message map that will be
                // chained to. '1313' is defined
                // through the SetChainEntry method
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      // Do some painting code
      return 0;
   }

   LRESULT OnSetFocus(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   { 
      return 0;
   }
};
// </Snippet88>

// <Snippet129>
class CMyBaseWindow : public CWindowImpl<CMyBaseWindow>
{
public:
   BEGIN_MSG_MAP(CMyBaseWindow)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   END_MSG_MAP()

   // When a CMyBaseWindow object receives a WM_CREATE message, the message
   // is directed to CMyBaseWindow::OnCreate for the actual processing.
   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};
// </Snippet129>

// <Snippet102>
class CMyExtWindow : public CMyBaseWindow
{
public:
   BEGIN_MSG_MAP(CMyExtWindow)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
      CHAIN_MSG_MAP(CMyBaseWindow)
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }

   LRESULT OnSetFocus(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/) 
   {
      return 0;   
   }
};
// </Snippet102>

class CMyBaseClass : public CMessageMap
{
public:
   BEGIN_MSG_MAP(CMyBaseClass)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   ALT_MSG_MAP(1)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   END_MSG_MAP()

   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
   LRESULT OnSetFocus(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};

// <Snippet107>
class CMyExtClass : public CMyBaseClass
{
public:
  BEGIN_MSG_MAP(CMyExtClass)
     MESSAGE_HANDLER(WM_PAINT, OnPaint)
     // chain to default message map in CMyBaseClass
     CHAIN_MSG_MAP(CMyBaseClass)
  ALT_MSG_MAP(1)
     // chain to first alternative message map in CMyBaseClass
     CHAIN_MSG_MAP(CMyBaseClass)
  ALT_MSG_MAP(2)
     MESSAGE_HANDLER(WM_CHAR, OnChar)
     // chain to alternate message map in CMyBaseClass
     CHAIN_MSG_MAP_ALT(CMyBaseClass, 1)
  END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }

   LRESULT OnChar(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};
// </Snippet107>

class CMyContainedClass : public CMessageMap
{
public:
   CMyContainedClass() {}

   BEGIN_MSG_MAP(CMyBaseClass)
      MESSAGE_HANDLER(WM_CREATE, OnCreate)
   ALT_MSG_MAP(1)
      MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   END_MSG_MAP()

   LRESULT OnCreate(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
   LRESULT OnSetFocus(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};

// <Snippet108>
class CMyContainerClass : public CWindowImpl<CMyContainerClass>
{
public:
   CMyContainedClass m_obj;

   BEGIN_MSG_MAP(CMyContainerClass)
      MESSAGE_HANDLER(WM_PAINT, OnPaint)
      // chain to default message map of m_obj
      CHAIN_MSG_MAP_MEMBER(m_obj)
   ALT_MSG_MAP(1)
      // chain to default message map of m_obj
      CHAIN_MSG_MAP_MEMBER(m_obj)
   ALT_MSG_MAP(2)
      MESSAGE_HANDLER(WM_CHAR, OnChar)
      // chain to alternate message map of m_obj
      CHAIN_MSG_MAP_ALT_MEMBER(m_obj, 1)
   END_MSG_MAP()

   LRESULT OnPaint(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
   LRESULT OnChar(UINT /*nMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }
};
// </Snippet108>

// <Snippet130>
class CMyDialog2 : public CDialogImpl<CMyDialog2>
{
public:
   enum { IDD = IDD_MYDLG };

   BEGIN_MSG_MAP(CMyDialog2)
      NOTIFY_HANDLER(IDC_TREE1, NM_CLICK, OnNMClickTree1)
   END_MSG_MAP()

public:
   // When a CMyDialog2 object receives a WM_NOTIFY message 
   // identified by IDC_TREE1 and NM_CLICK, the message is 
   // directed to CMyDialog2::OnNMClickTree1 for the actual
   // processing.
   LRESULT OnNMClickTree1(int /*idCtrl*/, LPNMHDR pNMHDR, BOOL& /*bHandled*/);
};
// </Snippet130>