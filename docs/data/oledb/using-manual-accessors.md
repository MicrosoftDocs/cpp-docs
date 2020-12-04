---
description: "Learn more about: Using Manual Accessors"
title: "Using Manual Accessors"
ms.date: "10/24/2018"
helpviewer_keywords: ["command handling, OLE DB Templates", "manual accessors", "accessors [C++], manual"]
ms.assetid: 29f00a89-0240-482b-8413-4120b9644672
---
# Using Manual Accessors

There are four things to do when handling an unknown command:

- Determine the parameters

- Execute the command

- Determine the output columns

- See if there are multiple return rowsets

To do these things with the OLE DB Consumer Templates, use the `CManualAccessor` class and follow these steps:

1. Open a `CCommand` object with `CManualAccessor` as a template parameter.

    ```cpp
    CCommand<CManualAccessor, CRowset, CMultipleResults> rs;
    ```

1. Query the session for the `IDBSchemaRowset` interface and use the procedure parameters rowset. If the `IDBSchemaRowset` interface isn't available, query for the `ICommandWithParameters` interface. Call `GetParameterInfo` for information. If neither interface is available, you can assume there are no parameters.

1. For each parameter, call `AddParameterEntry` to add the parameters and set them.

1. Open the rowset but set the bind parameter to **`false`**.

1. Call `GetColumnInfo` to retrieve the output columns. Use `AddBindEntry` to add the output column to the binding.

1. Call `GetNextResult` to determine if more rowsets are available. Repeat steps 2 through 5.

For an example of a manual accessor, see `CDBListView::CallProcedure` in the [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) sample.

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
