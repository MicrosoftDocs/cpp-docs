---
description: "Learn more about: pointer_default"
title: "pointer_default (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.pointer_default"]
helpviewer_keywords: ["pointer_default attribute"]
ms.assetid: 2d0c7bbc-a1e8-4337-9e54-e304523e2735
---
# pointer_default

Specifies the default pointer attribute for all pointers, except top-level pointers that appear in parameter lists.

## Syntax

```cpp
[ pointer_default(value) ]
```

### Parameters

*value*<br/>
A value that describes the pointer type: **ptr**, **ref**, or **unique**.

## Remarks

The **pointer_default** C++ attribute has the same functionality as the [pointer_default](/windows/win32/Midl/pointer-default) MIDL attribute.

## Example

See the example for [defaultvalue](defaultvalue.md) for a sample use of **pointer_default**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Interface Attributes](interface-attributes.md)
