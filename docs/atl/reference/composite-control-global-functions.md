---
description: "Learn more about: Composite Control Global Functions"
title: "Composite Control Global Functions"
ms.date: "11/04/2016"
f1_keywords: ["atlhost/ATL::AtlAxDialogBox", "atlhost/ATL::AtlAxCreateDialog", "atlhost/ATL::AtlAxCreateControl", "atlhost/ATL::AtlAxCreateControlEx", "atlhost/ATL::AtlAxCreateControlLic", "atlhost/ATL::AtlAxCreateControlLicEx", "atlhost/ATL::AtlAxAttachControl", "atlhost/ATL::AtlAxGetHost", "atlhost/ATL::AtlAxGetControl", "atlhost/ATL::AtlSetChildSite", "atlhost/ATL::AtlAxWinInit", "atlhost/ATL::AtlAxWinTerm", "atlhost/ATL::AtlGetObjectSourceInterface"]
helpviewer_keywords: ["composite controls, global functions"]
ms.assetid: 536884cd-e863-4c7a-ab0a-604dc60a0bbe
---
# Composite Control Global Functions

These functions provide support for creating dialog boxes, and for creating, hosting and licensing ActiveX controls.

> [!IMPORTANT]
> The functions listed in the following table cannot be used in applications that execute in the Windows Runtime.

|Function|Description|
|-|-|
|[AtlAxDialogBox](#atlaxdialogbox)|Creates a modal dialog box from a dialog template provided by the user. The resulting dialog box can contain ActiveX controls.|
|[AtlAxCreateDialog](#atlaxcreatedialog)|Creates a modeless dialog box from a dialog template provided by the user. The resulting dialog box can contain ActiveX controls.|
|[AtlAxCreateControl](#atlaxcreatecontrol)|Creates an ActiveX control, initializes it, and hosts it in the specified window.|
|[AtlAxCreateControlEx](#atlaxcreatecontrolex)|Creates an ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.|
|[AtlAxCreateControlLic](#atlaxcreatecontrollic)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.|
|[AtlAxCreateControlLicEx](#atlaxcreatecontrollicex)|Creates a licensed ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.|
|[AtlAxAttachControl](#atlaxattachcontrol)|Attaches a previously created control to the specified window.|
|[AtlAxGetHost](#atlaxgethost)|Used to obtain a direct interface pointer to the container for a specified window (if any), given its handle.|
|[AtlAxGetControl](#atlaxgetcontrol)|Used to obtain a direct interface pointer to the control contained inside a specified window (if any), given its handle.|
|[AtlSetChildSite](#atlsetchildsite)|Initializes the `IUnknown` of the child site.|
|[AtlAxWinInit](#atlaxwininit)|Initializes the hosting code for AxWin objects.|
|[AtlAxWinTerm](#atlaxwinterm)|Uninitializes the hosting code for AxWin objects.|
|[AtlGetObjectSourceInterface](#atlgetobjectsourceinterface)|Returns information about the default source interface of an object.|

## Requirements

**Header:** atlhost.h

## <a name="atlaxdialogbox"></a> AtlAxDialogBox

Creates a modal dialog box from a dialog template provided by the user.

```
ATLAPI_(int) AtlAxDialogBox(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```

### Parameters

*hInstance*<br/>
[in] Identifies an instance of the module whose executable file contains the dialog box template.

*lpTemplateName*<br/>
[in] Identifies the dialog box template. This parameter is either the pointer to a null-terminated character string that specifies the name of the dialog box template or an integer value that specifies the resource identifier of the dialog box template. If the parameter specifies a resource identifier, its high-order word must be zero and its low-order word must contain the identifier. You can use the [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) macro to create this value.

*hWndParent*<br/>
[in] Identifies the window that owns the dialog box.

*lpDialogProc*<br/>
[in] Points to the dialog box procedure. For more information about the dialog box procedure, see [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
[in] Specifies the value to pass to the dialog box in the *lParam* parameter of the WM_INITDIALOG message.

### Return Value

One of the standard HRESULT values.

### Remarks

To use `AtlAxDialogBox` with a dialog template that contains an ActiveX control, specify a valid CLSID, APPID or URL string as the *text* field of the **CONTROL** section of the dialog resource, along with "AtlAxWin80" as the *class name* field under the same section. The following demonstrates what a valid **CONTROL** section might look like:

```
CONTROL    "{04FE35E9-ADBC-4f1d-83FE-8FA4D1F71C7F}", IDC_TEST,
    "AtlAxWin80", WS_GROUP | WS_TABSTOP, 0, 0, 100, 100
```

For more information on editing resource scripts, see [How to: Create Resources](../../windows/how-to-create-a-resource-script-file.md). For more information on control resource-definition statements, see [Common Control Parameters](/windows/win32/menurc/common-control-parameters) under Windows SDK: SDK Tools.

For more information on dialog boxes in general, refer to [DialogBox](/windows/win32/api/winuser/nf-winuser-dialogboxw) and [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) in the Windows SDK.

## <a name="atlaxcreatedialog"></a> AtlAxCreateDialog

Creates a modeless dialog box from a dialog template provided by the user.

```
ATLAPI_(HWND) AtlAxCreateDialog(
    HINSTANCE hInstance,
    LPCWSTR lpTemplateName,
    HWND hWndParent,
    DLGPROC lpDialogProc,
    LPARAM dwInitParam);
```

### Parameters

*hInstance*<br/>
[in] Identifies an instance of the module whose executable file contains the dialog box template.

*lpTemplateName*<br/>
[in] Identifies the dialog box template. This parameter is either the pointer to a null-terminated character string that specifies the name of the dialog box template or an integer value that specifies the resource identifier of the dialog box template. If the parameter specifies a resource identifier, its high-order word must be zero and its low-order word must contain the identifier. You can use the [MAKEINTRESOURCE](/windows/win32/api/winuser/nf-winuser-makeintresourcew) macro to create this value.

*hWndParent*<br/>
[in] Identifies the window that owns the dialog box.

*lpDialogProc*<br/>
[in] Points to the dialog box procedure. For more information about the dialog box procedure, see [DialogProc](/windows/win32/api/winuser/nc-winuser-dlgproc).

*dwInitParam*<br/>
[in] Specifies the value to pass to the dialog box in the *lParam* parameter of the WM_INITDIALOG message.

### Return Value

One of the standard HRESULT values.

### Remarks

The resulting dialog box can contain ActiveX controls.

See [CreateDialog](/windows/win32/api/winuser/nf-winuser-createdialogw) and [CreateDialogParam](/windows/win32/api/winuser/nf-winuser-createdialogparamw) in the Windows SDK.

## <a name="atlaxcreatecontrol"></a> AtlAxCreateControl

Creates an ActiveX control, initializes it, and hosts it in the specified window.

```
ATLAPI AtlAxCreateControl(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer);
```

### Parameters

*lpszName*<br/>
A pointer to a string to be passed to the control. Must be formatted in one of the following ways:

- A ProgID such as `"MSCAL.Calendar.7"`

- A CLSID such as `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- A URL such as `"<https://www.microsoft.com>"`

- A reference to an Active document such as `"file://\\\Documents\MyDoc.doc"`

- A fragment of HTML such as `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` must precede the HTML fragment so that it is designated as being an MSHTML stream.

*hWnd*<br/>
[in] Handle to the window that the control will be attached to.

*pStream*<br/>
[in] A pointer to a stream that is used to initialize the properties of the control. Can be NULL.

*ppUnkContainer*<br/>
[out] The address of a pointer that will receive the `IUnknown` of the container. Can be NULL.

### Return Value

One of the standard HRESULT values.

### Remarks

This global function gives you the same result as calling [AtlAxCreateControlEx](#atlaxcreatecontrolex)(*lpszName*, *hWnd*, *pStream*, NULL, NULL, NULL, NULL);.

To create a licensed ActiveX control, see [AtlAxCreateControlLic](#atlaxcreatecontrollic).

## <a name="atlaxcreatecontrolex"></a> AtlAxCreateControlEx

Creates an ActiveX control, initializes it, and hosts it in the specified window. An interface pointer and event sink for the new control can also be created.

```
ATLAPI AtlAxCreateControlEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL);
```

### Parameters

*lpszName*<br/>
A pointer to a string to be passed to the control. Must be formatted in one of the following ways:

- A ProgID such as `"MSCAL.Calendar.7"`

- A CLSID such as `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- A URL such as `"<https://www.microsoft.com>"`

- A reference to an Active document such as `"file://\\\Documents\MyDoc.doc"`

- A fragment of HTML such as `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` must precede the HTML fragment so that it is designated as being an MSHTML stream.

*hWnd*<br/>
[in] Handle to the window that the control will be attached to.

*pStream*<br/>
[in] A pointer to a stream that is used to initialize the properties of the control. Can be NULL.

*ppUnkContainer*<br/>
[out] The address of a pointer that will receive the `IUnknown` of the container. Can be NULL.

*ppUnkControl*<br/>
[out] The address of a pointer that will receive the `IUnknown` of the created control. Can be NULL.

*iidSink*<br/>
The interface identifier of an outgoing interface on the contained object.

*punkSink*<br/>
A pointer to the `IUnknown` interface of the sink object to be connected to the connection point specified by *iidSink* on the contained object after the contained object has been successfully created.

### Return Value

One of the standard HRESULT values.

### Remarks

`AtlAxCreateControlEx` is similar to [AtlAxCreateControl](#atlaxcreatecontrol) but also allows you to receive an interface pointer to the newly created control and set up an event sink to receive events fired by the control.

To create a licensed ActiveX control, see [AtlAxCreateControlLicEx](#atlaxcreatecontrollicex).

## <a name="atlaxcreatecontrollic"></a> AtlAxCreateControlLic

Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.

```
ATLAPI AtlAxCreateControlLic(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    BSTR bstrLic = NULL);
```

### Parameters

*lpszName*<br/>
A pointer to a string to be passed to the control. Must be formatted in one of the following ways:

- A ProgID such as `"MSCAL.Calendar.7"`

- A CLSID such as `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- A URL such as `"<https://www.microsoft.com>"`

- A reference to an Active document such as `"file://\\\Documents\MyDoc.doc"`

- A fragment of HTML such as `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` must precede the HTML fragment so that it is designated as being an MSHTML stream.

*hWnd*<br/>
Handle to the window that the control will be attached to.

*pStream*<br/>
A pointer to a stream that is used to initialize the properties of the control. Can be NULL.

*ppUnkContainer*<br/>
The address of a pointer that will receive the `IUnknown` of the container. Can be NULL.

*bstrLic*<br/>
The BSTR containing the license for the control.

### Return Value

One of the standard HRESULT values.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample of how to use `AtlAxCreateControlLic`.

## <a name="atlaxcreatecontrollicex"></a> AtlAxCreateControlLicEx

Creates a licensed ActiveX control, initializes it, and hosts it in the specified window. An interface pointer and event sink for the new control can also be created.

```
ATLAPI AtlAxCreateControlLicEx(
    LPCOLESTR lpszName,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnkContainer,
    IUnknown** ppUnkControl,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLic = NULL);
```

### Parameters

*lpszName*<br/>
A pointer to a string to be passed to the control. Must be formatted in one of the following ways:

- A ProgID such as `"MSCAL.Calendar.7"`

- A CLSID such as `"{8E27C92B-1264-101C-8A2F-040224009C02}"`

- A URL such as `"<https://www.microsoft.com>"`

- A reference to an Active document such as `"file://\\\Documents\MyDoc.doc"`

- A fragment of HTML such as `"MSHTML:\<HTML>\<BODY>This is a line of text\</BODY>\</HTML>"`

   > [!NOTE]
   > `"MSHTML:"` must precede the HTML fragment so that it is designated as being an MSHTML stream.

*hWnd*<br/>
Handle to the window that the control will be attached to.

*pStream*<br/>
A pointer to a stream that is used to initialize the properties of the control. Can be NULL.

*ppUnkContainer*<br/>
The address of a pointer that will receive the `IUnknown` of the container. Can be NULL.

*ppUnkControl*<br/>
[out] The address of a pointer that will receive the `IUnknown` of the created control. Can be NULL.

*iidSink*<br/>
The interface identifier of an outgoing interface on the contained object.

*punkSink*<br/>
A pointer to the `IUnknown` interface of the sink object to be connected to the connection point specified by *iidSink* on the contained object after the contained object has been successfully created.

*bstrLic*<br/>
The BSTR containing the license for the control.

### Return Value

One of the standard HRESULT values.

### Remarks

`AtlAxCreateControlLicEx` is similar to [AtlAxCreateControlLic](#atlaxcreatecontrollic) but also allows you to receive an interface pointer to the newly created control and set up an event sink to receive events fired by the control.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample of how to use `AtlAxCreateControlLicEx`.

## <a name="atlaxattachcontrol"></a> AtlAxAttachControl

Attaches a previously created control to the specified window.

```
ATLAPI AtlAxAttachControl(
    IUnknown* pControl,
    HWND hWnd,
    IUnknown** ppUnkContainer);
```

### Parameters

*pControl*<br/>
[in] A pointer to the `IUnknown` of the control.

*hWnd*<br/>
[in] Handle to the window that will host the control.

*ppUnkContainer*<br/>
[out] A pointer to a pointer to the `IUnknown` of the container object.

### Return Value

One of the standard HRESULT values.

### Remarks

Use [AtlAxCreateControlEx](#atlaxcreatecontrolex) and [AtlAxCreateControl](#atlaxcreatecontrol) to simultaneously create and attach a control.

> [!NOTE]
> The control object being attached must be correctly initialized before calling `AtlAxAttachControl`.

## <a name="atlaxgethost"></a> AtlAxGetHost

Obtains a direct interface pointer to the container for a specified window (if any), given its handle.

```
ATLAPI AtlAxGetHost(HWND h, IUnknown** pp);
```

### Parameters

*h*<br/>
[in] A handle to the window that is hosting the control.

*pp*<br/>
[out] The `IUnknown` of the container of the control.

### Return Value

One of the standard HRESULT values.

## <a name="atlaxgetcontrol"></a> AtlAxGetControl

Obtains a direct interface pointer to the control contained inside a specified window given its handle.

```
ATLAPI AtlAxGetControl(HWND h, IUnknown** pp);
```

### Parameters

*h*<br/>
[in] A handle to the window that is hosting the control.

*pp*<br/>
[out] The `IUnknown` of the control being hosted.

### Return Value

One of the standard HRESULT values.

## <a name="atlsetchildsite"></a> AtlSetChildSite

Call this function to set the site of the child object to the `IUnknown` of the parent object.

```
HRESULT AtlSetChildSite(IUnknown* punkChild, IUnknown* punkParent);
```

### Parameters

*punkChild*<br/>
[in] A pointer to the `IUnknown` interface of the child.

*punkParent*<br/>
[in] A pointer to the `IUnknown` interface of the parent.

### Return Value

A standard HRESULT value.

## <a name="atlaxwininit"></a> AtlAxWinInit

This function initializes ATL's control hosting code by registering the **"AtlAxWin80"** and **"AtlAxWinLic80"** window classes plus a couple of custom window messages.

```
ATLAPI_(BOOL) AtlAxWinInit();
```

### Return Value

Nonzero if the initialization of the control hosting code was successful; otherwise FALSE.

### Remarks

This function must be called before using the ATL control hosting API. Following a call to this function, the **"AtlAxWin"** window class can be used in calls to [CreateWindow](/windows/win32/api/winuser/nf-winuser-createwindoww) or [CreateWindowEx](/windows/win32/api/winuser/nf-winuser-createwindowexw), as described in the Windows SDK.

## <a name="atlaxwinterm"></a> AtlAxWinTerm

This function uninitializes ATL's control hosting code by unregistering the **"AtlAxWin80"** and **"AtlAxWinLic80"** window classes.

```
inline BOOL AtlAxWinTerm();
```

### Return Value

Always returns TRUE.

### Remarks

This function simply calls [UnregisterClass](/windows/win32/api/winuser/nf-winuser-unregisterclassw) as described in the Windows SDK.

Call this function to clean up after all existing host windows have been destroyed if you called [AtlAxWinInit](#atlaxwininit) and you no longer need to create host windows. If you don't call this function, the window class will be unregistered automatically when the process terminates.

## <a name="atlgetobjectsourceinterface"></a> AtlGetObjectSourceInterface

Call this function to retrieve information about the default source interface of an object.

```
ATLAPI AtlGetObjectSourceInterface(
    IUnknown* punkObj,
    GUID* plibid,
    IID* piid,
    unsigned short* pdwMajor,
    unsigned short* pdwMinor);
```

### Parameters

*punkObj*<br/>
[in] A pointer to the object for which information is to be returned.

*plibid*<br/>
[out] A pointer to the LIBID of the type library containing the definition of the source interface.

*piid*<br/>
[out] A pointer to the interface ID of the object's default source interface.

*pdwMajor*<br/>
[out] A pointer to the major version number of the type library containing the definition of the source interface.

*pdwMinor*<br/>
[out] A pointer to the minor version number of the type library containing the definition of the source interface.

### Return Value

A standard HRESULT value.

### Remarks

`AtlGetObjectSourceInterface` can provide you with the interface ID of the default source interface, along with the LIBID and major and minor version numbers of the type library describing that interface.

> [!NOTE]
> For this function to successfully retrieve the requested information, the object represented by *punkObj* must implement `IDispatch` (and return type information through `IDispatch::GetTypeInfo`) plus it must also implement either `IProvideClassInfo2` or `IPersist`. The type information for the source interface must be in the same type library as the type information for `IDispatch`.

### Example

The example below shows how you might define an event sink class, `CEasySink`, that reduces the number of template arguments that you can pass to `IDispEventImpl` to the bare essentials. `EasyAdvise` and `EasyUnadvise` use `AtlGetObjectSourceInterface` to initialize the [IDispEventImpl](../../atl/reference/idispeventimpl-class.md) members before calling [DispEventAdvise](idispeventsimpleimpl-class.md#dispeventadvise) or [DispEventUnadvise](idispeventsimpleimpl-class.md#dispeventunadvise).

[!code-cpp[NVC_ATL_Windowing#93](../../atl/codesnippet/cpp/composite-control-global-functions_1.h)]

## See also

[Functions](../../atl/reference/atl-functions.md)<br/>
[Composite Control Macros](../../atl/reference/composite-control-macros.md)
