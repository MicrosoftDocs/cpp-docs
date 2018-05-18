---
title: "Compiler Error C3484 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3484"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3484"]
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3484
expected '->' before the return type  
  
 You must provide `->` before the return type of a lambda expression.  
  
### To correct this error  
  
-   Provide `->` before the return type.  
  
## Example  
 The following example generates C3484:  
  
```  
// C3484a.cpp  
  
int main()  
{  
   return []() . int { return 42; }(); // C3484  
}  
```  
  
## Example  
 The following example resolves C3484 by providing `->` before the return type of the lambda expression:  
  
```  
// C3484b.cpp  
  
int main()  
{  
   return []() -> int { return 42; }();  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)