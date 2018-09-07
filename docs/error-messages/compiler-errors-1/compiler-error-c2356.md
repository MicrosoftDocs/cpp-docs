---
title: "Compiler Error C2356 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C2356"]
dev_langs: ["C++"]
helpviewer_keywords: ["C2356"]
ms.assetid: 84d5a816-9a61-4d45-9978-38e485bbf767
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C2356
initialization segment must not change during translation unit  
  
 Possible causes:  
  
-   `#pragma init_seg` preceded by segment initialization code  
  
-   `#pragma init_seg` preceded by another `#pragma init_seg`  
  
 To resolve, move the segment initialization code to the beginning of the module. If multiple areas must be initialized, move them to separate modules.  
  
 The following sample generates C2356:  
  
```  
// C2356.cpp  
#pragma warning(disable : 4075)  
  
int __cdecl myexit(void (__cdecl *)());  
int __cdecl myexit2(void (__cdecl *)());  
  
#pragma init_seg(".mine$m",myexit)  
#pragma init_seg(".mine$m",myexit2)   // C2356  
```