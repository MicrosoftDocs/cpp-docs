---
description: "Learn more about: db_column"
title: "db_column (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.db_column"]
helpviewer_keywords: ["db_column attribute"]
ms.assetid: 58da4afc-f69c-4ae6-af9a-3f9515f56081
---
# db_column

Binds a specified column to a variable in the rowset.

## Syntax

```cpp
[ db_column(ordinal, dbtype, precision, scale, status, length) ]
```

### Parameters

*ordinal*<br/>
The ordinal column number (`DBCOLUMNINFO` ordinal) or column name (ANSI or Unicode string) corresponding to a field in the rowset to which to bind data. If you use numbers, you can skip consecutive ordinals (for example: 1, 2, 3, 5). The name may contain spaces if the OLE DB provider you use supports it. For example, you can use either of the following formats:

```cpp
[db_column("2")] TCHAR szCity[30];
[db_column(L"city_name")] TCHAR szCity[30];
```

*dbtype*<br/>
(Optional) An OLE DB [Type Indicator](/previous-versions/windows/desktop/ms711251(v=vs.85)) for the column entry.

*precision*<br/>
(Optional) The precision to be used for the column entry. For details, see the description of the `bPrecision` element of the [DBBINDING structure](/previous-versions/windows/desktop/ms716845(v=vs.85))

*scale*<br/>
(Optional) The scale to be used for the column entry. For details, see the description of `bScale` element of the [DBBINDING structure](/previous-versions/windows/desktop/ms716845(v=vs.85))

*status*<br/>
(Optional) A member variable used to hold the status of this column. The status indicates whether the column value is a data value or some other value, such as NULL. For possible values, see [Status](/previous-versions/windows/desktop/ms722617(v=vs.85)) in the *OLE DB Programmer's Reference*.

*length*<br/>
(Optional) A member variable used to hold the size of the column in bytes.

## Remarks

**db_column** binds the specified table column to a variable in the rowset. It delimits member data that can participate in OLE DB `IAccessor`-based binding. This attribute sets up the column map normally defined using the OLE DB consumer macros [BEGIN_COLUMN_MAP](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md#begin_column_map), [END_COLUMN_MAP](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md#end_column_map), and [COLUMN_ENTRY](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md#column_entry). These manipulate the OLE DB [DBBINDING structure](/previous-versions/windows/desktop/ms716845(v=vs.85)) to bind the specified column. Each member you mark with the **db_column** attribute will occupy one entry in the column map in the form of a column entry. Therefore, you call this attribute where you would put the column map, that is, in the command or table class.

Use **db_column** in conjunction with either the [db_table](db-table.md) or [db_command](db-command.md) attributes.

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

For an example of this attribute used in an application, see [MultiRead](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer).

## Examples

This sample binds a column in a table to a **`long`** data member and specifies status and length fields.

```cpp
// db_column_1.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_command(L"Select * from Products") ]
class CProducts {
   DBSTATUS m_dwProductIDStatus;
   DBLENGTH m_dwProductIDLength;

   [ db_column("1", status="m_dwProductIDStatus", length="m_dwProductIDLength") ] LONG m_ProductID;
};
```

This sample binds four columns to a **`long`**, a character string, a timestamp, and a `DB_NUMERIC` integer, in that order.

```cpp
// db_column_2.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_command(L"Select * from Products") ]
class CProducts {
   [db_column("1")] LONG m_OrderID;
   [db_column("2")] TCHAR m_CustomerID[6];
   [db_column("4")] DB_NUMERIC m_OrderDate;
   [db_column("7", dbtype="DBTYPE_NUMERIC")] DB_NUMERIC m_ShipVia;
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|**`class`**, **`struct`**, member, method|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[OLE DB Consumer Attributes](ole-db-consumer-attributes.md)<br/>
[Class Attributes](class-attributes.md)
