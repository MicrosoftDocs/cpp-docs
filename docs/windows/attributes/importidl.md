---
title: "importidl (C++ COM Attribute) | Microsoft Docs"
ms.custom: ""
ms.date: "10/02/2018"
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
[ importidl(idl_file) ];
```

### Parameters

*idl_file*<br/>
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

For more information, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See Also

[Compiler Attributes](compiler-attributes.md)<br/>
[Stand-Alone Attributes](stand-alone-attributes.md)<br/>
[import](import.md)<br/>
[importlib](importlib.md)<br/>
[include](include-cpp.md)<br/>
[includelib](includelib-cpp.md)  