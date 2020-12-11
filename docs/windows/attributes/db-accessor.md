---
description: "Learn more about: db_accessor"
title: "db_accessor (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.db_accessor"]
helpviewer_keywords: ["db_accessor attribute"]
ms.assetid: ec407a9f-24d7-4822-96d4-7cc6a0301815
---
# db_accessor

Groups `db_column` attributes that participate in `IAccessor`-based binding.

## Syntax

```cpp
[ db_accessor(num, auto) ]
```

#### Parameters

*num*<br/>
Specifies the accessor number (a zero-based integer index). You must specify accessor numbers in increasing order, using integers or defined values.

*auto*<br/>
A Boolean value that specifies whether the accessor is automatically retrieved (TRUE) or not retrieved (FALSE).

## Remarks

**db_accessor** defines the underlying OLE DB accessor for subsequent `db_column` and `db_param` attributes within the same class or function. **db_accessor** is usable at member level and is used to group `db_column` attributes that participate in OLE DB `IAccessor`-based binding. It is used in conjunction with either the `db_table` or `db_command` attributes. Calling this attribute is similar to calling the [BEGIN_ACCESSOR](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md#begin_accessor) and [END_ACCESSOR](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md#end_accessor) macros.

**db_accessor** generates a rowset and binds it to the corresponding accessor maps. If you do not call **db_accessor**, accessor 0 will automatically be generated, and all column bindings will be mapped to this accessor block.

**db_accessor** groups database column bindings into one or more accessors. For a discussion of the scenarios in which you need to use multiple accessors, see [Using Multiple Accessors on a Rowset](../../data/oledb/using-multiple-accessors-on-a-rowset.md). Also see "User Record Support for Multiple Accessors" in [User Records](../../data/oledb/user-records.md).

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

## Example

The following example uses **db_accessor** to group columns in the Orders table from the Northwind database into two accessors. Accessor 0 is an automatic accessor, and accessor 1 is not.

```cpp
// cpp_attr_ref_db_accessor.cpp
// compile with: /LD /link /OPT:NOREF
#define _ATL_ATTRIBUTES
#include <atlbase.h>
#include <atldbcli.h>

[ db_command(L"SELECT LastName, FirstName FROM Orders") ]
class CEmployees {
public:
   [ db_accessor(0, TRUE) ];
   [ db_column("1") ] LONG m_OrderID;
   [ db_column("2") ] TCHAR m_CustomerID[6];
   [ db_column("4") ] DBTIMESTAMP m_OrderDate;

   [ db_accessor(1, FALSE) ];
   [ db_column("8") ] CURRENCY m_Freight;
};
```

## Requirements

| Attribute context | Value |
|-|-|
|**Applies to**|Attribute blocks|
|**Repeatable**|No|
|**Required attributes**|None|
|**Invalid attributes**|None|

For more information about the attribute contexts, see [Attribute Contexts](cpp-attributes-com-net.md#contexts).

## See also

[OLE DB Consumer Attributes](ole-db-consumer-attributes.md)
