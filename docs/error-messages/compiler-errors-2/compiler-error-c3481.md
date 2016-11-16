---
title: "Compiler Error C3481 | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
caps.latest.revision: 7
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
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
# Compiler Error C3481
'var': lambda capture variable not found  
  
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