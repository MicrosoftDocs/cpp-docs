---
title: "Automatic (Function Scope) Variables | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
dev_langs: ["C++"]
helpviewer_keywords: ["automatic variables", "variables, automatic", "functions [C++], scope", "scope, declared within functions"]
ms.assetid: 6e1a14c2-1fb0-4937-8628-8d963cc35ed4
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Automatic (Function Scope) Variables
A variable declared within a function can only be used within the scope of that function.  
  
```  
// LNK2019_AV.cpp  
// compile with: /c  
void test(void);  
  
static int lnktest3 = 3;  
int lnktest4 = 4;  
  
int main() {  
   static int lnktest1 = 1;  
   int lnktest2 = 2;  
   test();  
}  
```  
  
 and then,  
  
```  
// LNK2019_AV_2.cpp  
// compile with: LNK2019_AV.cpp  
// LNK2019 expected  
extern int lnktest1;  
extern int lnktest2;  
extern int lnktest3;  
extern int lnktest4;  
  
void test(void) {  
   int i = 0;  
   i = lnktest1;  
   i = lnktest2;  
   i = lnktest3;  
   i = lnktest4;   // OK  
}  
```  
  
## See Also  
 [Linker Tools Error LNK2019](../../error-messages/tool-errors/linker-tools-error-lnk2019.md)