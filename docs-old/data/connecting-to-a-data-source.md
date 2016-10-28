---
title: "Connecting to a Data Source"
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
  - "database connections [C++], ODBC"
  - "ODBC connections [C++], using"
  - "connections [C++], data source"
  - "databases [C++], connecting to"
  - "data sources [C++], connecting to"
  - "ODBC data sources [C++], connections"
  - "database connections [C++], MFC ODBC classes"
ms.assetid: ef6c8c98-5979-43a8-9fb5-5bb06fc59f36
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
# Connecting to a Data Source
An ODBC data source is a specific set of data, the information required to access that data, and the location of the data source, which can be described using a data-source name. From your program's point of view, the data source includes the data, the DBMS, the network (if any), and ODBC.  
  
 To access data provided by a data source, your program must first establish a connection to the data source. All data access is managed through that connection.  
  
 Data-source connections are encapsulated by class [CDatabase](../mfcref/cdatabase-class.md). When a `CDatabase` object is connected to a data source, you can:  
  
-   Construct [recordsets](../mfcref/crecordset-class.md), which select records from tables or queries.  
  
-   Manage [transactions](../data/transaction--odbc-.md), batching updates so all are committed to the data source at once (or the whole transaction is rolled back so the data source is unchanged) — if the data source supports the required level of transactions.  
  
-   Directly execute [SQL](../data/sql.md) statements.  
  
 When you finish working with a data-source connection, you close the `CDatabase` object and either destroy it or reuse it for a new connection. For more information about data-source connections, see [Data Source (ODBC)](../data/data-source--odbc-.md).  
  
## See Also  
 [ODBC and MFC](../data/odbc-and-mfc.md)