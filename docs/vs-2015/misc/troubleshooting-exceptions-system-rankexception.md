---
title: "Troubleshooting Exceptions: System.RankException | Microsoft Docs"
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
  - "RankException class"
ms.assetid: ad7aa34a-f84b-4650-aaec-a75a8b85c50f
caps.latest.revision: 17
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.RankException
A <xref:System.RankException> exception is thrown when an array with the wrong number of dimensions is passed to a method.  
  
## Associated Tips  
 **Make sure your array has the required number of dimensions.**  
 For more information, Visual Basic users can see [Array Dimensions in Visual Basic](http://msdn.microsoft.com/library/385e911b-18c1-4e98-9924-c6d279101dd9).  
  
 For more information, C# users can see [Arrays](http://msdn.microsoft.com/library/bb79bdde-e570-4c30-adb0-1dd5759ae041).  
  
## Remarks  
 Since array subscripts start at 0, the lowest available subscript for every dimension is always 0.  
  
## See Also  
 <xref:System.RankException>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Arrays](http://msdn.microsoft.com/library/dbf29737-b589-4443-bee6-a27588d9c67e)