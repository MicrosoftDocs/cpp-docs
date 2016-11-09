---
title: "Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeException | Microsoft Docs"
ms.custom: ""
ms.date: "10/29/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-csharp"
ms.tgt_pltfrm: ""
ms.topic: "article"
helpviewer_keywords: 
  - "System.Data.SqlServerCe.SqlCeException exception"
  - "SqlCeException exception"
  - "SqlServerCe.SqlCeException exception"
ms.assetid: b0414ab9-94f1-48cc-a2ee-763c005150d5
caps.latest.revision: 10
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
# Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeException
A `System.Data.SqlServerCe.SqlCeException` exception is thrown when the underlying provider returns a warning or an error from a SQL Server Compact data source. For more information about the cause of this error, see [SQL Server Compact Edition Errors](http://msdn2.microsoft.com/library/ms171849.aspx) on the MSDN Web site.  
  
## Remarks  
 A `System.Data.SqlServerCe.SqlCeException` always contains at least one instance of `System.Data.SqlServerCe.SqlCeError`. The class cannot be inherited.  
  
 For more information, see [SQL Server Compact 3.5 Class Library](http://go.microsoft.com/fwlink/?LinkID=102595).  
  
## See Also  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)