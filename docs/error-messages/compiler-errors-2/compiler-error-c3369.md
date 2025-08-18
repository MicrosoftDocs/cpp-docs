---
title: "Compiler Error C3369"
description: "Learn more about: Compiler Error C3369"
ms.date: 11/04/2016
f1_keywords: ["C3369"]
helpviewer_keywords: ["C3369"]
---
# Compiler Error C3369

> 'module name': idl_module already defined

## Remarks

The [idl_module](../../windows/attributes/idl-module.md) usage where you define the DLL can only occur once in a program.

## Example

The following example generates C3369:

```cpp
// C3369.cpp
// compile with: /c
[idl_module(name="name1", dllname="x.dll")]; // C3369
[idl_module(name="name1", dllname="x.dll")];
```
