---
title: "Troubleshooting Exceptions: System.Data.StrongTypingException | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "StrongTypingException class"
ms.assetid: 90859ce2-3696-43cb-baf4-7daf98d8e2e1
caps.latest.revision: 9
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
# Troubleshooting Exceptions: System.Data.StrongTypingException
A <xref:System.Data.StrongTypingException> occurs when the user accesses a <xref:System.DBNull> value in a strongly typed <xref:System.Data.DataTable.DataSet%2A>.  
  
## Associated Tips  
 **Add error handling for the StrongTypingException.**  
 Place the code accessing the <xref:System.Data.DataTable.DataSet%2A> in a `Try…Catch` block and catch the <xref:System.Data.StrongTypingException>.  
  
## See Also  
 <xref:System.Data.DataTable.DataSet%2A>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)   
 [Try...Catch...Finally Statement](/dotnet/articles/visual-basic/language-reference/statements/try-catch-finally-statement)   
 [Dataset tools in Visual Studio](/visualstudio/data-tools/dataset-tools-in-visual-studio)