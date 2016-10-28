---
title: "Compiler Error C3484"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "C3484"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "C3484"
ms.assetid: 2fe847fa-f6ee-4978-bc1d-b6dc6ae906ac
caps.latest.revision: 9
ms.author: "corob"
manager: "douge"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
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
 [Lambda Expressions](../cpp/lambda-expressions-in-c--.md)