---
description: "Learn more about: db_source"
title: "db_source (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.db_source"]
helpviewer_keywords: ["db_source attribute"]
ms.assetid: 0ec8bbf7-ade2-4899-bf4c-8608b92779bc
---
# db_source

Creates a connection to a data source.

## Syntax

```cpp
[ db_source(db_source, name, hresult) ]
```

### Parameters

*db_source*<br/>
The connection string used to connect to the data source. For the format of the connection string, see [Connection Strings and Data Links](/previous-versions/windows/desktop/ms718376(v=vs.85)) in the Microsoft Data Access Components (MDAC) SDK.

*name*<br/>
(Optional) When you use **db_source** on a class, *name* is an instance of a data source object that has the **db_source** attribute applied to it (see example 1). When you use **db_source** inline in a method implementation, *name* is a variable (local to the method) that can be used to access the data source (see example 2). You pass this *name* to the *source_name* parameter of `db_command` to associate the data source with a command.

*hresult*<br/>
(Optional) Identifies the variable that will receive the HRESULT of this database command. If the variable does not exist, it will be automatically injected by the attribute.

## Remarks

**db_source** creates a [CDataSource](../../data/oledb/cdatasource-class.md) and a [CSession](../../data/oledb/csession-class.md) object, which together represent a connection with an OLE DB consumer data source.

When you use **db_source** on a class, the `CSession` object becomes a member of the class.

When you use **db_source** in a method, the injected code will be executed within method scope, and the `CSession` object is created as a local variable.

**db_source** adds data source properties to a class or within a method. It is used in conjunction with `db_command` (which takes the *db_source* *name* parameter as its *source_name* parameter).

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

For an example of this attribute used in an application, see [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## Example

This sample calls **db_source** on a class to create a connection to the data source `ds` using the Northwind database. `ds` is a handle for the data source, which can be used internally to the `CMyCommand` class.

```cpp
// db_source_1.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[
  db_source(L"my_connection_string", name="ds"),
  db_command(L"select * from Products")
]
class CMyCommand {};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**, member, method, local|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[OLE DB Consumer Attributes](ole-db-consumer-attributes.md)
