---
title: "Compiler Error C2382 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2382"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2382"]
ms.assetid: 4d4436f9-d0d6-4bd0-b8ec-767b89adfb2f
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2382
'function' : redefinition; different exception specifications  
  
 Under [/Za](../../build/reference/za-ze-disable-language-extensions.md), this error indicates that a function overload was attempted only on the [exception specification](../../cpp/exception-specifications-throw-cpp.md).  
  
 The following sample generates C2382:  
  
```  
// C2382.cpp  
// compile with: /Za /c  
void f1(void) throw(int) {}  
void f1(void) throw(char) {}   // C2382  
void f2(void) throw(char) {}   // OK  
```