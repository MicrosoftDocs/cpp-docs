// AtlEdit.h : Declaration of the CAtlEdit
#pragma once
#include "resource.h"       // main symbols
#include <atlctl.h>
#include "NVC_ATL_Windowing.h"

#if defined(_WIN32_WCE) && !defined(_CE_DCOM) && !defined(_CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA)
#error "Single-threaded COM objects are not properly supported on Windows CE platform, such as the Windows Mobile platforms that do not include full DCOM support. Define _CE_ALLOW_SINGLE_THREADED_OBJECTS_IN_MTA to force ATL to support creating single-thread COM object's and allow use of it's single-threaded COM object implementations. The threading model in your rgs file was set to 'Free' as that is the only threading model supported in non DCOM Windows CE platforms."
#endif

#define OtherInheritedClasses \
   public CComObjectRootEx<CComSingleThreadModel>, \
   public IDispatchImpl<IAtlEdit, &IID_IAtlEdit, &LIBID_NVC_ATL_WindowingLib, /*wMajor =*/ 1, /*wMinor =*/ 0>, \
   public IPersistStreamInitImpl<CAtlEdit>, \
   public IOleControlImpl<CAtlEdit>, \
   public IOleObjectImpl<CAtlEdit>, \
   public IOleInPlaceActiveObjectImpl<CAtlEdit>, \
   public IViewObjectExImpl<CAtlEdit>, \
   public IOleInPlaceObjectWindowlessImpl<CAtlEdit>, \
   public IObjectSafetyImpl<CAtlEdit, INTERFACESAFE_FOR_UNTRUSTED_CALLER>, \
   public CComCoClass<CAtlEdit, &CLSID_AtlEdit>,

#pragma warning(push)
#pragma warning(disable: 4355) // 'this' : used in base member initializer list

// CAtlEdit
// <Snippet90>
class ATL_NO_VTABLE CAtlEdit :
   OtherInheritedClasses
   public CComControl<CAtlEdit>
   // CComControl derives from CWindowImpl, which derives from CMessageMap
{
// <Snippet38>
public:
   // Declare a contained window data member
   CContainedWindow m_ctlEdit;

   // Initialize the contained window:
   // 1. Pass "Edit" to specify that the contained 
   //    window should be based on the standard 
   //    Windows Edit box
   // 2. Pass 'this' pointer to specify that CAtlEdit 
   //    contains the message map to be used for the 
   //    contained window's message processing
   // 3. Pass the identifier of the message map. '1'
   //    identifies the alternate message map declared
   //    with ALT_MSG_MAP(1)
   CAtlEdit()
      : m_ctlEdit(_T("Edit"), this, 1)
   {
      m_bWindowOnly = TRUE;
   }
// </Snippet38>

// <Snippet39>
// Declare the default message map, identified by '0'
BEGIN_MSG_MAP(CAtlEdit)
   MESSAGE_HANDLER(WM_CREATE, OnCreate)
   MESSAGE_HANDLER(WM_SETFOCUS, OnSetFocus)
   CHAIN_MSG_MAP(CComControl<CAtlEdit>)
// Declare an alternate message map, identified by '1'
ALT_MSG_MAP(1)
   MESSAGE_HANDLER(WM_CHAR, OnChar)
END_MSG_MAP()
// </Snippet39>
// </Snippet90>

#pragma warning(pop)

DECLARE_OLEMISC_STATUS(OLEMISC_RECOMPOSEONRESIZE |
   OLEMISC_CANTLINKINSIDE |
   OLEMISC_INSIDEOUT |
   OLEMISC_ACTIVATEWHENVISIBLE |
   OLEMISC_SETCLIENTSITEFIRST
)

DECLARE_REGISTRY_RESOURCEID(IDR_ATLEDIT)


DECLARE_NOT_AGGREGATABLE(CAtlEdit)

BEGIN_COM_MAP(CAtlEdit)
   COM_INTERFACE_ENTRY(IAtlEdit)
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

// <Snippet133>
BEGIN_PROP_MAP(CAtlEdit)
   PROP_ENTRY_TYPE_EX("Caption", DISPID_CAPTION, CLSID_MyPropPage2, IID_IMyDual1, VT_BSTR)
   PROP_ENTRY_TYPE_EX("Enabled", DISPID_ENABLED, CLSID_MyPropPage2, IID_IMyDual1, VT_BOOL)
   PROP_ENTRY_TYPE_EX("Width", DISPID_DRAWWIDTH, CLSID_MyPropPage2, IID_IMyDual2, VT_UINT)
END_PROP_MAP()
// </Snippet133>

   BOOL PreTranslateAccelerator(LPMSG pMsg, HRESULT& hRet)
   {
      if(pMsg->message == WM_KEYDOWN)
      {
         switch(pMsg->wParam)
         {
         case VK_LEFT:
         case VK_RIGHT:
         case VK_UP:
         case VK_DOWN:
         case VK_HOME:
         case VK_END:
         case VK_NEXT:
         case VK_PRIOR:
            hRet = S_FALSE;
            return TRUE;
         }
      }
      //TODO: Add your additional accelerator handling code here
      return FALSE;
   }

   LRESULT OnSetFocus(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled)
   {
      LRESULT lRes = CComControl<CAtlEdit>::OnSetFocus(uMsg, wParam, lParam, bHandled);
      if (m_bInPlaceActive)
      {
         if(!IsChild(::GetFocus()))
            m_ctlEdit.SetFocus();
      }
      return lRes;
   }

// <Snippet40>
   // Define OnCreate handler
   // When the containing window receives a WM_CREATE
   // message, create the contained window by calling
   // CContainedWindow::Create
   LRESULT OnCreate(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      RECT rc;
      GetWindowRect(&rc);
      rc.right -= rc.left;
      rc.bottom -= rc.top;
      rc.top = rc.left = 0;
      m_ctlEdit.Create(m_hWnd, rc, _T("hello"), WS_CHILD | WS_VISIBLE | 
         ES_MULTILINE | ES_AUTOVSCROLL);
      return 0;
   }
// </Snippet40>

   LRESULT OnChar(UINT /*uMsg*/, WPARAM /*wParam*/, LPARAM /*lParam*/, 
      BOOL& /*bHandled*/)
   {
      return 0;   
   }

   STDMETHOD(SetObjectRects)(LPCRECT prcPos,LPCRECT prcClip)
   {
      IOleInPlaceObjectWindowlessImpl<CAtlEdit>::SetObjectRects(prcPos, prcClip);
      int cx, cy;
      cx = prcPos->right - prcPos->left;
      cy = prcPos->bottom - prcPos->top;
      ::SetWindowPos(m_ctlEdit.m_hWnd, NULL, 0,
         0, cx, cy, SWP_NOZORDER | SWP_NOACTIVATE);
      return S_OK;
   }

// IViewObjectEx
   DECLARE_VIEW_STATUS(VIEWSTATUS_SOLIDBKGND | VIEWSTATUS_OPAQUE)

// IAtlEdit

   DECLARE_PROTECT_FINAL_CONSTRUCT()

   HRESULT FinalConstruct()
   {
      return S_OK;
   }

   void FinalRelease()
   {
   }
};

OBJECT_ENTRY_AUTO(__uuidof(AtlEdit), CAtlEdit)
