---
title: "Compiler Error C3347 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3347"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3347"]
ms.assetid: e939ad29-0b78-4681-9618-9bdae5675cee
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3347

'arg': required argument is not specified in attribute idl_module

A required argument was not passed to the [idl_module](../../windows/idl-module.md) attribute.

The following sample generates C3347:

```
// C3347.cpp
// compile with: /c
[module(name="xx")];

[idl_module(dllname="x")];    // C3347
// try the following line instead
// [idl_module(name="test", dllname="x")];
```