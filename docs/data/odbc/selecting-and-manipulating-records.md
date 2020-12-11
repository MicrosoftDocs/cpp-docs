---
description: "Learn more about: Selecting and Manipulating Records"
title: "Selecting and Manipulating Records"
ms.date: "05/09/2019"
helpviewer_keywords: ["records, selecting", "record selection, MFC ODBC classes", "ODBC recordsets, selecting records"]
ms.assetid: 7f0b3a4a-9941-4475-a612-9ec8d15b7691
---
# Selecting and Manipulating Records

> [!NOTE]
> The MFC ODBC Consumer wizard is not available in Visual Studio 2019 and later. You can still create a consumer manually.

Normally when you select records from a data source using a SQL **SELECT** statement, you get a result set, which is a set of records from a table or a query. With the database classes, you use a recordset object to select and access the result set. This is an object of an application-specific class that you derive from class [CRecordset](../../mfc/reference/crecordset-class.md). When you define a recordset class, you specify the data source to associate it with, the table to use, and the columns of the table. The MFC Application Wizard or **Add Class** (as described in [Adding an MFC ODBC Consumer](../../mfc/reference/adding-an-mfc-odbc-consumer.md)) creates a class with a connection to a specific data source. The wizards write the [GetDefaultSQL](../../mfc/reference/crecordset-class.md#getdefaultsql) member function of class `CRecordset` to return the table name.

Using a [CRecordset](../../mfc/reference/crecordset-class.md) object at run time, you can:

- Examine the data fields of the current record.

- Filter or sort the recordset.

- Customize the default SQL **SELECT** statement.

- Scroll through the selected records.

- Add, update, or delete records (if both the data source and the recordset are updateable).

- Test whether the recordset allows requerying and refresh the recordset's contents.

When you finish using the recordset object, you close and destroy it. For more information about recordsets, see [Recordset (ODBC)](../../data/odbc/recordset-odbc.md).

## See also

[ODBC and MFC](../../data/odbc/odbc-and-mfc.md)
