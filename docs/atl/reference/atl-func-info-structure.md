---
description: "Learn more about: _ATL_FUNC_INFO Structure"
title: "_ATL_FUNC_INFO Structure"
ms.date: "11/04/2016"
f1_keywords: ["_ATL_FUNC_INFO", "ATL::_ATL_FUNC_INFO", "ATL._ATL_FUNC_INFO"]
helpviewer_keywords: ["_ATL_FUNC_INFO structure", "ATL_FUNC_INFO structure"]
ms.assetid: 441ebe2c-f971-47de-9f52-a258e8d6f88e
---
# _ATL_FUNC_INFO Structure

Contains type information used to describe a method or property on a dispinterface.

## Syntax

```cpp
struct _ATL_FUNC_INFO {
    CALLCONV cc;
    VARTYPE vtReturn;
    SHORT nParams;
    VARTYPE pVarTypes[_ATL_MAX_VARTYPES];
};
```

## Members

`cc`<br/>
The calling convention. When using this structure with the [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) class, this member must be CC_STDCALL. `CC_CDECL` is the only option supported in Windows CE for the `CALLCONV` field of the `_ATL_FUNC_INFO` structure. Any other value is unsupported thus its behavior undefined.

`vtReturn`<br/>
The variant type of the function return value.

`nParams`<br/>
The number of function parameters.

`pVarTypes`<br/>
An array of variant types of the function parameters.

## Remarks

Internally, ATL uses this structure to hold information obtained from a type library. You may need to manipulate this structure directly if you provide type information for an event handler used with the [IDispEventSimpleImpl](../../atl/reference/idispeventsimpleimpl-class.md) class and [SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info) macro.

## Example

Given a dispinterface method defined in IDL:

[!code-cpp[NVC_ATL_Windowing#139](../../atl/codesnippet/cpp/atl-func-info-structure_1.idl)]

you would define an `_ATL_FUNC_INFO` structure:

[!code-cpp[NVC_ATL_Windowing#140](../../atl/codesnippet/cpp/atl-func-info-structure_2.h)]

## Requirements

Header: atlcom.h

## See also

[Classes and structs](../../atl/reference/atl-classes.md)<br/>
[IDispEventSimpleImpl Class](../../atl/reference/idispeventsimpleimpl-class.md)<br/>
[SINK_ENTRY_INFO](composite-control-macros.md#sink_entry_info)
