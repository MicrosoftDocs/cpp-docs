---
title: "Compiler Warning (level 1) C4312 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4312"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4312"]
ms.assetid: 541906ed-4f62-4bcb-947f-cf9ae7411bcb
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4312
'operation' : conversion from 'type1' to 'type2' of greater size  
  
 This warning detects an attempt to assign a 32-bit value to a 64-bit pointer type, for example, casting a 32-bit `int` or `long` to a 64-bit pointer.  
  
 This can be an unsafe conversion even for pointer values that fit in 32 bits when sign extension occurs. If a negative 32-bit integer is assigned to a 64-bit pointer type, sign extension causes the pointer value to reference a memory address different from the value of the integer.  
  
 This warning is only issued for 64-bit compilation targets. For more information, see [Rules for Using Pointers](/windows/desktop/WinProg64/rules-for-using-pointers).  
  
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