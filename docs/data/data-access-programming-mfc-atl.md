---
title: "Data Access Programming (MFC-ATL) | Microsoft Docs"
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
  - "MFC [C++], data access applications"
  - "databases [C++], MFC"
  - "OLE DB [C++], data access technologies"
  - "data [C++], data access technologies"
  - "data access [C++], class libraries for databases"
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
caps.latest.revision: 14
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
# Data Access Programming (MFC/ATL)
Over the years, Visual C++ has provided several ways to work with databases. Currently, the preferred way to connect to databases in native C++ is to use ODBC directly by calling ODBC APIs, or by using the MFC ODBC wrapper classes, or by using a third-party C++ wrapper library for ODBC. New C++ applications that connect to SQL Server or Azure SQL Database should use [the most recent ODBC driver](https://docs.microsoft.com/en-us/sql/connect/odbc/download-odbc-driver-for-sql-server). Microsoft provides versions of this driver for MacOS and Linux in addition to Windows. By using ODBC you gain maximum portability of your code over multiple platforms and data sources. Most SQL database products and many NoSQL products support ODBC.  

If you use C++/CLI, you can continue to use ADO.NET as always. For more information, see [Data Access Using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md), and [Accessing data in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).  
  

 The library classes support the following kinds of data access:  
  
-   ATL provides OLE DB templates and database attributes. OLE DB is based on the COM specification, and is only supported on Windows. The OLE DB standard, and the ATL OLE DB classes and templates are still supported, but the OLE DB provider for SQL Server has been deprecated since SQL Server 2012. The SQL Native Client component, which packages OLE DB and ODBC drivers in a single DLL, is also deprecated. Use these classes and templates only when maintaining existing applications whose data store supports OLE DB. If you are using these classes to connect to SQL Server, you should migrate to ODBC in the near future.
  
-   MFC provides Open Database Connectivity (ODBC) and Data Acess Objects (DAO) wrapper classes.  DAO is obsolete. Any code based on CDaoDatabase or CDaoRecordset should be upgraded to use ODBC. 

- The ADO and RDO technologies are obsolete and any code that uses them should be upgraded to ODBC or ADO.NET. 
  
 
## See Also  
 [Data Access](http://msdn.microsoft.com/library/a9455752-39c4-4457-b14e-197772d3df0b)
 [Microsoft Data Access Components (Wikipedia)]()