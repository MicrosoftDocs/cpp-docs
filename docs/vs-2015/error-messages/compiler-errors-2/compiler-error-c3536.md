---
title: "Compiler Error C3536 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3536"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3536"
ms.assetid: 8d866075-866b-49eb-9979-ee27b308f7e3
caps.latest.revision: 8
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3536
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3536](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3536).  
  
  
symbol': cannot be used before it is initialized  
  
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

