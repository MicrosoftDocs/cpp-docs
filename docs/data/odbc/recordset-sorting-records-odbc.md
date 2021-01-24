---
description: "Learn more about: Recordset: Sorting Records (ODBC)"
title: "Recordset: Sorting Records (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["sorting data, recordset data", "ODBC recordsets, sorting", "recordsets, sorting"]
ms.assetid: b40b152e-0a91-452e-be7b-e5bc27f744c7
---
# Recordset: Sorting Records (ODBC)

This topic applies to the MFC ODBC classes.

This topic explains how to sort your recordset. You can specify one or more columns on which to base the sort, and you can specify ascending or descending order (**ASC** or **DESC**; **ASC** is the default) for each specified column. For example, if you specify two columns, the records are sorted first on the first column named and then on the second column named. A SQL **ORDER BY** clause defines a sort. When the framework appends the **ORDER BY** clause to the recordset's SQL query, the clause controls the selection's ordering.

You must establish a recordset's sort order after you construct the object but before you call its `Open` member function (or before you call the `Requery` member function for an existing recordset object whose `Open` member function has been called previously).

#### To specify a sort order for a recordset object

1. Construct a new recordset object (or prepare to call `Requery` for an existing one).

1. Set the value of the object's [m_strSort](../../mfc/reference/crecordset-class.md#m_strsort) data member.

   The sort is a null-terminated string. It contains the contents of the **ORDER BY** clause but not the keyword **ORDER BY**. For example, use:

    ```
    recordset.m_strSort = "LastName DESC, FirstName DESC";
    ```

   not

    ```
    recordset.m_strSort = "ORDER BY LastName DESC, FirstName DESC";
    ```

1. Set any other options you need, such as a filter, locking mode, or parameters.

1. Call `Open` for the new object (or `Requery` for an existing object).

The selected records are ordered as specified. For example, to sort a set of student records in descending order by last name, then first name, do the following:

```cpp
// Construct the recordset
CStudentSet rsStudent( NULL );
// Set the sort
rsStudent.m_strSort = "LastName DESC, FirstName DESC";
// Run the query with the sort in place
rsStudent.Open( );
```

The recordset contains all of the student records, sorted in descending order (Z to A) by last name, then by first name.

> [!NOTE]
> If you choose to override the recordset's default SQL string by passing your own SQL string to `Open`, do not set a sort if your custom string has an **ORDER BY** clause.

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: Filtering Records (ODBC)](../../data/odbc/recordset-filtering-records-odbc.md)
