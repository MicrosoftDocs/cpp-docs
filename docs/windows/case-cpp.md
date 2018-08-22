---
title: "case (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.case"]
dev_langs: ["C++"]
helpviewer_keywords: ["case attribute"]
ms.assetid: 6fb883c3-0526-4932-a901-b4564dcaeb7d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# case (C++)

Used with the [switch_type](../windows/switch-type.md) attribute in a **union**.

## Syntax

```cpp  
[ case(  
   value  
) ]  
```

#### Parameters

*value*  
A possible input value for which you want to provide processing. The type of **value** can be one of the following types:

- `int`

- `char`

- `boolean`

- `enum`

or an identifier of such a type.

## Remarks

The **case** C++ attribute has the same functionality as the **case** MIDL attribute. This attribute is only used with the [switch_type](../windows/switch-type.md) attribute.

## Example

The following code shows a use of the **case** attribute:

```cpp  
// cpp_attr_ref_case.cpp  
// compile with: /LD  
#include <unknwn.h>  
[export]  
struct SizedValue2 {  
   [switch_type(char), switch_is(kind)] union {  
      [case(1), string]  
          wchar_t* wval;  
      [default, string]  
          char* val;  
   };  
    char kind;  
};  
[module(name="ATLFIRELib")];  
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Member of a **class** or **struct**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

 For more information about the attribute contexts, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)  
[Typedef, Enum, Union, and Struct Attributes](../windows/typedef-enum-union-and-struct-attributes.md)  
[Class Attributes](../windows/class-attributes.md)   