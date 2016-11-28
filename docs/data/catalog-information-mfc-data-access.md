---
title: "Catalog Information  (MFC Data Access) | Microsoft Docs"
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
  - "tables [C++], catalog information"
  - "DAO [C++], catalog information"
  - "tables [C++]"
  - "ODBC [C++], catalog information"
  - "catalog information database [C++]"
  - "databases [C++], catalog information database"
ms.assetid: c184e80f-ff17-409f-9df8-05275080bb8d
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
# Catalog Information  (MFC Data Access)
Information about the tables in a data source can include the names of tables and the columns in them, table privileges, names of primary and foreign keys, information about predefined queries or stored procedures, information about indexes on tables, and statistics about tables.  
  
 For more information, see [Data Source: Determining the Schema of the Data Source (ODBC)](../data/odbc/data-source-determining-the-schema-of-the-data-source-odbc.md).  
  
> [!NOTE]
>  In the MFC DAO classes, you can get catalog information as follows: Use [CDaoDatabase::GetTableDefCount](../mfc/reference/cdaodatabase-class.md#cdaodatabase__gettabledefcount) and [CDaoDatabase::GetTableDefInfo](../mfc/reference/cdaodatabase-class.md#cdaodatabase__gettabledefinfo) to enumerate the tables in the database and obtain information for each table in a [CDaoTableDefInfo](../mfc/reference/cdaotabledefinfo-structure.md) structure.  
  
## See Also  
 [Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)