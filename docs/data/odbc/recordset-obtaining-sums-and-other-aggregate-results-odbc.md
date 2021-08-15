---
description: "Learn more about: Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)"
title: "Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)"
ms.date: "11/04/2016"
helpviewer_keywords: ["SQL, retrieving aggregate values from recordsets", "recordsets, retrieving SQL aggregate values", "retrieving SQL aggregate values from recordsets", "ODBC recordsets, retrieving SQL aggregate values", "SQL aggregate values", "SQL Server projects, retrieving aggregate values from recordsets", "SQL aggregate values, retrieving from recordsets"]
ms.assetid: 94500662-22a4-443e-82d7-acbe6eca447b
---
# Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)

> [!NOTE]
> The MFC ODBC Consumer wizard is not available in Visual Studio 2019 and later. You can still create a consumer manually.

This topic applies to the MFC ODBC classes.

This topic explains how to obtain aggregate results using the following [SQL](../../data/odbc/sql.md) keywords:

- **SUM** Calculates the total of the values in a column with a numeric data type.

- **MIN** Extracts the smallest value in a column with a numeric data type.

- **MAX** Extracts the largest value in a column with a numeric data type.

- **AVG** Calculates an average value of all the values in a column with a numeric data type.

- **COUNT** Counts the number of records in a column of any data type.

You use these SQL functions to obtain statistical information about the records in a data source rather than to extract records from the data source. The recordset that is created usually consists of a single record (if all columns are aggregates) that contains a value. (There might be more than one record if you used a **GROUP BY** clause.) This value is the result of the calculation or extraction performed by the SQL function.

> [!TIP]
> To add a SQL **GROUP BY** clause (and possibly a **HAVING** clause) to your SQL statement, append it to the end of `m_strFilter`. For example:

```
m_strFilter = "sales > 10 GROUP BY SALESPERSON_ID";
```

You can limit the number of records you use to obtain aggregate results by filtering and sorting the columns.

> [!CAUTION]
> Some aggregation operators return a different data type from the columns over which they are aggregating.

- **SUM** and **AVG** might return the next larger data type (for example, calling with **`int`** returns **LONG** or **`double`**).

- **COUNT** usually returns **LONG** regardless of target column type.

- **MAX** and **MIN** return the same data type as the columns they calculate.

     For example, the **Add Class** wizard creates **`long`** `m_lSales` to accommodate a Sales column, but you need to replace this with a `double m_dblSumSales` data member to accommodate the aggregate result. See the following example.

#### To obtain an aggregate result for a recordset

1. Create a recordset as described in [Adding an MFC ODBC Consumer](../../mfc/reference/adding-an-mfc-odbc-consumer.md) containing the columns from which you want to obtain aggregate results.

1. Modify the [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) function for the recordset. Replace the string representing the column name (the second argument of the [RFX](../../data/odbc/record-field-exchange-using-rfx.md) function calls) with a string representing the aggregation function on the column. For example, replace:

    ```
    RFX_Long(pFX, "Sales", m_lSales);
    ```

     with:

    ```
    RFX_Double(pFX, "Sum(Sales)", m_dblSumSales)
    ```

1. Open the recordset. The result of the aggregation operation is left in `m_dblSumSales`.

> [!NOTE]
> The wizard actually assigns data member names without Hungarian prefixes. For example, the wizard would produce `m_Sales` for a Sales column, rather than the `m_lSales` name used earlier for illustration.

If you are using a [CRecordView](../../mfc/reference/crecordview-class.md) class to view the data, you have to change the DDX function call to display the new data member value; in this case, changing it from:

```
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_lSales, m_pSet);
```

To:

```
DDX_FieldText(pDX, IDC_SUMSALES, m_pSet->m_dblSumSales, m_pSet);
```

## See also

[Recordset (ODBC)](../../data/odbc/recordset-odbc.md)<br/>
[Recordset: How Recordsets Select Records (ODBC)](../../data/odbc/recordset-how-recordsets-select-records-odbc.md)
