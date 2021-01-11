---
description: "Learn more about: IAtlMemMgr Class"
title: "IAtlMemMgr Class"
ms.date: "11/04/2016"
f1_keywords: ["IAtlMemMgr", "ATLMEM/ATL::IAtlMemMgr", "ATLMEM/ATL::Allocate", "ATLMEM/ATL::Free", "ATLMEM/ATL::GetSize", "ATLMEM/ATL::Reallocate"]
helpviewer_keywords: ["IAtlMemMgr class", "memory, managing", "memory, memory manager"]
ms.assetid: 18b2c569-25fe-4464-bdb6-3b1abef7154a
---
# IAtlMemMgr Class

This class represents the interface to a memory manager.

## Syntax

```
__interface __declspec(uuid("654F7EF5-CFDF-4df9-A450-6C6A13C622C0")) IAtlMemMgr
```

## Members

### Methods

|Name|Description|
|-|-|
|[Allocate](#allocate)|Call this method to allocate a block of memory.|
|[Free](#free)|Call this method to free a block of memory.|
|[GetSize](#getsize)|Call this method to retrieve the size of an allocated memory block.|
|[Reallocate](#reallocate)|Call this method to reallocate a block of memory.|

## Remarks

This interface is implemented by [CComHeap](../../atl/reference/ccomheap-class.md), [CCRTHeap](../../atl/reference/ccrtheap-class.md), [CLocalHeap](../../atl/reference/clocalheap-class.md), [CGlobalHeap](../../atl/reference/cglobalheap-class.md), or [CWin32Heap](../../atl/reference/cwin32heap-class.md).

> [!NOTE]
> The local and global heap functions are slower than other memory management functions, and do not provide as many features. Therefore, new applications should use the [heap functions](/windows/win32/Memory/heap-functions). These are available in the [CWin32Heap](../../atl/reference/cwin32heap-class.md) class.

## Example

[!code-cpp[NVC_ATL_Utilities#94](../../atl/codesnippet/cpp/iatlmemmgr-class_1.cpp)]

## Requirements

**Header:** atlmem.h

## <a name="allocate"></a> IAtlMemMgr::Allocate

Call this method to allocate a block of memory.

```cpp
void* Allocate(size_t nBytes) throw();
```

### Parameters

*nBytes*<br/>
The requested number of bytes in the new memory block.

### Return Value

Returns a pointer to the start of the newly allocated memory block.

### Remarks

Call [IAtlMemMgr::Free](#free) or [IAtlMemMgr::Reallocate](#reallocate) to free the memory allocated by this method.

### Example

For an example, see the [IAtlMemMgr Overview](../../atl/reference/iatlmemmgr-class.md).

## <a name="free"></a> IAtlMemMgr::Free

Call this method to free a block of memory.

```cpp
void Free(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager.

### Remarks

Use this method to free memory obtained by [IAtlMemMgr::Allocate](#allocate) or [IAtlMemMgr::Reallocate](#reallocate).

### Example

For an example, see the [IAtlMemMgr Overview](../../atl/reference/iatlmemmgr-class.md).

## <a name="getsize"></a> IAtlMemMgr::GetSize

Call this method to retrieve the size of an allocated memory block.

```
size_t GetSize(void* p) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager.

### Return Value

Returns the size of the memory block in bytes.

### Example

For an example, see the [IAtlMemMgr Overview](../../atl/reference/iatlmemmgr-class.md).

## <a name="reallocate"></a> IAtlMemMgr::Reallocate

Call this method to reallocate memory allocated by this memory manager.

```cpp
void* Reallocate(void* p, size_t nBytes) throw();
```

### Parameters

*p*<br/>
Pointer to memory previously allocated by this memory manager.

*nBytes*<br/>
The requested number of bytes in the new memory block.

### Return Value

Returns a pointer to the start of the newly allocated memory block.

### Remarks

Call [IAtlMemMgr::Free](#free) or [IAtlMemMgr::Reallocate](#reallocate) to free the memory allocated by this method.

Conceptually this method frees the existing memory and allocates a new memory block. In reality, the existing memory may be extended or otherwise reused.

### Example

For an example, see the [IAtlMemMgr Overview](../../atl/reference/iatlmemmgr-class.md).

## <a name="get_allowcontextmenu"></a> IAxWinAmbientDispatch::get_AllowContextMenu

The `AllowContextMenu` property specifies whether the hosted control is allowed to display its own context menu.

```
STDMETHOD(get_AllowContextMenu)(VARIANT_BOOL* pbAllowContextMenu);
```

### Parameters

*pbAllowContextMenu*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="get_allowshowui"></a> IAxWinAmbientDispatch::get_AllowShowUI

The `AllowShowUI` property specifies whether the hosted control is allowed to display its own user interface.

```
STDMETHOD(get_AllowShowUI)(VARIANT_BOOL* pbAllowShowUI);
```

### Parameters

*pbAllowShowUI*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_FALSE as the default value of this property.

## <a name="get_allowwindowlessactivation"></a> IAxWinAmbientDispatch::get_AllowWindowlessActivation

The `AllowWindowlessActivation` property specifies whether the container will allow windowless activation.

```
STDMETHOD(get_AllowWindowlessActivation)(VARIANT_BOOL* pbAllowWindowless);
```

### Parameters

*pbAllowWindowless*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="get_backcolor"></a> IAxWinAmbientDispatch::get_BackColor

The `BackColor` property specifies the ambient background color of the container.

```
STDMETHOD(get_BackColor)(OLE_COLOR* pclrBackground);
```

### Parameters

*pclrBackground*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses COLOR_BTNFACE or COLOR_WINDOW as the default value of this property (depending on whether the parent of the host window is a dialog or not).

## <a name="get_displayasdefault"></a> IAxWinAmbientDispatch::get_DisplayAsDefault

`DisplayAsDefault` is an ambient property that allows a control to find out if it is the default control.

```
STDMETHOD(get_DisplayAsDefault)(VARIANT_BOOL* pbDisplayAsDefault);
```

### Parameters

*pbDisplayAsDefault*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_FALSE as the default value of this property.

## <a name="get_dochostdoubleclickflags"></a> IAxWinAmbientDispatch::get_DocHostDoubleClickFlags

The `DocHostDoubleClickFlags` property specifies the operation that should take place in response to a double-click.

```
STDMETHOD(get_DocHostDoubleClickFlags)(DWORD* pdwDocHostDoubleClickFlags);
```

### Parameters

*pdwDocHostDoubleClickFlags*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses DOCHOSTUIDBLCLK_DEFAULT as the default value of this property.

## <a name="get_dochostflags"></a> IAxWinAmbientDispatch::get_DocHostFlags

The `DocHostFlags` property specifies the user interface capabilities of the host object.

```
STDMETHOD(get_DocHostFlags)(DWORD* pdwDocHostFlags);
```

### Parameters

*pdwDocHostFlags*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses DOCHOSTUIFLAG_NO3DBORDER as the default value of this property.

## <a name="get_font"></a> IAxWinAmbientDispatch::get_Font

The `Font` property specifies the ambient font of the container.

```
STDMETHOD(get_Font)(IFontDisp** pFont);
```

### Parameters

*pFont*<br/>
[out] The address of an `IFontDisp` interface pointer used to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the default GUI font or the system font as the default value of this property.

## <a name="get_forecolor"></a> IAxWinAmbientDispatch::get_ForeColor

The `ForeColor` property specifies the ambient foreground color of the container.

```
STDMETHOD(get_ForeColor)(OLE_COLOR* pclrForeground);
```

### Parameters

*pclrForeground*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the system window text color as the default value of this property.

## <a name="get_localeid"></a> IAxWinAmbientDispatch::get_LocaleID

The `LocaleID` property specifies the ambient locale ID of the container.

```
STDMETHOD(get_LocaleID)(LCID* plcidLocaleID);
```

### Parameters

*plcidLocaleID*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the user's default locale as the default value of this property.

With this method you can discover the Ambient LocalID, that is, the LocaleID of the program your control is being used in. Once you know the LocaleID, you can call code to load locale-specific captions, error message text, and so forth from a resource file or satellite DLL.

## <a name="get_messagereflect"></a> IAxWinAmbientDispatch::get_MessageReflect

The `MessageReflect` ambient property specifies whether the container will reflect messages to the hosted control.

```
STDMETHOD(get_MessageReflect)(VARIANT_BOOL* pbMessageReflect);
```

### Parameters

*pbMessageReflect*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="get_optionkeypath"></a> IAxWinAmbientDispatch::get_OptionKeyPath

The `OptionKeyPath` property specifies the registry key path to user settings.

```
STDMETHOD(get_OptionKeyPath)(BSTR* pbstrOptionKeyPath);
```

### Parameters

*pbstrOptionKeyPath*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

## <a name="get_showgrabhandles"></a> IAxWinAmbientDispatch::get_ShowGrabHandles

The `ShowGrabHandles` ambient property allows the control to find out if it should draw itself with grab handles.

```
STDMETHOD(get_ShowGrabHandles)(VARIANT_BOOL* pbShowGrabHandles);
```

### Parameters

*pbShowGrabHandles*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation always returns VARIANT_FALSE as the value of this property.

## <a name="get_showhatching"></a> IAxWinAmbientDispatch::get_ShowHatching

The `ShowHatching` ambient property allows the control to find out if it should draw itself hatched.

```
STDMETHOD(get_ShowHatching)(VARIANT_BOOL* pbShowHatching);
```

### Parameters

*pbShowHatching*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation always returns VARIANT_FALSE as the value of this property.

## <a name="get_usermode"></a> IAxWinAmbientDispatch::get_UserMode

The `UserMode` property specifies the ambient user mode of the container.

```
STDMETHOD(get_UserMode)(VARIANT_BOOL* pbUserMode);
```

### Parameters

*pbUserMode*<br/>
[out] The address of a variable to receive the current value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="put_allowcontextmenu"></a> IAxWinAmbientDispatch::put_AllowContextMenu

The `AllowContextMenu` property specifies whether the hosted control is allowed to display its own context menu.

```
STDMETHOD(put_AllowContextMenu)(VARIANT_BOOL bAllowContextMenu);
```

### Parameters

*bAllowContextMenu*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="put_allowshowui"></a> IAxWinAmbientDispatch::put_AllowShowUI

The `AllowShowUI` property specifies whether the hosted control is allowed to display its own user interface.

```
STDMETHOD(put_AllowShowUI)(VARIANT_BOOL bAllowShowUI);
```

### Parameters

*bAllowShowUI*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_FALSE as the default value of this property.

## <a name="put_allowwindowlessactivation"></a> IAxWinAmbientDispatch::put_AllowWindowlessActivation

The `AllowWindowlessActivation` property specifies whether the container will allow windowless activation.

```
STDMETHOD(put_AllowWindowlessActivation)(VARIANT_BOOL bAllowWindowless);
```

### Parameters

*bAllowWindowless*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="put_backcolor"></a> IAxWinAmbientDispatch::put_BackColor

The `BackColor` property specifies the ambient background color of the container.

```
STDMETHOD(put_BackColor)(OLE_COLOR clrBackground);
```

### Parameters

*clrBackground*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses COLOR_BTNFACE or COLOR_WINDOW as the default value of this property (depending on whether the parent of the host window is a dialog or not).

## <a name="put_displayasdefault"></a> IAxWinAmbientDispatch::put_DisplayAsDefault

`DisplayAsDefault` is an ambient property that allows a control to find out if it is the default control.

```
STDMETHOD(put_DisplayAsDefault)(VARIANT_BOOL bDisplayAsDefault);
```

### Parameters

*bDisplayAsDefault*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_FALSE as the default value of this property.

## <a name="put_dochostdoubleclickflags"></a> IAxWinAmbientDispatch::put_DocHostDoubleClickFlags

The `DocHostDoubleClickFlags` property specifies the operation that should take place in response to a double-click.

```
STDMETHOD(put_DocHostDoubleClickFlags)(DWORD dwDocHostDoubleClickFlags);
```

### Parameters

*dwDocHostDoubleClickFlags*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses DOCHOSTUIDBLCLK_DEFAULT as the default value of this property.

## <a name="put_dochostflags"></a> IAxWinAmbientDispatch::put_DocHostFlags

The `DocHostFlags` property specifies the user interface capabilities of the host object.

```
STDMETHOD(put_DocHostFlags)(DWORD dwDocHostFlags);
```

### Parameters

*dwDocHostFlags*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses DOCHOSTUIFLAG_NO3DBORDER as the default value of this property.

## <a name="put_font"></a> IAxWinAmbientDispatch::put_Font

The `Font` property specifies the ambient font of the container.

```
STDMETHOD(put_Font)(IFontDisp* pFont);
```

### Parameters

*pFont*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the default GUI font or the system font as the default value of this property.

## <a name="put_forecolor"></a> IAxWinAmbientDispatch::put_ForeColor

The `ForeColor` property specifies the ambient foreground color of the container.

```
STDMETHOD(put_ForeColor)(OLE_COLOR clrForeground);
```

### Parameters

*clrForeground*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the system window text color as the default value of this property.

## <a name="put_localeid"></a> IAxWinAmbientDispatch::put_LocaleID

The `LocaleID` property specifies the ambient locale ID of the container.

```
STDMETHOD(put_LocaleID)(LCID lcidLocaleID);
```

### Parameters

*lcidLocaleID*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses the user's default locale as the default value of this property.

## <a name="put_messagereflect"></a> IAxWinAmbientDispatch::put_MessageReflect

The `MessageReflect` ambient property specifies whether the container will reflect messages to the hosted control.

```
STDMETHOD(put_MessageReflect)(VARIANT_BOOL bMessageReflect);
```

### Parameters

*bMessageReflect*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="put_optionkeypath"></a> IAxWinAmbientDispatch::put_OptionKeyPath

The `OptionKeyPath` property specifies the registry key path to user settings.

```
STDMETHOD(put_OptionKeyPath)(BSTR bstrOptionKeyPath);
```

### Parameters

*bstrOptionKeyPath*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

## <a name="put_usermode"></a> IAxWinAmbientDispatch::put_UserMode

The `UserMode` property specifies the ambient user mode of the container.

```
STDMETHOD(put_UserMode)(VARIANT_BOOL bUserMode);
```

### Parameters

*bUserMode*<br/>
[in] The new value of this property.

### Return Value

A standard HRESULT value.

### Remarks

The ATL host object implementation uses VARIANT_TRUE as the default value of this property.

## <a name="setambientdispatch"></a> IAxWinAmbientDispatchEx::SetAmbientDispatch

This method is called to supplement the default ambient property interface with a user-defined interface.

```
virtual HRESULT STDMETHODCALLTYPE SetAmbientDispatch(IDispatch* pDispatch) = 0;
```

### Parameters

*pDispatch*<br/>
Pointer to the new interface.

### Return Value

Returns S_OK on success, or an error HRESULT on failure.

### Remarks

When `SetAmbientDispatch` is called with a pointer to a new interface, this new interface will be used to invoke any properties or methods asked for by the hosted control — if those properties are not already provided by [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

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

To create a licensed ActiveX control, see [IAxWinHostWindowLic::CreateControlLic](#createcontrollicex).

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

To create a licensed ActiveX control, see [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex).

## <a name="querycontrol"></a> IAxWinHostWindow::QueryControl

Returns the specified interface pointer provided by the hosted control.

```
STDMETHOD(QueryControl)(REFIID riid, void** ppvObject);
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

See [IAxWinHostWindow::CreateControl](#createcontrol) for a description of the remaining parameters and return value.

Calling this method is equivalent to calling [IAxWinHostWindowLic::CreateControlLicEx](#createcontrollicex)

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `IAxWinHostWindowLic::CreateControlLic`.

## <a name="createcontrollicex"></a> IAxWinHostWindowLic::CreateControlLicEx

Creates a licensed ActiveX control, initializes it, and hosts it in the specified window, similar to [IAxWinHostWindow::CreateControl](#createcontrol).

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

See [IAxWinHostWindow::CreateControlEx](#createcontrolex) for a description of the remaining parameters and return value.

### Example

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for a sample that uses `IAxWinHostWindowLic::CreateControlLicEx`.

## See also

[Class Overview](../../atl/atl-class-overview.md)
