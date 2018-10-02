---
title: "length_is (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.length_is"]
dev_langs: ["C++"]
helpviewer_keywords: ["length_is attribute"]
ms.assetid: 1d99b883-84bb-4b1e-b098-eb780fc94f40
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
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

The **length_is** C++ attribute has the same functionality as the [length_is](/windows/desktop/Midl/length-is) MIDL attribute.

## Example

See [first_is](first-is.md) for an example of how to specify a section of an array.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Field in **struct** or **union**, interface parameter, interface method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[Parameter Attributes](parameter-attributes.md)<br/>
[first_is](first-is.md)<br/>
[max_is](max-is.md)<br/>
[last_is](last-is.md)<br/>
[size_is](size-is.md)  