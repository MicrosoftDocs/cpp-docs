---
title: "Conversion operators cannot convert from a type to the same type | Microsoft Docs"
ms.custom: ""
ms.date: "2015-07-20"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33024"
  - "vbc33024"
helpviewer_keywords: 
  - "BC33024"
ms.assetid: 4b47bcb0-4f0c-4d1c-9274-cce5b8e2b370
caps.latest.revision: 9
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
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
# Conversion operators cannot convert from a type to the same type
A conversion operator is declared with the same type for both the parameter and the return.  
  
 It is not meaningful to convert from any type to itself.  
  
 **Error ID:** BC33024  
  
### To correct this error  
  
-   Change the type of either the parameter or the return value. One of them must be of the type of the class or structure in which this operator is defined. The other must be of a different type.  
  
-   If you need to perform a transformation on the contents of the parameter, use a [Function Statement](/dotnet/articles/visual-basic/language-reference/statements/function-statement) to define a `Function` procedure instead of an operator.  
  
## See Also  
 [Operator Procedures](/dotnet/articles/visual-basic/language-reference/procedures/operator-procedures)   
 [Operator Statement](/dotnet/articles/visual-basic/language-reference/statements/operator-statement)   
 [How to: Define an Operator](http://msdn.microsoft.com/Library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/Library/54203dfa-c24b-463f-9942-d5153e89e762)