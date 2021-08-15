---
description: "Learn more about: CCmdTarget Class"
title: "CCmdTarget Class"
ms.date: "11/04/2016"
f1_keywords: ["CCmdTarget", "AFXWIN/CCmdTarget", "AFXWIN/CCmdTarget::CCmdTarget", "AFXWIN/CCmdTarget::BeginWaitCursor", "AFXWIN/CCmdTarget::DoOleVerb", "AFXWIN/CCmdTarget::EnableAutomation", "AFXWIN/CCmdTarget::EnableConnections", "AFXWIN/CCmdTarget::EnableTypeLib", "AFXWIN/CCmdTarget::EndWaitCursor", "AFXWIN/CCmdTarget::EnumOleVerbs", "AFXWIN/CCmdTarget::FromIDispatch", "AFXWIN/CCmdTarget::GetDispatchIID", "AFXWIN/CCmdTarget::GetIDispatch", "AFXWIN/CCmdTarget::GetTypeInfoCount", "AFXWIN/CCmdTarget::GetTypeInfoOfGuid", "AFXWIN/CCmdTarget::GetTypeLib", "AFXWIN/CCmdTarget::GetTypeLibCache", "AFXWIN/CCmdTarget::IsInvokeAllowed", "AFXWIN/CCmdTarget::IsResultExpected", "AFXWIN/CCmdTarget::OnCmdMsg", "AFXWIN/CCmdTarget::OnFinalRelease", "AFXWIN/CCmdTarget::RestoreWaitCursor"]
helpviewer_keywords: ["CCmdTarget [MFC], CCmdTarget", "CCmdTarget [MFC], BeginWaitCursor", "CCmdTarget [MFC], DoOleVerb", "CCmdTarget [MFC], EnableAutomation", "CCmdTarget [MFC], EnableConnections", "CCmdTarget [MFC], EnableTypeLib", "CCmdTarget [MFC], EndWaitCursor", "CCmdTarget [MFC], EnumOleVerbs", "CCmdTarget [MFC], FromIDispatch", "CCmdTarget [MFC], GetDispatchIID", "CCmdTarget [MFC], GetIDispatch", "CCmdTarget [MFC], GetTypeInfoCount", "CCmdTarget [MFC], GetTypeInfoOfGuid", "CCmdTarget [MFC], GetTypeLib", "CCmdTarget [MFC], GetTypeLibCache", "CCmdTarget [MFC], IsInvokeAllowed", "CCmdTarget [MFC], IsResultExpected", "CCmdTarget [MFC], OnCmdMsg", "CCmdTarget [MFC], OnFinalRelease", "CCmdTarget [MFC], RestoreWaitCursor"]
ms.assetid: 8883b132-2057-4ce0-a5f2-88979f8f2b13
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
|[CCmdTarget::CCmdTarget](#ccmdtarget)|Constructs a `CCmdTarget` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CCmdTarget::BeginWaitCursor](#beginwaitcursor)|Displays the cursor as an hourglass cursor.|
|[CCmdTarget::DoOleVerb](#dooleverb)|Causes an action specified by an OLE verb to be performed.|
|[CCmdTarget::EnableAutomation](#enableautomation)|Allows OLE automation for the `CCmdTarget` object.|
|[CCmdTarget::EnableConnections](#enableconnections)|Enables event firing over connection points.|
|[CCmdTarget::EnableTypeLib](#enabletypelib)|Enables an object's type library.|
|[CCmdTarget::EndWaitCursor](#endwaitcursor)|Returns to the previous cursor.|
|[CCmdTarget::EnumOleVerbs](#enumoleverbs)|Enumerates an object's OLE verbs.|
|[CCmdTarget::FromIDispatch](#fromidispatch)|Returns a pointer to the `CCmdTarget` object associated with the `IDispatch` pointer.|
|[CCmdTarget::GetDispatchIID](#getdispatchiid)|Gets the primary dispatch interface ID.|
|[CCmdTarget::GetIDispatch](#getidispatch)|Returns a pointer to the `IDispatch` object associated with the `CCmdTarget` object.|
|[CCmdTarget::GetTypeInfoCount](#gettypeinfocount)|Retrieves the number of type information interfaces that an object provides.|
|[CCmdTarget::GetTypeInfoOfGuid](#gettypeinfoofguid)|Retrieves the type description that corresponds to the specified GUID.|
|[CCmdTarget::GetTypeLib](#gettypelib)|Gets a pointer to a type library.|
|[CCmdTarget::GetTypeLibCache](#gettypelibcache)|Gets the type library cache.|
|[CCmdTarget::IsInvokeAllowed](#isinvokeallowed)|Enables automation method invocation.|
|[CCmdTarget::IsResultExpected](#isresultexpected)|Returns nonzero if an automation function should return a value.|
|[CCmdTarget::OnCmdMsg](#oncmdmsg)|Routes and dispatches command messages.|
|[CCmdTarget::OnFinalRelease](#onfinalrelease)|Cleans up after the last OLE reference is released.|
|[CCmdTarget::RestoreWaitCursor](#restorewaitcursor)|Restores the hourglass cursor.|

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

## <a name="beginwaitcursor"></a> CCmdTarget::BeginWaitCursor

Call this function to display the cursor as an hourglass when you expect a command to take a noticeable time interval to execute.

```cpp
void BeginWaitCursor();
```

### Remarks

The framework calls this function to show the user that it is busy, such as when a `CDocument` object loads or saves itself to a file.

The actions of `BeginWaitCursor` are not always effective outside of a single message handler as other actions, such as `OnSetCursor` handling, could change the cursor.

Call `EndWaitCursor` to restore the previous cursor.

### Example

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="ccmdtarget"></a> CCmdTarget::CCmdTarget

Constructs a `CCmdTarget` object.

```
CCmdTarget();
```

## <a name="dooleverb"></a> CCmdTarget::DoOleVerb

Causes an action specified by an OLE verb to be performed.

```
BOOL DoOleVerb(
    LONG iVerb,
    LPMSG lpMsg,
    HWND hWndParent,
    LPCRECT lpRect);
```

### Parameters

*iVerb*<br/>
Numerical identifier of the verb.

*lpMsg*<br/>
Pointer to the [MSG](/windows/win32/api/winuser/ns-winuser-msg) structure describing the event (such as a double-click) that invoked the verb.

*hWndParent*<br/>
Handle of the document window containing the object.

*lpRect*<br/>
Pointer to the [RECT](/windows/win32/api/windef/ns-windef-rect) structure containing the coordinates, in pixels, that define an object's bounding rectangle in *hwndParent*.

### Return Value

TRUE if successful, otherwise FALSE.

### Remarks

This member function is basically an implementation of [IOleObject::DoVerb](/windows/win32/api/oleidl/nf-oleidl-ioleobject-doverb). The possible actions are enumerated by [CCmdTarget::EnumOleVerbs](#enumoleverbs).

## <a name="enableautomation"></a> CCmdTarget::EnableAutomation

Call this function to enable OLE automation for an object.

```cpp
void EnableAutomation();
```

### Remarks

This function is typically called from the constructor of your object and should only be called if a dispatch map has been declared for the class. For more information on automation see the articles [Automation Clients](../../mfc/automation-clients.md) and [Automation Servers](../../mfc/automation-servers.md).

## <a name="enableconnections"></a> CCmdTarget::EnableConnections

Enables event firing over connection points.

```cpp
void EnableConnections();
```

### Remarks

To enable connection points, call this member function in the constructor of your derived class.

## <a name="enabletypelib"></a> CCmdTarget::EnableTypeLib

Enables an object's type library.

```cpp
void EnableTypeLib();
```

### Remarks

Call this member function in the constructor of your `CCmdTarget`-derived object if it provides type information.

## <a name="endwaitcursor"></a> CCmdTarget::EndWaitCursor

Call this function after you have called the `BeginWaitCursor` member function to return from the hourglass cursor to the previous cursor.

```cpp
void EndWaitCursor();
```

### Remarks

The framework also calls this member function after it has called the hourglass cursor.

### Example

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## <a name="enumoleverbs"></a> CCmdTarget::EnumOleVerbs

Enumerates an object's OLE verbs.

```
BOOL EnumOleVerbs(LPENUMOLEVERB* ppenumOleVerb);
```

### Parameters

*ppenumOleVerb*<br/>
A pointer to a pointer to an [IEnumOLEVERB](/windows/win32/api/oleidl/nn-oleidl-ienumoleverb) interface.

### Return Value

TRUE if the object supports at least one OLE verb (in which case \* *ppenumOleVerb* points to an `IEnumOLEVERB` enumerator interface), otherwise FALSE.

### Remarks

This member function is basically an implementation of [IOleObject::EnumVerbs](/windows/win32/api/oleidl/nf-oleidl-ioleobject-enumverbs).

## <a name="fromidispatch"></a> CCmdTarget::FromIDispatch

Call this function to map an `IDispatch` pointer, received from automation member functions of a class, into the `CCmdTarget` object that implements the interfaces of the `IDispatch` object.

```
static CCmdTarget* PASCAL FromIDispatch(LPDISPATCH lpDispatch);
```

### Parameters

*lpDispatch*<br/>
A pointer to an `IDispatch` object.

### Return Value

A pointer to the `CCmdTarget` object associated with *lpDispatch*. This function returns NULL if the `IDispatch` object is not recognized as a Microsoft Foundation Class `IDispatch` object.

### Remarks

The result of this function is the inverse of a call to the member function `GetIDispatch`.

## <a name="getdispatchiid"></a> CCmdTarget::GetDispatchIID

Gets the primary dispatch interface ID.

```
virtual BOOL GetDispatchIID(IID* pIID);
```

### Parameters

*pIID*<br/>
A pointer to an interface ID (a [GUID](/windows/win32/api/guiddef/ns-guiddef-guid.

### Return Value

TRUE if successful, otherwise FALSE. If successful, \* *pIID* is set to the primary dispatch interface ID.

### Remarks

Derived classes should override this member function (if not overridden, `GetDispatchIID` returns FALSE). See [COleControl](../../mfc/reference/colecontrol-class.md).

## <a name="getidispatch"></a> CCmdTarget::GetIDispatch

Call this member function to retrieve the `IDispatch` pointer from an automation method that either returns an `IDispatch` pointer or takes an `IDispatch` pointer by reference.

```
LPDISPATCH GetIDispatch(BOOL bAddRef);
```

### Parameters

*bAddRef*<br/>
Specifies whether to increment the reference count for the object.

### Return Value

The `IDispatch` pointer associated with the object.

### Remarks

For objects that call `EnableAutomation` in their constructors, making them automation enabled, this function returns a pointer to the Foundation Class implementation of `IDispatch` that is used by clients who communicate via the `IDispatch` interface. Calling this function automatically adds a reference to the pointer, so it is not necessary to make a call to [IUnknown::AddRef](/windows/win32/api/unknwn/nf-unknwn-iunknown-addref).

## <a name="gettypeinfocount"></a> CCmdTarget::GetTypeInfoCount

Retrieves the number of type information interfaces that an object provides.

```
virtual UINT GetTypeInfoCount();
```

### Return Value

The number of type information interfaces.

### Remarks

This member function basically implements [IDispatch::GetTypeInfoCount](/windows/win32/api/oaidl/nf-oaidl-idispatch-gettypeinfocount).

Derived classes should override this function to return the number of type information interfaces provided (either 0 or 1). If not overridden, `GetTypeInfoCount` returns 0. To override, use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeLib` and `GetTypeLibCache`.

## <a name="gettypeinfoofguid"></a> CCmdTarget::GetTypeInfoOfGuid

Retrieves the type description that corresponds to the specified GUID.

```
HRESULT GetTypeInfoOfGuid(
    LCID lcid,
    const GUID& guid,
    LPTYPEINFO* ppTypeInfo);
```

### Parameters

*lcid*<br/>
A locale identifier ( `LCID`).

*guid*<br/>
The [GUID](/windows/win32/api/guiddef/ns-guiddef-guid of the type description.

*ppTypeInfo*<br/>
Pointer to a pointer to the `ITypeInfo` interface.

### Return Value

An HRESULT indicating the success or failure of the call. If successful, \* *ppTypeInfo* points to the type information interface.

## <a name="gettypelib"></a> CCmdTarget::GetTypeLib

Gets a pointer to a type library.

```
virtual HRESULT GetTypeLib(
    LCID lcid,
    LPTYPELIB* ppTypeLib);
```

### Parameters

*lcid*<br/>
A locale identifier (LCID).

*ppTypeLib*<br/>
A pointer to a pointer to the `ITypeLib` interface.

### Return Value

An HRESULT indicating the success or failure of the call. If successful, \* *ppTypeLib* points to the type library interface.

### Remarks

Derived classes should override this member function (if not overridden, `GetTypeLib` returns TYPE_E_CANTLOADLIBRARY). Use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeInfoCount` and `GetTypeLibCache`.

## <a name="gettypelibcache"></a> CCmdTarget::GetTypeLibCache

Gets the type library cache.

```
virtual CTypeLibCache* GetTypeLibCache();
```

### Return Value

A pointer to a `CTypeLibCache` object.

### Remarks

Derived classes should override this member function (if not overridden, `GetTypeLibCache` returns NULL). Use the [IMPLEMENT_OLETYPELIB](../../mfc/reference/type-library-access.md#implement_oletypelib) macro, which also implements `GetTypeInfoCount` and `GetTypeLib`.

## <a name="isinvokeallowed"></a> CCmdTarget::IsInvokeAllowed

This function is called by MFC's implementation of `IDispatch::Invoke` to determine if a given automation method (identified by *dispid*) can be invoked.

```
virtual BOOL IsInvokeAllowed(DISPID dispid);
```

### Parameters

*dispid*<br/>
A dispatch ID.

### Return Value

TRUE if the method can be invoked, otherwise FALSE.

### Remarks

If `IsInvokeAllowed` returns TRUE, `Invoke` proceeds to call the method; otherwise, `Invoke` will fail, returning E_UNEXPECTED.

Derived classes can override this function to return appropriate values (if not overridden, `IsInvokeAllowed` returns TRUE). See in particular [COleControl::IsInvokeAllowed](../../mfc/reference/colecontrol-class.md#isinvokeallowed).

## <a name="isresultexpected"></a> CCmdTarget::IsResultExpected

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

## <a name="oncmdmsg"></a> CCmdTarget::OnCmdMsg

Called by the framework to route and dispatch command messages and to handle the update of command user-interface objects.

```
virtual BOOL OnCmdMsg(
    UINT nID,
    int nCode,
    void* pExtra,
    AFX_CMDHANDLERINFO* pHandlerInfo);
```

### Parameters

*nID*<br/>
Contains the command ID.

*nCode*<br/>
Identifies the command notification code. See **Remarks** for more information about values for *nCode*.

*pExtra*<br/>
Used according to the value of *nCode*. See **Remarks** for more information about *pExtra*.

*pHandlerInfo*<br/>
If not NULL, `OnCmdMsg` fills in the *pTarget* and *pmf* members of the *pHandlerInfo* structure instead of dispatching the command. Typically, this parameter should be NULL.

### Return Value

Nonzero if the message is handled; otherwise 0.

### Remarks

This is the main implementation routine of the framework command architecture.

At run time, `OnCmdMsg` dispatches a command to other objects or handles the command itself by calling the root class `CCmdTarget::OnCmdMsg`, which does the actual message-map lookup. For a complete description of the default command routing, see [Message Handling and Mapping Topics](../../mfc/message-handling-and-mapping.md).

On rare occasions, you may want to override this member function to extend the framework's standard command routing. Refer to [Technical Note 21](../../mfc/tn021-command-and-message-routing.md) for advanced details of the command-routing architecture.

If you override `OnCmdMsg`, you must supply the appropriate value for *nCode*, the command notification code, and *pExtra*, which depends on the value of *nCode*. The following table lists their corresponding values:

|*nCode* value|*pExtra* value|
|-------------------|--------------------|
|CN_COMMAND|[CCmdUI](../../mfc/reference/ccmdui-class.md)\*|
|CN_EVENT|AFX_EVENT\*|
|CN_UPDATE_COMMAND_UI|CCmdUI\*|
|CN_OLECOMMAND|[COleCmdUI](../../mfc/reference/colecmdui-class.md)\*|
|CN_OLE_UNREGISTER|NULL|

### Example

[!code-cpp[NVC_MFCDocView#44](../../mfc/codesnippet/cpp/ccmdtarget-class_2.cpp)]

[!code-cpp[NVC_MFCDocView#45](../../mfc/codesnippet/cpp/ccmdtarget-class_3.cpp)]

## <a name="onfinalrelease"></a> CCmdTarget::OnFinalRelease

Called by the framework when the last OLE reference to or from the object is released.

```
virtual void OnFinalRelease();
```

### Remarks

Override this function to provide special handling for this situation. The default implementation deletes the object.

## <a name="restorewaitcursor"></a> CCmdTarget::RestoreWaitCursor

Call this function to restore the appropriate hourglass cursor after the system cursor has changed (for example, after a message box has opened and then closed while in the middle of a lengthy operation).

```cpp
void RestoreWaitCursor();
```

### Example

[!code-cpp[NVC_MFCDocView#43](../../mfc/codesnippet/cpp/ccmdtarget-class_1.cpp)]

## See also

[MFC Sample ACDUAL](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CCmdUI Class](../../mfc/reference/ccmdui-class.md)<br/>
[CDocument Class](../../mfc/reference/cdocument-class.md)<br/>
[CDocTemplate Class](../../mfc/reference/cdoctemplate-class.md)<br/>
[CWinApp Class](../../mfc/reference/cwinapp-class.md)<br/>
[CWnd Class](../../mfc/reference/cwnd-class.md)<br/>
[CView Class](../../mfc/reference/cview-class.md)<br/>
[CFrameWnd Class](../../mfc/reference/cframewnd-class.md)<br/>
[COleDispatchDriver Class](../../mfc/reference/coledispatchdriver-class.md)
