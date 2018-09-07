---
title: "Compiler Error C3481 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3481"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3481"]
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3481
'var': lambda capture variable not found  
  
 The compiler could not find the definition of a variable that you passed to the capture list of a lambda expression.  
  
### To correct this error  
  
-   Remove the variable from the capture list of the lambda expression.  
  
## Example  
 The following example generates C3481 because the variable `n` is not defined:  
  
```  
// C3481.cpp  
  
int main()  
{  
   [n] {}(); // C3481  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)