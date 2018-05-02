---
title: "Compiler Error C2021 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2021"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2021"]
ms.assetid: 064f32e2-3794-48d5-9767-991003dcb36a
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2021
expected exponent value, not 'character'  
  
 The character used as the exponent of a floating-point constant is not a valid number. Be sure to use an exponent that is in range.  
  
## Example  
 The following sample generates C2021:  
  
```  
// C2021.cpp  
float test1=1.175494351E;   // C2021  
```  
  
## Example  
 Possible resolution:  
  
```  
// C2021b.cpp  
// compile with: /c  
float test2=1.175494351E8;  
```