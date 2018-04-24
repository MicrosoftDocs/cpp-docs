---
title: "Catalog Information  (MFC Data Access) | Microsoft Docs"
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
  - "tables [C++], catalog information"
  - "DAO [C++], catalog information"
  - "tables [C++]"
  - "ODBC [C++], catalog information"
  - "catalog information database [C++]"
  - "databases [C++], catalog information database"
ms.assetid: c184e80f-ff17-409f-9df8-05275080bb8d
caps.latest.revision: 12
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Catalog Information  (MFC Data Access)
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Catalog Information  (MFC Data Access)](https://docs.microsoft.com/cpp/data/catalog-information-mfc-data-access).  
  
  
Information about the tables in a data source can include the names of tables and the columns in them, table privileges, names of primary and foreign keys, information about predefined queries or stored procedures, information about indexes on tables, and statistics about tables.  
  
 For more information, see [Data Source: Determining the Schema of the Data Source (ODBC)](../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md).  
  
> [!NOTE]
>  In the MFC DAO classes, you can get catalog information as follows: Use [CDaoDatabase::GetTableDefCount](../Topic/CDaoDatabase::GetTableDefCount.md) and [CDaoDatabase::GetTableDefInfo](../Topic/CDaoDatabase::GetTableDefInfo.md) to enumerate the tables in the database and obtain information for each table in a [CDaoTableDefInfo](../mfc/reference/cdaotabledefinfo-structure.md) structure.  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)

