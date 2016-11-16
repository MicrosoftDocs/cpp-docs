---
title: "Compiler Error C3487 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "error-reference"
f1_keywords: 
  - "C3487"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3487"
ms.assetid: 39bda474-4418-4a79-98bf-2b22fa92eaaa
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Compiler Error C3487
'return type': all return expressions must deduce to the same type: previously it was 'return type'  
  
 A lambda must specify its return type unless it contains a single return statement. If a lambda contains multiple return statements, they must all have the same type.  
  
### To correct this error  
  
-   Specify a trailing return type for the lambda. Verify that all returns from the lambda are the same type or can be implicitly converted to the return type.  
  
## Example  
 The following example generates C3487 because the return types of the lambda do not match:  
  
```  
// C3487.cpp  
// Compile by using: cl /c /W4 C3487.cpp  
  
int* test(int* pi) {  
   // To fix the error, uncomment the trailing return type below  
   auto odd_pointer = [=]() /* -> int* */ {  
      if (*pi % 2)   
         return pi;  
      return nullptr; // C3487 - nullptr is not an int* type  
   };  
   return odd_pointer();  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)