---
description: "Learn more about: Fetching Data"
title: "Fetching Data"
ms.date: "10/19/2018"
helpviewer_keywords: ["data [C++], fetching", "rowsets [C++], fetching", "fetching", "OLE DB consumer templates [C++], fetching data"]
ms.assetid: b07f747f-9855-4f27-a03d-b1d5b10fa284
---
# Fetching Data

After you open the data source, session, and rowset objects, you can fetch data. Depending on the type of accessor you're using, you might need to bind columns.

## To fetch data

1. Open the rowset using the appropriate **Open** command.

1. If you're using `CManualAccessor`, bind the output columns if you haven't already done so. The following example is taken from the [DBViewer](https://github.com/Microsoft/VCSamples/tree/master/VC2008Samples/ATL/OLEDB/Consumer/dbviewer) sample. To bind the columns, call `GetColumnInfo`, and then create an accessor with the bindings, as shown in the following example:

    ```cpp
    // From the DBViewer Sample CDBTreeView::OnQueryEdit
    // Get the column information
    ULONG ulColumns       = 0;
    DBCOLUMNINFO* pColumnInfo  = NULL;
    LPOLESTR pStrings      = NULL;
    if (rs.GetColumnInfo(&ulColumns, &pColumnInfo, &pStrings) != S_OK)
        ThrowMyOLEDBException(rs.m_pRowset, IID_IColumnsInfo);
    struct MYBIND* pBind = new MYBIND[ulColumns];
    rs.CreateAccessor(ulColumns, &pBind[0], sizeof(MYBIND)*ulColumns);
    for (ULONG l=0; l<ulColumns; l++)
    rs.AddBindEntry(l+1, DBTYPE_STR, sizeof(TCHAR)*40, &pBind[l].szValue, NULL, &pBind[l].dwStatus);
    rs.Bind();
    ```

1. Write a **`while`** loop to retrieve the data. In the loop, call `MoveNext` to advance the cursor and test the return value against S_OK, as shown in the following example:

    ```cpp
    while (rs.MoveNext() == S_OK)
    {
        // Add code to fetch data here
        // If you are not using an auto accessor, call rs.GetData()
    }
    ```

1. Within the **`while`** loop, you can fetch the data according to your accessor type.

   - If you use the [CAccessor](../../data/oledb/caccessor-class.md) class, you should have a user record that contains data members. You can access your data using those data members, as shown in the following example:

        ```cpp
        while (rs.MoveNext() == S_OK)
        {
            // Use the data members directly. In this case, m_nFooID
            // is declared in a user record that derives from
            // CAccessor
            wsprintf_s("%d", rs.m_nFooID);
        }
        ```

   - If you use the `CDynamicAccessor` or `CDynamicParameterAccessor` class, you can fetch data by using the accessing functions `GetValue` and `GetColumn`, as shown in the following example. If you want to determine the type of data you're using, use `GetType`.

        ```cpp
        while (rs.MoveNext() == S_OK)
        {
            // Use the dynamic accessor functions to retrieve your data.

            ULONG ulColumns = rs.GetColumnCount();
            for (ULONG i=0; i<ulColumns; i++)
            {
                rs.GetValue(i);
            }
        }
        ```

   - If you use `CManualAccessor`, you must specify your own data members, bind them yourself, and access them directly, as shown in the following example:

        ```cpp
        while (rs.MoveNext() == S_OK)
        {
            // Use the data members you specified in the calls to
            // AddBindEntry.

            wsprintf_s("%s", szFoo);
        }
        ```

## See also

[Working with OLE DB Consumer Templates](../../data/oledb/working-with-ole-db-consumer-templates.md)
