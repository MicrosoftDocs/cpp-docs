---
description: "Learn more about: CDaoFieldExchange Class"
title: "CDaoFieldExchange Class"
ms.date: "09/17/2019"
f1_keywords: ["CDaoFieldExchange", "AFXDAO/CDaoFieldExchange", "AFXDAO/CDaoFieldExchange::IsValidOperation", "AFXDAO/CDaoFieldExchange::SetFieldType", "AFXDAO/CDaoFieldExchange::m_nOperation", "AFXDAO/CDaoFieldExchange::m_prs"]
helpviewer_keywords: ["CDaoFieldExchange [MFC], IsValidOperation", "CDaoFieldExchange [MFC], SetFieldType", "CDaoFieldExchange [MFC], m_nOperation", "CDaoFieldExchange [MFC], m_prs"]
ms.assetid: 350a663e-92ff-44ab-ad53-d94efa2e5823
---
# CDaoFieldExchange Class

Supports the DAO record field exchange (DFX) routines used by the DAO database classes.

DAO is supported through Office 2013. DAO 3.6 is the final version, and it is considered obsolete.

## Syntax

```
class CDaoFieldExchange
```

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoFieldExchange::IsValidOperation](#isvalidoperation)|Returns nonzero if the current operation is appropriate for the type of field being updated.|
|[CDaoFieldExchange::SetFieldType](#setfieldtype)|Specifies the type of recordset data member — column or parameter — represented by all subsequent calls to DFX functions until the next call to `SetFieldType`.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoFieldExchange::m_nOperation](#m_noperation)|The DFX operation being performed by the current call to the recordset's `DoFieldExchange` member function.|
|[CDaoFieldExchange::m_prs](#m_prs)|A pointer to the recordset on which DFX operations are being performed.|

## Remarks

`CDaoFieldExchange` does not have a base class.

Use this class if you are writing data exchange routines for custom data types; otherwise, you will not directly use this class. DFX exchanges data between the field data members of your [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object and the corresponding fields of the current record on the data source. DFX manages the exchange in both directions, from the data source and to the data source. See [Technical Note 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md) for information about writing custom DFX routines.

> [!NOTE]
> The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have the "CDao" prefix. You can still access ODBC data sources with the DAO classes. In general, the MFC classes based on DAO are more capable than the MFC classes based on ODBC. The DAO-based classes can access data, including through ODBC drivers, via their own database engine. They also support Data Definition Language (DDL) operations, such as adding tables via the classes instead of having to call DAO yourself.

> [!NOTE]
> DAO record field exchange (DFX) is very similar to record field exchange (RFX) in the ODBC-based MFC database classes ( `CDatabase`, `CRecordset`). If you understand RFX, you will find it easy to use DFX.

A `CDaoFieldExchange` object provides the context information needed for DAO record field exchange to take place. `CDaoFieldExchange` objects support a number of operations, including binding parameters and field data members and setting various flags on the fields of the current record. DFX operations are performed on recordset-class data members of types defined by the **`enum`** **FieldType** in `CDaoFieldExchange`. Possible **FieldType** values are:

- `CDaoFieldExchange::outputColumn` for field data members.

- `CDaoFieldExchange::param` for parameter data members.

The [IsValidOperation](#isvalidoperation) member function is provided for writing your own custom DFX routines. You will use [SetFieldType](#setfieldtype) frequently in your [CDaoRecordset::DoFieldExchange](../../mfc/reference/cdaorecordset-class.md#dofieldexchange) functions. For details about the DFX global functions, see [Record Field Exchange Functions](../../mfc/reference/record-field-exchange-functions.md). For information about writing custom DFX routines for your own data types, see [Technical Note 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## Inheritance Hierarchy

`CDaoFieldExchange`

## Requirements

**Header:** afxdao.h

## <a name="isvalidoperation"></a> CDaoFieldExchange::IsValidOperation

If you write your own DFX function, call `IsValidOperation` at the beginning of your function to determine whether the current operation can be performed on a particular field data member type (a `CDaoFieldExchange::outputColumn` or a `CDaoFieldExchange::param`).

```
BOOL IsValidOperation();
```

### Return Value

Nonzero if the current operation is appropriate for the type of field being updated.

### Remarks

Some of the operations performed by the DFX mechanism apply only to one of the possible field types. Follow the model of the existing DFX functions.

For additional information on writing custom DFX routines, see [Technical Note 53](../../mfc/tn053-custom-dfx-routines-for-dao-database-classes.md).

## <a name="m_noperation"></a> CDaoFieldExchange::m_nOperation

Identifies the operation to be performed on the [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object associated with the field exchange object.

### Remarks

The `CDaoFieldExchange` object supplies the context for a number of different DFX operations on the recordset.

> [!NOTE]
> The PSEUDONULL value described under the MarkForAddNew and SetFieldNull operations below is a value used to mark fields Null. The DAO record field exchange mechanism (DFX) uses this value to determine which fields have been explicitly marked Null. PSEUDONULL is not required for [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) and [COleCurrency](../../mfc/reference/colecurrency-class.md) fields.

Possible values of `m_nOperation` are:

|Operation|Description|
|---------------|-----------------|
|`AddToParameterList`|Builds the **PARAMETERS** clause of the SQL statement.|
|`AddToSelectList`|Builds the **SELECT** clause of the SQL statement.|
|`BindField`|Binds a field in the database to a memory location in your application.|
|`BindParam`|Sets parameter values for the recordset's query.|
|`Fixup`|Sets the Null status for a field.|
|`AllocCache`|Allocates the cache used to check for "dirty" fields in the recordset.|
|`StoreField`|Saves the current record to the cache.|
|`LoadField`|Restores the cached data member variables in the recordset.|
|`FreeCache`|Frees the cache used to check for "dirty" fields in the recordset.|
|`SetFieldNull`|Sets a field's status to Null and value to PSEUDONULL.|
|`MarkForAddNew`|Marks fields "dirty" if not PSEUDONULL.|
|`MarkForEdit`|Marks fields "dirty" if they do not match the cache.|
|`SetDirtyField`|Sets field values marked as "dirty."|
|`DumpField`|Dumps a field's contents (debug only).|
|`MaxDFXOperation`|Used for input checking.|

## <a name="m_prs"></a> CDaoFieldExchange::m_prs

Contains a pointer to the [CDaoRecordset](../../mfc/reference/cdaorecordset-class.md) object associated with the `CDaoFieldExchange` object.

### Remarks

## <a name="setfieldtype"></a> CDaoFieldExchange::SetFieldType

Call `SetFieldType` in your `CDaoRecordset` class's `DoFieldExchange` override.

```cpp
void SetFieldType(UINT nFieldType);
```

### Parameters

*nFieldType*<br/>
A value of the **enum FieldType**, declared in `CDaoFieldExchange`, which can be either of the following:

- `CDaoFieldExchange::outputColumn`

- `CDaoFieldExchange::param`

### Remarks

Normally, ClassWizard writes this call for you. If you write your own function and are using the wizard to write your `DoFieldExchange` function, add calls to your own function outside the field map. If you do not use the wizard, there will not be a field map. The call precedes calls to DFX functions, one for each field data member of your class, and identifies the field type as `CDaoFieldExchange::outputColumn`.

If you parameterize your recordset class, you should add DFX calls for all parameter data members (outside the field map) and precede these calls with a call to `SetFieldType`. Pass the value `CDaoFieldExchange::param`. (You can, instead, use a [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) and set its parameter values.)

In general, each group of DFX function calls associated with field data members or parameter data members must be preceded by a call to `SetFieldType`. The *nFieldType* parameter of each `SetFieldType` call identifies the type of the data members represented by the DFX function calls that follow the `SetFieldType` call.

## See also

[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoRecordset Class](../../mfc/reference/cdaorecordset-class.md)
