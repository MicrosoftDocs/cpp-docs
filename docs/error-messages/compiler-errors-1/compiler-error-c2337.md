---
title: "Compiler Error C2337 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2337"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2337"]
ms.assetid: eccc9178-a15e-42cd-bbd0-3cea7cf2d55b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2337

'attribute name' : attribute not found

You have used an attribute that is not supported in this version of Visual C++.

The following sample generates C2337:

```
// C2337.cpp
// compile with: /c
[emitidl];
[module(name="x")];
[grasshopper]   // C2337, not a supported attribute
class a{};
```