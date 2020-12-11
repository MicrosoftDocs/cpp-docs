---
description: "Learn more about: export"
title: "export (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.export"]
helpviewer_keywords: ["export attribute"]
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
---
# export

Causes a data structure to be placed in the .idl file.

## Syntax

```cpp
[export]
```

## Remarks

The **`[export]`** C++ attribute causes a data structure to be placed in the .idl file and to then be available in the type library in a binary-compatible format that makes it available for use with any language.

You cannot apply the **`[export]`** attribute to a class even if the class only has public members (the equivalent of a **`struct`**).

If you export an unnamed **`enum`** or **`struct`**, it is given a name that begins with **__unnamed**<em>x</em>, where *x* is a sequential number.

The typedefs valid for export are base types, structs, unions, enums, or type identifiers.  See [`typedef`](/windows/win32/Midl/typedef) for more information.

## Example

The following code shows how to use the **`[export]`** attribute:

```cpp
// cpp_attr_ref_export.cpp
// compile with: /LD
[module(name="MyLibrary")];

[export]
struct MyStruct {
   int i;
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`union`**, **`typedef`**, **`enum`**, **`struct`**, or **`interface`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[Compiler Attributes](compiler-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)
