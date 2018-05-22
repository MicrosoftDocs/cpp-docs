---
title: "Troubleshooting Exceptions: System.OverflowException | Microsoft Docs"
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
  - "OverflowException class"
ms.assetid: bd380db7-5d05-4d7f-be5b-e654fdadf14c
caps.latest.revision: 13
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.OverflowException
An <xref:System.OverflowException> exception is thrown when an arithmetic, casting, or conversion operation in a checked context results in an overflow. An overflow occurs when an operation produces a value too large for the destination type, infinity, or Not a Number (NaN).  
  
## Associated Tips  
 **When casting from a number, the value must be a valid number less than infinity.**  
 A source value cannot be infinity or Not a Number.  
  
 **Make sure you are not dividing by zero.**  
 Dividing by zero will typically yield this exception.  
  
## Remarks  
 In languages that detect overflow, <xref:System.OverflowException> is the exception that is thrown when overflow occurs. For example, in C#, the `checked` keyword is used to detect overflow conditions. An <xref:System.OverflowException> exception occurs only in a checked context.  
  
 For a result from an integral or decimal-type arithmetic operation or conversion that is outside the range of the destination type:  
  
-   In a checked context, a compile-time error occurs if the operation is a constant expression. Otherwise, an <xref:System.OverflowException> exception is thrown if the operation is performed at run time.  
  
-   In an unchecked context, the result is truncated by discarding any high-order bits that do not fit in the destination type.  
  
 For information about the value ranges of data types, see [Data Types](http://msdn.microsoft.com/library/e975cdb6-64d8-4a4a-ae27-f3b3ed198ae0), [Integral Types Table](http://msdn.microsoft.com/library/62e86126-46ff-40b0-9028-e61d7558268c), or [Floating-Point Types Table](http://msdn.microsoft.com/library/da886cc5-e01e-4f62-b3ec-6428c8f7a102).  
  
## See Also  
 <xref:System.OverflowException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)