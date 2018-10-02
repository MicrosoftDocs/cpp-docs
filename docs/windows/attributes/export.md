---
title: "export (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.export"]
dev_langs: ["C++"]
helpviewer_keywords: ["export attribute"]
ms.assetid: 70b3e848-fad6-4e09-8c72-be60ca72a4df
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# export

Causes a data structure to be placed in the .idl file.

## Syntax

```cpp
[export]
```

## Remarks

The **export** C++ attribute causes a data structure to be placed in the .idl file and to then be available in the type library in a binary-compatible format that makes it available for use with any language.

You cannot apply the **export** attribute to a class even if the class only has public members (the equivalent of a **struct**).

If you export an unnamed **enum** or **struct**, it is given a name that begins with **__unnamed**<em>x</em>, where *x* is a sequential number.

The typedefs valid for export are base types, structs, unions, enums, or type identifiers.  See [typedef](/windows/desktop/Midl/typedef) for more information.

## Example

The following code shows how to use the **export** attribute:

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

### Attribute Context

|||
|-|-|
|**Applies to**|**union**, **typedef**, **enum**, **struct**, or **interface**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](attribute-contexts.md).

## See Also

[Compiler Attributes](compiler-attributes.md)<br/>
[Typedef, Enum, Union, and Struct Attributes](typedef-enum-union-and-struct-attributes.md)  