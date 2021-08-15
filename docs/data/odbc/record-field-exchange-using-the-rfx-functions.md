---
description: "Learn more about: Record Field Exchange: Using the RFX Functions"
title: "Record Field Exchange: Using the RFX Functions"
ms.date: "11/04/2016"
helpviewer_keywords: ["ODBC [C++], data types", "data types [C++], ODBC record field exchange", "RFX (ODBC) [C++], function syntax and parameters", "DoFieldExchange method, and RFX functions", "ODBC [C++], RFX", "RFX (ODBC) [C++], data types", "function calls, RFX functions"]
ms.assetid: c594300b-5a29-4119-a68b-e7ca32def696
---
# Record Field Exchange: Using the RFX Functions

This topic explains how to use the RFX function calls that make up the body of your `DoFieldExchange` override.

> [!NOTE]
> This topic applies to classes derived from [CRecordset](../../mfc/reference/crecordset-class.md) in which bulk row fetching has not been implemented. If you are using bulk row fetching, bulk record field exchange (Bulk RFX) is implemented. Bulk RFX is similar to RFX. To understand the differences, see [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

The RFX global functions exchange data between columns on the data source and field data members in your recordset. You write the RFX function calls in your recordset's [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) member function. This topic describes the functions briefly and shows the data types for which RFX functions are available. [Technical Note 43](../../mfc/tn043-rfx-routines.md) describes how to write your own RFX functions for additional data types.

## <a name="_core_rfx_function_syntax"></a> RFX Function Syntax

Each RFX function takes three parameters (and some take an optional fourth or fifth parameter):

- A pointer to a [CFieldExchange](../../mfc/reference/cfieldexchange-class.md) object. You simply pass along the `pFX` pointer passed to `DoFieldExchange`.

- The name of the column as it appears on the data source.

- The name of the corresponding field data member or parameter data member in the recordset class.

- (Optional) In some of the functions, the maximum length of the string or array being transferred. This defaults to 255 bytes, but you might want to change it. The maximum size is based on the maximum size of a `CString` object — **INT_MAX** (2,147,483,647) bytes — but you will probably encounter driver limits before that size.

- (Optional) In the `RFX_Text` function, you sometimes use a fifth parameter to specify the data type of a column.

For more information, see the RFX functions under [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md) in the *Class Library Reference*. For an example of when you might make special use of the parameters, see [Recordset: Obtaining SUMs and Other Aggregate Results (ODBC)](../../data/odbc/recordset-obtaining-sums-and-other-aggregate-results-odbc.md).

## <a name="_core_rfx_data_types"></a> RFX Data Types

The class library supplies RFX functions for transferring many different data types between the data source and your recordsets. The following list summarizes the RFX functions by data type. In cases where you must write your own RFX function calls, select from these functions by data type.

|Function|Data type|
|--------------|---------------|
|`RFX_Bool`|**BOOL**|
|`RFX_Byte`|**BYTE**|
|`RFX_Binary`|`CByteArray`|
|`RFX_Double`|**`double`**|
|`RFX_Single`|**`float`**|
|`RFX_Int`|**`int`**|
|`RFX_Long`|**`long`**|
|`RFX_LongBinary`|`CLongBinary`|
|`RFX_Text`|`CString`|
|`RFX_Date`|`CTime`|

For more information, see the RFX function documentation under [Macros and Globals](../../mfc/reference/mfc-macros-and-globals.md) in the *Class Library Reference*. For information about how C++ data types map to SQL data types, see the table ANSI SQL Data Types Mapped to C++ Data Types in [SQL: SQL and C++ Data Types (ODBC)](../../data/odbc/sql-sql-and-cpp-data-types-odbc.md).

## See also

[Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md)<br/>
[Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md)<br/>
[Recordset: Parameterizing a Recordset (ODBC)](../../data/odbc/recordset-parameterizing-a-recordset-odbc.md)<br/>
[Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)<br/>
[CFieldExchange Class](../../mfc/reference/cfieldexchange-class.md)
