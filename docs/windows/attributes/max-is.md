---
title: "max_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.max_is"]
helpviewer_keywords: ["max_is attribute"]
ms.assetid: 7c851f5c-6649-4d77-a792-247c37d8f560
---
# max_is

Designates the maximum value for a valid array index.

## Syntax

```cpp
[ max_is("expression") ]
```

### Parameters

*expression*<br/>
One or more C-language expressions. Empty argument slots are allowed.

## Remarks

The **max_is** C++ attribute has the same functionality as the [max_is](/windows/desktop/Midl/max-is) MIDL attribute.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Field in **struct** or **union**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|**size_is**|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## Example

See [first_is](first-is.md) for an example of how to specify a section of an array.

## See also

- [IDL Attributes](idl-attributes.md)
- [Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
- [Parameter Attributes](parameter-attributes.md)
- [first_is](first-is.md)
- [last_is](last-is.md)
- [length_is](length-is.md)
- [size_is](size-is.md)
