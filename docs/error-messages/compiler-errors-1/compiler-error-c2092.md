---
title: "Compiler Error C2092 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2092"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2092"]
ms.assetid: 037e44ae-16c8-489a-a512-dcdf7f7795a6
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2092
'array name' array element type cannot be function  
  
 Arrays of functions are not allowed. Use an array of pointers to functions.  
  
## Example  
 The following sample generates C2092:  
  
```  
// C2092.cpp  
typedef void (F) ();  
typedef F AT[10];   // C2092  
```  
  
## Example  
 Possible resolution:  
  
```  
// C2092b.cpp  
// compile with: /c  
typedef void (F) ();  
typedef F * AT[10];  
```