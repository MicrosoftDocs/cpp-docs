---
description: "Learn more about: embedded_idl import attribute"
title: "embedded_idl import attribute"
ms.date: "08/29/2019"
f1_keywords: ["embedded_idl"]
helpviewer_keywords: ["embedded_idl attribute"]
ms.assetid: f1c1c2e8-3872-4172-8795-8d1288a20452
---
# embedded_idl import attribute

**C++ Specific**

Specifies whether the type library is written to the `.tlh` file with the attribute-generated code preserved.

## Syntax

> **#import** *type-library* **embedded_idl** [ **(** { **"emitidl"** | **"no_emitidl"** } **)** ]

### Parameters

**"emitidl"**\
Type information imported from *type-library* is present in the IDL generated for the attributed project. This behavior is the default, and is in effect if you don't specify a parameter to `embedded_idl`.

**"no_emitidl"**\
Type information imported from *type-library* isn't present in the IDL generated for the attributed project.

## Example

```cpp
// import_embedded_idl.cpp
// compile with: /LD
#include <windows.h>
[module(name="MyLib2")];
#import "\school\bin\importlib.tlb" embedded_idl("no_emitidl")
```

**END C++ Specific**

## See also

[#import attributes](../preprocessor/hash-import-attributes-cpp.md)\
[#import directive](../preprocessor/hash-import-directive-cpp.md)
