---
description: "Learn more about: length_is"
title: "length_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.length_is"]
helpviewer_keywords: ["length_is attribute"]
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
---
# length_is

Specifies the number of array elements to be transmitted.

## Syntax

```cpp
[ length_is("expression") ]
```

### Parameters

*expression*<br/>
One or more C-language expressions. Empty argument slots are allowed.

## Remarks

The **length_is** C++ attribute has the same functionality as the [length_is](/windows/win32/Midl/length-is) MIDL attribute.

## Example

See [first_is](first-is.md) for an example of how to specify a section of an array.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Field in **`struct`** or **`union`**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[max_is](max-is.md)<br/>
[last_is](last-is.md)<br/>
[size_is](size-is.md)
