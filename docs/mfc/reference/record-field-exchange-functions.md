---
description: "Learn more about: Record Field Exchange Functions"
title: "Record Field Exchange Functions"
ms.date: "09/17/2019"
f1_keywords: ["AFXDB/RFX_Binary", "AFXDB/RFX_Bool", "AFXDB/RFX_Byte", "AFXDB/RFX_Date", "AFXDB/RFX_Double", "AFXDB/RFX_Int", "AFXDB/RFX_Long", "AFXDB/RFX_LongBinary", "AFXDB/RFX_Single", "AFXDB/RFX_Text", "AFXDB/RFX_Binary_Bulk", "AFXDB/RFX_Bool_Bulk", "AFXDB/RFX_Byte_Bulk", "AFXDB/RFX_Date_Bulk", "AFXDB/RFX_Double_Bulk", "AFXDB/RFX_Int_Bulk", "AFXDB/RFX_Long_Bulk", "AFXDB/RFX_Single_Bulk", "AFXDB/RFX_Text_Bulk", "AFXDB/DFX_Binary", "AFXDB/DFX_Bool", "AFXDB/DFX_Byte", "AFXDB/DFX_Currency", "AFXDB/DFX_DateTime", "AFXDB/DFX_Double", "AFXDB/DFX_Long", "AFXDB/DFX_LongBinary", "AFXDB/DFX_Short", "AFXDB/DFX_Single", "AFXDB/DFX_Text"]
helpviewer_keywords: ["DAO (Data Access Objects), record field exchange (DFX)", "ODBC, bulk RFX data exchange functions [MFC]", "RFX (record field exchange), ODBC classes", "DFX (DAO record field exchange), data exchange functions [MFC]", "DFX functions [MFC]", "bulk RFX functions [MFC]", "DFX (DAO record field exchange)", "RFX (record field exchange), DAO classes", "ODBC, RFX", "RFX (record field exchange), data exchange functions [MFC]", "RFX (record field exchange)"]
ms.assetid: 6e4c5c1c-acb7-4c18-bf51-bf7959a696cd
---
# Record Field Exchange Functions

This topic lists the Record Field Exchange (RFX, Bulk RFX, and DFX) functions used to automate the transfer of data between a recordset object and its data source and to perform other operations on the data.

If you are using the ODBC-based classes and you have implemented bulk row fetching, you must manually override the `DoBulkFieldExchange` member function of `CRecordset` by calling the Bulk RFX functions for each data member corresponding to a data source column.

If you have not implemented bulk row fetching in the ODBC-based classes, or if you are using the DAO-based classes (obsolete), then ClassWizard will override the `DoFieldExchange` member function of `CRecordset` or `CDaoRecordset` by calling the RFX functions (for ODBC classes) or the DFX functions (for DAO classes) for each field data member in your recordset.

The record field exchange functions transfer data each time the framework calls `DoFieldExchange` or `DoBulkFieldExchange`. Each function transfers a specific data type.

For more information about how these functions are used, see the articles [Record Field Exchange: How RFX Works (ODBC)](../../data/odbc/record-field-exchange-how-rfx-works.md). For more information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

For columns of data that you bind dynamically, you can also call the RFX or DFX functions yourself, as explained in the articles [Recordset: Dynamically Binding Data Columns (ODBC)](../../data/odbc/recordset-dynamically-binding-data-columns-odbc.md). Additionally, you can write your own custom RFX or DFX routines, as explained in Technical Note [43](../../mfc/tn043-rfx-routines.md) (for ODBC) and Technical Note [53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) (for DAO).

For an example of RFX and Bulk RFX functions as they appear in the `DoFieldExchange` and `DoBulkFieldExchange` functions, see [RFX_Text](#rfx_text) and [RFX_Text_Bulk]#rfx_text_bulk). DFX functions are very similar to the RFX functions.

### RFX Functions (ODBC)

|Name|Description|
|-|-|
|[RFX_Binary](#rfx_binary)|Transfers arrays of bytes of type [CByteArray](cbytearray-class.md).|
|[RFX_Bool](#rfx_bool)|Transfers Boolean data.|
|[RFX_Byte](#rfx_byte)|Transfers a single byte of data.|
|[RFX_Date](#rfx_date)|Transfers time and date data using [CTime](../../atl-mfc-shared/reference/ctime-class.md) or TIMESTAMP_STRUCT.|
|[RFX_Double](#rfx_double)|Transfers double-precision float data.|
|[RFX_Int](#rfx_int)|Transfers integer data.|
|[RFX_Long](#rfx_long)|Transfers long integer data.|
|[RFX_LongBinary](#rfx_longbinary)|Transfers binary large object (BLOB) data with an object of the [CLongBinary](clongbinary-class.md) class.|
|[RFX_Single](#rfx_single)|Transfers float data.|
|[RFX_Text](#rfx_text)|Transfers string data.|

### Bulk RFX Functions (ODBC)

|Name|Description|
|-|-|
|[RFX_Binary_Bulk](#rfx_binary_bulk)|Transfers arrays of byte data.|
|[RFX_Bool_Bulk](#rfx_bool_bulk)|Transfers arrays of Boolean data.|
|[RFX_Byte_Bulk](#rfx_byte_bulk)|Transfers arrays of single bytes.|
|[RFX_Date_Bulk](#rfx_date_bulk)|Transfers arrays of data of type TIMESTAMP_STRUCT.|
|[RFX_Double_Bulk](#rfx_double_bulk)|Transfers arrays of double-precision, floating-point data.|
|[RFX_Int_Bulk](#rfx_int_bulk)|Transfers arrays of integer data.|
|[RFX_Long_Bulk](#rfx_long_bulk)|Transfers arrays of long integer data.|
|[RFX_Single_Bulk](#rfx_single_bulk)|Transfers arrays of floating-point data.|
|[RFX_Text_Bulk](#rfx_text_bulk)|Transfers arrays of data of type LPSTR.|

### DFX Functions (DAO)

|Name|Description|
|-|-|
|[DFX_Binary](#dfx_binary)|Transfers arrays of bytes of type [CByteArray](cbytearray-class.md).|
|[DFX_Bool](#dfx_bool)|Transfers Boolean data.|
|[DFX_Byte](#dfx_byte)|Transfers a single byte of data.|
|[DFX_Currency](#dfx_currency)|Transfers currency data, of type [COleCurrency](colecurrency-class.md).|
|[DFX_DateTime](#dfx_datetime)|Transfers time and date data, of type [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md).|
|[DFX_Double](#dfx_double)|Transfers double-precision float data.|
|[DFX_Long](#dfx_long)|Transfers long integer data.|
|[DFX_LongBinary](#dfx_longbinary)|Transfers binary large object (BLOB) data with an object of the `CLongBinary` class. For DAO, it is recommended that you use [DFX_Binary](#dfx_binary) instead.|
|[DFX_Short](#dfx_short)|Transfers short integer data.|
|[DFX_Single](#dfx_single)|Transfers float data.|
|[DFX_Text](#dfx_text)|Transfers string data.|

=============================================

## <a name="rfx_binary"></a> RFX_Binary

Transfers arrays of bytes between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_BINARY, SQL_VARBINARY, or SQL_LONGVARBINARY.

### Syntax

```cpp
void RFX_Binary(
   CFieldExchange* pFX,
   const char* szName,
   CByteArray& value,
   int nMaxLength = 255);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type [CByteArray](cbytearray-class.md), is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*nMaxLength*<br/>
The maximum allowed length of the string or array being transferred. The default value of *nMaxLength* is 255. Legal values are 1 to INT_MAX. The framework allocates this amount of space for the data. For best performance, pass a value large enough to accommodate the largest data item you expect.

### Remarks

Data in the data source of these types is mapped to and from type `CByteArray` in the recordset.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_bool"></a> RFX_Bool

Transfers Boolean data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_BIT.

### Syntax

```cpp
void RFX_Bool(
   CFieldExchange* pFX,
   const char* szName,
   BOOL& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type BOOL, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_byte"></a> RFX_Byte

Transfers single bytes between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_TINYINT.

### Syntax

```cpp
void RFX_Byte(
   CFieldExchange* pFX,
   const char* szName,
   BYTE& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type BYTE, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_date"></a> RFX_Date

Transfers `CTime` or TIMESTAMP_STRUCT data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_DATE, SQL_TIME, or SQL_TIMESTAMP.

### Syntax

```cpp
void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   CTime& value);

void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   TIMESTAMP_STRUCT& value);

void RFX_Date(
   CFieldExchange* pFX,
   const char* szName,
   COleDateTime& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member; the value to be transferred. The various versions of the function take different data types for value:

The first version of the function takes a reference to a [CTime](../../atl-mfc-shared/reference/ctime-class.md) object. For a transfer from recordset to data source, this value is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

The second version of the function takes a reference to a `TIMESTAMP_STRUCT` structure. You must set up this structure yourself before the call. Neither dialog data exchange (DDX) support nor code wizard support is available for this version. The third version of the function works similarly to the first version except that it takes a reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object.

### Remarks

The `CTime` version of the function imposes the overhead of some intermediate processing and has a somewhat limited range. If you find either of these factors too limiting, use the second version of the function. But note its lack of code wizard and DDX support and the requirement that you set up the structure yourself.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_double"></a> RFX_Double

Transfers **double float** data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_DOUBLE.

### Syntax

```cpp
void RFX_Double(
   CFieldExchange* pFX,
   const char* szName,
   double& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`double`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_int"></a> RFX_Int

Transfers integer data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_SMALLINT.

### Syntax

```cpp
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`int`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_long"></a> RFX_Long

Transfers long integer data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_INTEGER.

### Syntax

```cpp
void RFX_Long(
   CFieldExchange* pFX,
   const char* szName,
   LONG&
value );
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`long`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_longbinary"></a> RFX_LongBinary

Transfers binary large object (BLOB) data using class [CLongBinary](clongbinary-class.md) between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_LONGVARBINARY or SQL_LONGVARCHAR.

### Syntax

```cpp
void RFX_LongBinary(
   CFieldExchange* pFX,
   const char* szName,
   CLongBinary& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type `CLongBinary`, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_single"></a> RFX_Single

Transfers floating-point data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_REAL.

### Syntax

```cpp
void RFX_Single(
   CFieldExchange* pFX,
   const char* szName,
   float& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`float`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_text"></a> RFX_Text

Transfers `CString` data between the field data members of a `CRecordset` object and columns of a record on the data source of ODBC type SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL, or SQL_NUMERIC.

### Syntax

```cpp
void RFX_Text(
   CFieldExchange* pFX,
   const char* szName,
   CString& value,
   int nMaxLength = 255,
   int nColumnType = SQL_VARCHAR,
   short nScale = 0);
```

### Parameters

*pFX*<br/>
A pointer to an object of class `CFieldExchange`. This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type `CString`, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*nMaxLength*<br/>
The maximum allowed length of the string or array being transferred. The default value of *nMaxLength* is 255. Legal values are 1 to INT_MAX). The framework allocates this amount of space for the data. For best performance, pass a value large enough to accommodate the largest data item you expect.

*nColumnType*<br/>
Used mainly for parameters. An integer indicating the data type of the parameter. The type is an ODBC data type of the form **SQL_XXX**.

*nScale*<br/>
Specifies the scale for values of ODBC type SQL_DECIMAL or SQL_NUMERIC. *nScale* is only useful when setting parameter values. For more information, see the topic "Precision, Scale, Length, and Display Size" in Appendix D of the *ODBC SDK Programmer's Reference*.

### Remarks

Data in the data source of all of these types is mapped to and from `CString` in the recordset.

### Example

This example shows several calls to `RFX_Text`. Notice also the two calls to `CFieldExchange::SetFieldType`. For parameters you must write the call to `SetFieldType` and its RFX call. The output column call and its associated RFX calls are normally written by a code wizard.

```cpp
void CCustomer::DoFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   // Macros such as RFX_Text() and RFX_Int() are dependent on the
   // type of the member variable, not the type of the field in the database.
   // ODBC will try to automatically convert the column value to the requested type
   RFX_Long(pFX, _T("[CustomerID]"), m_CustomerID);
   RFX_Text(pFX, _T("[ContactFirstName]"), m_ContactFirstName);
   RFX_Text(pFX, _T("[PostalCode]"), m_PostalCode);
   RFX_Text(pFX, _T("[L_Name]"), m_L_Name);
   RFX_Long(pFX, _T("[BillingID]"), m_BillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
```

### Requirements

**Header:** afxdb.h

## <a name="rfx_binary_bulk"></a> RFX_Binary_Bulk

Transfers multiple rows of byte data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Binary_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths,
   int nMaxLength);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgByteVals*<br/>
A pointer to an array of BYTE values. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgByteVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

*nMaxLength*<br/>
The maximum allowed length of the values stored in the array pointed to by *prgByteVals*. To ensure that data will not be truncated, pass a value large enough to accommodate the largest data item you expect.

### Remarks

The data source column can have an ODBC type of SQL_BINARY, SQL_VARBINARY, or SQL_LONGVARBINARY. The recordset must define a field data member of type pointer to BYTE.

If you initialize *prgByteVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. In order to make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_bool_bulk"></a> RFX_Bool_Bulk

Transfers multiple rows of Boolean data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Bool_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BOOL** prgBoolVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgBoolVals*<br/>
A pointer to an array of BOOL values. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgBoolVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column must have an ODBC type of SQL_BIT. The recordset must define a field data member of type pointer to BOOL.

If you initialize *prgBoolVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_byte_bulk"></a> RFX_Byte_Bulk

Transfers multiple rows of single bytes from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Byte_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   BYTE** prgByteVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgByteVals*<br/>
A pointer to an array of BYTE values. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgByteVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column must have an ODBC type of SQL_TINYINT. The recordset must define a field data member of type pointer to BYTE.

If you initialize *prgByteVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_date_bulk"></a> RFX_Date_Bulk

Transfers multiple rows of TIMESTAMP_STRUCT data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Date_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   TIMESTAMP_STRUCT** prgTSVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgTSVals*<br/>
A pointer to an array of TIMESTAMP_STRUCT values. This array will store the data to be transferred from the data source to the recordset. For more information about the TIMESTAMP_STRUCT data type, see the topic "C Data Types" in Appendix D of the *ODBC SDK Programmer's Reference*.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgTSVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column can have an ODBC type of SQL_DATE, SQL_TIME, or SQL_TIMESTAMP. The recordset must define a field data member of type pointer to TIMESTAMP_STRUCT.

If you initialize *prgTSVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_double_bulk"></a> RFX_Double_Bulk

Transfers multiple rows of double-precision, floating-point data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Double_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   double** prgDblVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgDblVals*<br/>
A pointer to an array of **`double`** values. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgDblVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column must have an ODBC type of SQL_DOUBLE. The recordset must define a field data member of type pointer to **`double`**.

If you initialize *prgDblVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_int_bulk"></a> RFX_Int_Bulk

Transfers integer data between the field data members of a `CRecordset` object and the columns of a record on the data source of ODBC type SQL_SMALLINT.

### Syntax

```cpp
void RFX_Int(
   CFieldExchange* pFX,
   const char* szName,
   int& value);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CFieldExchange](cfieldexchange-class.md). This object contains information to define the context for each call of the function. For more information about the operations a `CFieldExchange` object can specify, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`int`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

### Example

See [RFX_Text](#rfx_text).

### Requirements

**Header:** afxdb.h

## <a name="rfx_long_bulk"></a> RFX_Long_Bulk

Transfers multiple rows of long integer data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Long_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   long** prgLongVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgLongVals*<br/>
A pointer to an array of long integers. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgLongVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column must have an ODBC type of SQL_INTEGER. The recordset must define a field data member of type pointer to **`long`**.

If you initialize *prgLongVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_single_bulk"></a> RFX_Single_Bulk

Transfers multiple rows of floating-point data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Single_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   float** prgFltVals,
   long** prgLengths);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgFltVals*<br/>
A pointer to an array of **`float`** values. This array will store the data to be transferred from the data source to the recordset.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgFltVals*. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

### Remarks

The data source column must have an ODBC type of SQL_REAL. The recordset must define a field data member of type pointer to **`float`**.

If you initialize *prgFltVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

See [RFX_Text_Bulk](#rfx_text_bulk).

### Requirements

**Header:** afxdb.h

## <a name="rfx_text_bulk"></a> RFX_Text_Bulk

Transfers multiple rows of character data from a column of an ODBC data source to a corresponding array in a `CRecordset`-derived object.

### Syntax

```cpp
void RFX_Text_Bulk(
   CFieldExchange* pFX,
   LPCTSTR szName,
   LPSTR* prgStrVals,
   long** prgLengths,
   int nMaxLength);
```

### Parameters

*pFX*<br/>
A pointer to a [CFieldExchange](cfieldexchange-class.md) object. This object contains information to define the context for each call of the function. For more information, see the article [Record Field Exchange: How RFX Works](../../data/odbc/record-field-exchange-how-rfx-works.md).

*szName*<br/>
The name of a data column.

*prgStrVals*<br/>
A pointer to an array of LPSTR values. This array will store the data to be transferred from the data source to the recordset. Note that with the current version of ODBC, these values cannot be Unicode.

*prgLengths*<br/>
A pointer to an array of long integers. This array will store the length in bytes of each value in the array pointed to by *prgStrVals*. This length excludes the null termination character. Note that the value SQL_NULL_DATA will be stored if the corresponding data item contains a Null value. For more details, see the ODBC API function `SQLBindCol` in the *ODBC SDK Programmer's Reference*.

*nMaxLength*<br/>
The maximum allowed length of the values stored in the array pointed to by *prgStrVals*, including the null termination character. To ensure that data will not be truncated, pass a value large enough to accommodate the largest data item you expect.

### Remarks

The data source column can have an ODBC type of SQL_LONGVARCHAR, SQL_CHAR, SQL_VARCHAR, SQL_DECIMAL, or SQL_NUMERIC. The recordset must define a field data member of type LPSTR.

If you initialize *prgStrVals* and *prgLengths* to NULL, then the arrays they point to will be allocated automatically, with sizes equal to the rowset size.

> [!NOTE]
> Bulk record field exchange only transfers data from the data source to the recordset object. To make your recordset updateable, you must use the ODBC API function `SQLSetPos`.

For more information, see the articles [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md) and [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md).

### Example

You must manually write calls in your `DoBulkFieldExchange` override. This example shows a call to `RFX_Text_Bulk`, as well as a call to `RFX_Long_Bulk`, for data transfer. These calls are preceded by a call to [CFieldExchange::SetFieldType](cfieldexchange-class.md#setfieldtype). Note that for parameters, you must call the RFX functions instead of the Bulk RFX functions.

```cpp
void CMultiCustomer::DoBulkFieldExchange(CFieldExchange* pFX)
{
   pFX->SetFieldType(CFieldExchange::outputColumn);
   RFX_Long_Bulk(pFX, _T("[CustomerID]"), &m_pCustomerID, &m_pcCustomerID);
   RFX_Text_Bulk(pFX, _T("[ContactFirstName]"), &m_pContactFirstName, &m_pcContactFirstName, 50);
   RFX_Text_Bulk(pFX, _T("[PostalCode]"), &m_pPostalCode, &m_pcPostalCode, 50);
   RFX_Text_Bulk(pFX, _T("[L_Name]"), &m_pL_Name, &m_pcL_Name, 50);
   RFX_Long_Bulk(pFX, _T("[BillingID]"), &m_pBillingID, &m_pcBillingID);

   pFX->SetFieldType(CFieldExchange::inputParam);
   RFX_Text(pFX, _T("Param"), m_strParam);
}
```

### Requirements

**Header:** afxdb.h

## <a name="dfx_binary"></a> DFX_Binary

Transfers arrays of bytes between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Binary(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CByteArray& value,
   int nPreAllocSize = AFX_DAO_BINARY_DEFAULT_SIZE,
   DWORD dwBindOptions = 0);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type [CByteArray](cbytearray-class.md), is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*nPreAllocSize*<br/>
The framework preallocates this amount of memory. If your data is larger, the framework will allocated more space as needed. For better performance, set this size to a value large enough to prevent reallocations. The default size is defined in the AFXDAO.H file as AFX_DAO_BINARY_DEFAULT_SIZE.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_DISABLE_FIELD_CACHE, does not use double buffering, and you must call [SetFieldDirty](cdaorecordset-class.md#setfielddirty) and [SetFieldNull](cdaorecordset-class.md#setfieldnull) yourself. The other possible value, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering, and you do not have to do extra work to mark fields dirty or Null. For performance and memory reasons, avoid this value unless your binary data is relatively small.

> [!NOTE]
> You can control whether data is double buffered for all fields by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_BYTES in DAO and type [CByteArray](cbytearray-class.md) in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_bool"></a> DFX_Bool

Transfers Boolean data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Bool(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BOOL& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type BOOL, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_BOOL in DAO and type BOOL in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_byte"></a> DFX_Byte

Transfers single bytes between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Byte(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   BYTE& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type BYTE, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_BYTES in DAO and type BYTE in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_currency"></a> DFX_Currency

Transfers currency data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Currency(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleCurrency& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, this value is taken from the specified data member, of type [COleCurrency](colecurrency-class.md). For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_CURRENCY in DAO and type [COleCurrency](colecurrency-class.md) in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_datetime"></a> DFX_DateTime

Transfers time and date data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_DateTime(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   COleDateTime& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. The function takes a reference to a [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object. For a transfer from recordset to data source, this value is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_DATE in DAO and type [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) in the recordset.

> [!NOTE]
> `COleDateTime` replaces [CTime](../../atl-mfc-shared/reference/ctime-class.md) and TIMESTAMP_STRUCT for this purpose in the DAO classes. `CTime` and TIMESTAMP_STRUCT are still used for the ODBC-based data access classes.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_double"></a> DFX_Double

Transfers **double float** data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Double(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   double& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`double`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_R8 in DAO and type **double float** in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_long"></a> DFX_Long

Transfers long integer data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Long(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   long& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`long`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_I4 in DAO and type **`long`** in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_longbinary"></a> DFX_LongBinary

**Important** It is recommended that you use [DFX_Binary](#dfx_binary) instead of this function.

### Syntax

```cpp
void AFXAPI DFX_LongBinary(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CLongBinary& value,
   DWORD dwPreAllocSize = AFX_DAO_LONGBINARY_DEFAULT_SIZE,
   DWORD dwBindOptions = 0);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type [CLongBinary](clongbinary-class.md), is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwPreAllocSize*<br/>
The framework preallocates this amount of memory. If your data is larger, the framework will allocated more space as needed. For better performance, set this size to a value large enough to prevent reallocations.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DISABLE_FIELD_CACHE, does not use double buffering. The other possible value is AFX_DAO_ENABLE_FIELD_CACHE. Uses double buffering, and you do not have to do extra work to mark fields dirty or Null. For performance and memory reasons, avoid this value unless your binary data is relatively small.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

`DFX_LongBinary` is provided for compatibility with the MFC ODBC classes. The `DFX_LongBinary` function transfers binary large-object (BLOB) data using class `CLongBinary` between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source. Data is mapped between type DAO_BYTES in DAO and type [CLongBinary](clongbinary-class.md) in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_short"></a> DFX_Short

Transfers short integer data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Short(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   short& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`short`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_I2 in DAO and type **`short`** in the recordset.

> [!NOTE]
> `DFX_Short` is equivalent to [RFX_Int](#rfx_int) for the ODBC-based classes.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_single"></a> DFX_Single

Transfers floating-point data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and the columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Single(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   float& value,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type **`float`**, is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call `SetFieldDirty` and `SetFieldNull` yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_R4 in DAO and type **`float`** in the recordset.

### Example

See [DFX_Text](#dfx_text).

### Requirements

**Header:** afxdao.h

## <a name="dfx_text"></a> DFX_Text

Transfers `CString` data between the field data members of a [CDaoRecordset](cdaorecordset-class.md) object and columns of a record on the data source.

### Syntax

```cpp
void AFXAPI DFX_Text(
   CDaoFieldExchange* pFX,
   LPCTSTR szName,
   CString& value,
   int nPreAllocSize = AFX_DAO_TEXT_DEFAULT_SIZE,
   DWORD dwBindOptions = AFX_DAO_ENABLE_FIELD_CACHE);
```

### Parameters

*pFX*<br/>
A pointer to an object of class [CDaoFieldExchange](cdaofieldexchange-class.md). This object contains information to define the context for each call of the function.

*szName*<br/>
The name of a data column.

*value*<br/>
The value stored in the indicated data member — the value to be transferred. For a transfer from recordset to data source, the value, of type [CString](../../atl-mfc-shared/reference/cstringt-class.md), is taken from the specified data member. For a transfer from data source to recordset, the value is stored in the specified data member.

*nPreAllocSize*<br/>
The framework preallocates this amount of memory. If your data is larger, the framework will allocated more space as needed. For better performance, set this size to a value large enough to prevent reallocations.

*dwBindOptions*<br/>
An option that lets you take advantage of MFC's double buffering mechanism for detecting recordset fields that have changed. The default, AFX_DAO_ENABLE_FIELD_CACHE, uses double buffering. The other possible value is AFX_DAO_DISABLE_FIELD_CACHE. If you specify this value, MFC does no checking on this field. You must call [SetFieldDirty](cdaorecordset-class.md#setfielddirty) and [SetFieldNull](cdaorecordset-class.md#setfieldnull) yourself.

> [!NOTE]
> You can control whether data is double buffered by default by setting [CDaoRecordset::m_bCheckCacheForDirtyFields](cdaorecordset-class.md#m_bcheckcachefordirtyfields).

### Remarks

Data is mapped between type DAO_CHAR in DAO (or, if the symbol _UNICODE is defined, DAO_WCHAR) and type [CString](../../atl-mfc-shared/reference/cstringt-class.md) in the recordset.  n

### Example

This example shows several calls to `DFX_Text`. Notice also the two calls to [CDaoFieldExchange::SetFieldType](cdaofieldexchange-class.md#setfieldtype). You must write the first call to `SetFieldType` and its **DFX** call. The second call and its associated **DFX** calls are normally written by the code wizard that generated the class.

```cpp
void CCustSet::DoFieldExchange(CDaoFieldExchange* pFX)
{
   pFX->SetFieldType(CDaoFieldExchange::param);
   DFX_Text(pFX, _T("Param"), m_strParam);
   pFX->SetFieldType(CDaoFieldExchange::outputColumn);
   DFX_Short(pFX, _T("EmployeeID"), m_EmployeeID);
   DFX_Text(pFX, _T("LastName"), m_LastName);
   DFX_Short(pFX, _T("Age"), m_Age);
   DFX_DateTime(pFX, _T("hire_date"), m_hire_date);
   DFX_DateTime(pFX, _T("termination_date"), m_termination_date);

   CDaoRecordset::DoFieldExchange(pFX);
}
```

### Requirements

**Header:** afxdao.h

## See also

[Macros and Globals](mfc-macros-and-globals.md)<br/>
[CRecordset::DoFieldExchange](crecordset-class.md#dofieldexchange)<br/>
[CRecordset::DoBulkFieldExchange](crecordset-class.md#dobulkfieldexchange)<br/>
[CDaoRecordset::DoFieldExchange](cdaorecordset-class.md#dofieldexchange)
