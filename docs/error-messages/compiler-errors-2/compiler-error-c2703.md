---
title: "Compiler Error C2703 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2703"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2703"]
ms.assetid: 384295c3-643d-47ae-a9a6-865b3036aa84
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2703

illegal __leave statement

A `__leave` statement must be inside a `__try` block.

The following sample generates C2703:

```
// C2703.cpp
int main() {
   __leave;   // C2703
   __try {
      // try the following line instead
      __leave;
   }
   __finally {}
}
```