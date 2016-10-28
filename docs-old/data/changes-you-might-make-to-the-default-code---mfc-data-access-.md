---
title: "Changes You Might Make to the Default Code  (MFC Data Access)"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "record views [C++], customizing default code"
ms.assetid: 9992ed37-a6bf-45a5-a572-5c14e42b6628
caps.latest.revision: 8
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
The [MFC Application Wizard](../mfcref/database-support--mfc-application-wizard.md) writes a recordset class for you that selects all records in a single table. You will often want to modify that behavior in one or more of the following ways:  
  
-   Set a filter or a sort order for the recordset. Do this in `OnInitialUpdate` after the recordset object is constructed but before its **Open** member function is called. For more information, see [Recordset: Filtering Records (ODBC)](../data/recordset--filtering-records--odbc-.md) and [Recordset: Sorting Records (ODBC)](../data/recordset--sorting-records--odbc-.md).  
  
-   Parameterize the recordset. Specify the actual run-time parameter value after the filter. For more information, see [Recordset: Parameterizing a Recordset (ODBC)](../data/recordset--parameterizing-a-recordset--odbc-.md)  
  
-   Pass a customized SQL string to the [Open](../Topic/CRecordset::Open.md) member function. For a discussion of what you can accomplish with this technique , see [SQL: Customizing Your Recordset's SQL Statement (ODBC)](../data/sql--customizing-your-recordset’s-sql-statement--odbc-.md).  
  
## See Also  
 [Using a Record View](../data/using-a-record-view---mfc-data-access-.md)