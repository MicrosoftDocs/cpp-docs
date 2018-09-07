---
title: "Compiler Warning (level 3) C4334 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4334"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4334"]
ms.assetid: d845857f-bc95-4faf-a079-626a0cf935ba
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 3) C4334
'operator' : result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)  
  
 The result of 32-bit shift was implicitly converted to 64-bits, and the compiler suspects that a 64-bit shift was intended.  To resolve this warning, either use 64-bit shift, or explicitly cast the shift result to 64-bit.  
  
## Example  
 The following sample generates C4334.  
  
```  
// C4334.cpp  
// compile with: /W3 /c  
void SetBit(unsigned __int64 *p, int i) {  
   *p |= (1 << i);   // C4334  
   *p |= (1i64 << i);   // OK  
}  
```