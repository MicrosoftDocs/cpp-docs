---
description: "Learn more about: entry"
title: "entry (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.entry"]
helpviewer_keywords: ["entry attribute"]
ms.assetid: ba4843e3-d7ad-4b86-9a15-0b4192f0f698
---
# entry

Specifies an exported function or constant in a module by identifying the entry point in the DLL.

## Syntax

```cpp
[ entry(id) ]
```

### Parameters

*id*<br/>
The ID of the entry point.

## Remarks

The **entry** C++ attribute has the same functionality as the [entry](/windows/win32/Midl/entry) MIDL attribute.

## Example

See the example for [idl_module](idl-module.md) for an example use of **entry**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|`idl_module` attribute|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)
