---
title: "CContainedWindowT Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CContainedWindow"
  - "CContainedWindowT"
  - "ATL.CContainedWindowT"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CContainedWindow class"
  - "contained windows"
  - "CContainedWindowT class"
ms.assetid: cde0ca36-9347-4068-995a-d294dae57ca9
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
# CContainedWindowT Class
This class implements a window contained within another object.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template <class TBase = CWindow,  class TWinTraits = CControlWinTraits>  class CContainedWindowT :  public TBase
```  
  
#### Parameters  
 *TBase*  
 The base class of your new class. The default base class is `CWindow`.  
  
 `TWinTraits`  
 A traits class that defines styles for your window. The default is `CControlWinTraits`.  
  
> [!NOTE]
> [CContainedWindow](../Topic/CContainedWindow.md) is a specialization of `CContainedWindowT`. If you want to change the base class or traits, use `CContainedWindowT` directly.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CContainedWindowT::CContainedWindowT](../Topic/CContainedWindowT::CContainedWindowT.md)|Constructor. Initializes data members to specify which message map will process the contained window's messages.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CContainedWindowT::Create](../Topic/CContainedWindowT::Create.md)|Creates a window.|  
|[CContainedWindowT::DefWindowProc](../Topic/CContainedWindowT::DefWindowProc.md)|Provides default message processing.|  
|[CContainedWindowT::GetCurrentMessage](../Topic/CContainedWindowT::GetCurrentMessage.md)|Returns the current message.|  
|[CContainedWindowT::RegisterWndSuperclass](../Topic/CContainedWindowT::RegisterWndSuperclass.md)|Registers the window class of the contained window.|  
|[CContainedWindowT::SubclassWindow](../Topic/CContainedWindowT::SubclassWindow.md)|Subclasses a window.|  
|[CContainedWindowT::SwitchMessageMap](../Topic/CContainedWindowT::SwitchMessageMap.md)|Changes which message map is used to process the contained window's messages.|  
|[CContainedWindowT::UnsubclassWindow](../Topic/CContainedWindowT::UnsubclassWindow.md)|Restores a previously subclassed window.|  
|[CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md)|(Static) Processes messages sent to the contained window.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CContainedWindowT::m_dwMsgMapID](../Topic/CContainedWindowT::m_dwMsgMapID.md)|Identifies which message map will process the contained window's messages.|  
|[CContainedWindowT::m_lpszClassName](../Topic/CContainedWindowT::m_lpszClassName.md)|Specifies the name of an existing window class on which a new window class will be based.|  
|[CContainedWindowT::m_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md)|Points to the window class's original window procedure.|  
|[CContainedWindowT::m_pObject](../Topic/CContainedWindowT::m_pObject.md)|Points to the containing object.|  
  
## Remarks  
 `CContainedWindowT` implements a window contained within another object. `CContainedWindowT`'s window procedure uses a message map in the containing object to direct messages to the appropriate handlers. When constructing a `CContainedWindowT` object, you specify which message map should be used.  
  
 `CContainedWindowT` allows you to create a new window by superclassing an existing window class. The **Create** method first registers a window class that is based on an existing class but uses `CContainedWindowT::WindowProc`. **Create** then creates a window based on this new window class. Each instance of `CContainedWindowT` can superclass a different window class.  
  
 `CContainedWindowT` also supports window subclassing. The `SubclassWindow` method attaches an existing window to the `CContainedWindowT` object and changes the window procedure to `CContainedWindowT::WindowProc`. Each instance of `CContainedWindowT` can subclass a different window.  
  
> [!NOTE]
>  For any given `CContainedWindowT` object, call either **Create** or `SubclassWindow`. You should not invoke both methods on the same object.  
  
 When you use the **Add control based on** option in the ATL Project Wizard, the wizard will automatically add a `CContainedWindowT` data member to the class implementing the control. The following example shows how the contained window is declared:  
  
 [!code-cpp[NVC_ATL_Windowing#38](../../atl/codesnippet/CPP/ccontainedwindowt-class_1.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#39](../../atl/codesnippet/CPP/ccontainedwindowt-class_2.h)]  
  
 [!code-cpp[NVC_ATL_Windowing#40](../../atl/codesnippet/CPP/ccontainedwindowt-class_3.h)]  
  
|For more information about|See|  
|--------------------------------|---------|  
|Creating controls|[ATL Tutorial](../../atl/active-template-library-atl-tutorial.md)|  
|Using windows in ATL|[ATL Window Classes](../../atl/atl-window-classes.md)|  
|ATL Project Wizard|[Creating an ATL Project](../../atl/reference/creating-an-atl-project.md)|  
|Windows|[Windows](http://msdn.microsoft.com/library/windows/desktop/ms632595) and subsequent topics in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)]|  
  
## Inheritance Hierarchy  
 `TBase`  
  
 `CContainedWindowT`  
  
## Requirements  
 **Header:** atlwin.h  
  
##  <a name="ccontainedwindowt__ccontainedwindowt"></a>  CContainedWindowT::CContainedWindowT  
 The constructor initializes data members.  
  
```
CContainedWindowT(LPTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID = 0);

    CContainedWindowT(CMessageMap* pObject,
    DWORD dwMsgMapID = 0)
    CContainedWindowT();
```     
  
### Parameters  
 `lpszClassName`  
 [in] The name of an existing window class on which the contained window will be based.  
  
 `pObject`  
 [in] A pointer to the containing object that declares the message map. This object's class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifies the message map that will process the contained window's messages. The default value, 0, specifies the default message map declared with [BEGIN_MSG_MAP](../Topic/BEGIN_MSG_MAP.md). To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](../Topic/ALT_MSG_MAP.md), pass `msgMapID`.  
  
### Remarks  
 If you want to create a new window through [Create](../Topic/CContainedWindowT::Create.md), you must pass the name of an existing window class for the `lpszClassName` parameter. For an example, see the [CContainedWindow](../../atl/reference/ccontainedwindowt-class.md) overview.  
  
 There are three constructors:  
  
-   The constructor with three arguments is the one typically called.  
  
-   The constructor with two arguments uses the class name from **TBase::GetWndClassName**.  
  
-   The constructor with no arguments is used if you want to supply the arguments later. You must supply the window class name, message map object, and message map ID when you later call **Create**.  
  
 If you subclass an existing window through [SubclassWindow](../Topic/CContainedWindowT::SubclassWindow.md), the `lpszClassName` value will not be used; therefore, you can pass **NULL** for this parameter.  
  
##  <a name="ccontainedwindowt__create"></a>  CContainedWindowT::Create  
 Calls [RegisterWndSuperclass](../Topic/CContainedWindowT::RegisterWndSuperclass.md) to register a window class that is based on an existing class but uses [CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md).  
  
```
HWND Create(HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

    HWND Create(
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);

    HWND Create(LPCTSTR lpszClassName,
    CMessageMap* pObject,
    DWORD dwMsgMapID,
    HWND hWndParent,
    _U_RECT rect,
    LPCTSTR szWindowName = NULL,
    DWORD dwStyle = 0,
    DWORD dwExStyle = 0,
    _U_MENUorID MenuOrID = 0U,
    LPVOID lpCreateParam = NULL);
```  
  
### Parameters  
 `lpszClassName`  
 [in] The name of an existing window class on which the contained window will be based.  
  
 `pObject`  
 [in] A pointer to the containing object that declares the message map. This object's class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md).  
  
 `dwMsgMapID`  
 [in] Identifies the message map that will process the contained window's messages. The default value, 0, specifies the default message map declared with [BEGIN_MSG_MAP](../Topic/BEGIN_MSG_MAP.md). To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](../Topic/ALT_MSG_MAP.md), pass `msgMapID`.  
  
 `hWndParent`  
 [in] The handle to the parent or owner window.  
  
 `rect`  
 [in] A [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure specifying the position of the window. The `RECT` can be passed by pointer or by reference.  
  
 `szWindowName`  
 [in] Specifies the name of the window. The default value is **NULL**.  
  
 `dwStyle`  
 [in] The style of the window. The default value is **WS_CHILD &#124; WS_VISIBLE**. For a list of possible values, see [CreateWindow](http://msdn.microsoft.com/library/windows/desktop/ms632679) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `dwExStyle`  
 [in] The extended window style. The default value is 0, meaning no extended style. For a list of possible values, see [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680) in the [!INCLUDE[winSDK](../../atl/includes/winsdk_md.md)].  
  
 `MenuOrID`  
 [in] For a child window, the window identifier. For a top-level window, a menu handle for the window. The default value is **0U**.  
  
 `lpCreateParam`  
 [in] A pointer to window-creation data. For a full description, see the description for the final parameter to [CreateWindowEx](http://msdn.microsoft.com/library/windows/desktop/ms632680).  
  
### Return Value  
 If successful, the handle to the newly created window; otherwise, **NULL**.  
  
### Remarks  
 The existing window class name is saved in [m_lpszClassName](../Topic/CContainedWindowT::m_lpszClassName.md). **Create** then creates a window based on this new class. The newly created window is automatically attached to the `CContainedWindowT` object.  
  
> [!NOTE]
>  Do not call **Create** if you have already called [SubclassWindow](../Topic/CContainedWindowT::SubclassWindow.md).  
  
> [!NOTE]
>  If 0 is used as the value for the `MenuOrID` parameter, it must be specified as 0U (the default value) to avoid a compiler error.  
  
##  <a name="ccontainedwindowt__defwindowproc"></a>  CContainedWindowT::DefWindowProc  
 Called by [WindowProc](../Topic/CContainedWindowT::WindowProc.md) to process messages not handled by the message map.  
  
```
LRESULT DefWindowProc()
    LRESULT DefWindowProc(
    UINT uMsg,
    WPARAM wParam,
    LPARAM lParam);
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
 By default, `DefWindowProc` calls the [CallWindowProc](http://msdn.microsoft.com/library/windows/desktop/ms633571) Win32 function to send the message information to the window procedure specified in [m_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md).  
  
##  <a name="ccontainedwindowt__getcurrentmessage"></a>  CContainedWindowT::GetCurrentMessage  
 Returns the current message ( **m_pCurrentMsg**).  
  
```
const _ATL_MSG* GetCurrentMessage();
```  
  
### Return Value  
 The current message, packaged in the `MSG` structure.  
  
##  <a name="ccontainedwindowt__m_dwmsgmapid"></a>  CContainedWindowT::m_dwMsgMapID  
 Holds the identifier of the message map currently being used for the contained window.  
  
```
DWORD m_dwMsgMapID;
```  
  
### Remarks  
 This message map must be declared in the containing object.  
  
 The default message map, declared with [BEGIN_MSG_MAP](../Topic/BEGIN_MSG_MAP.md), is always identified by zero. An alternate message map, declared with [ALT_MSG_MAP(msgMapID)](../Topic/ALT_MSG_MAP.md), is identified by `msgMapID`.  
  
 `m_dwMsgMapID` is first initialized by the constructor and can be changed by calling [SwitchMessageMap](../Topic/CContainedWindowT::SwitchMessageMap.md). For an example, see the [CContainedWindowT Overview](../../atl/reference/ccontainedwindowt-class.md).  
  
##  <a name="ccontainedwindowt__m_lpszclassname"></a>  CContainedWindowT::m_lpszClassName  
 Specifies the name of an existing window class.  
  
```
LPTSTR m_lpszClassName;
```  
  
### Remarks  
 When you create a window, [Create](../Topic/CContainedWindowT::Create.md) registers a new window class that is based on this existing class but uses [CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md).  
  
 `m_lpszClassName` is initialized by the constructor. For an example, see the [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) overview.  
  
##  <a name="ccontainedwindowt__m_pfnsuperwindowproc"></a>  CContainedWindowT::m_pfnSuperWindowProc  
 If the contained window is subclassed, `m_pfnSuperWindowProc` points to the original window procedure of the window class.  
  
```
WNDPROC m_pfnSuperWindowProc;
```  
  
### Remarks  
 If the contained window is superclassed, meaning it is based on a window class that modifies an existing class, `m_pfnSuperWindowProc` points to the existing window class's window procedure.  
  
 The [DefWindowProc](../Topic/CContainedWindowT::DefWindowProc.md) method sends message information to the window procedure saved in `m_pfnSuperWindowProc`.  
  
##  <a name="ccontainedwindowt__m_pobject"></a>  CContainedWindowT::m_pObject  
 Points to the object containing the `CContainedWindowT` object.  
  
```
CMessageMap* m_pObject;
```  
  
### Remarks  
 This container, whose class must derive from [CMessageMap](../../atl/reference/cmessagemap-class.md), declares the message map used by the contained window.  
  
 `m_pObject` is initialized by the constructor. For an example, see the [CContainedWindowT](../../atl/reference/ccontainedwindowt-class.md) overview.  
  
##  <a name="ccontainedwindowt__registerwndsuperclass"></a>  CContainedWindowT::RegisterWndSuperclass  
 Called by [Create](../Topic/CContainedWindowT::Create.md) to register the window class of the contained window.  
  
```
ATOM RegisterWndSuperClass();
```  
  
### Return Value  
 If successful, an atom that uniquely identifies the window class being registered; otherwise, zero.  
  
### Remarks  
 This window class is based on an existing class but uses [CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md). The existing window class's name and window procedure are saved in [m_lpszClassName](../Topic/CContainedWindowT::m_lpszClassName.md) and [m_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md), respectively.  
  
##  <a name="ccontainedwindowt__subclasswindow"></a>  CContainedWindowT::SubclassWindow  
 Subclasses the window identified by `hWnd` and attaches it to the `CContainedWindowT` object.  
  
```
BOOL SubclassWindow(HWND hWnd);
```  
  
### Parameters  
 `hWnd`  
 [in] The handle to the window being subclassed.  
  
### Return Value  
 **TRUE** if the window is successfully subclassed; otherwise, **FALSE**.  
  
### Remarks  
 The subclassed window now uses [CContainedWindowT::WindowProc](../Topic/CContainedWindowT::WindowProc.md). The original window procedure is saved in [m_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md).  
  
> [!NOTE]
>  Do not call `SubclassWindow` if you have already called [Create](../Topic/CContainedWindowT::Create.md).  
  
##  <a name="ccontainedwindowt__switchmessagemap"></a>  CContainedWindowT::SwitchMessageMap  
 Changes which message map will be used to process the contained window's messages.  
  
```
void SwitchMessageMap(DWORD dwMsgMapID);
```  
  
### Parameters  
 `dwMsgMapID`  
 [in] The message map identifier. To use the default message map declared with [BEGIN_MSG_MAP](../Topic/BEGIN_MSG_MAP.md), pass zero. To use an alternate message map declared with [ALT_MSG_MAP(msgMapID)](../Topic/ALT_MSG_MAP.md), pass `msgMapID`.  
  
### Remarks  
 The message map must be defined in the containing object.  
  
 You initially specify the message map identifier in the constructor.  
  
##  <a name="ccontainedwindowt__unsubclasswindow"></a>  CContainedWindowT::UnsubclassWindow  
 Detaches the subclassed window from the `CContainedWindowT` object and restores the original window procedure, saved in [m_pfnSuperWindowProc](../Topic/CContainedWindowT::m_pfnSuperWindowProc.md).  
  
```
HWND UnsubclassWindow(BOOL bForce = FALSE);
```  
  
### Parameters  
 `bForce`  
 [in] Set to **TRUE** to force the original window procedure to be restored even if the window procedure for this `CContainedWindowT` object is not currently active. If `bForce` is set to **FALSE** and the window procedure for this `CContainedWindowT` object is not currently active, the original window procedure will not be restored.  
  
### Return Value  
 The handle to the window previously subclassed. If `bForce` is set to **FALSE** and the window procedure for this `CContainedWindowT` object is not currently active, returns **NULL**.  
  
### Remarks  
 Use this method only if you want to restore the original window procedure before the window is destroyed. Otherwise, [WindowProc](../Topic/CContainedWindowT::WindowProc.md) will automatically do this when the window is destroyed.  
  
##  <a name="ccontainedwindowt__windowproc"></a>  CContainedWindowT::WindowProc  
 This static method implements the window procedure.  
  
```
static LRESULT CALLBACK WindowProc(HWND hWnd,
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
 `WindowProc` directs messages to the message map identified by [m_dwMsgMapID](../Topic/CContainedWindowT::m_dwMsgMapID.md). If necessary, `WindowProc` calls [DefWindowProc](../Topic/CContainedWindowT::DefWindowProc.md) for additional message processing.  
  
## See Also  
 [CWindow Class](../../atl/reference/cwindow-class.md)   
 [CWindowImpl Class](../../atl/reference/cwindowimpl-class.md)   
 [CMessageMap Class](../../atl/reference/cmessagemap-class.md)   
 [BEGIN_MSG_MAP](../Topic/BEGIN_MSG_MAP.md)   
 [ALT_MSG_MAP](../Topic/ALT_MSG_MAP.md)   
 [Class Overview](../../atl/atl-class-overview.md)







