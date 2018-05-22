---
title: "Compiler Error C3485 | Microsoft Docs"
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
  - "C3485"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3485"
ms.assetid: d67536f9-67a1-4ad9-9a94-d8bbbca3d0dc
caps.latest.revision: 10
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# Compiler Error C3485
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Compiler Error C3485](https://docs.microsoft.com/cpp/error-messages/compiler-errors-2/compiler-error-c3485).  
  
  
a lambda definition cannot have any cv-qualifiers  
  
 You cannot use a `const` or `volatile` qualifier as part of the definition of a lambda expression.  
  
### To correct this error  
  
-   Remove the `const` or `volatile` qualifier from the definition of your lambda expression.  
  
## Example  
 The following example generates C3485 because it uses the `const` qualifier as part of the definition of a lambda expression:  
  
```  
// C3485.cpp  
  
int main()  
{  
   auto x = []() const mutable {}; // C3485  
}  
```  
  
## See Also  
 [Lambda Expressions](../../cpp/lambda-expressions-in-cpp.md)

