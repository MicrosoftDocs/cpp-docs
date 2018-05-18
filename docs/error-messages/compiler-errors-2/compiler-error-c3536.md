---
title: "Compiler Error C3536 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-diagnostics"]
ms.topic: "error-reference"
f1_keywords: ["C3536"]
dev_langs: ["C++"]
helpviewer_keywords: ["C3536"]
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# Compiler Error C3536
'symbol': cannot be used before it is initialized  
  
 The indicated symbol cannot be used before it is initialized. In practice, this means that a variable cannot be used to initialize itself.  
  
### To correct this error  
  
1.  Do not initialize a variable with itself.  
  
## Example  
 The following example yields C3536 because each variable is initialized with itself.  
  
```  
// C3536.cpp  
// Compile with /Zc:auto  
int main()  
{  
   auto a = a;     //C3536  
   auto b = &b;    //C3536  
   auto c = c + 1; //C3536  
   auto* d = &d;   //C3536  
   auto& e = e;    //C3536  
   return 0;  
};  
```  
  
## See Also  
 [auto Keyword](../../cpp/auto-keyword.md)