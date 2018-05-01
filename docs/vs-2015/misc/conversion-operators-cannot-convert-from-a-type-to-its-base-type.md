---
title: "Conversion operators cannot convert from a type to its base type | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-visual-basic"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "bc33026"
  - "vbc33026"
helpviewer_keywords: 
  - "BC33026"
ms.assetid: 3533cf71-6a52-4fd0-a1f2-127c4ecd56ae
caps.latest.revision: 10
author: "stevehoag"
ms.author: "shoag"
manager: "wpickett"
---
# Conversion operators cannot convert from a type to its base type
A conversion operator is declared with a return type from which the parameter type derives.  
  
 At compile time, [!INCLUDE[vbprvb](../includes/vbprvb-md.md)] considers a predefined conversion to exist from any reference type to any type in its inheritance hierarchy, that is, any type from which it derives or which derives from it. Such a conversion might fail at run time, but the compiler cannot predict run-time results, so it allows any such conversion to compile.  
  
 Because the compiler considers this conversion to be already defined, it does not allow you to redefine it.  
  
 **Error ID:** BC33026  
  
### To correct this error  
  
-   Remove this operator definition entirely. It is already predefined.  
  
## See Also  
 [Operator Procedures](http://msdn.microsoft.com/library/8c513d38-246b-4fb7-8b75-29e1364e555b)   
 [Operator Statement](http://msdn.microsoft.com/library/b12ec4af-1ad7-4a17-865b-c5ee96320ae5)   
 [How to: Define an Operator](http://msdn.microsoft.com/library/d4b0e253-092a-4e6e-9fe2-01f562140a29)   
 [How to: Define a Conversion Operator](http://msdn.microsoft.com/library/54203dfa-c24b-463f-9942-d5153e89e762)