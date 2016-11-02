---
title: "Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException"
ms.custom: ""
ms.date: "10/19/2016"
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
# Troubleshooting Exceptions: System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException
A `System.Data.SqlServerCe.SqlCeInvalidDatabaseFormatException` exception occurs when SQL Server Compact opens a database file that was created in an earlier version of the product.  
  
## Remarks  
 You can update the database file by using [!INCLUDE[vs_orcas_long](../atl/reference/includes/vs_orcas_long_md.md)] or by using the API `System.Data.SqlServerCe.SqlCeEngine.Upgrade`.  
  
 For more information, see [SQL Server Compact 3.5 Class Library](http://go.microsoft.com/fwlink/?LinkID=102595).  
  
## See Also  
 [Use the Exception Assistant](../Topic/How%20to:%20Use%20the%20Exception%20Assistant.md)