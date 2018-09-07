---
title: "Compiler Warning (level 4) C4365 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4365"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4365"]
ms.assetid: af4b4191-bdfd-4dbb-8229-3ba4405df257
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 4) C4365
'action' : conversion from 'type_1' to 'type_2', signed/unsigned mismatch  
  
 For example, you tried to convert an unsigned value to a signed value.  
  
 C4365 is off by default.  For more information, see [Compiler Warnings That Are Off by Default](../../preprocessor/compiler-warnings-that-are-off-by-default.md).  
  
## Example  
 The following sample generates C4365.  
  
```  
// C4365.cpp  
// compile with: /W4  
#pragma warning(default:4365)  
  
int f(int) { return 0; }  
void Test(size_t i) {}  
  
int main() {  
   unsigned int n = 10;  
   int o = 10;  
   n++;  
   f(n);   // C4365  
   f(o);   // OK  
  
   Test( -19 );   // C4365  
}  
```