---
title: "CWindowImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CWindowImpl"
  - "ATL.CWindowImpl"
  - "CWindowImpl"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CWindowImpl class"
  - "subclassing windows, ATL"
ms.assetid: 02eefd45-a0a6-4d1b-99f6-dbf627e2cc2f
caps.latest.revision: 22
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CWindowImpl Class
Provides methods for creating or subclassing a window.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the [!INCLUDE[wrt](../../atl/reference/includes/wrt_md.md)].  
  
## Syntax  
  
```
template <class   T, class TBase = CWindow, class TWinTraits = CControlWinTraits>
    class ATL_NO_VTABLE CWindowImpl :
    public CWindowImplBaseT<TBase,
    TWinTraits>
```    
  
#### Parameters  
 `T`  
 Your new class, derived from `CWindowImpl`.  
  
 *TBase*  
 The base class of your class. By default, the base class is [CWindow](../../atl/reference/cwindow-class.md).  
  
 `TWinTraits`  
 A [traits class](../../atl/understanding-window-traits.md) that defines styles for your window. The default is `CControlWinTraits`.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CWindowImpl::Create](#cwindowimpl__create)|Creates a window.|  
  
### CWindowImplBaseT Methods  
  
|||  
|-|-|  
|[DefWindowProc](#cwindowimpl__defwindowproc)|Provides default message processing.|  
|[GetCurrentMessage](#cwindowimpl__getcurrentmessage)|Returns the current message.|  
|[GetWindowProc](#cwindowimpl__getwindowproc)|Returns the current window procedure.|  
|[OnFinalMessage](#cwindowimpl__onfinalmessage)|Called after the last message is received (typically `WM_NCDESTROY`).|  
|[SubclassWindow](#cwindowimpl__subclasswindow)|Subclasses a window.|  
|[UnsubclassWindow](#cwindowimpl__unsubclasswindow)|Restores a previously subclassed window.|  
  
### Static Methods  
  
|||  
|-|-|  
|[GetWndClassInfo](#cwindowimpl__getwndclassinfo)|Returns a static instance of [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md), which manages the window class information.|  
|[WindowProc](#cwindowimpl__windowproc)|Processes messages sent to the window.|  
  
### Data Members  
  
|||  
|-|-|  
|[m_pfnSuperWindowProc](#cwindowimpl__m_pfnsuperwindowproc)|Points to the window class's original window procedure.|  
  
## Remarks  
 You can use `CWindowImpl` to create a window or subclass an existing window. the `CWindowImpl` window procedure uses a message map to direct messages to the appropriate handlers.  
  
 `CWindowImpl::Create` creates a window based on the window class information that's managed by [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md). `CWindowImpl` contains the [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) macro, which means `CWndClassInfo` registers a new window class. If you want to superclass an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro. In this case, `CWndClassInfo` registers a window class that's based on an existing class but uses `CWindowImpl::WindowProc`. For example:  
  
 [!code-cpp[NVC_ATL_Windowing#43](../../atl/codesnippet/cpp/cwindowimpl-class_1.h)]  
  
> [!NOTE]
>  Because `CWndClassInfo` manages the information for just one window class, each window created through an instance of `CWindowImpl` is based on the same window class.  
  
 `CWindowImpl` also supports window subclassing. The `SubclassWindow` method attaches an existing window to the `CWindowImpl` object and changes the window procedure to `CWindowImpl::WindowProc`. Each instance of `CWindowImpl` can subclass a different window.  
  
> [!NOTE]
>  For any given `CWindowImpl` object, call either **Create** or `SubclassWindow`. Don't invoke both methods on the same object.  
  
 In addition to `CWindowImpl`, ATL provides [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) to create a window that's contained in another object.  
  
 The base class destructor (~ **CWindowImplRoot**) ensures that the window is gone before the object is destroyed.  
  
 `CWindowImpl` derives from **CWindowImplBaseT**, which derives from **CWindowImplRoot**, which derives from **TBase** and [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
|For more information about|See|  
|--------------------------------|---------|  
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|  
|Using windows in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|  
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|  
  
## Inheritance Hierarchy  
 [CMessageMap](../../atl/reference/cmessagemap-class.md)  
  
 `TBase`  
  
 `CWindowImplRoot`  
  
 `CWindowImplBaseT`  
  
 `CWindowImpl`  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="cwindowimpl__create"></a>  CWindowImpl::Create  
 Creates a window based on a new window class.  
  
```
HWND Create(
    HWND hWndParent,
    _U_RECT rect = NULL,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```  
  
### Parameters  
 `hWndParent`  
 [in] The handle to the parent or owner window.  
  
 `rect`  
 [in] A [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the position of the window. The `RECT` can be passed by pointer or by reference.  
  
 `szWindowName`  
 [in] Specifies the name of the window. The default value is **NULL**.  
  
 `dwStyle`  
 [in] The style of the window. This value is combined with the style provided by the traits class for the window. The default value gives the traits class full control over the style. For a list of possible values, see [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] The extended window style. This value is combined with the style provided by the traits class for the window. The default value gives the traits class full control over the style. For a list of possible values, see [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] For a child window, the window identifier. For a top-level window, a menu handle for the window. The default value is **0U**.  
  
 `lpCreateParam`  
 [in] A pointer to window-creation data. For a full description, see the description for the final parameter to [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### Return Value  
 If successful, the handle to the newly created window. Otherwise, **NULL**.  
  
### Remarks  
 **Create** first registers the window class if it has not yet been registered. The newly created window is automatically attached to the `CWindowImpl` object.  
  
> [!NOTE]
>  Do not call **Create** if you have already called [SubclassWindow](#cwindowimpl__subclasswindow).  
  
 To use a window class that is based on an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro. The existing window class's window procedure is saved in [m_pfnSuperWindowProc](#cwindowimpl__m_pfnsuperwindowproc). For more information, see the [CWindowImpl](../../atl/reference/cwindowimpl-class.md) overview.  
  
> [!NOTE]
>  If 0 is used as the value for the `MenuOrID` parameter, it must be specified as 0U (the default value) to avoid a compiler error.  
  
##  <a name="cwindowimpl__defwindowproc"></a>  CWindowImpl::DefWindowProc  
 Called by [WindowProc](#cwindowimpl__windowproc) to process messages not handled by the message map.  
  
```
LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);

    LRESULT DefWindowProc();
```  
  
### Parameters  
 `uMsg`  
 [in] The message sent to the window.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
### Return Value  
 The result of the message processing.  
  
### Remarks  
 By default, `DefWindowProc` calls the [CallWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633571) Win32 function to send the message information to the window procedure specified in [m_pfnSuperWindowProc](#cwindowimpl__m_pfnsuperwindowproc).  
  
 The function with no parameters automatically retrieves the needed parameters from the current message.  
  
##  <a name="cwindowimpl__getcurrentmessage"></a>  CWindowImpl::GetCurrentMessage  
 Returns the current message, packaged in the `MSG` structure.  
  
```
const MSG* GetCurrentMessage();
```  
  
### Return Value  
 The current message.  
  
##  <a name="cwindowimpl__getwindowproc"></a>  CWindowImpl::GetWindowProc  
 Returns `WindowProc`, the current window procedure.  
  
```
virtual WNDPROC GetWindowProc();
```  
  
### Return Value  
 The current window procedure.  
  
### Remarks  
 Override this method to replace the window procedure with your own.  
  
##  <a name="cwindowimpl__getwndclassinfo"></a>  CWindowImpl::GetWndClassInfo  
 Called by [Create](#cwindowimpl__create) to access the window class information.  
  
```
static CWndClassInfo& GetWndClassInfo();
```  
  
### Return Value  
 A static instance of [CWndClassInfo](../../atl/reference/cwndclassinfo-class.md).  
  
### Remarks  
 By default, `CWindowImpl` obtains this method through the [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) macro, which specifies a new window class.  
  
 To superclass an existing window class, derive your class from `CWindowImpl` and include the [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro to override `GetWndClassInfo`. For more information, see the [CWindowImpl](../../atl/reference/cwindowimpl-class.md) overview.  
  
 Besides using the `DECLARE_WND_CLASS` and `DECLARE_WND_SUPERCLASS` macros, you can override `GetWndClassInfo` with your own implementation.  
  
##  <a name="cwindowimpl__m_pfnsuperwindowproc"></a>  CWindowImpl::m_pfnSuperWindowProc  
 Depending on the window, points to one of the following window procedures.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### Remarks  
  
|Type of window|Window procedure|  
|--------------------|----------------------|  
|A window based on a new window class, specified through the [DECLARE_WND_CLASS](http://msdn.microsoft.com/library/55247a72-fb9e-4bde-87f3-747c08076971) macro.|The [DefWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633572) Win32 function.|  
|A window based on a window class that modifies an existing class, specified through the [DECLARE_WND_SUPERCLASS](http://msdn.microsoft.com/library/650337b6-4973-41e5-8c36-55f90327bdcd) macro.|The existing window class's window procedure.|  
|A subclassed window.|The subclassed window's original window procedure.|  
  
 [CWindowImpl::DefWindowProc](#cwindowimpl__defwindowproc) sends message information to the window procedure saved in `m_pfnSuperWindowProc`.  
  
##  <a name="cwindowimpl__onfinalmessage"></a>  CWindowImpl::OnFinalMessage  
 Called after receiving the last message (typically `WM_NCDESTROY`).  
  
```
virtual void OnFinalMessage(HWND   hWnd);
```  
  
### Parameters  
 `hWnd`  
 [in] A handle to the window being destroyed.  
  
### Remarks  
 The default implementation of `OnFinalMessage` does nothing, but you can override this function to handle cleanup before destroying a window. If you want to automatically delete your object upon the window destruction, you can call `delete this;` in this function.  
  
##  <a name="cwindowimpl__subclasswindow"></a>  CWindowImpl::SubclassWindow  
 Subclasses the window identified by `hWnd` and attaches it to the `CWindowImpl` object.  
  
```
BOOL SubclassWindow(HWND   hWnd);
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the window being subclassed.  
  
### Return Value  
 **TRUE** if the window is successfully subclassed; otherwise, **FALSE**.  
  
### Remarks  
 The subclassed window now uses [CWindowImpl::WindowProc](#cwindowimpl__windowproc). The original window procedure is saved in [m_pfnSuperWindowProc](#cwindowimpl__m_pfnsuperwindowproc).  
  
> [!NOTE]
>  Do not call `SubclassWindow` if you have already called [Create](#cwindowimpl__create).  
  
##  <a name="cwindowimpl__unsubclasswindow"></a>  CWindowImpl::UnsubclassWindow  
 Detaches the subclassed window from the `CWindowImpl` object and restores the original window procedure, saved in [m_pfnSuperWindowProc](#cwindowimpl__m_pfnsuperwindowproc).  
  
```
HWND UnsubclassWindow();
```  
  
### Return Value  
 The handle to the window previously subclassed.  
  
##  <a name="cwindowimpl__windowproc"></a>  CWindowImpl::WindowProc  
 This static function implements the window procedure.  
  
```
static LRESULT CALLBACK WindowProc(
    HWND hWnd,
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the window.  
  
 `uMsg`  
 [in] The message sent to the window.  
  
 `wParam`  
 [in] Additional message-specific information.  
  
 `lParam`  
 [in] Additional message-specific information.  
  
### Return Value  
 The result of the message processing.  
  
### Remarks  
 `WindowProc` uses the default message map (declared with [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)) to direct messages to the appropriate handlers. If necessary, `WindowProc` calls [DefWindowProc](#cwindowimpl__defwindowproc) for additional message processing. If the final message is not handled, `WindowProc` does the following:  
  
-   Performs unsubclassing if the window was unsubclassed.  
  
-   Clears `m_hWnd`.  
  
-   Calls [OnFinalMessage](#cwindowimpl__onfinalmessage) before the window is destroyed.  
  
 You can override `WindowProc` to provide a different mechanism for handling messages.  
  
## See Also  
 [BEGIN_MSG_MAP](http://msdn.microsoft.com/library/8bbb5af9-18b1-48c6-880e-166f599ee554)   
 [CComControl Class](../../atl/reference/ccomcontrol-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
