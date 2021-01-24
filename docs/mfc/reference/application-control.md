---
description: "Learn more about: Application Control"
title: "Application Control"
ms.date: "11/04/2016"
helpviewer_keywords: ["application control [MFC]"]
ms.assetid: c1f69f15-e0fe-4515-9f36-d63d31869deb
---
# Application Control

OLE requires substantial control over applications and their objects. The OLE system DLLs must be able to launch and release applications automatically, coordinate their production and modification of objects, and so on. The functions in this topic meet those requirements. In addition to being called by the OLE system DLLs, these functions must sometimes be called by applications as well.

### Application Control

| Name | Description |
|-|-|
|[AfxOleCanExitApp](#afxolecanexitapp)|Indicates whether the application can terminate.|
|[AfxOleGetMessageFilter](#afxolegetmessagefilter)|Retrieves the application's current message filter.|
|[AfxOleGetUserCtrl](#afxolegetuserctrl)|Retrieves the current user-control flag.|
|[AfxOleSetUserCtrl](#afxolesetuserctrl)|Sets or clears the user-control flag.|
|[AfxOleLockApp](#afxolelockapp)|Increments the framework's global count of the number of active objects in an application.|
|[AfxOleLockControl](#afxolelockcontrol)| Locks the class factory of the specified control. |
|[AfxOleUnlockApp](#afxoleunlockapp)|Decrements the framework's count of the number of active objects in an application.|
|[AfxOleUnlockControl](#afxoleunlockcontrol)| Unlocks the class factory of the specified control. |
|[AfxOleRegisterServerClass](#afxoleregisterserverclass)|Registers a server in the OLE system registry.|
|[AfxOleSetEditMenu](#afxoleseteditmenu)|Implements the user interface for the *typename* Object command.|

## <a name="afxolecanexitapp"></a> AfxOleCanExitApp

Indicates whether the application can terminate.

```
BOOL AFXAPI AfxOleCanExitApp();
```

### Return Value

Nonzero if the application can exit; otherwise 0.

### Remarks

An application should not terminate if there are outstanding references to its objects. The global functions `AfxOleLockApp` and `AfxOleUnlockApp` increment and decrement, respectively, a counter of references to the application's objects. The application should not terminate when this counter is nonzero. If the counter is nonzero, the application's main window is hidden (not destroyed) when the user chooses Close from the system menu or Exit from the File menu. The framework calls this function in `CFrameWnd::OnClose`.

### Example

[!code-cpp[NVC_MFCAutomation#2](../../mfc/codesnippet/cpp/application-control_1.cpp)]

## Requirements

**Header**: afxdisp.h

## <a name="afxolegetmessagefilter"></a> AfxOleGetMessageFilter

Retrieves the application's current message filter.

```
COleMessageFilter* AFXAPI AfxOleGetMessageFilter();
```

### Return Value

A pointer to the current message filter.

### Remarks

Call this function to access the current `COleMessageFilter`-derived object, just as you would call `AfxGetApp` to access the current application object.

### Example

[!code-cpp[NVC_MFCAutomation#3](../../mfc/codesnippet/cpp/application-control_2.cpp)]

[!code-cpp[NVC_MFCAutomation#4](../../mfc/codesnippet/cpp/application-control_3.cpp)]

### Requirements

**Header**: afxwin.h

## <a name="afxolegetuserctrl"></a> AfxOleGetUserCtrl

Retrieves the current user-control flag.

```
BOOL AFXAPI AfxOleGetUserCtrl();
```

### Return Value

Nonzero if the user is in control of the application; otherwise 0.

### Remarks

The user is in control of the application when the user has explicitly opened or created a new document. The user is also in control if the application was not launched by the OLE system DLLs — in other words, if the user launched the application with the system shell.

### Requirements

**Header**: afxdisp.h

## <a name="afxolesetuserctrl"></a> AfxOleSetUserCtrl

Sets or clears the user-control flag, which is explained in the reference for `AfxOleGetUserCtrl`.

```cpp
void AFXAPI AfxOleSetUserCtrl(BOOL bUserCtrl);
```

### Parameters

*bUserCtrl*<br/>
Specifies whether the user-control flag is to be set or cleared.

### Remarks

The framework calls this function when the user creates or loads a document, but not when a document is loaded or created through an indirect action such as loading an embedded object from a container application.

Call this function if other actions in your application should put the user in control of the application.

### Requirements

**Header**: afxdisp.h

## <a name="afxolelockapp"></a> AfxOleLockApp

Increments the framework's global count of the number of active objects in the application.

```cpp
void AFXAPI AfxOleLockApp();
```

### Remarks

The framework keeps a count of the number of objects active in an application. The `AfxOleLockApp` and `AfxOleUnlockApp` functions, respectively, increment and decrement this count.

When the user attempts to close an application that has active objects — an application for which the count of active objects is nonzero — the framework hides the application from the user's view instead of completely shutting it down. The `AfxOleCanExitApp` function indicates whether the application can terminate.

Call `AfxOleLockApp` from any object that exposes OLE interfaces, if it would be undesirable for that object to be destroyed while still being used by a client application. Also call `AfxOleUnlockApp` in the destructor of any object that calls `AfxOleLockApp` in the constructor. By default, `COleDocument` (and derived classes) automatically lock and unlock the application.

### Example

[!code-cpp[NVC_MFCAutomation#5](../../mfc/codesnippet/cpp/application-control_4.cpp)]

### Requirements

**Header**: afxdisp.h

## <a name="afxoleunlockapp"></a> AfxOleUnlockApp

Decrements the framework's count of active objects in the application.

```cpp
void AFXAPI AfxOleUnlockApp();
```

### Remarks

See `AfxOleLockApp` for further information.

When the number of active objects reaches zero, `AfxOleOnReleaseAllObjects` is called.

### Example

See the example for [AfxOleLockApp](#afxolelockapp).

### Requirements

**Header**: afxdisp.h

## AfxOleLockControl

Locks the class factory of the specified control so that dynamically created data associated with the control remains in memory.

### Syntax

```
BOOL AFXAPI AfxOleLockControl(  REFCLSID clsid  );
BOOL AFXAPI AfxOleLockControl( LPCTSTR lpszProgID );
```

### Parameters

*clsid*<br/>
The unique class ID of the control.

*lpszProgID*<br/>
The unique program ID of the control.

### Return Value

Nonzero if the class factory of the control was successfully locked; otherwise 0.

### Remarks

This can significantly speed up display of the controls. For example, once you create a control in a dialog box and lock the control with `AfxOleLockControl`, you do not need to create and kill it again every time the dialog is shown or destroyed. If the user opens and closes a dialog box repeatedly, locking your controls can significantly enhance performance. When you are ready to destroy the control, call `AfxOleUnlockControl`.

### Example

```cpp
// Starts and locks control's (Microsoft Calendar) class factory.
// Control will remain in memory for lifetime of
// application or until AfxOleUnlockControl() is called.

AfxOleLockControl(_T("MSCAL.Calendar"));
```

### Requirements

**Header:** afxwin.h

## <a name="afxoleregisterserverclass"></a> AfxOleRegisterServerClass

This function allows you to register your server in the OLE system registry.

```
BOOL AFXAPI AfxOleRegisterServerClass(
    REFCLSID clsid,
    LPCTSTR lpszClassName,
    LPCTSTR lpszShortTypeName,
    LPCTSTR lpszLongTypeName,
    OLE_APPTYPE nAppType = OAT_SERVER,
    LPCTSTR* rglpszRegister = NULL,
    LPCTSTR* rglpszOverwrite = NULL);
```

### Parameters

*clsid*<br/>
Reference to the server's OLE class ID.

*lpszClassName*<br/>
Pointer to a string containing the class name of the server's objects.

*lpszShortTypeName*<br/>
Pointer to a string containing the short name of the server's object type, such as "Chart."

*lpszLongTypeName*<br/>
Pointer to a string containing the long name of the server's object type, such as "Microsoft Excel 5.0 Chart."

*nAppType*<br/>
A value, taken from the OLE_APPTYPE enumeration, specifying the type of OLE application. Possible values are the following:

- OAT_INPLACE_SERVER Server has full server user-interface.

- OAT_SERVER Server supports only embedding.

- OAT_CONTAINER Container supports links to embeddings.

- OAT_DISPATCH_OBJECT `IDispatch`-capable object.

*rglpszRegister*<br/>
Array of pointers to strings representing the keys and values to be added to the OLE system registry if no existing values for the keys are found.

*rglpszOverwrite*<br/>
Array of pointers to strings representing the keys and values to be added to the OLE system registry if the registry contains existing values for the given keys.

### Return Value

Nonzero if the server class is successfully registered; otherwise 0.

### Remarks

Most applications can use `COleTemplateServer::Register` to register the application's document types. If your application's system-registry format does not fit the typical pattern, you can use `AfxOleRegisterServerClass` for more control.

The registry consists of a set of keys and values. The *rglpszRegister* and *rglpszOverwrite* arguments are arrays of pointers to strings, each consisting of a key and a value separated by a **NULL** character ( `'\0'`). Each of these strings can have replaceable parameters whose places are marked by the character sequences *%1* through *%5*.

The symbols are filled in as follows:

|Symbol|Value|
|------------|-----------|
|%1|Class ID, formatted as a string|
|%2|Class name|
|%3|Path to executable file|
|%4|Short type name|
|%5|Long type name|

### Requirements

**Header**: afxdisp.h

## <a name="afxoleseteditmenu"></a> AfxOleSetEditMenu

Implements the user interface for the *typename* Object command.

```cpp
void AFXAPI AfxOleSetEditMenu(
    COleClientItem* pClient,
    CMenu* pMenu,
    UINT iMenuItem,
    UINT nIDVerbMin,
    UINT nIDVerbMax = 0,
    UINT nIDConvert = 0);
```

### Parameters

*pClient*<br/>
A pointer to the client OLE item.

*pMenu*<br/>
A pointer to the menu object to be updated.

*iMenuItem*<br/>
The index of the menu item to be updated.

*nIDVerbMin*<br/>
The command ID that corresponds to the primary verb.

*nIDVerbMax*<br/>
The command ID that corresponds to the last verb.

*nIDConvert*<br/>
ID for the Convert menu item.

### Remarks

If the server recognizes only a primary verb, the menu item becomes "verb *typename* Object" and the *nIDVerbMin* command is sent when the user chooses the command. If the server recognizes several verbs, then the menu item becomes " *typename* Object" and a submenu listing all the verbs appears when the user chooses the command. When the user chooses a verb from the submenu, *nIDVerbMin* is sent if the first verb is chosen, *nIDVerbMin* + 1 is sent if the second verb is chosen, and so forth. The default `COleDocument` implementation automatically handles this feature.

You must have the following statement in your client's application resource script (.RC) file:

**#include \<afxolecl.rc>**

### Requirements

**Header**: afxole.h

## <a name="afxoleunlockcontrol"></a> AfxOleUnlockControl

Unlocks the class factory of the specified control.

### Syntax

```
BOOL AFXAPI AfxOleUnlockControl( REFCLSID clsid );
BOOL AFXAPI AfxOleUnlockControl( LPCTSTR lpszProgID );
```

### Parameters

*clsid*<br/>
The unique class ID of the control.

*lpszProgID*<br/>
The unique program ID of the control.

### Return Value

Nonzero if the class factory of the control was successfully unlocked; otherwise 0.

### Remarks

A control is locked with `AfxOleLockControl`, so that dynamically created data associated with the control remains in memory. This can significantly speed up display of the control because the control need not be created and destroyed every time it is displayed. When you are ready to destroy the control, call `AfxOleUnlockControl`.

### Example

```cpp
// Unlock control's (Microsoft Calendar Control) class factory.

AfxOleUnlockControl(_T("MSCAL.Calendar"));
```

### Requirements

**Header:** afxwin.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
