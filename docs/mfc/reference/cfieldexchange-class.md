---
description: "Learn more about: CFieldExchange Class"
title: "CFieldExchange Class"
ms.date: "11/04/2016"
f1_keywords: ["CFieldExchange", "AFXDB/CFieldExchange", "AFXDB/CFieldExchange::IsFieldType", "AFXDB/CFieldExchange::SetFieldType"]
helpviewer_keywords: ["CFieldExchange [MFC], IsFieldType", "CFieldExchange [MFC], SetFieldType"]
ms.assetid: 24c5c0b3-06a6-430e-9b6f-005a2c65e29f
---
# CFieldExchange Class

Supports the record field exchange (RFX) and bulk record field exchange (Bulk RFX) routines used by the database classes.

## Syntax

```
class CFieldExchange
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CFieldExchange::IsFieldType](#isfieldtype)|Returns nonzero if the current operation is appropriate for the type of field being updated.|
|[CFieldExchange::SetFieldType](#setfieldtype)|Specifies the type of recordset data member — column or parameter — represented by all following calls to RFX functions until the next call to `SetFieldType`.|

## Remarks

`CFieldExchange` does not have a base class.

Use this class if you are writing data exchange routines for custom data types or when you are implementing bulk row fetching; otherwise, you will not directly use this class. RFX and Bulk RFX exchanges data between the field data members of your recordset object and the corresponding fields of the current record on the data source.

> [!NOTE]
> If you are working with the Data Access Objects (DAO) classes rather than the Open Database Connectivity (ODBC) classes, use class [CDaoFieldExchange](../../mfc/reference/cdaofieldexchange-class.md) instead. For more information, see the article [Overview:Database Programming](../../data/data-access-programming-mfc-atl.md).

A `CFieldExchange` object provides the context information needed for record field exchange or bulk record field exchange to take place. `CFieldExchange` objects support a number of operations, including binding parameters and field data members and setting various flags on the fields of the current record. RFX and Bulk RFX operations are performed on recordset-class data members of types defined by the **`enum`** **FieldType** in `CFieldExchange`. Possible **FieldType** values are:

- `CFieldExchange::outputColumn` for field data members.

- `CFieldExchange::inputParam` or `CFieldExchange::param` for input parameter data members.

- `CFieldExchange::outputParam` for output parameter data members.

- `CFieldExchange::inoutParam` for input/output parameter data members.

Most of the class's member functions and data members are provided for writing your own custom RFX routines. You will use `SetFieldType` frequently. For more information, see the articles [Record Field Exchange (RFX)](../../data/odbc/record-field-exchange-rfx.md) and [Recordset (ODBC)](../../data/odbc/recordset-odbc.md). For information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md). For details about the RFX and Bulk RFX global functions, see [Record Field Exchange Functions](../../mfc/reference/record-field-exchange-functions.md) in the MFC Macros and Globals section of this reference.

## Inheritance Hierarchy

`CFieldExchange`

## Requirements

**Header:** afxdb.h

## <a name="isfieldtype"></a> CFieldExchange::IsFieldType

If you write your own RFX function, call `IsFieldType` at the beginning of your function to determine whether the current operation can be performed on a particular field or parameter data member type (a `CFieldExchange::outputColumn`, `CFieldExchange::inputParam`, `CFieldExchange::param`, `CFieldExchange::outputParam`, or `CFieldExchange::inoutParam`).

```
BOOL IsFieldType(UINT* pnField);
```

### Parameters

*pnField*<br/>
The sequential number of the field or parameter data member is returned in this parameter. This number corresponds to the data member's order in the [CRecordset::DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) or [CRecordset::DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) function.

### Return Value

Nonzero if the current operation can be performed on the current field or parameter type.

### Remarks

Follow the model of the existing RFX functions.

## <a name="setfieldtype"></a> CFieldExchange::SetFieldType

You need a call to `SetFieldType` in your recordset class's [DoFieldExchange](../../mfc/reference/crecordset-class.md#dofieldexchange) or [DoBulkFieldExchange](../../mfc/reference/crecordset-class.md#dobulkfieldexchange) override.

```cpp
void SetFieldType(UINT nFieldType);
```

### Parameters

*nFieldType*<br/>
A value of the `enum FieldType`, declared in `CFieldExchange`, which can be one of the following:

- `CFieldExchange::outputColumn`

- `CFieldExchange::inputParam`

- `CFieldExchange::param`

- `CFieldExchange::outputParam`

- `CFieldExchange::inoutParam`

### Remarks

For field data members, you must call `SetFieldType` with a parameter of `CFieldExchange::outputColumn`, followed by calls to the RFX or Bulk RFX functions. If you have not implemented bulk row fetching, then ClassWizard places this `SetFieldType` call for you in the field map section of `DoFieldExchange`.

If you parameterize your recordset class, you must call `SetFieldType` again, outside any field map section, followed by RFX calls for all the parameter data members. Each type of parameter data member must have its own `SetFieldType` call. The following table distinguishes the different values you can pass to `SetFieldType` to represent the parameter data members of your class:

|SetFieldType parameter value|Type of parameter data member|
|----------------------------------|-----------------------------------|
|`CFieldExchange::inputParam`|Input parameter. A value that is passed into the recordset's query or stored procedure.|
|`CFieldExchange::param` | same as `CFieldExchange::inputParam`.|
|`CFieldExchange::outputParam`|Output parameter. A return value of the recordset's stored procedure.|
|`CFieldExchange::inoutParam`|Input/output parameter. A value that is passed into and returned from the recordset's stored procedure.|

In general, each group of RFX function calls associated with field data members or parameter data members must be preceded by a call to `SetFieldType`. The *nFieldType* parameter of each `SetFieldType` call identifies the type of the data members represented by the RFX function calls that follow the `SetFieldType` call.

For more information about handling output and input/output parameters, see the `CRecordset` member function [FlushResultSet](../../mfc/reference/crecordset-class.md#flushresultset). For more information about the RFX and Bulk RFX functions, see the topic [Record Field Exchange Functions](../../mfc/reference/record-field-exchange-functions.md). For related information about bulk row fetching, see the article [Recordset: Fetching Records in Bulk (ODBC)](../../data/odbc/recordset-fetching-records-in-bulk-odbc.md).

### Example

This example shows several calls to RFX functions with accompanying calls to `SetFieldType`. Note that `SetFieldType` is called through the `pFX` pointer to a `CFieldExchange` object.

[!code-cpp[NVC_MFCDatabase#33](../../mfc/codesnippet/cpp/cfieldexchange-class_1.cpp)]

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CRecordset Class](../../mfc/reference/crecordset-class.md)
