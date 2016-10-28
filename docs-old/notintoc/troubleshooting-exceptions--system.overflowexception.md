---
title: "Troubleshooting Exceptions: System.OverflowException"
ms.custom: na
ms.date: "10/13/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "JScript"
  - "VB"
  - "CSharp"
  - "C++"
helpviewer_keywords: 
  - "OverflowException class"
ms.assetid: bd380db7-5d05-4d7f-be5b-e654fdadf14c
caps.latest.revision: 13
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
# Troubleshooting Exceptions: System.OverflowException
An \<xref:System.OverflowException> exception is thrown when an arithmetic, casting, or conversion operation in a checked context results in an overflow. An overflow occurs when an operation produces a value too large for the destination type, infinity, or Not a Number (NaN).  
  
## Associated Tips  
 **When casting from a number, the value must be a valid number less than infinity.**  
 A source value cannot be infinity or Not a Number.  
  
 **Make sure you are not dividing by zero.**  
 Dividing by zero will typically yield this exception.  
  
## Remarks  
 In languages that detect overflow, \<xref:System.OverflowException> is the exception that is thrown when overflow occurs. For example, in C#, the `checked` keyword is used to detect overflow conditions. An \<xref:System.OverflowException> exception occurs only in a checked context.  
  
 For a result from an integral or decimal-type arithmetic operation or conversion that is outside the range of the destination type:  
  
-   In a checked context, a compile-time error occurs if the operation is a constant expression. Otherwise, an \<xref:System.OverflowException> exception is thrown if the operation is performed at run time.  
  
-   In an unchecked context, the result is truncated by discarding any high-order bits that do not fit in the destination type.  
  
 For information about the value ranges of data types, see [Data Types](../Topic/Data%20Type%20Summary%20\(Visual%20Basic\).md), [Integral Types Table](../Topic/Integral%20Types%20Table%20\(C%23%20Reference\).md), or [Floating-Point Types Table](../Topic/Floating-Point%20Types%20Table%20\(C%23%20Reference\).md).  
  
## See Also  
 \<xref:System.OverflowException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)