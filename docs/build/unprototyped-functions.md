---
title: "Unprototyped Functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
ms.assetid: 34200b8c-5b52-4f0d-aff8-9f70d82868ed
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Unprototyped Functions
For functions not fully prototyped, the caller will pass integer values as integers and floating-point values as double precision. For floating-point values only, both the integer register and the floating-point register will contain the float value in case the callee expects the value in the integer registers.  
  
```  
func1();  
func2() {   // RCX = 2, RDX = XMM1 = 1.0, and R8 = 7  
   func1(2, 1.0, 7);  
}  
```  
  
## See Also  
 [Calling Convention](../build/calling-convention.md)