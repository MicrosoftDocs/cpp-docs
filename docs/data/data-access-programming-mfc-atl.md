---
description: "Learn more about: Data Access Programming (MFC/ATL)"
title: "Data Access Programming (MFC-ATL)"
ms.date: "11/16/2018"
helpviewer_keywords: ["MFC [C++], data access applications", "databases [C++], MFC", "OLE DB [C++], data access technologies", "data [C++], data access technologies", "data access [C++], class libraries for databases"]
ms.assetid: def97b2c-b5a6-445f-afeb-308050fd4852
---
# Data Access Programming (MFC/ATL)

Over the years, Visual C++ has provided several ways to work with databases. In 2011 Microsoft announced that it is aligning on Open Database Connectivity (ODBC) as the preferred technology for accessing SQL Server products from native code. ODBC is an industry standard, and by using it you gain maximum portability of your code over multiple platforms and data sources. Most SQL database products and many NoSQL products support ODBC. You can use ODBC directly by calling the low-level ODBC APIs, or you can use the MFC ODBC wrapper classes, or a third-party C++ wrapper library.

OLE DB is a low-level, high-performance API based on the COM specification, and is only supported on Windows. Use OLE DB if your program is accessing [linked servers](/sql/relational-databases/linked-servers/linked-servers-database-engine). ATL provides OLE DB templates that make it easier to create custom OLE DB providers and consumers. The most recent provider for Microsoft SQL Server can be found in the documentation for the [OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server).

## Porting data applications

If your legacy application uses OLE DB or the higher-level ADO interface to connect to SQL Server, you should consider migrating to the latest [OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server) in order to take advantage of the latest SQL Server features. Another alternative, if you do not require cross-platform portability or the latest SQL Server features, you can possibly use the Microsoft OLE DB Provider for ODBC (MSDASQL).  MSDASQL allows applications that are built on OLE DB and ADO (which uses OLEDB internally) to access data sources through an ODBC driver. As with any translation layer, MSDASQL can impact database performance. You should test to determine whether the impact is significant for your application. MSDASQL ships with the Windows operating system, and Windows Server 2008 & Windows Vista SP1 are the first Windows releases to include a 64-bit version of the technology.

If your C++ application connects to SQL Server or Azure SQL Database via ODBC, it should use [the most recent ODBC driver](/sql/connect/odbc/download-odbc-driver-for-sql-server).

If you use C++/CLI, you can continue to use ADO.NET as always. For more information, see [Data Access Using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md), and [Accessing data in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).

- In addition to the ODBC wrapper classes, MFC also provides Data Access Objects (DAO) wrapper classes for connecting to Access databases.  However, DAO is obsolete. Any code based on CDaoDatabase or CDaoRecordset should be upgraded.

For more information about the history of data access technologies on Microsoft Windows, see [Microsoft Data Access Components (Wikipedia)](https://en.wikipedia.org/wiki/Microsoft_Data_Access_Components).

## See also

[Data Access](data-access-in-cpp.md)<br/>
[Microsoft Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc)<br/>
