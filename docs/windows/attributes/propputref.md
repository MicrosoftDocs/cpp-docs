---
description: "Learn more about: propputref"
title: "propputref (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.propputref"]
helpviewer_keywords: ["propputref attribute"]
ms.assetid: 9b0aed74-fdc7-4e59-9117-949bea4f86dd
---
# propputref

Specifies a property setting function that uses a reference instead of a value.

## Syntax

```cpp
[propputref]
```

## Remarks

The **propputref** C++ attribute has the same functionality as the [propputref](/windows/win32/Midl/propputref) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **propputref**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propget`, `propput`|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[propget](propget.md)<br/>
[propput](propput.md)
