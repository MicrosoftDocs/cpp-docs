---
title: "Access to ODBC and SQL"
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
  - "API calls [C++], calling DAO or ODBC directly"
  - "Windows API [C++], calling from MFC"
  - "ODBC API functions [C++]"
  - "ODBC API functions [C++], calling from MFC"
  - "SQL [C++], calling ODBC API functions"
  - "ODBC [C++], API functions"
ms.assetid: 5613d7dc-00b7-4646-99ae-1116c05c52b4
caps.latest.revision: 7
ms.author: "mblome"
manager: "ghogen"
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
# Access to ODBC and SQL
The Microsoft Foundation Class Library encapsulates many Windows API calls and still lets you call any Windows API function directly. The database classes give you the same flexibility with regard to the ODBC API. While the database classes shield you from much of the complexity of ODBC, you can call ODBC API functions directly from anywhere in your program.  
  
 Similarly, the database classes shield you from having to work much with [SQL](../data/sql.md), but you can use SQL directly if you want. You can customize recordset objects by passing a custom SQL statement (or setting portions of the default statement) when you open the recordset. You can also make SQL calls directly using the [ExecuteSQL](../Topic/CDatabase::ExecuteSQL.md) member function of class [CDatabase](../mfcref/cdatabase-class.md).  
  
 For more information, see [ODBC: Calling ODBC API Functions Directly](../data/odbc--calling-odbc-api-functions-directly.md) and [SQL: Making Direct SQL Calls (ODBC)](../data/sql--making-direct-sql-calls--odbc-.md).  
  
## See Also  
 [ODBC and MFC](../data/odbc-and-mfc.md)