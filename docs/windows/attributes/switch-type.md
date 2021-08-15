---
description: "Learn more about: switch_type"
title: "switch_type (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.switch_type"]
helpviewer_keywords: ["switch_type attribute"]
ms.assetid: e24544dc-b3bc-48ae-b249-f967db49271e
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

*type*<br/>
The switch type, can be an integer, character, Boolean, or enumeration type.

## Remarks

The **switch_type** C++ attribute has the same functionality as the [switch_type](/windows/win32/Midl/switch-type) MIDL attribute.

C++ attributes do not support [encapsulated unions](/windows/win32/Midl/encapsulated-unions). [Nonencapsulated unions](/windows/win32/Midl/nonencapsulated-unions) are supported only in the following form:

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

See the [case](case-cpp.md) example for a sample use of **switch_type**.

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`typedef`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)<br/>
[export](export.md)
