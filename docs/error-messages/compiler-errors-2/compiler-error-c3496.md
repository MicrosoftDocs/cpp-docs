---
title: "Compiler Error C3496 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3496"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3496"]
ms.assetid: e19885f2-677f-4c1e-bc69-e35852262dc3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3496
'this' is always captured by value: '&' ignored  
  
 You cannot capture the `this` pointer by reference.  
  
### To correct this error  
  
-   Capture the `this` pointer by value.  
  
## Example  
 The following example generates C3496 because a reference to the `this` pointer appears in the capture list of a lambda expression:  
  
```  
// C3496.cpp  
// compile with: /c  
  
class C  
{  
   void f()  
   {  
      [&this] {}(); // C3496  
   }  
};  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)