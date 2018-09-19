---
title: "helpstring | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.helpstring"]
dev_langs: ["C++"]
helpviewer_keywords: ["helpstring attribute [C++]"]
ms.assetid: 0401e905-a63e-4fad-98d0-d1efea111966
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# helpstring

Specifies a character string that is used to describe the element to which it applies.

## Syntax

```cpp
[ helpstring(
   "string"
) ]
```

### Parameters

*string*<br/>
The text of the help string.

## Remarks

The **helpstring** C++ attribute has the same functionality as the [helpstring](/windows/desktop/Midl/helpstring) MIDL attribute.

## Example

See the example for [defaultvalue](../windows/defaultvalue.md) for an example of how to use **helpstring**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**interface**, **typedef**, **class**, method, property|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Interface Attributes](../windows/interface-attributes.md)<br/>
[Class Attributes](../windows/class-attributes.md)<br/>
[Method Attributes](../windows/method-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)<br/>
[helpfile](../windows/helpfile.md)<br/>
[helpcontext](../windows/helpcontext.md)  