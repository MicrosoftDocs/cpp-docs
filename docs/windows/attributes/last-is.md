---
description: "Learn more about: last_is"
title: "last_is (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.last_is"]
helpviewer_keywords: ["last_is attribute"]
ms.assetid: 9e045ac0-fa38-4249-af55-67bde5d0a58c
---
# last_is

Specifies the index of the last array element to be transmitted.

## Syntax

```cpp
[ last_is("expression") ]
```

### Parameters

*expression*<br/>
One or more C-language expressions. Empty argument slots are allowed.

## Remarks

The **last_is** C++ attribute has the same functionality as the [last_is](/windows/win32/Midl/last-is) MIDL attribute.

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
[length_is](length-is.md)<br/>
[size_is](size-is.md)
