---
description: "Learn more about: size_is"
title: "size_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.size_is"]
helpviewer_keywords: ["size_is attribute"]
ms.assetid: 70192d09-f6c5-4d52-b3fe-303f8cb10aa5
---
# size_is

Specify the size of memory allocated for sized pointers, sized pointers to sized pointers, and single- or multidimensional arrays.

## Syntax

```cpp
[ size_is("expression") ]
```

### Parameters

*expression*<br/>
The size of memory allocated for sized pointers.

## Remarks

The **size_is** C++ attribute has the same functionality as the [size_is](/windows/win32/Midl/size-is) MIDL attribute.

## Example

See the example for [first_is](first-is.md) for a sample of how to specify a section of an array.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Field in **`struct`** or **`union`**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|`max_is`|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[last_is](last-is.md)<br/>
[max_is](max-is.md)<br/>
[length_is](length-is.md)
