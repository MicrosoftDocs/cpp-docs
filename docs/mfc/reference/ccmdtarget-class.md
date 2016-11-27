---
title: "CCmdTarget Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CCmdTarget"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "message maps, CCmdTarget base class"
  - "command targets"
  - "CCmdTarget class"
  - "command routing, command targets"
  - "targets, command"
ms.assetid: 8883b132-2057-4ce0-a5f2-88979f8f2b13
caps.latest.revision: 23
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
# CCmdTarget Class
The base class for the Microsoft Foundation Class Library message-map architecture.  
  
## Syntax  
  
```  
class CCmdTarget : public CObject  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CCmdTarget::CCmdTarget](#ccmdtarget__ccmdtarget)|Constructs a `CCmdTarget` object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CCmdTarget::BeginWaitCursor](#ccmdtarget__beginwaitcursor)|Displays the cursor as an hourglass cursor.|  
|[CCmdTarget::DoOleVerb](#ccmdtarget__dooleverb)|Causes an action specified by an OLE verb to be performed.|  
|[CCmdTarget::EnableAutomation](#ccmdtarget__enableautomation)|Allows OLE automation for the `CCmdTarget` object.|  
|[CCmdTarget::EnableConnections](#ccmdtarget__enableconnections)|Enables event firing over connection points.|  
|[CCmdTarget::EnableTypeLib](#ccmdtarget__enabletypelib)|Enables an object's type library.|  
|[CCmdTarget::EndWaitCursor](#ccmdtarget__endwaitcursor)|Returns to the previous cursor.|  
|[CCmdTarget::EnumOleVerbs](#ccmdtarget__enumoleverbs)|Enumerates an object's OLE verbs.|  
|[CCmdTarget::FromIDispatch](#ccmdtarget__fromidispatch)|Returns a pointer to the `CCmdTarget` object associated with the `IDispatch` pointer.|  
|[CCmdTarget::GetDispatchIID](#ccmdtarget__getdispatchiid)|Gets the primary dispatch interface ID.|  
|[CCmdTarget::GetIDispatch](#ccmdtarget__getidispatch)|Returns a pointer to the `IDispatch` object associated with the `CCmdTarget` object.|  
|[CCmdTarget::GetTypeInfoCount](#ccmdtarget__gettypeinfocount)|Retrieves the number of type information interfaces that an object provides.|  
|[CCmdTarget::GetTypeInfoOfGuid](#ccmdtarget__gettypeinfoofguid)|Retrieves the type description that corresponds to the specified GUID.|  
|[CCmdTarget::GetTypeLib](#ccmdtarget__gettypelib)|Gets a pointer to a type library.|  
|[CCmdTarget::GetTypeLibCache](#ccmdtarget__gettypelibcache)|Gets the type library cache.|  
|[CCmdTarget::IsInvokeAllowed](#ccmdtarget__isinvokeallowed)|Enables automation method invocation.|  
|[CCmdTarget::IsResultExpected](#ccmdtarget__isresultexpected)|Returns nonzero if an automation function should return a value.|  
|[CCmdTarget::OnCmdMsg](#ccmdtarget__oncmdmsg)|Routes and dispatches command messages.|  
|[CCmdTarget::OnFinalRelease](#ccmdtarget__onfinalrelease)|Cleans up after the last OLE reference is released.|  
|[CCmdTarget::RestoreWaitCursor](#ccmdtarget__restorewaitcursor)|Restores the hourglass cursor.|  
  
## Remarks  
 A message map routes commands or messages to the member functions you write to handle them. (A command is a message from a menu item, command button, or accelerator key.)  
  
 Key framework classes derived from `CCmdTarget` include [CView](../../mfc/reference/cview-class.md), [CWinApp](../../mfc/reference/cwinapp-class.md), [CDocument](../../mfc/reference/cdocument-class.md), [CWnd](../../mfc/reference/cwnd-class.md), and [CFrameWnd](../../mfc/reference/cframewnd-class.md). If you intend for a new class to handle messages, derive the class from one of these `CCmdTarget`-derived classes. You will rarely derive a class from `CCmdTarget` directly.  
  
 For an overview of command targets and `OnCmdMsg` routing, see [Command Targets](../../mfc/command-targets.md), [Command Routing](../../mfc/command-routing.md), and [Mapping Messages](../../mfc/mapping-messages.md).  
  
 `CCmdTarget` includes member functions that handle the display of an hourglass cursor. Display the hourglass cursor when you expect a command to take a noticeable time interval to execute.  
  
 Dispatch maps, similar to message maps, are used to expose OLE automation `IDispatch` functionality. By exposing this interface, other applications (such as Visual Basic) can call into your application.  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CCmdTarget`  
  
## Requirements  
 **Header:** afxwin.h  
  
##  <a name="ccmdtarget__beginwaitcursor"></a>  CCmdTarget::BeginWaitCursor  
 Call this function to display the cursor as an hourglass when you expect a command to take a noticeable time interval to execute.  
  
```  
void BeginWaitCursor();
```  
  
### Remarks  
 The framework calls this function to show the user that it is busy, such as when a **CDocument** object loads or saves itself to a file.  
  
 The actions of `BeginWaitCursor` are not always effective outside of a single message handler as other actions, such as `OnSetCursor` handling, could change the cursor.  
  
 Call `EndWaitCursor` to restore the previous cursor.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="ccmdtarget__ccmdtarget"></a>  CCmdTarget::CCmdTarget  
 Constructs a `CCmdTarget` object.  
  
```  
CCmdTarget();
```  
  
##  <a name="ccmdtarget__dooleverb"></a>  CCmdTarget::DoOleVerb  
 Causes an action specified by an OLE verb to be performed.  
  
```  
BOOL DoOleVerb(
    LONG iVerb,  
    LPMSG lpMsg,  
    HWND hWndParent,  
    LPCRECT lpRect);
```  
  
### Parameters  
 `iVerb`  
 Numerical identifier of the verb.  
  
 `lpMsg`  
 Pointer to the [MSG](http://msdn.microsoft.com/library/windows/desktop/ms644958) structure describing the event (such as a double-click) that invoked the verb.  
  
 `hWndParent`  
 Handle of the document window containing the object.  
  
 `lpRect`  
 Pointer to the [RECT](http://msdn.microsoft.com/library/windows/desktop/dd162897) structure containing the coordinates, in pixels, that define an object's bounding rectangle in *hwndParent*.  
  
### Return Value  
 TRUE if successful, otherwise FALSE.  
  
### Remarks  
 This member function is basically an implementation of [IOleObject::DoVerb](http://msdn.microsoft.com/library/windows/desktop/ms694508). The possible actions are enumerated by [CCmdTarget::EnumOleVerbs](#ccmdtarget__enumoleverbs).  
  
##  <a name="ccmdtarget__enableautomation"></a>  CCmdTarget::EnableAutomation  
 Call this function to enable OLE automation for an object.  
  
```  
void EnableAutomation();
```  
  
### Remarks  
 This function is typically called from the constructor of your object and should only be called if a dispatch map has been declared for the class. For more information on automation see the articles [Automation Clients](../../mfc/automation-clients.md) and [Automation Servers](../../mfc/automation-servers.md).  
  
##  <a name="ccmdtarget__enableconnections"></a>  CCmdTarget::EnableConnections  
 Enables event firing over connection points.  
  
```  
void EnableConnections();
```  
  
### Remarks  
 To enable connection points, call this member function in the constructor of your derived class.  
  
##  <a name="ccmdtarget__enabletypelib"></a>  CCmdTarget::EnableTypeLib  
 Enables an object's type library.  
  
```  
void EnableTypeLib();
```  
  
### Remarks  
 Call this member function in the constructor of your `CCmdTarget`-derived object if it provides type information. For more information, see Knowledge Base article Q185720, "HOWTO: Provide Type Information From an MFC Automation Server." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="ccmdtarget__endwaitcursor"></a>  CCmdTarget::EndWaitCursor  
 Call this function after you have called the `BeginWaitCursor` member function to return from the hourglass cursor to the previous cursor.  
  
```  
void EndWaitCursor();
```  
  
### Remarks  
 The framework also calls this member function after it has called the hourglass cursor.  
  
### Example  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
##  <a name="ccmdtarget__enumoleverbs"></a>  CCmdTarget::EnumOleVerbs  
 Enumerates an object's OLE verbs.  
  
```  
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```  
  
### Parameters  
 `ppenumOleVerb`  
 A pointer to a pointer to an [IEnumOLEVERB](http://msdn.microsoft.com/library/windows/desktop/ms695084) interface.  
  
### Return Value  
 TRUE if the object supports at least one OLE verb (in which case \* `ppenumOleVerb` points to an **IEnumOLEVERB** enumerator interface), otherwise FALSE.  
  
### Remarks  
 This member function is basically an implementation of [IOleObject::EnumVerbs](http://msdn.microsoft.com/library/windows/desktop/ms692781).  
  
##  <a name="ccmdtarget__fromidispatch"></a>  CCmdTarget::FromIDispatch  
 Call this function to map an `IDispatch` pointer, received from automation member functions of a class, into the `CCmdTarget` object that implements the interfaces of the `IDispatch` object.  
  
```  
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```  
  
### Parameters  
 `lpDispatch`  
 A pointer to an `IDispatch` object.  
  
### Return Value  
 A pointer to the `CCmdTarget` object associated with `lpDispatch`. This function returns **NULL** if the `IDispatch` object is not recognized as a Microsoft Foundation Class `IDispatch` object.  
  
### Remarks  
 The result of this function is the inverse of a call to the member function `GetIDispatch`.  
  
##  <a name="ccmdtarget__getdispatchiid"></a>  CCmdTarget::GetDispatchIID  
 Gets the primary dispatch interface ID.  
  
```  
virtual BOOL GetDispatchIID(IID* pIID);
```  
  
### Parameters  
 *pIID*  
 A pointer to an interface ID (a [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931)).  
  
### Return Value  
 TRUE if successful, otherwise FALSE. If successful, \* *pIID* is set to the primary dispatch interface ID.  
  
### Remarks  
 Derived classes should override this member function (if not overridden, `GetDispatchIID` returns FALSE). See [COleControl](../../mfc/reference/colecontrol-class.md).  
  
 For more information, see Knowledge Base article Q185720, "HOWTO: Provide Type Information From an MFC Automation Server." Knowledge Base articles are available in the MSDN Library Visual Studio documentation or at [http://support.microsoft.com](http://support.microsoft.com/).  
  
##  <a name="ccmdtarget__getidispatch"></a>  CCmdTarget::GetIDispatch  
 Call this member function to retrieve the `IDispatch` pointer from an automation method that either returns an `IDispatch` pointer or takes an `IDispatch` pointer by reference.  
  
```  
LPDISPATCH GetIDispatch(BOOL bAddRef);
```  
  
### Parameters  
 *bAddRef*  
 Specifies whether to increment the reference count for the object.  
  
### Return Value  
 The `IDispatch` pointer associated with the object.  
  
### Remarks  
 For objects that call `EnableAutomation` in their constructors, making them automation enabled, this function returns a pointer to the Foundation Class implementation of `IDispatch` that is used by clients who communicate via the `IDispatch` interface. Calling this function automatically adds a reference to the pointer, so it is not necessary to make a call to [IUnknown::AddRef](http://msdn.microsoft.com/library/windows/desktop/ms691379).  
  
##  <a name="ccmdtarget__gettypeinfocount"></a>  CCmdTarget::GetTypeInfoCount  
 Retrieves the number of type information interfaces that an object provides.  
  
```  
virtual UINT GetTypeInfoCount();
```  
  
### Return Value  
 The number of type information interfaces.  
  
### Remarks  
 This member function basically implements [IDispatch::GetTypeInfoCount](http://msdn.microsoft.com/en-us/da876d53-cb8a-465c-a43e-c0eb272e2a12).  
  
 Derived classes should override this function to return the number of type information interfaces provided (either 0 or 1). If not overridden, **GetTypeInfoCount** returns 0. To override, use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeLib` and `GetTypeLibCache`.  
  
##  <a name="ccmdtarget__gettypeinfoofguid"></a>  CCmdTarget::GetTypeInfoOfGuid  
 Retrieves the type description that corresponds to the specified GUID.  
  
```  
HRESULT GetTypeInfoOfGuid(
    LCID lcid,  
    const GUID& guid,  
    LPTYPEINFO* ppTypeInfo);
```  
  
### Parameters  
 `lcid`  
 A locale identifier ( `LCID`).  
  
 `guid`  
 The [GUID](http://msdn.microsoft.com/library/windows/desktop/aa373931) of the type description.  
  
 `ppTypeInfo`  
 Pointer to a pointer to the `ITypeInfo` interface.  
  
### Return Value  
 An HRESULT indicating the success or failure of the call. If successful, * `ppTypeInfo` points to the type information interface.  
  
##  <a name="ccmdtarget__gettypelib"></a>  CCmdTarget::GetTypeLib  
 Gets a pointer to a type library.  
  
```  
virtual HRESULT GetTypeLib(
    LCID lcid,  
    LPTYPELIB* ppTypeLib);
```  
  
### Parameters  
 `lcid`  
 A locale identifier ( `LCID`).  
  
 `ppTypeLib`  
 A pointer to a pointer to the `ITypeLib` interface.  
  
### Return Value  
 An HRESULT indicating the success or failure of the call. If successful, * `ppTypeLib` points to the type library interface.  
  
### Remarks  
 Derived classes should override this member function (if not overridden, `GetTypeLib` returns TYPE_E_CANTLOADLIBRARY). Use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeInfoCount` and `GetTypeLibCache`.  
  
##  <a name="ccmdtarget__gettypelibcache"></a>  CCmdTarget::GetTypeLibCache  
 Gets the type library cache.  
  
```  
virtual CTypeLibCache* GetTypeLibCache();
```  
  
### Return Value  
 A pointer to a **CTypeLibCache** object.  
  
### Remarks  
 Derived classes should override this member function (if not overridden, **GetTypeLibCache** returns NULL). Use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeInfoCount` and `GetTypeLib`.  
  
##  <a name="ccmdtarget__isinvokeallowed"></a>  CCmdTarget::IsInvokeAllowed  
 This function is called by MFC's implementation of **IDispatch::Invoke** to determine if a given automation method (identified by `dispid`) can be invoked.  
  
```  
virtual BOOL IsInvokeAllowed(DISPID dispid);
```  
  
### Parameters  
 `dispid`  
 A dispatch ID.  
  
### Return Value  
 TRUE if the method can be invoked, otherwise FALSE.  
  
### Remarks  
 If `IsInvokeAllowed` returns TRUE, **Invoke** proceeds to call the method; otherwise, `Invoke` will fail, returning E_UNEXPECTED.  
  
 Derived classes can override this function to return appropriate values (if not overridden, `IsInvokeAllowed` returns TRUE). See in particular [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#colecontrol__isinvokeallowed).  
  
##  <a name="ccmdtarget__isresultexpected"></a>  CCmdTarget::IsResultExpected  
 Use `IsResultExpected` to ascertain whether a client expects a return value from its call to an automation function.  
  
```  
BOOL IsResultExpected();
```  
  
### Return Value  
 Nonzero if an automation function should return a value; otherwise 0.  
  
### Remarks  
 The OLE interface supplies information to MFC about whether the client is using or ignoring the result of a function call, and MFC in turn uses this information to determine the result of a call to `IsResultExpected`. If production of a return value is time- or resource-intensive, you can increase efficiency by calling this function before computing the return value.  
  
 This function returns 0 only once so that you will get valid return values from other automation functions if you call them from the automation function that the client has called.  
  
 `IsResultExpected` returns a nonzero value if called when an automation function call is not in progress.  
  
##  <a name="ccmdtarget__oncmdmsg"></a>  CCmdTarget::OnCmdMsg  
 Called by the framework to route and dispatch command messages and to handle the update of command user-interface objects.  
  
```  
virtual BOOL OnCmdMsg(
    UINT nID,  
    int nCode,  
    void* pExtra,  
    AFX_CMDHANDLERINFO* pHandlerInfo);
```  
  
### Parameters  
 `nID`  
 Contains the command ID.  
  
 `nCode`  
 Identifies the command notification code. See **Remarks** for more information about values for `nCode`.  
  
 `pExtra`  
 Used according to the value of `nCode`. See **Remarks** for more information about `pExtra`.  
  
 `pHandlerInfo`  
 If not **NULL**, `OnCmdMsg` fills in the **pTarget** and **pmf** members of the `pHandlerInfo` structure instead of dispatching the command. Typically, this parameter should be **NULL**.  
  
### Return Value  
 Nonzero if the message is handled; otherwise 0.  
  
### Remarks  
 This is the main implementation routine of the framework command architecture.  
  
 At run time, `OnCmdMsg` dispatches a command to other objects or handles the command itself by calling the root class `CCmdTarget::OnCmdMsg`, which does the actual message-map lookup. For a complete description of the default command routing, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).  
  
 On rare occasions, you may want to override this member function to extend the framework's standard command routing. Refer to [Technical Note 21](../../mfc/tn021-command-and-message-routing.md) for advanced details of the command-routing architecture.  
  
 If you override `OnCmdMsg`, you must supply the appropriate value for `nCode`, the command notification code, and `pExtra`, which depends on the value of `nCode`. The following table lists their corresponding values:  
  
|`nCode` value|`pExtra` value|  
|-------------------|--------------------|  
|CN_COMMAND|[CCmdUI](../../mfc/reference/ccmdui-class.md)*|  
|CN_EVENT|AFX_EVENT*|  
|CN_UPDATE_COMMAND_UI|CCmdUI*|  
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)*|  
|CN_OLE_UNREGISTER|NULL|  
  
### Example  
 [!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]  
  
 [!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]  
  
##  <a name="ccmdtarget__onfinalrelease"></a>  CCmdTarget::OnFinalRelease  
 Called by the framework when the last OLE reference to or from the object is released.  
  
```  
virtual void OnFinalRelease();
```  
  
### Remarks  
 Override this function to provide special handling for this situation. The default implementation deletes the object.  
  
##  <a name="ccmdtarget__restorewaitcursor"></a>  CCmdTarget::RestoreWaitCursor  
 Call this function to restore the appropriate hourglass cursor after the system cursor has changed (for example, after a message box has opened and then closed while in the middle of a lengthy operation).  
  
```  
void RestoreWaitCursor();
```  
  
### Example  
 [!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]  
  
## See Also  
 [MFC Sample ACDUAL](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CCmdUI Class](../../mfc/reference/ccmdui-class.md)   
 [CDocument Class](../../mfc/reference/cdocument-class.md)   
 [CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)   
 [CWinApp Class](../../mfc/reference/cwinapp-class.md)   
 [CWnd Class](../../mfc/reference/cwnd-class.md)   
 [CView Class](../../mfc/reference/cview-class.md)   
 [CFrameWnd Class](../../mfc/reference/cframewnd-class.md)   
 [COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)
