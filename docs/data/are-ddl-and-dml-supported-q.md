---
title: "Are DDL and DML Supported? | Microsoft Docs"
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
  - "databases [C++], DDL access"
  - "Data Manipulation Language in MFC ODBC [C++]"
  - "DML [C++]"
  - "DDLs [C++], MFC support"
  - "databases [C++], accessing in DAO"
  - "databases [C++], DML access"
  - "DML [C++], MFC ODBC"
ms.assetid: 07f96d81-78d4-4bec-9138-b15d68fd5ce0
caps.latest.revision: 7
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
# Are DDL and DML Supported?
The MFC DAO classes support two kinds of access to databases:  
  
-   **Data definition language (DDL)** You can create and delete databases, create and delete tables, define table fields and indexes, and take other actions that affect the structure of your database.  
  
-   **Data manipulation language (DML)** You can run queries, add, delete, and edit records, and otherwise manipulate the content of your database.  
  
 The MFC ODBC classes support only DML, but you can call ODBC API functions directly to carry out DDL tasks.  
  
## See Also  
 [Data Access Frequently Asked Questions](../data/data-access-frequently-asked-questions-mfc-data-access.md)