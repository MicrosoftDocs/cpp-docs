---
title: "Troubleshooting Exceptions: System.Data.ReadOnlyException | Microsoft Docs"
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
  - "ReadOnlyException class"
ms.assetid: 1ac5da38-c5af-4fec-8fe1-1b9dd5069e59
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Data.ReadOnlyException
A <xref:System.Data.ReadOnlyException> exception is thrown when there is an attempt to change the value of a read-only data column.  
  
## Associated Tips  
 **Change the column to read/write.**  
 This exception is thrown if you are attempting to change a value in a data column that is read-only. For more information, see <xref:System.Data.DataColumn>.  
  
 **Make sure that you are modifying the data in the correct column.**  
 This exception is thrown if you are attempting to change a value in a data column that is read-only. For more information, see <xref:System.Data.DataColumn>.  
  
## See Also  
 <xref:System.Data.ReadOnlyException>   
 <xref:System.Data.DataRow.EndEdit%2A>   
 <xref:System.Data.DataRow.ItemArray%2A>   
 [Use the Exception Assistant](http://msdn.microsoft.com/library/e0a78c50-7318-4d54-af51-40c00aea8711)