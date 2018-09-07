---
title: "Compiler Warning (level 1) C4003 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4003"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4003"]
ms.assetid: 0ed1c285-4428-4c90-8131-86897e31f115
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4003
not enough actual parameters for macro 'identifier'  
  
 The number of formal parameters in the macro definition exceeds the number of actual parameters in the macro. Macro expansion substitutes empty text for the missing parameters.  
  
 The following sample generates C4003:  
  
```  
// C4003.cpp  
// compile with: /WX  
#define test(a,b) (a+b)  
  
int main()  
{  
   int a = 1;  
   int b = 2;  
   a = test(b);   // C4003  
   // try..  
   a = test(a,b);  
}  
```