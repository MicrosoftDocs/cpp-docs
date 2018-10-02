---
title: "Compiler Error C2156 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2156"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2156"]
ms.assetid: 136f9c67-2c27-4f61-b7e6-ccd202eca697
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2156

pragma must be outside function

A pragma that must be specified at a global level (outside a function body) is within a function.

The following sample generates C2156:

```
// C2156.cpp
#pragma optimize( "l", on )   // OK
int main() {
   #pragma optimize( "l", on )   // C2156
}
```