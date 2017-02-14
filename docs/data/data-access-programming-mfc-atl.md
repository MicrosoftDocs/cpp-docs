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
Over the years, Visual C++ has provided several ways to work with databases. In 2011 Microsoft announced that it is aligning on ODBC as the preferred technology for accessing SQL Server products from native code. ODBC is an industry standard, and by using it you gain maximum portability of your code over multiple platforms and data sources. Most SQL database products and many NoSQL products support ODBC. You can use ODBC directly by calling the low-level ODBC APIs, or you can use the MFC ODBC wrapper classes, or a third-party C++ wrapper library. 

OLE DB is a low-level, high-performance API based on the COM specification, and is only supported on Windows. ATL provides OLE DB templates that make it easier to create custom OLE DB providers and consumers. OLE DB support in SQL Server products is officially deprecated and there is no guarantee that it will be supported after SQL Server 2016.  

If your legacy application uses OLE DB or the higher-level ADO interface to connect to SQL Server, you should consider migrating to ODBC in the near future. If you do not require cross-platform portability or the latest SQL Server features, you can possibly use the Microsoft OLE DB Provider for ODBC (MSDASQL).  MSDASQL allows applications that are built on OLEDB and ADO (which uses OLEDB internally) to access data sources through an ODBC driver. MSDASQL ships with the Windows operating system, and Windows Server 2008 & Windows Vista SP1 are the first Windows releases to include a 64-bit version of the technology.

The SQL Native Client component, which packages OLE DB and ODBC drivers in a single DLL, is also deprecated. New C++ applications that connect to SQL Server or Azure SQL Database should use [the most recent ODBC driver](https://docs.microsoft.com/en-us/sql/connect/odbc/download-odbc-driver-for-sql-server). The SQL Native Client component, which packages OLE DB and ODBC drivers in a single DLL, is deprecated.  For more information, see [SQL Server Native Client Programming](https://msdn.microsoft.com/en-us/library/ms130892.aspx)

If you use C++/CLI, you can continue to use ADO.NET as always. For more information, see [Data Access Using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md), and [Accessing data in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).  
  
-   In addition to the ODBC wrapper classes, MFC also provides Data Acess Objects (DAO) wrapper classes for connecting to Access databases.  However, DAO is obsolete. Any code based on CDaoDatabase or CDaoRecordset should be upgraded to use ODBC.  
For more information about the history of data access technologies on Microsoft Windows, see [Microsoft Data Access Components (Wikipedia)](https://en.wikipedia.org/wiki/Microsoft_Data_Access_Components).  

## See Also  
 [Data Access](http://msdn.microsoft.com/library/a9455752-39c4-4457-b14e-197772d3df0b)
 [Microsoft Open Database Connectivity (ODBC)](https://docs.microsoft.com/sql/odbc/microsoft-open-database-connectivity-odbc)
 [Data Access Technologies Road Map](https://msdn.microsoft.com/en-us/library/ms810810.aspx)