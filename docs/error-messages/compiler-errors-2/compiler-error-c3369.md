---
title: "Compiler Error C3369 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3369"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3369"]
ms.assetid: c6ceb9cb-3df9-4334-9a5c-d16db351d476
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3369

'module name': idl_module already defined

The [idl_module](../../windows/idl-module.md) usage where you define the DLL can only occur once in a program.

The following sample generates C3369:

```
// C3369.cpp
// compile with: /c
[idl_module(name="name1", dllname="x.dll")]; // C3369
[idl_module(name="name1", dllname="x.dll")];
```