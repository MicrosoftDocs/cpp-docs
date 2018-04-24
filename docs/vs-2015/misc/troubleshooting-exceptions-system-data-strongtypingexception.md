---
title: "Troubleshooting Exceptions: System.Data.StrongTypingException | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
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
---
# Troubleshooting Exceptions: System.Data.StrongTypingException
A <xref:System.Data.StrongTypingException> occurs when the user accesses a <xref:System.DBNull> value in a strongly typed <xref:System.Data.DataTable.DataSet%2A>.  
  
## Associated Tips  
 **Add error handling for the StrongTypingException.**  
 Place the code accessing the <xref:System.Data.DataTable.DataSet%2A> in a `Try…Catch` block and catch the <xref:System.Data.StrongTypingException>.  
  
## See Also  
 <xref:System.Data.DataTable.DataSet%2A>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)   
 [Try...Catch...Finally Statement](http://msdn.microsoft.com/library/d6488026-ccb3-42b8-a810-0d97b9d6472b)   
 [Dataset tools in Visual Studio](http://msdn.microsoft.com/library/ee57f4f6-9fe1-4e0a-be9a-955c486ff427)