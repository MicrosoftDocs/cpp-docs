---
description: "Learn more about: IAxWinHostWindow Interface"
title: "IAxWinHostWindow Interface"
ms.date: "11/04/2016"
f1_keywords: ["IAxWinHostWindow", "ATLIFACE/ATL::IAxWinHostWindow", "ATLIFACE/ATL::AttachControl", "ATLIFACE/ATL::CreateControl", "ATLIFACE/ATL::CreateControlEx", "ATLIFACE/ATL::QueryControl", "ATLIFACE/ATL::SetExternalDispatch", "ATLIFACE/ATL::SetExternalUIHandler"]
helpviewer_keywords: ["IAxWinHostWindow interface"]
ms.assetid: 9821c035-cd52-4c46-b58a-9278064f09b4
---
# IAxWinHostWindow Interface

This interface provides methods for manipulating a control and its host object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
interface IAxWinHostWindow : IUnknown
```

## Members

### Methods

|Name|Description|
|-|-|
|[AttachControl](#attachcontrol)|Attaches an existing control to the host object.|
|[CreateControl](#createcontrol)|Creates a control and attaches it to the host object.|
|[CreateControlEx](#createcontrolex)|Creates a control, attaches it to the host object, and optionally sets up an event handler.|
|[QueryControl](#querycontrol)|Returns an interface pointer to the hosted control.|
|[SetExternalDispatch](#setexternaldispatch)|Sets the external `IDispatch` interface.|
|[SetExternalUIHandler](#setexternaluihandler)|Sets the external `IDocHostUIHandlerDispatch` interface.|

## Remarks

This interface is exposed by ATL's ActiveX control hosting objects. Call the methods on this interface to create and/or attach a control to the host object, to get an interface from a hosted control, or to set the external dispinterface or UI handler for use when hosting the Web browser.

## Requirements

The definition of this interface is available as IDL or C++, as shown below.

|Definition type|File|
|---------------------|----------|
|IDL|ATLIFace.idl|
|C++|ATLIFace.h (also included in ATLBase.h)|

## <a name="attachcontrol"></a> IAxWinHostWindow::AttachControl

Attaches an existing (and previously initialized) control to the host object using the window identified by *hWnd*.

```
STDMETHOD(AttachControl)(IUnknown* pUnkControl, HWND hWnd);
```

### Parameters

*pUnkControl*<br/>
[in] A pointer to the `IUnknown` interface of the control to be attached to the host object.

*hWnd*<br/>
[in] A handle to the window to be used for hosting.

### Return Value

A standard HRESULT value.

## <a name="createcontrol"></a> IAxWinHostWindow::CreateControl

Creates a control, initializes it, and hosts it in the window identified by *hWnd*.

```
STDMETHOD(CreateControl)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream);
```

### Parameters

*lpTricsData*<br/>
[in] A string identifying the control to create. Can be a CLSID (must include the braces), ProgID, URL, or raw HTML (prefixed by **MSHTML:**).

*hWnd*<br/>
[in] A handle to the window to be used for hosting.

*pStream*<br/>
[in] An interface pointer for a stream containing initialization data for the control. Can be NULL.

### Return Value

A standard HRESULT value.

### Remarks

This window will be subclassed by the host object exposing this interface so that messages can be reflected to the control and other container features will work.

Calling this method is equivalent to calling [IAxWinHostWindow::CreateControlEx](#createcontrolex).

To create a licensed ActiveX control, see [IAxWinHostWindowLic::CreateControlLic](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="createcontrolex"></a> IAxWinHostWindow::CreateControlEx

Creates an ActiveX control, initializes it, and hosts it in the specified window, similar to [IAxWinHostWindow::CreateControl](#createcontrol).

```
STDMETHOD(CreateControlEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise);
```

### Parameters

*lpTricsData*<br/>
[in] A string identifying the control to create. Can be a CLSID (must include the braces), ProgID, URL, or raw HTML (prefixed with **MSHTML:**).

*hWnd*<br/>
[in] A handle to the window to be used for hosting.

*pStream*<br/>
[in] An interface pointer for a stream containing initialization data for the control. Can be NULL.

*ppUnk*<br/>
[out] The address of a pointer that will receive the `IUnknown` interface of the created control. Can be NULL.

*riidAdvise*<br/>
[in] The interface identifier of an outgoing interface on the contained object. Can be IID_NULL.

*punkAdvise*<br/>
[in] A pointer to the `IUnknown` interface of the sink object to be connected to the connection point on the contained object specified by `iidSink`.

### Return Value

A standard HRESULT value.

### Remarks

Unlike the `CreateControl` method, `CreateControlEx` also allows you to receive an interface pointer to the newly created control and set up an event sink to receive events fired by the control.

To create a licensed ActiveX control, see [IAxWinHostWindowLic::CreateControlLicEx](../../atl/reference/iaxwinhostwindowlic-interface.md#createcontrollicex).

## <a name="querycontrol"></a> IAxWinHostWindow::QueryControl

Returns the specified interface pointer provided by the hosted control.

```
STDMETHOD(QueryControl)(
    REFIID riid,
    void** ppvObject);
```

### Parameters

*riid*<br/>
[in] The ID of an interface on the control being requested.

*ppvObject*<br/>
[out] The address of a pointer that will receive the specified interface of the created control.

### Return Value

A standard HRESULT value.

## <a name="setexternaldispatch"></a> IAxWinHostWindow::SetExternalDispatch

Sets the external dispinterface, which is available to contained controls through the [IDocHostUIHandlerDispatch::GetExternal](../../atl/reference/idochostuihandlerdispatch-interface.md) method.

```
STDMETHOD(SetExternalDispatch)(IDispatch* pDisp);
```

### Parameters

*pDisp*<br/>
[in] A pointer to an `IDispatch` interface.

### Return Value

A standard HRESULT value.

## <a name="setexternaluihandler"></a> IAxWinHostWindow::SetExternalUIHandler

Call this function to set the external [IDocHostUIHandlerDispatch](../../atl/reference/idochostuihandlerdispatch-interface.md) interface for the `CAxWindow` object.

```
STDMETHOD(SetExternalUIHandler)(IDocHostUIHandlerDispatch* pDisp);
```

### Parameters

*pDisp*<br/>
[in] A pointer to an `IDocHostUIHandlerDispatch` interface.

### Return Value

A standard HRESULT value.

### Remarks

This function is used by controls (such as the Web browser control) that query the host's site for the `IDocHostUIHandlerDispatch` interface.

## See also

[IAxWinAmbientDispatch Interface](../../atl/reference/iaxwinambientdispatch-interface.md)<br/>
[CAxWindow::QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
