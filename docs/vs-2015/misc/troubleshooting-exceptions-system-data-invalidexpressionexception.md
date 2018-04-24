---
title: "Troubleshooting Exceptions: System.Data.InvalidExpressionException | Microsoft Docs"
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
  - "InvalidExpressionException class"
ms.assetid: 2de49b17-4b3f-46e0-bf5c-01b075ddbd5c
caps.latest.revision: 14
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Data.InvalidExpressionException
An <xref:System.Data.InvalidExpressionException> exception is thrown when there is an attempt to add a <xref:System.Data.DataColumn> containing an invalid <xref:System.Data.DataColumn.Expression%2A> to a <xref:System.Data.DataColumnCollection>.  
  
## Associated Tips  
 **Check the syntax of your expression.**  
 The <xref:System.Data.DataColumn.Expression%2A> property is used to calculate the value of a column or to create an aggregate column.  
  
## See Also  
 <xref:System.Data.InvalidExpressionException>   
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)