---
description: "Learn more about: Dynaset"
title: "Dynaset"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC recordsets, dynasets", "ODBC cursor library [ODBC], dynasets", "keyset-driven cursors in dynasets", "cursors [ODBC], keyset-driven cursors in dynasets", "cursor library [ODBC], dynaset availability", "recordsets [C++], dynasets", "dynasets"]
ms.assetid: 2867e6be-208e-4fe7-8bbe-b8697cb1045c
---
# Dynaset

This topic describes dynasets and discusses their [availability](#_core_availability_of_dynasets).

> [!NOTE]
> This topic applies to the MFC ODBC classes, including [CRecordset](../../mfc/reference/crecordset-class.md). For information about dynasets in the DAO classes, see [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md). With DAO, you can open dynaset-type recordsets.

A dynaset is a recordset with dynamic properties. During its lifetime, a recordset object in dynaset mode (usually called a dynaset) stays synchronized with the data source in the following way. In a multiuser environment, other users might edit or delete records that are in your dynaset or add records to the table your dynaset represents. Records your application adds to or deletes from the recordset are reflected in your dynaset. Records that other users add to the table will not be reflected in your dynaset until you rebuild the dynaset by calling its `Requery` member function. When other users delete records, MFC code skips over the deletions in your recordset. Other users' editing changes to existing records are reflected in your dynaset as soon as you scroll to the affected record.

Similarly, edits you make to records in a dynaset are reflected in dynasets in use by other users. Records you add are not reflected in other users' dynasets until they requery their dynasets. Records you delete are marked as "deleted" in other users' recordsets. If you have multiple connections to the same database (multiple `CDatabase` objects), recordsets associated with those connections have the same status as the recordsets of other users.

Dynasets are most valuable when data must be dynamic, as (for example) in an airline reservation system.

> [!NOTE]
> To use dynasets, you must have an ODBC driver for your data source that supports dynasets and the ODBC cursor library must not be loaded. For more information, see [Availability of Dynasets](#_core_availability_of_dynasets).

To specify that a recordset is a dynaset, pass `CRecordset::dynaset` as the first parameter to the `Open` member function of your recordset object.

> [!NOTE]
> For updatable dynasets, your ODBC driver must support either positioned update statements or the `::SQLSetPos` ODBC API function. If both are supported, MFC uses `::SQLSetPos` for efficiency.

## <a name="_core_availability_of_dynasets"></a> Availability of Dynasets

The MFC database classes support dynasets if the following requirements are met:

- The ODBC cursor library DLL must not be in use for this data source.

   If the cursor library is used, it masks some functionality of the underlying ODBC driver that is necessary for dynaset support. If you want to use dynasets (and your ODBC driver has the functionality required for dynasets, as described in the rest of this section), you can cause MFC not to load the cursor library when you create a `CDatabase` object. For more information, see [ODBC](../../data/odbc/odbc-basics.md) and the [OpenEx](../../mfc/reference/cdatabase-class.md#openex) or [Open](../../mfc/reference/cdatabase-class.md#open) member function of class `CDatabase`.

   In ODBC terminology, dynasets and snapshots are referred to as cursors. A cursor is a mechanism used for keeping track of its position in a recordset.

- The ODBC driver for your data source must support keyset-driven cursors.

   Keyset-driven cursors manage data from a table by getting and storing a set of keys. The keys are used to obtain current data from the table when the user scrolls onto a particular record. To determine whether your driver provides this support, call the `::SQLGetInfo` ODBC API function with the *SQL_SCROLL_OPTIONS* parameter.

   If you try to open a dynaset without keyset support, you get a `CDBException` with the return code value AFX_SQL_ERROR_DYNASET_NOT_SUPPORTED.

- The ODBC driver for your data source must support extended fetching.

   Extended fetching is the ability to scroll backward as well as forward over the resulting records of your SQL query. To determine whether your driver supports this ability, call the `::SQLGetFunctions` ODBC API function with the *SQL_API_SQLEXTENDEDFETCH* parameter.

If you want updateable dynasets (or snapshots, for that matter), your ODBC driver must also support either the `::SQLSetPos` ODBC API function or positioned updates. The `::SQLSetPos` function allows MFC to update the data source without sending SQL statements. If this support is available, MFC uses it in preference to making updates using SQL. To determine whether your driver supports `::SQLSetPos`, call `::SQLGetInfo` with the *SQL_POS_OPERATIONS* parameter.

Positioned updates use SQL syntax (of the form **WHERE CURRENT OF** \<cursorname>) to identify a particular row in the table on the data source. To determine whether your driver supports positioned updates, call `::SQLGetInfo` with the *SQL_POSITIONED_STATEMENTS* parameter.

Generally, MFC dynasets (but not forward-only recordsets) require an ODBC driver with level 2 API conformance. If the driver for your data source conforms to the level 1 API set, you can still use both updateable and read-only snapshots and forward-only recordsets, but not dynasets. However, a level 1 driver can support dynasets if it supports extended fetching and keyset-driven cursors. For more information about ODBC conformance levels, see [ODBC](../../data/odbc/odbc-basics.md).

> [!NOTE]
> If you want to use both snapshots and dynasets, you must base them on two different `CDatabase` objects (two different connections).

Unlike snapshots, which use intermediate storage maintained by the ODBC cursor library, dynasets fetch a record directly from the data source as soon as you scroll to it. This keeps the records originally selected by the dynaset synchronized with the data source.

For a list of ODBC drivers included in this version of Visual C++ and for information about obtaining additional drivers, see [ODBC Driver List](../../data/odbc/odbc-driver-list.md).

## See also

[Open Database Connectivity (ODBC)](../../data/odbc/open-database-connectivity-odbc.md)
