---
title: "includelib (C++) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.includelib"]
dev_langs: ["C++"]
helpviewer_keywords: ["includelib attribute"]
ms.assetid: cd90ea6e-5ae8-4f11-b8d1-662db95412b2
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# includelib (C++)

Causes an .idl or .h file to be included in the generated .idl file.

## Syntax

```cpp
[ includelib(
   name.idl
) ];
```

### Parameters

*name.idl*<br/>
The name of the .idl file that you want included as part of the generated .idl file.

## Remarks

The **includelib** C++ attribute causes an .idl or .h file to be included in the generated .idl file, after the `importlib` statement.

## Example

The following code is shown in a .cpp file:

```cpp
// cpp_attr_ref_includelib.cpp
// compile with: /LD
[module(name="MyLib")];
[includelib("includelib.idl")];
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|Yes|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[IDL Attributes](../windows/idl-attributes.md)<br/>
[Stand-Alone Attributes](../windows/stand-alone-attributes.md)<br/>
[import](../windows/import.md)<br/>
[importidl](../windows/importidl.md)<br/>
[include](../windows/include-cpp.md)<br/>
[importlib](../windows/importlib.md)  