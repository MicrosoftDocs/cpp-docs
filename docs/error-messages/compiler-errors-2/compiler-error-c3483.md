---
title: "Compiler Error C3483 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3483"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3483"]
ms.assetid: 18b3a2c5-dfc9-4661-9653-08a5798474cf
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3483
'var' is already part of the lambda capture list  
  
 You passed the same variable to the capture list of a lambda expression more than one time.  
  
### To correct this error  
  
-   Remove all additional instances of the variable from the capture list.  
  
## Example  
 The following example generates C3483 because the variable `n` appears more than one time in the capture list of the lambda expression:  
  
```  
// C3483.cpp  
  
int main()  
{  
   int m = 6, n = 5;  
   [m,n,n] { return n + m; }(); // C3483  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)