---
description: "Learn more about: v1_enum"
title: "v1_enum (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.v1_enum"]
helpviewer_keywords: ["v1_enum attribute"]
ms.assetid: 2fe92d92-81b9-4a1c-b6ce-437d0eb770ca
---
# v1_enum

Directs that the specified enumerated type be transmitted as a 32-bit entity rather than the 16-bit default.

## Syntax

```cpp
[v1_enum]
```

## Remarks

The **v1_enum** C++ attribute has the same functionality as the [v1_enum](/windows/win32/Midl/v1-enum) MIDL attribute.

## Example

The following code shows a use of **v1_enum**:

```cpp
// cpp_attr_ref_v1_enum.cpp
// compile with: /LD
[module(name="MyLibrary")];

[export, v1_enum]
enum eList {
   e1 = 1, e2 = 2
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Enumerated type|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[IDL Attributes](idl-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
