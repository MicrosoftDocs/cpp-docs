---
title: "Compiler Error C3482 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-tools"]
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: ["C3482"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3482"]
ms.assetid: bf99558e-bef4-421c-bb16-dcd9c54c1011
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
ms.workload: ["cplusplus"]
---
# Compiler Error C3482
'this' can only be used as a lambda capture within a non-static member function  
  
 You cannot pass `this` to the capture list of a lambda expression that is declared in a static method or a global function.  
  
### To correct this error  
  
-   Convert the enclosing function to a non-static method, or  
  
-   Remove the `this` pointer from the capture list of the lambda expression.  
  
## Example  
 The following example generates C3482:  
  
```  
// C3482.cpp  
// compile with: /c  
  
class C  
{  
public:  
   static void staticMethod()  
   {  
      [this] {}(); // C3482  
   }  
};  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)