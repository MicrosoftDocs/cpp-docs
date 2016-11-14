---
title: "Compiler Warning (level 1) C4312 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C4312"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C4312"
ms.assetid: 541906ed-4f62-4bcb-947f-cf9ae7411bcb
caps.latest.revision: 9
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
# Compiler Warning (level 1) C4312
'operation' : conversion from 'type1' to 'type2' of greater size  
  
 This warning detects an attempt to assign a 32-bit value to a 64-bit pointer type, for example, casting a 32-bit `int` or `long` to a 64-bit pointer.  
  
 This can be an unsafe conversion even for pointer values that fit in 32 bits when sign extension occurs. If a negative 32-bit integer is assigned to a 64-bit pointer type, sign extension causes the pointer value to reference a memory address different from the value of the integer.  
  
 This warning is only issued for 64-bit compilation targets. For more information, see [Rules for Using Pointers](http://msdn.microsoft.com/library/windows/desktop/aa384242).  
  
 The following code example generates C4312 when it is compiled for 64-bit targets:  
  
```  
// C4312.cpp  
// compile by using: cl /W1 /LD C4312.cpp  
void* f(int i) {  
   return (void*)i;   // C4312 for 64-bit targets  
}  
  
void* f2(__int64 i) {  
   return (void*)i;   // OK  
}  
```