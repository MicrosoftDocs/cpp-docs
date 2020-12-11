---
description: "Learn more about: IAxWinHostWindowLic Interface"
title: "IAxWinHostWindowLic Interface"
ms.date: "11/04/2016"
f1_keywords: ["IAxWinHostWindowLic", "ATLIFACE/ATL::IAxWinHostWindowLic", "ATLIFACE/ATL::CreateControlLic", "ATLIFACE/ATL::CreateControlLicEx"]
helpviewer_keywords: ["IAxWinHostWindowLic interface"]
ms.assetid: 750f1520-6bce-428c-aca0-fccbe3f063c7
---
# IAxWinHostWindowLic Interface

This interface provides methods for manipulating a licensed control and its host object.

## Syntax

```
interface IAxWinHostWindowLic : IAxWinHostWindow
```

## Members

### Methods

|Name|Description|
|-|-|
|[CreateControlLic](#createcontrollic)|Creates a licensed control and attaches it to the host object.|
|[CreateControlLicEx](#createcontrollicex)|Creates a licensed control, attaches it to the host object, and optionally sets up an event handler.|

## Remarks

`IAxWinHostWindowLic` inherits from [IAxWinHostWindow](../../atl/reference/iaxwinhostwindow-interface.md) and adds methods that support the creation of licensed controls.

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses the members of this interface.

## Requirements

The definition of this interface is available as IDL or C++, as shown below.

|Definition type|File|
|---------------------|----------|
|IDL|ATLIFace.idl|
|C++|ATLIFace.h (also included in ATLBase.h)|

## <a name="createcontrollic"></a> IAxWinHostWindowLic::CreateControlLic

Creates a licensed control, initializes it, and hosts it in the window identified by `hWnd`.

```
STDMETHOD(CreateControlLic)(
    LPCOLESTR lpTricsData,
    HWND hWnd,
    IStream* pStream,
    BSTR bstrLic);
```

### Parameters

*bstrLic*<br/>
[in] The BSTR that contains the license key for the control.

### Remarks

See [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol) for a description of the remaining parameters and return value.

Calling this method is equivalent to calling [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `IAxWinHostWindowLic::CreateControlLic`.

## <a name="createcontrollicex"></a> IAxWinHostWindowLic::CreateControlLicEx

Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [IAxWinHostWindow::CreateControl](../../atl/reference/iaxwinhostwindow-interface.md#createcontrol).

```
STDMETHOD(CreateControlLicEx)(
    LPCOLESTR lpszTricsData,
    HWND hWnd,
    IStream* pStream,
    IUnknown** ppUnk,
    REFIID riidAdvise,
    IUnknown* punkAdvise,
    BSTR bstrLic);
```

### Parameters

*bstrLic*<br/>
[in] The BSTR that contains the license key for the control.

### Remarks

See [IAxWinHostWindow::CreateControlEx](../../atl/reference/iaxwinhostwindow-interface.md#createcontrolex) for a description of the remaining parameters and return value.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `IAxWinHostWindowLic::CreateControlLicEx`.
