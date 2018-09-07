---
title: "Compiler Error C2279 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2279"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2279"]
ms.assetid: 1b5c88ef-2336-49b8-9ddb-d61f97c73e14
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2279
exception specification cannot appear in a typedef declaration  
  
 Under **/Za**, [exception specifications](../../cpp/exception-specifications-throw-cpp.md) are not allowed in a typedef declaration.  
  
 The following sample generates C2279:  
  
```  
// C2279.cpp  
// compile with: /Za /c  
typedef int (*xy)() throw(...);   // C2279  
typedef int (*xyz)();   // OK  
```