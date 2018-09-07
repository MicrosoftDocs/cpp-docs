---
title: "Compiler Warning (level 1) C4804 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C4804"]
dev_langs: ["C++"]
helpviewer_keywords: ["C4804"]
ms.assetid: 069e8f44-3ef6-43bb-8524-4116fc6eea83
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Warning (level 1) C4804
'operation' : unsafe use of type 'bool' in operation  
  
 This warning is for when you used a `bool` variable or value in an unexpected way. For example, C4804 is generated if you use operators such as the negative unary operator (**-**) or the complement operator (`~`). The compiler evaluates the expression.  
  
## Example  
 The following sample generates C4804:  
  
```  
// C4804.cpp  
// compile with: /W1  
  
int main()  
{  
   bool i = true;  
   if (-i)   // C4804, remove the '-' to resolve  
   {  
      i = false;  
   }  
}  
```