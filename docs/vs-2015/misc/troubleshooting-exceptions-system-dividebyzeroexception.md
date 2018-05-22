---
title: "Troubleshooting Exceptions: System.DivideByZeroException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# Troubleshooting Exceptions: System.DivideByZeroException
A <xref:System.DivideByZeroException> exception is thrown when there is an attempt to divide an integer or decimal value by zero.  
  
## Associated Tips  
 **Make sure the value of the denominator is not zero before you perform a division operation.**  
 Dividing a floating-point value by zero results in either positive infinity, negative infinity, or Not a Number (NaN), according to the rules of IEEE arithmetic. Floating-point operations never throw an exception.  
  
## See Also  
 <xref:System.DivideByZeroException>   
 [Arithmetic Operators in Visual Basic](http://msdn.microsoft.com/library/325dac7a-ea4f-41d5-8b48-f6e904211569)   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)