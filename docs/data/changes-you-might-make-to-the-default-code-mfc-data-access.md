---
title: "Changes You Might Make to the Default Code  (MFC Data Access) | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "record views [C++], customizing default code"
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# Changes You Might Make to the Default Code  (MFC Data Access)
The [MFC Application Wizard](../mfc/reference/database-support-mfc-application-wizard.md) writes a recordset class for you that selects all records in a single table. You will often want to modify that behavior in one or more of the following ways:  
  
-   Set a filter or a sort order for the recordset. Do this in `OnInitialUpdate` after the recordset object is constructed but before its **Open** member function is called. For more information, see [Recordset: Filtering Records (ODBC)](../data/odbc/recordset-filtering-records-odbc.md) and [Recordset: Sorting Records (ODBC)](../data/odbc/recordset-sorting-records-odbc.md).  
  
-   Parameterize the recordset. Specify the actual run-time parameter value after the filter. For more information, see [Recordset: Parameterizing a Recordset (ODBC)](../data/odbc/recordset-parameterizing-a-recordset-odbc.md)  
  
-   Pass a customized SQL string to the [Open](../mfc/reference/crecordset-class.md#crecordset__open) member function. For a discussion of what you can accomplish with this technique , see [SQL: Customizing Your Recordset's SQL Statement (ODBC)](../data/odbc/sql-customizing-your-recordsets-sql-statement-odbc.md).  
  
## See Also  
 [Using a Record View](../data/using-a-record-view-mfc-data-access.md)