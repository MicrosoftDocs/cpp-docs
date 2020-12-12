---
description: "Learn more about: Connecting to a Data Source"
title: "Connecting to a Data Source"
ms.date: "11/04/2016"
helpviewer_keywords: ["database connections [C++], ODBC", "ODBC connections [C++], using", "connections [C++], data source", "databases [C++], connecting to", "data sources [C++], connecting to", "ODBC data sources [C++], connections", "database connections [C++], MFC ODBC classes"]
ms.assetid: ef6c8c98-5979-43a8-9fb5-5bb06fc59f36
---
# Connecting to a Data Source

An ODBC data source is a specific set of data, the information required to access that data, and the location of the data source, which can be described using a data-source name. From your program's point of view, the data source includes the data, the DBMS, the network (if any), and ODBC.

To access data provided by a data source, your program must first establish a connection to the data source. All data access is managed through that connection.

Data-source connections are encapsulated by class [CDatabase](../../mfc/reference/cdatabase-class.md). When a `CDatabase` object is connected to a data source, you can:

- Construct [recordsets](../../mfc/reference/crecordset-class.md), which select records from tables or queries.

- Manage [transactions](../../data/odbc/transaction-odbc.md), batching updates so all are committed to the data source at once (or the whole transaction is rolled back so the data source is unchanged) — if the data source supports the required level of transactions.

- Directly execute [SQL](../../data/odbc/sql.md) statements.

When you finish working with a data-source connection, you close the `CDatabase` object and either destroy it or reuse it for a new connection. For more information about data-source connections, see [Data Source (ODBC)](../../data/odbc/data-source-odbc.md).

## See also

[ODBC and MFC](../../data/odbc/odbc-and-mfc.md)
