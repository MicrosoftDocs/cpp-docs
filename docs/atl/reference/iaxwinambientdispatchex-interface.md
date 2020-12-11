---
description: "Learn more about: IAxWinAmbientDispatchEx Interface"
title: "IAxWinAmbientDispatchEx Interface"
ms.date: "11/04/2016"
f1_keywords: ["IAxWinAmbientDispatchEx", "ATLIFACE/ATL::IAxWinAmbientDispatchEx", "ATLIFACE/ATL::SetAmbientDispatch"]
helpviewer_keywords: ["IAxWinAmbientDispatchEx interface"]
ms.assetid: 2c25e079-6128-4278-bc72-b2c6195ba7ef
---
# IAxWinAmbientDispatchEx Interface

This interface implements supplemental ambient properties for a hosted control.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```
MIDL_INTERFACE("B2D0778B - AC99 - 4c58 - A5C8 - E7724E5316B5") IAxWinAmbientDispatchEx : public IAxWinAmbientDispatch
```

## Members

### Methods

|Name|Description|
|-|-|
|[SetAmbientDispatch](#setambientdispatch)|This method is called to supplement the default ambient property interface with a user-defined interface.|

## Remarks

Include this interface in ATL applications that are statically linked to ATL and host ActiveX Controls, especially ActiveX Controls that have Ambient Properties. Not including this interface will generate this assertion: "Did you forget to pass the LIBID to CComModule::Init"

This interface is exposed by ATL's ActiveX control hosting objects. Derived from [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md), `IAxWinAmbientDispatchEx` adds a method that allows you to supplement the ambient property interface provided by ATL with one of your own.

<xref:System.Windows.Forms.AxHost> will try to load type information about `IAxWinAmbientDispatch` and `IAxWinAmbientDispatchEx` from the type library that contains the code.

If you are linking to ATL90.dll, **AXHost** will load the type information from the type library in the DLL.

See [Hosting ActiveX Controls Using ATL AXHost](../../atl/atl-control-containment-faq.md#hosting-activex-controls-using-atl-axhost) for more details.

## Requirements

The definition of this interface is available in a number of forms, as shown in the following table.

|Definition Type|File|
|---------------------|----------|
|IDL|atliface.idl|
|Type Library|ATL.dll|
|C++|atliface.h (also included in ATLBase.h)|

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

When `SetAmbientDispatch` is called with a pointer to a new interface, this new interface will be used to invoke any properties or methods asked for by the hosted control, if those properties are not already provided by [IAxWinAmbientDispatch](../../atl/reference/iaxwinambientdispatch-interface.md).

## See also

[IAxWinAmbientDispatch Interface](../../atl/reference/iaxwinambientdispatch-interface.md)
