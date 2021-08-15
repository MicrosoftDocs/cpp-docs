---
description: "Learn more about: db_param"
title: "db_param (C++ COM Attribute)"
ms.date: "10/02/2018"
f1_keywords: ["vc-attr.db_param"]
helpviewer_keywords: ["db_param attribute"]
ms.assetid: a28315f5-4722-459e-92ef-32e83c0b205a
---
# db_param

Associates the specified member variable with an input or output parameter and delimits the variable.

## Syntax

```cpp
[ db_param(ordinal, paramtype="DBPARAMIO_INPUT", dbtype, precision, scale, status, length) ]
```

### Parameters

*ordinal*<br/>
The column number (DBCOLUMNINFO ordinal) corresponding to a field in the rowset to which to bind data.

*paramtype*<br/>
(Optional) The type to set for the parameter. Providers support only parameter I/O types that are supported by the underlying data source. The type is a combination of one or more DBPARAMIOENUM values:

- DBPARAMIO_INPUT An input parameter.

- DBPARAMIO_OUTPUT An output parameter.

- DBPARAMIO_NOTPARAM The accessor has no parameters. Setting `eParamIO` to this value in row accessors reminds the user that parameters are ignored.

*dbtype*<br/>
(Optional) An OLE DB [Type Indicator](/previous-versions/windows/desktop/ms711251(v=vs.85)) for the column entry.

*precision*<br/>
(Optional) The precision to be used for the column entry. For details, see the description of `bPrecision` element of the [DBBINDING structure](/previous-versions/windows/desktop/ms716845(v=vs.85))

*scale*<br/>
(Optional) The scale to be used for the column entry. For details, see the description of `bScale` element of the [DBBINDING structure](/previous-versions/windows/desktop/ms716845(v=vs.85))

*status*<br/>
(Optional) A member variable used to hold the status of this column. The status indicates whether the column value is a data value or some other value, such as NULL. For possible values, see [Status](/previous-versions/windows/desktop/ms722617(v=vs.85)) in the *OLE DB Programmer's Reference*.

*length*<br/>
(Optional) A member variable used to hold the size of the column in bytes.

## Remarks

**db_param** defines parameters that you use in commands; therefore you use it with `db_command`. For example, you can use **db_param** to bind parameters in SQL queries or stored procedures. Parameters in a stored procedure are denoted by question marks (?), and you should bind the data members in the order in which the parameters appear.

**db_param** delimits member data that can participate in OLE DB `ICommandWithParameters`-based binding. It sets the parameter type (input or output), OLE DB type, precision, scale, status, and length for the specified parameter. This attribute inserts the OLE DB consumer macros BEGIN_PARAM_MAP ... END_PARAM_MAP. Each member you mark with the **db_param** attribute will occupy one entry in the map in the form of a COLUMN_ENTRY.

**db_param** is used in conjunction with either the [db_table](db-table.md) or [db_command](db-command.md) attributes.

When the consumer attribute provider applies this attribute to a class, the compiler will rename the class to \_*YourClassName*Accessor, where *YourClassName* is the name you gave the class, and the compiler will also create a class called *YourClassName*, which derives from \_*YourClassName*Accessor.  In Class View, you will see both classes.

## Example

The following example creates a command class based on the SalesbyYear stored procedure in the Northwind database. It associates the first parameter in the stored procedure with the `m_RETURN_VALUE` variable, and defines it as an output parameter. It associates the last two (input) parameters with `m_Beginning_Date` and `m_Ending_Date`.

The following example associates the `nOutput` variable with an output parameter.

```cpp
// db_param.cpp
// compile with: /LD
#include <atlbase.h>
#include <atlplus.h>
#include <atldbcli.h>

[ db_source(L"my_connection_string"),
  db_command(L"{ ? = CALL dbo.\"Sales by Year\"(?,?) }")
]
struct CSalesbyYear {
   DBSTATUS m_dwShippedDateStatus;
   DBSTATUS m_dwOrderIDStatus;
   DBSTATUS m_dwSubtotalStatus;
   DBSTATUS m_dwYearStatus;

   DBLENGTH m_dwShippedDateLength;
   DBLENGTH m_dwOrderIDLength;
   DBLENGTH m_dwSubtotalLength;
   DBLENGTH m_dwYearLength;

   // Bind columns
   [ db_column("1", status="m_dwShippedDateStatus", length="m_dwShippedDateLength") ] DBTIMESTAMP m_ShippedDate;
   [ db_column("2", status="m_dwOrderIDStatus", length="m_dwOrderIDLength") ] LONG m_OrderID;
   [ db_column("3", status="m_dwSubtotalStatus", length="m_dwSubtotalLength") ] CURRENCY m_Subtotal;
   [ db_column("4", status="m_dwYearStatus", length="m_dwYearLength") ] TCHAR m_Year[31];

   // Bind parameters
   [ db_param("1", paramtype="DBPARAMIO_OUTPUT") ] LONG m_RETURN_VALUE;
   [ db_param("2", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Beginning_Date;
   [ db_param("3", paramtype="DBPARAMIO_INPUT") ] DBTIMESTAMP m_Ending_Date;
};
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
