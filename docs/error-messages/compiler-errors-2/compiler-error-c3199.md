---
title: "Compiler Error C3199 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3199"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3199"]
ms.assetid: e7a478d3-115a-40a3-991b-c7454fd2e28e
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3199
invalid use of floating-point pragmas: exceptions are not supported in non-precise mode  
  
 The [float_control](../../preprocessor/float-control.md) pragma was used to specify floating-point exception model under an [/fp](../../build/reference/fp-specify-floating-point-behavior.md) setting other than **/fp:precise**.  
  
 The following sample generates C3199:  
  
```  
// C3199.cpp  
// compile with: /fp:fast  
#pragma float_control(except, on)   // C3199  
```