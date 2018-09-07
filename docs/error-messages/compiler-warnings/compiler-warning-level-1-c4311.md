---
title: "Compiler Warning (level 1) C4311 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4311"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4311"]
ms.assetid: ddc579d0-d051-47bc-915d-71ffb32323c9
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4311
'variable' : pointer truncation from 'type' to 'type'  
  
 This warning detects 64-bit pointer truncation issues. For example, if code is compiled for a 64-bit architecture, the value of a pointer (64 bits) will be truncated if it is assigned to an `int` (32 bits). For more information, see [Rules for Using Pointers](/windows/desktop/WinProg64/rules-for-using-pointers).  
  
 For additional information about common causes of warning C4311, see [Common Compiler Errors](/windows/desktop/WinProg64/common-compiler-errors).  
  
 The following code example generates C4311 when compiled for a 64-bit target, and then demonstrates how to fix it:  
  
```  
// C4311.cpp  
// compile by using: cl /W1 C4311.cpp  
int main() {  
   void* p = &p;  
   unsigned int i = (unsigned int) p;   // C4311 for 64-bit targets  
   unsigned long long j = (unsigned long long) p;   // OK  
}  
  
```