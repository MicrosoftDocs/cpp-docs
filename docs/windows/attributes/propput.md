---
description: "Learn more about: propput"
title: "propput (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.propput"]
helpviewer_keywords: ["propput attribute"]
ms.assetid: 1f84dda9-9cce-4e16-aaf0-b2c5219827f2
---
# propput

Specifies a property setting function.

## Syntax

```cpp
[propput]
```

## Remarks

The **propput** C++ attribute has the same functionality as the [propput](/windows/win32/Midl/propput) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **propput**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propget`, `propputref`|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[propget](propget.md)<br/>
[propputref](propputref.md)
