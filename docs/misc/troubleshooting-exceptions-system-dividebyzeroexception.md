---
title: "Troubleshooting Exceptions: System.DivideByZeroException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "DivideByZeroException class"
ms.assetid: ddc79201-3ba1-455f-8496-edaad792ccf1
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
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
# Troubleshooting Exceptions: System.DivideByZeroException
A <xref:System.DivideByZeroException> exception is thrown when there is an attempt to divide an integer or decimal value by zero.  
  
## Associated Tips  
 **Make sure the value of the denominator is not zero before you perform a division operation.**  
 Dividing a floating-point value by zero results in either positive infinity, negative infinity, or Not a Number (NaN), according to the rules of IEEE arithmetic. Floating-point operations never throw an exception.  
  
## See Also  
 <xref:System.DivideByZeroException>   
 [Arithmetic Operators in Visual Basic](/dotnet/visual-basic/programming-guide/language-features/operators-and-expressions/arithmetic-operators)   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)