---
description: "Learn more about: propget"
title: "propget (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.propget"]
helpviewer_keywords: ["propget attribute"]
ms.assetid: c9d4a97f-36dd-4b61-8eb0-b1a217598f14
---
# propget

Specifies a property accessor function.

## Syntax

```cpp
[propget]
```

## Remarks

The **propget** C++ attribute has the same functionality as the [propget](/windows/win32/Midl/propget) MIDL attribute.

## Example

See the example for [bindable](bindable.md) for a sample use of **propget**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`propput`, `propputref`|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Method Attributes](method-attributes.md)<br/>
[propput](propput.md)<br/>
[propputref](propputref.md)
