---
description: "Learn more about: OLE DB Consumer Templates (C++)"
title: "OLE DB Consumer Templates (C++)"
ms.date: "10/22/2018"
helpviewer_keywords: ["databases [C++], OLE DB templates", "OLE DB consumers [C++], data access", "OLE DB consumer templates [C++]", "databases [C++], consumers"]
ms.assetid: d3e42612-0bc0-4d65-9c32-0e8a7b219e82
---
# OLE DB Consumer Templates (C++)

The OLE DB Consumer Templates support the OLE DB version 2.6 specification. (The OLE DB Consumer Templates are tested against OLE DB 2.6 but don't support every interface in the specification.) The Consumer Templates minimize the amount of code you must write to implement an OLE DB consumer. The templates provide:

- Easy access to OLE DB features and easy integration with ATL and MFC.

- An easy binding model for database parameters and columns.

- Native C/C++ data types for OLE DB programming.

To use the OLE DB Templates, you should be familiar with C++ templates, COM, and the OLE DB interfaces. If you aren't familiar with OLE DB, see [Microsoft OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server).

The OLE DB Templates support the existing OLE DB object model rather than adding a new object model. The top-layer classes in the OLE DB Consumer Templates parallel the components defined in the OLE DB specification. The design of the OLE DB Consumer Templates includes advanced features such as multiple accessors on a rowset. The use of templates and multiple inheritance makes the library small and flexible.

## How OLE DB Consumers Access Data

Consumers use several kinds of objects, which are described in the following topics:

- [Data Sources and Sessions](../../data/oledb/data-sources-and-sessions.md)

- [Accessors and Rowsets](../../data/oledb/accessors-and-rowsets.md)

- [Commands and Tables](../../data/oledb/commands-and-tables.md)

- [User Records](../../data/oledb/user-records.md)

Before the consumer does anything, you first select an OLE DB provider that is appropriate for the type of database you need to access (for example, SQL, Oracle, ODBC, and MSDS). To do this, you typically use an enumerator (see [CEnumerator](../../data/oledb/cenumerator-class.md) as mentioned in [Data Sources and Sessions](../../data/oledb/data-sources-and-sessions.md)).

The [data source object](../../data/oledb/data-sources-and-sessions.md) provides the connection information necessary to connect to the data source you selected. The data source object also contains authentication information (such as login names and passwords), which is used to give users permission to access the data source. The data source object makes a connection to the database and then creates one or more session objects. Each [session object](../../data/oledb/data-sources-and-sessions.md) manages its own interactions with the database (that is, querying and retrieving data) and performs these transactions independently of other existing sessions.

The session creates the rowset and command objects. The [command object](../../data/oledb/commands-and-tables.md) allows users to interact with the database, for example, using SQL commands. The [rowset object](../../data/oledb/accessors-and-rowsets.md) is a set of data through which you can navigate and in which you can [update, delete, and insert rows](../../data/oledb/updating-rowsets.md).

An OLE DB consumer binds columns in the database tables with local variables; to do this, it uses an [accessor](../../data/oledb/accessors-and-rowsets.md), which contains a map of how data is stored within the consumer. The map consists of a set of bindings between table columns and local buffers (variables) in the consumer application.

One important concept when working with consumers is that you declare two classes in a consumer: the [command (or table) class](../../data/oledb/commands-and-tables.md) and the [user record class](../../data/oledb/user-records.md). You access the rowset through the command (or table) class, which inherits from both an accessor class and a rowset class. The user record class contains the rowset binding map previously described.

For more information, see the following topics:

- [Creating an OLE DB Consumer](../../data/oledb/creating-an-ole-db-consumer.md)

- [Common OLE DB Consumer Scenarios (Examples)](../../data/oledb/working-with-ole-db-consumer-templates.md)

## See also

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[Data Access](../data-access-in-cpp.md)<br/>
[OLE DB SDK Documentation](/previous-versions/windows/desktop/ms722784(v=vs.85))<br/>
[Microsoft OLE DB Driver for SQL Server](/sql/connect/oledb/oledb-driver-for-sql-server)
