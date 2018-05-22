---
title: "Access to ODBC and SQL | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Access to ODBC and SQL
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Access to ODBC and SQL](https://docs.microsoft.com/cpp/data/odbc/access-to-odbc-and-sql).  
  
  
The Microsoft Foundation Class Library encapsulates many Windows API calls and still lets you call any Windows API function directly. The database classes give you the same flexibility with regard to the ODBC API. While the database classes shield you from much of the complexity of ODBC, you can call ODBC API functions directly from anywhere in your program.  
  
 Similarly, the database classes shield you from having to work much with [SQL](../../data/odbc/sql.md), but you can use SQL directly if you want. You can customize recordset objects by passing a custom SQL statement (or setting portions of the default statement) when you open the recordset. You can also make SQL calls directly using the [ExecuteSQL](http://msdn.microsoft.com/library/f019e896-136b-4e35-bb78-08f87dac2054) member function of class [CDatabase](../../mfc/reference/cdatabase-class.md).  
  
 For more information, see [ODBC: Calling ODBC API Functions Directly](../../data/odbc/odbc-calling-odbc-api-functions-directly.md) and [SQL: Making Direct SQL Calls (ODBC)](../../data/odbc/sql-making-direct-sql-calls-odbc.md).  
  
## See Also  
 [ODBC and MFC](../../data/odbc/odbc-and-mfc.md)

