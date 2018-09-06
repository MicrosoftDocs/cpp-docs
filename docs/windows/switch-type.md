---
title: "switch_type | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.switch_type"]
dev_langs: ["C++"]
helpviewer_keywords: ["[""switch_type attribute""]"]
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# switch_type

Identifies the type of the variable used as the union discriminant.

## Syntax

```cpp
[switch_type(
type
}]
```

### Parameters

*type*  
The switch type, can be an integer, character, Boolean, or enumeration type.

## Remarks

The **switch_type** C++ attribute has the same functionality as the [switch_type](/windows/desktop/Midl/switch-type) MIDL attribute.

C++ attributes do not support [encapsulated unions](/windows/desktop/Midl/encapsulated-unions). [Nonencapsulated unions](/windows/desktop/Midl/nonencapsulated-unions) are supported only in the following form:

```cpp
// cpp_attr_ref_switch_type.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLibrary")];
[ export ]
struct SizedValue2 {
   [switch_type("char"), switch_is(kind)] union {
      [case(1), string]
         wchar_t* wval;
      [default, string]
         char* val;
   };
   char kind;
};
```

## Example

See the [case](../windows/case-cpp.md) example for a sample use of **switch_type**.

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|**typedef**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)  
[export](../windows/export.md)  