---
description: "Learn more about: IAxWinAmbientDispatch Interface"
title: "IAxWinAmbientDispatch Interface"
ms.date: "11/04/2016"
f1_keywords: ["IAxWinAmbientDispatch", "ATLIFACE/ATL::IAxWinAmbientDispatch", "ATLIFACE/ATL::get_AllowContextMenu", "ATLIFACE/ATL::get_AllowShowUI", "ATLIFACE/ATL::get_AllowWindowlessActivation", "ATLIFACE/ATL::get_BackColor", "ATLIFACE/ATL::get_DisplayAsDefault", "ATLIFACE/ATL::get_DocHostDoubleClickFlags", "ATLIFACE/ATL::get_DocHostFlags", "ATLIFACE/ATL::get_Font", "ATLIFACE/ATL::get_ForeColor", "ATLIFACE/ATL::get_LocaleID", "ATLIFACE/ATL::get_MessageReflect", "ATLIFACE/ATL::get_OptionKeyPath", "ATLIFACE/ATL::get_ShowGrabHandles", "ATLIFACE/ATL::get_ShowHatching", "ATLIFACE/ATL::get_UserMode", "ATLIFACE/ATL::put_AllowContextMenu", "ATLIFACE/ATL::put_AllowShowUI", "ATLIFACE/ATL::put_AllowWindowlessActivation", "ATLIFACE/ATL::put_BackColor", "ATLIFACE/ATL::put_DisplayAsDefault", "ATLIFACE/ATL::put_DocHostDoubleClickFlags", "ATLIFACE/ATL::put_DocHostFlags", "ATLIFACE/ATL::put_Font", "ATLIFACE/ATL::put_ForeColor", "ATLIFACE/ATL::put_LocaleID", "ATLIFACE/ATL::put_MessageReflect", "ATLIFACE/ATL::put_OptionKeyPath", "ATLIFACE/ATL::put_UserMode"]
helpviewer_keywords: ["IAxWinAmbientDispatch interface"]
ms.assetid: 55ba6f7b-7a3c-4792-ae47-c8a84b683ca9
---
# IAxWinAmbientDispatch Interface

This interface provides methods for specifying characteristics of the hosted control or container.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
interface IAxWinAmbientDispatch : IDispatch
```

## Members

### Methods

|Name|Description|
|-|-|
|[get_AllowContextMenu](#get_allowcontextmenu)|The `AllowContextMenu` property specifies whether the hosted control is allowed to display its own context menu.|
|[get_AllowShowUI](#get_allowshowui)|The `AllowShowUI` property specifies whether the hosted control is allowed to display its own user interface.|
|[get_AllowWindowlessActivation](#get_allowwindowlessactivation)|The `AllowWindowlessActivation` property specifies whether the container will allow windowless activation.|
|[get_BackColor](#get_backcolor)|The `BackColor` property specifies the ambient background color of the container.|
|[get_DisplayAsDefault](#get_displayasdefault)|`DisplayAsDefault` is an ambient property that allows a control to find out if it is the default control.|
|[get_DocHostDoubleClickFlags](#get_dochostdoubleclickflags)|The `DocHostDoubleClickFlags` property specifies the operation that should take place in response to a double-click.|
|[get_DocHostFlags](#get_dochostflags)|The `DocHostFlags` property specifies the user interface capabilities of the host object.|
|[get_Font](#get_font)|The `Font` property specifies the ambient font of the container.|
|[get_ForeColor](#get_forecolor)|The `ForeColor` property specifies the ambient foreground color of the container.|
|[get_LocaleID](#get_localeid)|The `LocaleID` property specifies the ambient locale ID of the container.|
|[get_MessageReflect](#get_messagereflect)|The `MessageReflect` ambient property specifies whether the container will reflect messages to the hosted control.|
|[get_OptionKeyPath](#get_optionkeypath)|The `OptionKeyPath` property specifies the registry key path to user settings.|
|[get_ShowGrabHandles](#get_showgrabhandles)|The `ShowGrabHandles` ambient property allows the control to find out if it should draw itself with grab handles.|
|[get_ShowHatching](#get_showhatching)|The `ShowHatching` ambient property allows the control to find out if it should draw itself hatched.|
|[get_UserMode](#get_usermode)|The `UserMode` property specifies the ambient user mode of the container.|
|[put_AllowContextMenu](#put_allowcontextmenu)|The `AllowContextMenu` property specifies whether the hosted control is allowed to display its own context menu.|
|[put_AllowShowUI](#put_allowshowui)|The `AllowShowUI` property specifies whether the hosted control is allowed to display its own user interface.|
|[put_AllowWindowlessActivation](#put_allowwindowlessactivation)|The `AllowWindowlessActivation` property specifies whether the container will allow windowless activation.|
|[put_BackColor](#put_backcolor)|The `BackColor` property specifies the ambient background color of the container.|
|[put_DisplayAsDefault](#put_displayasdefault)|`DisplayAsDefault` is an ambient property that allows a control to find out if it is the default control.|
|[put_DocHostDoubleClickFlags](#put_dochostdoubleclickflags)|The `DocHostDoubleClickFlags` property specifies the operation that should take place in response to a double-click.|
|[put_DocHostFlags](#put_dochostflags)|The `DocHostFlags` property specifies the user interface capabilities of the host object.|
|[put_Font](#put_font)|The `Font` property specifies the ambient font of the container.|
|[put_ForeColor](#put_forecolor)|The `ForeColor` property specifies the ambient foreground color of the container.|
|[put_LocaleID](#put_localeid)|The `LocaleID` property specifies the ambient locale ID of the container.|
|[put_MessageReflect](#put_messagereflect)|The `MessageReflect` ambient property specifies whether the container will reflect messages to the hosted control.|
|[put_OptionKeyPath](#put_optionkeypath)|The `OptionKeyPath` property specifies the registry key path to user settings.|
|[put_UserMode](#put_usermode)|The `UserMode` property specifies the ambient user mode of the container.|

## Remarks

This interface is exposed by ATL's ActiveX control hosting objects. Call the methods on this interface to set the ambient properties available to the hosted control or to specify other aspects of the container's behavior. To supplement the properties provided by `IAxWinAmbientDispatch`, use [IAxWinAmbientDispatchEx](../../atl/reference/iaxwinambientdispatchex-interface.md).

<xref:System.Windows.Forms.AxHost> will try to load type information about `IAxWinAmbientDispatch` and `IAxWinAmbientDispatchEx` from the typelib that contains the code.

If you are linking to ATL90.dll, **AXHost** will load the type information from the typelib in the DLL.

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for more details.

## Requirements

The definition of this interface is available in a number of forms, as shown in the table below.

|Definition Type|File|
|---------------------|----------|
|IDL|atliface.idl|
|Type Library|ATL.dll|
|C++|atliface.h (also included in ATLBase.h)|

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

## See also

[IAxWinAmbientDispatchEx Interface](../../atl/reference/iaxwinambientdispatchex-interface.md)<br/>
[IAxWinHostWindow Interface](../../atl/reference/iaxwinhostwindow-interface.md)<br/>
[CAxWindow::QueryHost](../../atl/reference/caxwindow-class.md#queryhost)<br/>
[AtlAxGetHost](composite-control-global-functions.md#atlaxgethost)
