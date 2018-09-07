---
title: "importidl | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["vc-attr.importidl"]
dev_langs: ["C++"]
helpviewer_keywords: ["importidl attribute"]
ms.assetid: 4b0a4b55-6c57-4e6e-bc7b-a12cc8063941
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# importidl

Inserts the specified .idl file into the generated .idl file.

## Syntax

```cpp
[ importidl(
   idl_file
) ];
```

### Parameters

*idl_file*  
Identifies the name of the .idl file that you want to merge with the .idl file that will be generated for your application.

## Remarks

The **importidl** C++ attribute places the section outside of the library block (in *idl_file*) into your program's generated .idl file and the library section (in *idl_file*) into the library section of your program's generated .idl file.

You may want to use **importidl**, for example, if you want to use a hand-coded .idl file with your generated .idl file.

## Example

```cpp
// cpp_attr_ref_importidl.cpp
// compile with: /LD
[module(name="MyLib")];
[importidl("import.idl")];
```

## Requirements

### Attribute Context

|||
|-|-|
|**Applies to**|Anywhere|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information, see [Attribute Contexts](../windows/attribute-contexts.md).

## See Also

[Compiler Attributes](../windows/compiler-attributes.md)  
[Stand-Alone Attributes](../windows/stand-alone-attributes.md)  
[import](../windows/import.md)  
[importlib](../windows/importlib.md)  
[include](../windows/include-cpp.md)  
[includelib](../windows/includelib-cpp.md)  