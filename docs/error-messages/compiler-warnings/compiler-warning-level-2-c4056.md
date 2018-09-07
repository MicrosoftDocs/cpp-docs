---
title: "Compiler Warning (level 2) C4056 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4056"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4056"]
ms.assetid: a3c3a9b8-ec30-452d-96cb-3694adcce789
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 2) C4056
overflow in floating point constant arithmetic  
  
 Floating-point constant arithmetic generates a result that exceeds the maximum allowable value.  
  
 This warning can be caused by compiler optimizations performed during constant arithmetic. You can safely ignore this warning if it goes away when you turn off optimization ([/Od](../../build/reference/od-disable-debug.md)).  
  
 The following sample generates C4056:  
  
```  
// C4056.cpp  
// compile with: /W2 /LD  
#pragma warning (default : 4056)  
float fp_val = 1.0e300 * 1.0e300;   // C4056  
```