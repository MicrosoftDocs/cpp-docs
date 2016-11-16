---
title: "Using Stored Procedures | Microsoft Docs"
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
  - "OLE DB, stored procedures"
  - "stored procedures, Visual C++"
  - "stored procedures, about stored procedures"
  - "OLE DB provider templates, stored procedures"
  - "stored procedures, OLE DB"
ms.assetid: 90507e4c-eca2-46c9-ad8c-07e10dc1d41b
caps.latest.revision: 16
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
# Using Stored Procedures
A stored procedure is an executable object stored in a database. Calling a stored procedure is similar to invoking a SQL command. Using stored procedures on the data source (instead of executing or preparing a statement in the client application) can provide several advantages, including higher performance, reduced network overhead, and improved consistency and accuracy.  
  
 A stored procedure can have any number of (including zero) input or output parameters and can pass a return value. You can either hard code parameter values as specific data values or use a parameter marker (a question mark '?').  
  
> [!NOTE]
>  CLR SQL Server stored procedures created using Visual C++ must be compiled with the **/clr:safe** compiler option.  
  
 The OLE DB provider for SQL Server (SQLOLEDB) supports the following mechanisms that stored procedures use to return data:  
  
-   Every SELECT statement in the procedure generates a result set.  
  
-   The procedure can return data through output parameters.  
  
-   The procedure can have an integer return code.  
  
> [!NOTE]
>  You cannot use stored procedures with the OLE DB provider for Jet because that provider does not support stored procedures; only constants are allowed in query strings.  
  
## See Also  
 [Working with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)