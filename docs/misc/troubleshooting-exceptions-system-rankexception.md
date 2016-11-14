---
title: "Troubleshooting Exceptions: System.RankException | Microsoft Docs"
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
  - "RankException class"
ms.assetid: ad7aa34a-f84b-4650-aaec-a75a8b85c50f
caps.latest.revision: 17
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
# Troubleshooting Exceptions: System.RankException
A <xref:System.RankException> exception is thrown when an array with the wrong number of dimensions is passed to a method.  
  
## Associated Tips  
 **Make sure your array has the required number of dimensions.**  
 For more information, Visual Basic users can see [Array Dimensions in Visual Basic](/dotnet/visual-basic/programming-guide/language-features/arrays/array-dimensions).  
  
 For more information, C# users can see [Arrays](/dotnet/csharp/programming-guide/arrays/index).  
  
## Remarks  
 Since array subscripts start at 0, the lowest available subscript for every dimension is always 0.  
  
## See Also  
 <xref:System.RankException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Arrays](/dotnet/visual-basic/programming-guide/language-features/arrays/index)