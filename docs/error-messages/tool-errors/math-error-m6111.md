---
title: "Math Error M6111 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["M6111"]
dev_langs: ["C++"]
helpviewer_keywords: ["M6111"]
ms.assetid: c0fc13f8-33c8-4e3f-a440-126cc623441b
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Math Error M6111
stack underflow  
  
 A floating-point operation resulted in a stack underflow on the 8087/287/387 coprocessor or the emulator.  
  
 This error is often caused by a call to a `long double` function that does not return a value. For example, the following generates this error when compiled and run:  
  
```  
long double ld() {};  
main ()  
{  
  ld();  
}  
```  
  
 Program terminates with exit code 139.