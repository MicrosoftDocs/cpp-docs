---
description: "Learn more about: ODBC Driver Requirements for Dynasets"
title: "ODBC Driver Requirements for Dynasets"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC recordsets, dynasets", "drivers, for dynasets", "drivers, ODBC", "recordsets, dynasets", "dynasets", "ODBC drivers, dynasets"]
ms.assetid: 585cc67b-4d92-404b-9903-d769cd17badc
---
# ODBC Driver Requirements for Dynasets

In the MFC ODBC database classes, dynasets are recordsets with dynamic properties; they remain synchronized with the data source in certain ways. MFC dynasets (but not forward-only recordsets) require an ODBC driver with Level 2 API conformance. If the driver for your [data source](../../data/odbc/data-source-odbc.md) conforms to the Level 1 API set, you can still use both updateable and read-only snapshots and forward-only recordsets, but not dynasets. However, a Level 1 driver can support dynasets if it supports extended fetch and keyset-driven cursors.

In ODBC terminology, dynasets and snapshots are referred to as cursors. A cursor is a mechanism used for keeping track of its position in a recordset. For more information about driver requirements for dynasets, see [Dynaset](../../data/odbc/dynaset.md). For more information about cursors, see the [Open Database Connectivity (ODBC)](/sql/odbc/microsoft-open-database-connectivity-odbc) documentation.

> [!NOTE]
> For updateable recordsets, your ODBC driver must support either positioned update statements or the `::SQLSetPos` ODBC API function. If both are supported, MFC uses `::SQLSetPos` for efficiency. Alternatively, for snapshots, you can use the cursor library, which provides the required support for updateable snapshots (static cursors and positioned update statements).

## See also

[ODBC Basics](../../data/odbc/odbc-basics.md)
