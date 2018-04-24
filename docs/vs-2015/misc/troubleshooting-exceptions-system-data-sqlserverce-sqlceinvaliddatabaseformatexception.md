---
title: "Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException | Microsoft Docs"
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
  - "SqlCeInvalidDatabaseFormatException exception"
  - "System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException exception"
ms.assetid: f5ca1f40-4619-4523-807e-d5b20bfb05b0
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "douge"
---
# Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException
A `System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException` exception occurs when SQL Server Compact opens a database file that was created in an earlier version of the product.  
  
## Remarks  
 You can update the database file by using [!INCLUDE[vs_orcas_long](../includes/vs-orcas-long-md.md)] or by using the API `System.Data.SqlServerCe.SqlCeEngine.Upgrade`.  
  
 For more information, see [SQL Server Compact 3.5 Class Library](http://go.microsoft.com/fwlink/?LinkID=102595).  
  
## See Also  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)