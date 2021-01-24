---
description: "Learn more about: Data Access in Visual C++"
title: "Data Access in Visual C++"
ms.date: "03/28/2017"
helpviewer_keywords: ["Visual C++, data access applications", "databases [C++]", "OLE DB [C++], data access technologies", "data [C++], data access technologies", "data access [C++], class libraries for databases"]
ms.assetid: 95da6237-bbe2-480a-ae50-3a520051ceff
---
# Data Access in Visual C++

Virtually all database products, SQL and NoSQL, provide an interface for native C++ applications. The industry standard interface is ODBC which is supported by all major SQL database products and many NoSQL products. For non-Microsoft products, consult the vendor for more information. Third-party libraries with various license terms are also available.

Since 2011 Microsoft has aligned on ODBC as the standard for native applications to connecting to Microsoft SQL Server databases, both on-premises and in the cloud. For more information, see [Data Access Programming \(MFC-ATL\)](data-access-programming-mfc-atl.md). C++/CLI libraries can use either the native ODBC drivers or ADO.NET. For more information, see [Data Access Using ADO.NET (C++/CLI)](../dotnet/data-access-using-adonet-cpp-cli.md) and [Accessing data in Visual Studio](/visualstudio/data-tools/accessing-data-in-visual-studio).

## In This Section

[Data Access Programming (MFC/ATL)](data-access-programming-mfc-atl.md)<br/>
Describes legacy data access programming with Visual C++, where the preferred way is to use one of the class libraries such as the Active Template Class Library (ATL) or Microsoft Foundation Class (MFC) Library, which simplify working with the database APIs.

[Open Database Connectivity (ODBC)](odbc/open-database-connectivity-odbc.md)<br/>
The Microsoft Foundation Classes (MFC) library supplies classes for programming with Open Database Connectivity (ODBC).

[OLE DB Programming](oledb/ole-db-programming.md)<br/>
A mostly legacy interface which is still required in some scenarios, specifically when you are programming against linked servers.

## Related Topics

[Connect to SQL Database using C and C++](/azure/sql-database/sql-database-develop-cplusplus-simple)<br/>
Connect to Azure SQL Database from C or C++ applications.

[Microsoft Azure Storage Client Library for C++](https://github.com/Azure/azure-storage-cpp)<br/>
[Azure Storage](/azure/storage/common/storage-introduction) is a cloud storage solution for modern applications that rely on durability, availability, and scalability to meet the needs of their customers. Connect to Azure Storage from C++ by using the Azure Storage Client Library for C++.

[ODBC Driver for SQL Server](/sql/connect/odbc/microsoft-odbc-driver-for-sql-server)<br/>
The latest ODBC driver provides robust data access to Microsoft SQL Server and Microsoft Azure SQL Database for C/C++ based applications. Provides support for features including always encrypted, Azure Active Directory, and AlwaysOn Availability Groups. Also available for MacOS and Linux.

[OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server)<br/>
The latest OLE DB driver is a stand-alone data access application programming interface (API) that supports Microsoft SQL Server and Microsoft Azure SQL Database.

[Microsoft Azure C and C++ Developer Center](https://azure.microsoft.com/develop/cpp/)<br/>
Azure makes it easy to build C++ applications with increased flexibility, scalability and reliability using tools you love.

[How to use Blob Storage from C++](/azure/storage/storage-c-plus-plus-how-to-use-blobs)<br/>
Azure Blob storage is a service that stores unstructured data in the cloud as objects/blobs. Blob storage can store any type of text or binary data, such as a document, media file, or application installer. Blob storage is also referred to as object storage.

[ODBC Programmer's Reference](/sql/odbc/reference/odbc-programmer-s-reference)<br/>
The ODBC interface is designed for use with the C programming language. Use of the ODBC interface spans three areas: SQL statements, ODBC function calls, and C programming.

## See also

[C++ in Visual Studio](../overview/visual-cpp-in-visual-studio.md)
