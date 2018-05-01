---
title: "Compiler Error C3481 | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "C3481"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3481"
ms.assetid: 5d09375a-5ed3-4b61-86ed-45e91fd734c7
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3481
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3481](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3481).  
  
  
var': lambda capture variable not found  
  
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

