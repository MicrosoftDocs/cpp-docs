---
title: "Compiler Error C3196 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3196"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3196"]
ms.assetid: d9c38a13-191d-472d-aa2b-f61a6459d16c
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3196

'keyword' : used more than once

A keyword was used more than once.

The following sample generates C3196:

```
// C3196.cpp
// compile with: /clr
ref struct R abstract abstract {};   // C3196
ref struct S abstract {};   // OK
```