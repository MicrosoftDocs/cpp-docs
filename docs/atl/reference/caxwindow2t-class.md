---
description: "Learn more about: CAxWindow2T Class"
title: "CAxWindow2T Class"
ms.date: "11/04/2016"
f1_keywords: ["CAxWindow2T", "ATLWIN/ATL::CAxWindow2T", "ATLWIN/ATL::CAxWindow2T::CAxWindow2T", "ATLWIN/ATL::CAxWindow2T::Create", "ATLWIN/ATL::CAxWindow2T::CreateControlLic", "ATLWIN/ATL::CAxWindow2T::CreateControlLicEx", "ATLWIN/ATL::CAxWindow2T::GetWndClassName"]
helpviewer_keywords: ["CAxWindow2 class"]
ms.assetid: b87bc943-7991-4537-b902-2138d7f4d837
---
# CAxWindow2T Class

This class provides methods for manipulating a window that hosts an ActiveX control, and also has support for hosting licensed ActiveX controls.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
template <class TBase = CWindow>
    class CAxWindow2T :
    public CAxWindowT<TBase>
```

#### Parameters

*TBase*<br/>
The class from which `CAxWindowT` derives.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAxWindow2T::CAxWindow2T](#caxwindow2t)|Constructs a `CAxWindow2T` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAxWindow2T::Create](#create)|Creates a host window.|
|[CAxWindow2T::CreateControlLic](#createcontrollic)|Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.|
|[CAxWindow2T::CreateControlLicEx](#createcontrollicex)|Creates a licensed ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.|
|[CAxWindow2T::GetWndClassName](#getwndclassname)|Static method that retrieves the name of the window class.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAxWindow2T::operator =](#operator_eq)|Assigns an HWND to an existing `CAxWindow2T` object.|

## Remarks

`CAxWindow2T` provides methods for manipulating a window that hosts an ActiveX control. `CAxWindow2T` also has support for hosting licensed ActiveX controls. The hosting is provided by " **AtlAxWinLic80**", which is wrapped by `CAxWindow2T`.

Class `CAxWindow2` is implemented as a specialization of the `CAxWindow2T` class. This specialization is declared as:

`typedef CAxWindow2T <CWindow> CAxWindow2;`

> [!NOTE]
> `CAxWindowT` members are documented under [CAxWindow](../../atl/reference/caxwindow-class.md).

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses the members of this class.

## Inheritance Hierarchy

`TBase`

`CAxWindowT`

`CAxWindow2T`

## Requirements

**Header:** atlwin.h

## <a name="caxwindow2t"></a> CAxWindow2T::CAxWindow2T

Constructs a `CAxWindow2T` object.

```
CAxWindow2T(HWND  hWnd = NULL) : CAxWindowT<TBase>(hWnd)
```

### Parameters

*hWnd*<br/>
A handle of an existing window.

## <a name="create"></a> CAxWindow2T::Create

Creates a host window.

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

### Remarks

`CAxWindow2T::Create` calls [CWindow::Create](../../atl/reference/cwindow-class.md#create) with the LPCTSTR *lpstrWndClass* parameter set to the window class that provides control hosting (`AtlAxWinLic80`).

See `CWindow::Create` for a description of the parameters and return value.

**Note** If 0 is used as the value for the *MenuOrID* parameter, it must be specified as 0U (the default value) to avoid a compiler error.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `CAxWindow2T::Create`.

## <a name="createcontrollic"></a> CAxWindow2T::CreateControlLic

Creates a licensed ActiveX control, initializes it, and hosts it in the specified window.

```
HRESULT CreateControlLic(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    BSTR bstrLicKey = NULL);

HRESULT CreateControlLic(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    BSTR bstrLicKey = NULL);
```

### Parameters

*bstrLicKey*<br/>
The license key for the control; NULL if creating a nonlicensed control.

### Remarks

See [CAxWindow::CreateControl](../../atl/reference/caxwindow-class.md#createcontrol) for a description of the remaining parameters and return value.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `CAxWindow2T::CreateControlLic`.

## <a name="createcontrollicex"></a> CAxWindow2T::CreateControlLicEx

Creates a licensed ActiveX control, initializes it, hosts it in the specified window, and retrieves an interface pointer (or pointers) from the control.

```
HRESULT CreateControlLicEx(
    LPCOLESTR lpszName,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLicKey = NULL);

    HRESULT CreateControlLicEx(
    DWORD dwResID,
    IStream* pStream = NULL,
    IUnknown** ppUnkContainer = NULL,
    IUnknown** ppUnkControl = NULL,
    REFIID iidSink = IID_NULL,
    IUnknown* punkSink = NULL,
    BSTR bstrLickey = NULL);
```

### Parameters

*bstrLicKey*<br/>
The license key for the control; NULL if creating a nonlicensed control.

### Remarks

See [CAxWindow::CreateControlEx](../../atl/reference/caxwindow-class.md#createcontrolex) for a description of the remaining parameters and return value.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `CAxWindow2T::CreateControlLicEx`.

## <a name="getwndclassname"></a> CAxWindow2T::GetWndClassName

Retrieves the name of the window class.

```
static LPCTSTR GetWndClassName();
```

### Return Value

A pointer to a string containing the name of the window class (`AtlAxWinLic80`) that can host licensed and nonlicensed ActiveX controls.

## <a name="operator_eq"></a> CAxWindow2T::operator =

Assigns an HWND to an existing `CAxWindow2T` object.

```
CAxWindow2T<TBase>& operator= (HWND hWnd);
```

### Parameters

*hWnd*<br/>
A handle of an existing window.

## See also

[Class Overview](../../atl/atl-class-overview.md)<br/>
[Control Containment FAQ](../../atl/atl-control-containment-faq.md)
