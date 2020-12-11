---
description: "Learn more about: db_table"
title: "db_table (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.db_table"]
helpviewer_keywords: ["db_table attribute"]
ms.assetid: ff9eb957-4e6d-4175-afcc-fd8ea916cec0
---
# db_table

Opens an OLE DB table.

## Syntax

```cpp
[ db_table(db_table, name, source_name, hresult) ]
```

### Parameters

*db_table*<br/>
A string specifying the name of a database table (such as "Products").

*name*<br/>
(Optional) The name of the handle you use to work with the table. You must specify this parameter if you want to return more than one row of results. **db_table** generates a variable with the specified *name* that can be used to traverse the rowset or execute multiple action queries.

*source_name*<br/>
(Optional) The `CSession` variable or instance of a class that has the `db_source` attribute applied to it on which the command executes. See [db_source](db-source.md).

*hresult*<br/>
(Optional) Identifies the variable that will receive the HRESULT of this database command. If the variable does not exist, it will be automatically injected by the attribute.

## Remarks

**db_table** creates a [CTable](../../data/oledb/ctable-class.md) object, which is used by an OLE DB consumer to open a table. You can use this attribute only at the class level; you cannot use it inline. Use `db_column` to bind table columns to variables; use `db_param` to delimit (set the parameter type and so on) of parameters.

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

## Example

The following example opens the Products table for use by `CProducts`.

```cpp
// db_table.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_table(L"dbo.Products") ]
class CProducts {
   [ db_column("1") ] LONG m_ProductID;
};
```

For an example of this attribute used in an application, see [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[OLE DB Consumer Attributes](ole-db-consumer-attributes.md)
