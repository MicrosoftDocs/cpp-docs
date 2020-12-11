---
description: "Learn more about: CDaoRecordset Class"
title: "CDaoRecordset Class"
ms.date: "08/27/2018"
f1_keywords: ["CDaoRecordset", "AFXDAO/CDaoRecordset", "AFXDAO/CDaoRecordset::CDaoRecordset", "AFXDAO/CDaoRecordset::AddNew", "AFXDAO/CDaoRecordset::CanAppend", "AFXDAO/CDaoRecordset::CanBookmark", "AFXDAO/CDaoRecordset::CancelUpdate", "AFXDAO/CDaoRecordset::CanRestart", "AFXDAO/CDaoRecordset::CanScroll", "AFXDAO/CDaoRecordset::CanTransact", "AFXDAO/CDaoRecordset::CanUpdate", "AFXDAO/CDaoRecordset::Close", "AFXDAO/CDaoRecordset::Delete", "AFXDAO/CDaoRecordset::DoFieldExchange", "AFXDAO/CDaoRecordset::Edit", "AFXDAO/CDaoRecordset::FillCache", "AFXDAO/CDaoRecordset::Find", "AFXDAO/CDaoRecordset::FindFirst", "AFXDAO/CDaoRecordset::FindLast", "AFXDAO/CDaoRecordset::FindNext", "AFXDAO/CDaoRecordset::FindPrev", "AFXDAO/CDaoRecordset::GetAbsolutePosition", "AFXDAO/CDaoRecordset::GetBookmark", "AFXDAO/CDaoRecordset::GetCacheSize", "AFXDAO/CDaoRecordset::GetCacheStart", "AFXDAO/CDaoRecordset::GetCurrentIndex", "AFXDAO/CDaoRecordset::GetDateCreated", "AFXDAO/CDaoRecordset::GetDateLastUpdated", "AFXDAO/CDaoRecordset::GetDefaultDBName", "AFXDAO/CDaoRecordset::GetDefaultSQL", "AFXDAO/CDaoRecordset::GetEditMode", "AFXDAO/CDaoRecordset::GetFieldCount", "AFXDAO/CDaoRecordset::GetFieldInfo", "AFXDAO/CDaoRecordset::GetFieldValue", "AFXDAO/CDaoRecordset::GetIndexCount", "AFXDAO/CDaoRecordset::GetIndexInfo", "AFXDAO/CDaoRecordset::GetLastModifiedBookmark", "AFXDAO/CDaoRecordset::GetLockingMode", "AFXDAO/CDaoRecordset::GetName", "AFXDAO/CDaoRecordset::GetParamValue", "AFXDAO/CDaoRecordset::GetPercentPosition", "AFXDAO/CDaoRecordset::GetRecordCount", "AFXDAO/CDaoRecordset::GetSQL", "AFXDAO/CDaoRecordset::GetType", "AFXDAO/CDaoRecordset::GetValidationRule", "AFXDAO/CDaoRecordset::GetValidationText", "AFXDAO/CDaoRecordset::IsBOF", "AFXDAO/CDaoRecordset::IsDeleted", "AFXDAO/CDaoRecordset::IsEOF", "AFXDAO/CDaoRecordset::IsFieldDirty", "AFXDAO/CDaoRecordset::IsFieldNull", "AFXDAO/CDaoRecordset::IsFieldNullable", "AFXDAO/CDaoRecordset::IsOpen", "AFXDAO/CDaoRecordset::Move", "AFXDAO/CDaoRecordset::MoveFirst", "AFXDAO/CDaoRecordset::MoveLast", "AFXDAO/CDaoRecordset::MoveNext", "AFXDAO/CDaoRecordset::MovePrev", "AFXDAO/CDaoRecordset::Open", "AFXDAO/CDaoRecordset::Requery", "AFXDAO/CDaoRecordset::Seek", "AFXDAO/CDaoRecordset::SetAbsolutePosition", "AFXDAO/CDaoRecordset::SetBookmark", "AFXDAO/CDaoRecordset::SetCacheSize", "AFXDAO/CDaoRecordset::SetCacheStart", "AFXDAO/CDaoRecordset::SetCurrentIndex", "AFXDAO/CDaoRecordset::SetFieldDirty", "AFXDAO/CDaoRecordset::SetFieldNull", "AFXDAO/CDaoRecordset::SetFieldValue", "AFXDAO/CDaoRecordset::SetFieldValueNull", "AFXDAO/CDaoRecordset::SetLockingMode", "AFXDAO/CDaoRecordset::SetParamValue", "AFXDAO/CDaoRecordset::SetParamValueNull", "AFXDAO/CDaoRecordset::SetPercentPosition", "AFXDAO/CDaoRecordset::Update", "AFXDAO/CDaoRecordset::m_bCheckCacheForDirtyFields", "AFXDAO/CDaoRecordset::m_nFields", "AFXDAO/CDaoRecordset::m_nParams", "AFXDAO/CDaoRecordset::m_pDAORecordset", "AFXDAO/CDaoRecordset::m_pDatabase", "AFXDAO/CDaoRecordset::m_strFilter", "AFXDAO/CDaoRecordset::m_strSort"]
helpviewer_keywords: ["CDaoRecordset [MFC], CDaoRecordset", "CDaoRecordset [MFC], AddNew", "CDaoRecordset [MFC], CanAppend", "CDaoRecordset [MFC], CanBookmark", "CDaoRecordset [MFC], CancelUpdate", "CDaoRecordset [MFC], CanRestart", "CDaoRecordset [MFC], CanScroll", "CDaoRecordset [MFC], CanTransact", "CDaoRecordset [MFC], CanUpdate", "CDaoRecordset [MFC], Close", "CDaoRecordset [MFC], Delete", "CDaoRecordset [MFC], DoFieldExchange", "CDaoRecordset [MFC], Edit", "CDaoRecordset [MFC], FillCache", "CDaoRecordset [MFC], Find", "CDaoRecordset [MFC], FindFirst", "CDaoRecordset [MFC], FindLast", "CDaoRecordset [MFC], FindNext", "CDaoRecordset [MFC], FindPrev", "CDaoRecordset [MFC], GetAbsolutePosition", "CDaoRecordset [MFC], GetBookmark", "CDaoRecordset [MFC], GetCacheSize", "CDaoRecordset [MFC], GetCacheStart", "CDaoRecordset [MFC], GetCurrentIndex", "CDaoRecordset [MFC], GetDateCreated", "CDaoRecordset [MFC], GetDateLastUpdated", "CDaoRecordset [MFC], GetDefaultDBName", "CDaoRecordset [MFC], GetDefaultSQL", "CDaoRecordset [MFC], GetEditMode", "CDaoRecordset [MFC], GetFieldCount", "CDaoRecordset [MFC], GetFieldInfo", "CDaoRecordset [MFC], GetFieldValue", "CDaoRecordset [MFC], GetIndexCount", "CDaoRecordset [MFC], GetIndexInfo", "CDaoRecordset [MFC], GetLastModifiedBookmark", "CDaoRecordset [MFC], GetLockingMode", "CDaoRecordset [MFC], GetName", "CDaoRecordset [MFC], GetParamValue", "CDaoRecordset [MFC], GetPercentPosition", "CDaoRecordset [MFC], GetRecordCount", "CDaoRecordset [MFC], GetSQL", "CDaoRecordset [MFC], GetType", "CDaoRecordset [MFC], GetValidationRule", "CDaoRecordset [MFC], GetValidationText", "CDaoRecordset [MFC], IsBOF", "CDaoRecordset [MFC], IsDeleted", "CDaoRecordset [MFC], IsEOF", "CDaoRecordset [MFC], IsFieldDirty", "CDaoRecordset [MFC], IsFieldNull", "CDaoRecordset [MFC], IsFieldNullable", "CDaoRecordset [MFC], IsOpen", "CDaoRecordset [MFC], Move", "CDaoRecordset [MFC], MoveFirst", "CDaoRecordset [MFC], MoveLast", "CDaoRecordset [MFC], MoveNext", "CDaoRecordset [MFC], MovePrev", "CDaoRecordset [MFC], Open", "CDaoRecordset [MFC], Requery", "CDaoRecordset [MFC], Seek", "CDaoRecordset [MFC], SetAbsolutePosition", "CDaoRecordset [MFC], SetBookmark", "CDaoRecordset [MFC], SetCacheSize", "CDaoRecordset [MFC], SetCacheStart", "CDaoRecordset [MFC], SetCurrentIndex", "CDaoRecordset [MFC], SetFieldDirty", "CDaoRecordset [MFC], SetFieldNull", "CDaoRecordset [MFC], SetFieldValue", "CDaoRecordset [MFC], SetFieldValueNull", "CDaoRecordset [MFC], SetLockingMode", "CDaoRecordset [MFC], SetParamValue", "CDaoRecordset [MFC], SetParamValueNull", "CDaoRecordset [MFC], SetPercentPosition", "CDaoRecordset [MFC], Update", "CDaoRecordset [MFC], m_bCheckCacheForDirtyFields", "CDaoRecordset [MFC], m_nFields", "CDaoRecordset [MFC], m_nParams", "CDaoRecordset [MFC], m_pDAORecordset", "CDaoRecordset [MFC], m_pDatabase", "CDaoRecordset [MFC], m_strFilter", "CDaoRecordset [MFC], m_strSort"]
ms.assetid: 2322067f-1027-4662-a5d7-aa2fc7488630
---
# CDaoRecordset Class

Represents a set of records selected from a data source.

## Syntax

```cpp
class CDaoRecordset : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDaoRecordset::CDaoRecordset](#cdaorecordset)|Constructs a `CDaoRecordset` object.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDaoRecordset::AddNew](#addnew)|Prepares for adding a new record. Call [Update](#update) to complete the addition.|
|[CDaoRecordset::CanAppend](#canappend)|Returns nonzero if new records can be added to the recordset via the [AddNew](#addnew) member function.|
|[CDaoRecordset::CanBookmark](#canbookmark)|Returns nonzero if the recordset supports bookmarks.|
|[CDaoRecordset::CancelUpdate](#cancelupdate)|Cancels any pending updates due to an [Edit](#edit) or [AddNew](#addnew) operation.|
|[CDaoRecordset::CanRestart](#canrestart)|Returns nonzero if [Requery](#requery) can be called to run the recordset's query again.|
|[CDaoRecordset::CanScroll](#canscroll)|Returns nonzero if you can scroll through the records.|
|[CDaoRecordset::CanTransact](#cantransact)|Returns nonzero if the data source supports transactions.|
|[CDaoRecordset::CanUpdate](#canupdate)|Returns nonzero if the recordset can be updated (you can add, update, or delete records).|
|[CDaoRecordset::Close](#close)|Closes the recordset.|
|[CDaoRecordset::Delete](#delete)|Deletes the current record from the recordset. You must explicitly scroll to another record after the deletion.|
|[CDaoRecordset::DoFieldExchange](#dofieldexchange)|Called to exchange data (in both directions) between the field data members of the recordset and the corresponding record on the data source. Implements DAO record field exchange (DFX).|
|[CDaoRecordset::Edit](#edit)|Prepares for changes to the current record. Call `Update` to complete the edit.|
|[CDaoRecordset::FillCache](#fillcache)|Fills all or a part of a local cache for a recordset object that contains data from an ODBC data source.|
|[CDaoRecordset::Find](#find)|Locates the first, next, previous, or last location of a particular string in a dynaset-type recordset that satisfies the specified criteria and makes that record the current record.|
|[CDaoRecordset::FindFirst](#findfirst)|Locates the first record in a dynaset-type or snapshot-type recordset that satisfies the specified criteria and makes that record the current record.|
|[CDaoRecordset::FindLast](#findlast)|Locates the last record in a dynaset-type or snapshot-type recordset that satisfies the specified criteria and makes that record the current record.|
|[CDaoRecordset::FindNext](#findnext)|Locates the next record in a dynaset-type or snapshot-type recordset that satisfies the specified criteria and makes that record the current record.|
|[CDaoRecordset::FindPrev](#findprev)|Locates the previous record in a dynaset-type or snapshot-type recordset that satisfies the specified criteria and makes that record the current record.|
|[CDaoRecordset::GetAbsolutePosition](#getabsoluteposition)|Returns the record number of a recordset object's current record.|
|[CDaoRecordset::GetBookmark](#getbookmark)|Returns a value that represents the bookmark on a record.|
|[CDaoRecordset::GetCacheSize](#getcachesize)|Returns a value that specifies the number of records in a dynaset-type recordset containing data to be locally cached from an ODBC data source.|
|[CDaoRecordset::GetCacheStart](#getcachestart)|Returns a value that specifies the bookmark of the first record in the recordset to be cached.|
|[CDaoRecordset::GetCurrentIndex](#getcurrentindex)|Returns a `CString` containing the name of the index most recently used on an indexed, table-type `CDaoRecordset`.|
|[CDaoRecordset::GetDateCreated](#getdatecreated)|Returns the date and time the base table underlying a `CDaoRecordset` object was created|
|[CDaoRecordset::GetDateLastUpdated](#getdatelastupdated)|Returns the date and time of the most recent change made to the design of a base table underlying a `CDaoRecordset` object.|
|[CDaoRecordset::GetDefaultDBName](#getdefaultdbname)|Returns the name of the default data source.|
|[CDaoRecordset::GetDefaultSQL](#getdefaultsql)|Called to get the default SQL string to execute.|
|[CDaoRecordset::GetEditMode](#geteditmode)|Returns a value that indicates the state of editing for the current record.|
|[CDaoRecordset::GetFieldCount](#getfieldcount)|Returns a value that represents the number of fields in a recordset.|
|[CDaoRecordset::GetFieldInfo](#getfieldinfo)|Returns specific kinds of information about the fields in the recordset.|
|[CDaoRecordset::GetFieldValue](#getfieldvalue)|Returns the value of a field in a recordset.|
|[CDaoRecordset::GetIndexCount](#getindexcount)|Retrieves the number of indexes in a table underlying a recordset.|
|[CDaoRecordset::GetIndexInfo](#getindexinfo)|Returns various kinds of information about an index.|
|[CDaoRecordset::GetLastModifiedBookmark](#getlastmodifiedbookmark)|Used to determine the most recently added or updated record.|
|[CDaoRecordset::GetLockingMode](#getlockingmode)|Returns a value that indicates the type of locking that is in effect during editing.|
|[CDaoRecordset::GetName](#getname)|Returns a `CString` containing the name of the recordset.|
|[CDaoRecordset::GetParamValue](#getparamvalue)|Retrieves the current value of the specified parameter stored in the underlying DAOParameter object.|
|[CDaoRecordset::GetPercentPosition](#getpercentposition)|Returns the position of the current record as a percentage of the total number of records.|
|[CDaoRecordset::GetRecordCount](#getrecordcount)|Returns the number of records accessed in a recordset object.|
|[CDaoRecordset::GetSQL](#getsql)|Gets the SQL string used to select records for the recordset.|
|[CDaoRecordset::GetType](#gettype)|Called to determine the type of a recordset: table-type, dynaset-type, or snapshot-type.|
|[CDaoRecordset::GetValidationRule](#getvalidationrule)|Returns a `CString` containing the value that validates data as it is entered into a field.|
|[CDaoRecordset::GetValidationText](#getvalidationtext)|Retrieves the text that is displayed when a validation rule is not satisfied.|
|[CDaoRecordset::IsBOF](#isbof)|Returns nonzero if the recordset has been positioned before the first record. There is no current record.|
|[CDaoRecordset::IsDeleted](#isdeleted)|Returns nonzero if the recordset is positioned on a deleted record.|
|[CDaoRecordset::IsEOF](#iseof)|Returns nonzero if the recordset has been positioned after the last record. There is no current record.|
|[CDaoRecordset::IsFieldDirty](#isfielddirty)|Returns nonzero if the specified field in the current record has been changed.|
|[CDaoRecordset::IsFieldNull](#isfieldnull)|Returns nonzero if the specified field in the current record is Null (having no value).|
|[CDaoRecordset::IsFieldNullable](#isfieldnullable)|Returns nonzero if the specified field in the current record can be set to Null (having no value).|
|[CDaoRecordset::IsOpen](#isopen)|Returns nonzero if [Open](#open) has been called previously.|
|[CDaoRecordset::Move](#move)|Positions the recordset to a specified number of records from the current record in either direction.|
|[CDaoRecordset::MoveFirst](#movefirst)|Positions the current record on the first record in the recordset.|
|[CDaoRecordset::MoveLast](#movelast)|Positions the current record on the last record in the recordset.|
|[CDaoRecordset::MoveNext](#movenext)|Positions the current record on the next record in the recordset .|
|[CDaoRecordset::MovePrev](#moveprev)|Positions the current record on the previous record in the recordset.|
|[CDaoRecordset::Open](#open)|Creates a new recordset from a table, dynaset, or snapshot.|
|[CDaoRecordset::Requery](#requery)|Runs the recordset's query again to refresh the selected records.|
|[CDaoRecordset::Seek](#seek)|Locates the record in an indexed table-type recordset object that satisfies the specified criteria for the current index and makes that record the current record.|
|[CDaoRecordset::SetAbsolutePosition](#setabsoluteposition)|Sets the record number of a recordset object's current record.|
|[CDaoRecordset::SetBookmark](#setbookmark)|Positions the recordset on a record containing the specified bookmark.|
|[CDaoRecordset::SetCacheSize](#setcachesize)|Sets a value that specifies the number of records in a dynaset-type recordset containing data to be locally cached from an ODBC data source.|
|[CDaoRecordset::SetCacheStart](#setcachestart)|Sets a value that specifies the bookmark of the first record in the recordset to be cached.|
|[CDaoRecordset::SetCurrentIndex](#setcurrentindex)|Called to set an index on a table-type recordset.|
|[CDaoRecordset::SetFieldDirty](#setfielddirty)|Marks the specified field in the current record as changed.|
|[CDaoRecordset::SetFieldNull](#setfieldnull)|Sets the value of the specified field in the current record to Null (having no value).|
|[CDaoRecordset::SetFieldValue](#setfieldvalue)|Sets the value of a field in a recordset.|
|[CDaoRecordset::SetFieldValueNull](#setfieldvaluenull)|Sets the value of a field in a recordset to Null. (having no value).|
|[CDaoRecordset::SetLockingMode](#setlockingmode)|Sets a value that indicates the type of locking to put into effect during editing.|
|[CDaoRecordset::SetParamValue](#setparamvalue)|Sets the current value of the specified parameter stored in the underlying DAOParameter object|
|[CDaoRecordset::SetParamValueNull](#setparamvaluenull)|Sets the current value of the specified parameter to Null (having no value).|
|[CDaoRecordset::SetPercentPosition](#setpercentposition)|Sets the position of the current record to a location corresponding to a percentage of the total number of records in a recordset.|
|[CDaoRecordset::Update](#update)|Completes an `AddNew` or `Edit` operation by saving the new or edited data on the data source.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[CDaoRecordset::m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields)|Contains a flag indicating whether fields are automatically marked as changed.|
|[CDaoRecordset::m_nFields](#m_nfields)|Contains the number of field data members in the recordset class and the number of columns selected by the recordset from the data source.|
|[CDaoRecordset::m_nParams](#m_nparams)|Contains the number of parameter data members in the recordset class — the number of parameters passed with the recordset's query|
|[CDaoRecordset::m_pDAORecordset](#m_pdaorecordset)|A pointer to the DAO interface underlying the recordset object.|
|[CDaoRecordset::m_pDatabase](#m_pdatabase)|Source database for this result set. Contains a pointer to a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object.|
|[CDaoRecordset::m_strFilter](#m_strfilter)|Contains a string used to construct a SQL **WHERE** statement.|
|[CDaoRecordset::m_strSort](#m_strsort)|Contains a string used to construct a SQL **ORDER BY** statement.|

## Remarks

Known as "recordsets," `CDaoRecordset` objects are available in the following three forms:

- Table-type recordsets represent a base table that you can use to examine, add, change, or delete records from a single database table.

- Dynaset-type recordsets are the result of a query that can have updateable records. These recordsets are a set of records that you can use to examine, add, change, or delete records from an underlying database table or tables. Dynaset-type recordsets can contain fields from one or more tables in a database.

- Snapshot-type recordsets are a static copy of a set of records that you can use to find data or generate reports. These recordsets can contain fields from one or more tables in a database but cannot be updated.

Each form of recordset represents a set of records fixed at the time the recordset is opened. When you scroll to a record in a table-type recordset or a dynaset-type recordset, it reflects changes made to the record after the recordset is opened, either by other users or by other recordsets in your application. (A snapshot-type recordset cannot be updated.) You can use `CDaoRecordset` directly or derive an application-specific recordset class from `CDaoRecordset`. You can then:

- Scroll through the records.

- Set an index and quickly look for records using [Seek](#seek) (table-type recordsets only).

- Find records based on a string comparison: "<", "\<=", "=", ">=", or ">" (dynaset-type and snapshot-type recordsets).

- Update the records and specify a locking mode (except snapshot-type recordsets).

- Filter the recordset to constrain which records it selects from those available on the data source.

- Sort the recordset.

- Parameterize the recordset to customize its selection with information not known until run time.

Class `CDaoRecordset` supplies an interface similar to that of class `CRecordset`. The main difference is that class `CDaoRecordset` accesses data through a Data Access Object (DAO) based on OLE. Class `CRecordset` accesses the DBMS through Open Database Connectivity (ODBC) and an ODBC driver for that DBMS.

> [!NOTE]
> The DAO database classes are distinct from the MFC database classes based on Open Database Connectivity (ODBC). All DAO database class names have the "CDao" prefix. You can still access ODBC data sources with the DAO classes; the DAO classes generally offer superior capabilities because they are specific to the Microsoft Jet database engine.

You can either use `CDaoRecordset` directly or derive a class from `CDaoRecordset`. To use a recordset class in either case, open a database and construct a recordset object, passing the constructor a pointer to your `CDaoDatabase` object. You can also construct a `CDaoRecordset` object and let MFC create a temporary `CDaoDatabase` object for you. Then call the recordset's [Open](#open) member function, specifying whether the object is a table-type recordset, a dynaset-type recordset, or a snapshot-type recordset. Calling `Open` selects data from the database and retrieves the first record.

Use the object's member functions and data members to scroll through the records and operate on them. The operations available depend on whether the object is a table-type recordset, a dynaset-type recordset, or a snapshot-type recordset, and whether it is updateable or read-only — this depends on the capability of the database or Open Database Connectivity (ODBC) data source. To refresh records that may have been changed or added since the `Open` call, call the object's [Requery](#requery) member function. Call the object's `Close` member function and destroy the object when you finish with it.

`CDaoRecordset` uses DAO record field exchange (DFX) to support reading and updating of record fields through type-safe C++ members of your `CDaoRecordset` or `CDaoRecordset`-derived class. You can also implement dynamic binding of columns in a database without using the DFX mechanism using [GetFieldValue](#getfieldvalue) and [SetFieldValue](#setfieldvalue).

For related information, see the topic "Recordset Object" in DAO Help.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CDaoRecordset`

## Requirements

**Header:** afxdao.h

## <a name="addnew"></a> CDaoRecordset::AddNew

Call this member function to add a new record to a table-type or dynaset-type recordset.

```cpp
virtual void AddNew();
```

### Remarks

The record's fields are initially Null. (In database terminology, Null means "having no value" and is not the same as NULL in C++.) To complete the operation, you must call the [Update](#update) member function. `Update` saves your changes to the data source.

> [!CAUTION]
> If you edit a record and then scroll to another record without calling `Update`, your changes are lost without warning.

If you add a record to a dynaset-type recordset by calling [AddNew](#addnew), the record is visible in the recordset and included in the underlying table where it becomes visible to any new `CDaoRecordset` objects.

The position of the new record depends on the type of recordset:

- In a dynaset-type recordset, where the new record is inserted is not guaranteed. This behavior changed with Microsoft Jet 3.0 for reasons of performance and concurrency. If your goal is to make the newly added record the current record, get the bookmark of the last modified record and move to that bookmark:

[!code-cpp[NVC_MFCDatabase#1](../../mfc/codesnippet/cpp/cdaorecordset-class_1.cpp)]

- In a table-type recordset for which an index has been specified, records are returned in their proper place in the sort order. If no index has been specified, new records are returned at the end of the recordset.

The record that was current before you used `AddNew` remains current. If you want to make the new record current and the recordset supports bookmarks, call [SetBookmark](#setbookmark) to the bookmark identified by the LastModified property setting of the underlying DAO recordset object. Doing so is useful for determining the value for counter (auto-increment) fields in an added record. For more information, see [GetLastModifiedBookmark](#getlastmodifiedbookmark).

If the database supports transactions, you can make your `AddNew` call part of a transaction. For more information about transactions, see class [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md). Note that you should call [CDaoWorkspace::BeginTrans](../../mfc/reference/cdaoworkspace-class.md#begintrans) before calling `AddNew`.

It is illegal to call `AddNew` for a recordset whose [Open](#open) member function has not been called. A `CDaoException` is thrown if you call `AddNew` for a recordset that cannot be appended. You can determine whether the recordset is updateable by calling [CanAppend](#canappend).

The framework marks changed field data members to ensure they will be written to the record on the data source by the DAO record field exchange (DFX) mechanism. Changing the value of a field generally sets the field dirty automatically, so you will seldom need to call [SetFieldDirty](#setfielddirty) yourself, but you might sometimes want to ensure that columns will be explicitly updated or inserted regardless of what value is in the field data member. The DFX mechanism also employs the use of **PSEUDO NULL**. For more information, see [CDaoFieldExchange::m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

If the double-buffering mechanism is not being used, then changing the value of the field does not automatically set the field as dirty. In this case, it will be necessary to explicitly set the field dirty. The flag contained in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controls this automatic field checking.

> [!NOTE]
> If records are double-buffered (that is, automatic field checking is enabled), calling `CancelUpdate` will restore the member variables to the values they had before `AddNew` or `Edit` was called.

For related information, see the topics "AddNew Method", "CancelUpdate Method", "LastModified Property", and "EditMode Property" in DAO Help.

## <a name="canappend"></a> CDaoRecordset::CanAppend

Call this member function to determine whether the previously opened recordset allows you to add new records by calling the [AddNew](#addnew) member function.

```cpp
BOOL CanAppend() const;
```

### Return Value

Nonzero if the recordset allows adding new records; otherwise 0. `CanAppend` will return 0 if you opened the recordset as read-only.

### Remarks

For related information, see the topic "Append Method" in DAO Help.

## <a name="canbookmark"></a> CDaoRecordset::CanBookmark

Call this member function to determine whether the previously opened recordset allows you to individually mark records using bookmarks.

```cpp
BOOL CanBookmark();
```

### Return Value

Nonzero if the recordset supports bookmarks, otherwise 0.

### Remarks

If you are using recordsets based entirely on Microsoft Jet database engine tables, bookmarks can be used except on snapshot-type recordsets flagged as forward-only scrolling recordsets. Other database products (external ODBC data sources) may not support bookmarks.

For related information, see the topic "Bookmarkable Property" in DAO Help.

## <a name="cancelupdate"></a> CDaoRecordset::CancelUpdate

The `CancelUpdate` member function cancels any pending updates due to an [Edit](#edit) or [AddNew](#addnew) operation.

```cpp
virtual void CancelUpdate();
```

### Remarks

For example, if an application calls the `Edit` or `AddNew` member function and has not called [Update](#update), `CancelUpdate` cancels any changes made after `Edit` or `AddNew` was called.

> [!NOTE]
> If records are double-buffered (that is, automatic field checking is enabled), calling `CancelUpdate` will restore the member variables to the values they had before `AddNew` or `Edit` was called.

If there is no `Edit` or `AddNew` operation pending, `CancelUpdate` causes MFC to throw an exception. Call the [GetEditMode](#geteditmode) member function to determine if there is a pending operation that can be canceled.

For related information, see the topic "CancelUpdate Method" in DAO Help.

## <a name="canrestart"></a> CDaoRecordset::CanRestart

Call this member function to determine whether the recordset allows restarting its query (to refresh its records) by calling the `Requery` member function.

```cpp
BOOL CanRestart();
```

### Return Value

Nonzero if `Requery` can be called to run the recordset's query again, otherwise 0.

### Remarks

Table-type recordsets do not support `Requery`.

If `Requery` is not supported, call [Close](#close) then [Open](#open) to refresh the data. You can call `Requery` to update a recordset object's underlying parameter query after the parameter values have been changed.

For related information, see the topic "Restartable Property" in DAO Help.

## <a name="canscroll"></a> CDaoRecordset::CanScroll

Call this member function to determine whether the recordset allows scrolling.

```cpp
BOOL CanScroll() const;
```

### Return Value

Nonzero if you can scroll through the records, otherwise 0.

### Remarks

If you call [Open](#open) with `dbForwardOnly`, the recordset can only scroll forward.

For related information, see the topic "Positioning the Current Record Pointer with DAO" in DAO Help.

## <a name="cantransact"></a> CDaoRecordset::CanTransact

Call this member function to determine whether the recordset allows transactions.

```cpp
BOOL CanTransact();
```

### Return Value

Nonzero if the underlying data source supports transactions, otherwise 0.

### Remarks

For related information, see the topic "Transactions Property" in DAO Help.

## <a name="canupdate"></a> CDaoRecordset::CanUpdate

Call this member function to determine whether the recordset can be updated.

```cpp
BOOL CanUpdate() const;
```

### Return Value

Nonzero if the recordset can be updated (add, update, and delete records), otherwise 0.

### Remarks

A recordset might be read-only if the underlying data source is read-only or if you specified `dbReadOnly` for *nOptions* when you called [Open](#open) for the recordset.

For related information, see the topics "AddNew Method", "Edit Method", "Delete Method", "Update Method", and "Updatable Property" in DAO Help.

## <a name="cdaorecordset"></a> CDaoRecordset::CDaoRecordset

Constructs a `CDaoRecordset` object.

```cpp
CDaoRecordset(CDaoDatabase* pDatabase = NULL);
```

### Parameters

*pDatabase*<br/>
Contains a pointer to a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md) object or the value NULL. If not NULL and the `CDaoDatabase` object's `Open` member function has not been called to connect it to the data source, the recordset attempts to open it for you during its own [Open](#open) call. If you pass NULL, a `CDaoDatabase` object is constructed and connected for you using the data source information you specified if you derived your recordset class from `CDaoRecordset`.

### Remarks

You can either use `CDaoRecordset` directly or derive an application-specific class from `CDaoRecordset`. You can use ClassWizard to derive your recordset classes.

> [!NOTE]
> If you derive a `CDaoRecordset` class, your derived class must supply its own constructor. In the constructor of your derived class, call the constructor `CDaoRecordset::CDaoRecordset`, passing the appropriate parameters along to it.

Pass NULL to your recordset constructor to have a `CDaoDatabase` object constructed and connected for you automatically. This is a useful shortcut that does not require you to construct and connect a `CDaoDatabase` object prior to constructing your recordset. If the `CDaoDatabase` object is not open, a [CDaoWorkspace](../../mfc/reference/cdaoworkspace-class.md) object will also be created for you that uses the default workspace. For more information, see [CDaoDatabase::CDaoDatabase](../../mfc/reference/cdaodatabase-class.md#cdaodatabase).

## <a name="close"></a> CDaoRecordset::Close

Closing a `CDaoRecordset` object removes it from the collection of open recordsets in the associated database.

```cpp
virtual void Close();
```

### Remarks

Because `Close` does not destroy the `CDaoRecordset` object, you can reuse the object by calling `Open` on the same data source or a different data source.

All pending [AddNew](#addnew) or [Edit](#edit) statements are canceled, and all pending transactions are rolled back. If you want to preserve pending additions or edits, call [Update](#update) before you call `Close` for each recordset.

You can call `Open` again after calling `Close`. This lets you reuse the recordset object. A better alternative is to call [Requery](#requery), if possible.

For related information, see the topic "Close Method" in DAO Help.

## <a name="delete"></a> CDaoRecordset::Delete

Call this member function to delete the current record in an open dynaset-type or table-type recordset object.

```cpp
virtual void Delete();
```

### Remarks

After a successful deletion, the recordset's field data members are set to a Null value, and you must explicitly call one of the recordset navigation member functions ( [Move](#move), [Seek](#seek), [SetBookmark](#setbookmark), and so on) in order to move off the deleted record. When you delete records from a recordset, there must be a current record in the recordset before you call `Delete`; otherwise, MFC throws an exception.

`Delete` removes the current record and makes it inaccessible. Although you cannot edit or use the deleted record, it remains current. Once you move to another record, however, you cannot make the deleted record current again.

> [!CAUTION]
> The recordset must be updatable and there must be a valid record current in the recordset when you call `Delete`. For example, if you delete a record but do not scroll to a new record before you call `Delete` again, `Delete` throws a [CDaoException](../../mfc/reference/cdaoexception-class.md).

You can undelete a record if you use transactions and you call the [CDaoWorkspace::Rollback](../../mfc/reference/cdaoworkspace-class.md#rollback) member function. If the base table is the primary table in a cascade delete relationship, deleting the current record may also delete one or more records in a foreign table. For more information, see the definition "cascade delete" in DAO Help.

Unlike `AddNew` and `Edit`, a call to `Delete` is not followed by a call to `Update`.

For related information, see the topics "AddNew Method", "Edit Method", "Delete Method", "Update Method", and "Updatable Property" in DAO Help.

## <a name="dofieldexchange"></a> CDaoRecordset::DoFieldExchange

The framework calls this member function to automatically exchange data between the field data members of your recordset object and the corresponding columns of the current record on the data source.

```cpp
virtual void DoFieldExchange(CDaoFieldExchange* pFX);
```

### Parameters

*pFX*<br/>
Contains a pointer to a `CDaoFieldExchange` object. The framework will already have set up this object to specify a context for the field exchange operation.

### Remarks

It also binds your parameter data members, if any, to parameter placeholders in the SQL statement string for the recordset's selection. The exchange of field data, called DAO record field exchange (DFX), works in both directions: from the recordset object's field data members to the fields of the record on the data source, and from the record on the data source to the recordset object. If you are binding columns dynamically, you are not required to implement `DoFieldExchange`.

The only action you must normally take to implement `DoFieldExchange` for your derived recordset class is to create the class with ClassWizard and specify the names and data types of the field data members. You might also add code to what ClassWizard writes to specify parameter data members. If all fields are to be bound dynamically, this function will be inactive unless you specify parameter data members.

When you declare your derived recordset class with ClassWizard, the wizard writes an override of `DoFieldExchange` for you, which resembles the following example:

[!code-cpp[NVC_MFCDatabase#2](../../mfc/codesnippet/cpp/cdaorecordset-class_2.cpp)]

## <a name="edit"></a> CDaoRecordset::Edit

Call this member function to allow changes to the current record.

```cpp
virtual void Edit();
```

### Remarks

Once you call the `Edit` member function, changes made to the current record's fields are copied to the copy buffer. After you make the desired changes to the record, call `Update` to save your changes. `Edit` saves the values of the recordset's data members. If you call `Edit`, make changes, then call `Edit` again, the record's values are restored to what they were before the first `Edit` call.

> [!CAUTION]
> If you edit a record and then perform any operation that moves to another record without first calling `Update`, your changes are lost without warning. In addition, if you close the recordset or the parent database, your edited record is discarded without warning.

In some cases, you may want to update a column by making it Null (containing no data). To do so, call `SetFieldNull` with a parameter of TRUE to mark the field Null; this also causes the column to be updated. If you want a field to be written to the data source even though its value has not changed, call `SetFieldDirty` with a parameter of TRUE. This works even if the field had the value Null.

The framework marks changed field data members to ensure they will be written to the record on the data source by the DAO record field exchange (DFX) mechanism. Changing the value of a field generally sets the field dirty automatically, so you will seldom need to call [SetFieldDirty](#setfielddirty) yourself, but you might sometimes want to ensure that columns will be explicitly updated or inserted regardless of what value is in the field data member. The DFX mechanism also employs the use of **PSEUDO NULL**. For more information, see [CDaoFieldExchange::m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

If the double-buffering mechanism is not being used, then changing the value of the field does not automatically set the field as dirty. In this case, it will be necessary to explicitly set the field dirty. The flag contained in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controls this automatic field checking.

When the recordset object is pessimistically locked in a multiuser environment, the record remains locked from the time `Edit` is used until the updating is complete. If the recordset is optimistically locked, the record is locked and compared with the pre-edited record just before it is updated in the database. If the record has changed since you called `Edit`, the `Update` operation fails and MFC throws an exception. You can change the locking mode with `SetLockingMode`.

> [!NOTE]
> Optimistic locking is always used on external database formats, such as ODBC and installable ISAM.

The current record remains current after you call `Edit`. To call `Edit`, there must be a current record. If there is no current record or if the recordset does not refer to an open table-type or dynaset-type recordset object, an exception occurs. Calling `Edit` causes a `CDaoException` to be thrown under the following conditions:

- There is no current record.

- The database or recordset is read-only.

- No fields in the record are updatable.

- The database or recordset was opened for exclusive use by another user.

- Another user has locked the page containing your record.

If the data source supports transactions, you can make the `Edit` call part of a transaction. Note that you should call `CDaoWorkspace::BeginTrans` before calling `Edit` and after the recordset has been opened. Also note that calling `CDaoWorkspace::CommitTrans` is not a substitute for calling `Update` to complete the `Edit` operation. For more information about transactions, see class `CDaoWorkspace`.

For related information, see the topics "AddNew Method", "Edit Method", "Delete Method", "Update Method", and "Updatable Property" in DAO Help.

## <a name="fillcache"></a> CDaoRecordset::FillCache

Call this member function to cache a specified number of records from the recordset.

```cpp
void FillCache(
    long* pSize = NULL,
    COleVariant* pBookmark = NULL);
```

### Parameters

*pSize*<br/>
Specifies the number of rows to fill in the cache. If you omit this parameter, the value is determined by the CacheSize property setting of the underlying DAO object.

*pBookmark*<br/>
A [COleVariant](../../mfc/reference/colevariant-class.md) specifying a bookmark. The cache is filled starting from the record indicated by this bookmark. If you omit this parameter, the cache is filled starting from the record indicated by the CacheStart property of the underlying DAO object.

### Remarks

Caching improves the performance of an application that retrieves, or fetches, data from a remote server. A cache is space in local memory that holds the data most recently fetched from the server on the assumption that the data will probably be requested again while the application is running. When data is requested, the Microsoft Jet database engine checks the cache for the data first rather than fetching it from the server, which takes more time. Using data caching on non-ODBC data sources has no effect as the data is not saved in the cache.

Rather than waiting for the cache to be filled with records as they are fetched, you can explicitly fill the cache at any time by calling the `FillCache` member function. This is a faster way to fill the cache because `FillCache` fetches several records at once instead of one at a time. For example, while each screenful of records is being displayed, you can have your application call `FillCache` to fetch the next screenful of records.

Any ODBC database accessed with recordset objects can have a local cache. To create the cache, open a recordset object from the remote data source, and then call the `SetCacheSize` and `SetCacheStart` member functions of the recordset. If *lSize* and *lBookmark* create a range that is partly or wholly outside the range specified by `SetCacheSize` and `SetCacheStart`, the portion of the recordset outside this range is ignored and is not loaded into the cache. If `FillCache` requests more records than remain in the remote data source, only the remaining records are fetched, and no exception is thrown.

Records fetched from the cache do not reflect changes made concurrently to the source data by other users.

`FillCache` fetches only records not already cached. To force an update of all the cached data, call the `SetCacheSize` member function with an *lSize* parameter equal to 0, call `SetCacheSize` again with the *lSize* parameter equal to the size of the cache you originally requested, and then call `FillCache`.

For related information, see the topic "FillCache Method" in DAO Help.

## <a name="find"></a> CDaoRecordset::Find

Call this member function to locate a particular string in a dynaset- or snapshot-type recordset using a comparison operator.

```cpp
virtual BOOL Find(
    long lFindType,
    LPCTSTR lpszFilter);
```

### Parameters

*lFindType*<br/>
A value indicating the type of Find operation desired. The possible values are:

- AFX_DAO_NEXT Find the next location of a matching string.

- AFX_DAO_PREV Find the previous location of a matching string.

- AFX_DAO_FIRST Find the first location of a matching string.

- AFX_DAO_LAST Find the last location of a matching string.

*lpszFilter*<br/>
A string expression (like the **WHERE** clause in a SQL statement without the word **WHERE**) used to locate the record. For example:

[!code-cpp[NVC_MFCDatabase#3](../../mfc/codesnippet/cpp/cdaorecordset-class_3.cpp)]

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

You can find the first, next, previous, or last instance of the string. `Find` is a virtual function, so you can override it and add your own implementation. The `FindFirst`, `FindLast`, `FindNext`, and `FindPrev` member functions call the `Find` member function, so you can use `Find` to control the behavior of all Find operations.

To locate a record in a table-type recordset, call the [Seek](#seek) member function.

> [!TIP]
> The smaller the set of records you have, the more effective `Find` will be. In general, and especially with ODBC data, it is better to create a new query that retrieves just the records you want.

For related information, see the topic "FindFirst, FindLast, FindNext, FindPrevious Methods" in DAO Help.

## <a name="findfirst"></a> CDaoRecordset::FindFirst

Call this member function to find the first record that matches a specified condition.

```cpp
BOOL FindFirst(LPCTSTR lpszFilter);
```

### Parameters

*lpszFilter*<br/>
A string expression (like the **WHERE** clause in a SQL statement without the word **WHERE**) used to locate the record.

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

The `FindFirst` member function begins its search from the beginning of the recordset and searches to the end of the recordset.

If you want to include all the records in your search (not just those that meet a specific condition) use one of the Move operations to move from record to record. To locate a record in a table-type recordset, call the `Seek` member function.

If a record matching the criteria is not located, the current record pointer is undetermined, and `FindFirst` returns zero. If the recordset contains more than one record that satisfies the criteria, `FindFirst` locates the first occurrence, `FindNext` locates the next occurrence, and so on.

> [!CAUTION]
> If you edit the current record, be sure to save the changes by calling the `Update` member function before you move to another record. If you move to another record without updating, your changes are lost without warning.

The `Find` member functions search from the location and in the direction specified in the following table:

|Find operations|Begin|Search direction|
|---------------------|-----------|----------------------|
|`FindFirst`|Beginning of recordset|End of recordset|
|`FindLast`|End of recordset|Beginning of recordset|
|`FindNext`|Current record|End of recordset|
|`FindPrevious`|Current record|Beginning of recordset|

> [!NOTE]
> When you call `FindLast`, the Microsoft Jet database engine fully populates your recordset before beginning the search, if this has not already been done. The first search may take longer than subsequent searches.

Using one of the Find operations is not the same as calling `MoveFirst` or `MoveNext`, however, which simply makes the first or next record current without specifying a condition. You can follow a Find operation with a Move operation.

Keep the following in mind when using the Find operations:

- If `Find` returns nonzero, the current record is not defined. In this case, you must position the current record pointer back to a valid record.

- You cannot use a Find operation with a forward-only scrolling snapshot-type recordset.

- You should use the U.S. date format (month-day-year) when you search for fields containing dates, even if you are not using the U.S. version of the Microsoft Jet database engine; otherwise, matching records may not be found.

- When working with ODBC databases and large dynasets, you may discover that using the Find operations is slow, especially when working with large recordsets. You can improve performance by using SQL queries with customized **ORDERBY** or **WHERE** clauses, parameter queries, or `CDaoQuerydef` objects that retrieve specific indexed records.

For related information, see the topic "FindFirst, FindLast, FindNext, FindPrevious Methods" in DAO Help.

## <a name="findlast"></a> CDaoRecordset::FindLast

Call this member function to find the last record that matches a specified condition.

```cpp
BOOL FindLast(LPCTSTR lpszFilter);
```

### Parameters

*lpszFilter*<br/>
A string expression (like the **WHERE** clause in a SQL statement without the word **WHERE**) used to locate the record.

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

The `FindLast` member function begins its search at the end of the recordset and searches backward towards the beginning of the recordset.

If you want to include all the records in your search (not just those that meet a specific condition) use one of the Move operations to move from record to record. To locate a record in a table-type recordset, call the `Seek` member function.

If a record matching the criteria is not located, the current record pointer is undetermined, and `FindLast` returns zero. If the recordset contains more than one record that satisfies the criteria, `FindFirst` locates the first occurrence, `FindNext` locates the next occurrence after the first occurrence, and so on.

> [!CAUTION]
> If you edit the current record, be sure you save the changes by calling the `Update` member function before you move to another record. If you move to another record without updating, your changes are lost without warning.

Using one of the Find operations is not the same as calling `MoveFirst` or `MoveNext`, however, which simply makes the first or next record current without specifying a condition. You can follow a Find operation with a Move operation.

Keep the following in mind when using the Find operations:

- If `Find` returns nonzero, the current record is not defined. In this case, you must position the current record pointer back to a valid record.

- You cannot use a Find operation with a forward-only scrolling snapshot-type recordset.

- You should use the U.S. date format (month-day-year) when you search for fields containing dates, even if you are not using the U.S. version of the Microsoft Jet database engine; otherwise, matching records may not be found.

- When working with ODBC databases and large dynasets, you may discover that using the Find operations is slow, especially when working with large recordsets. You can improve performance by using SQL queries with customized **ORDERBY** or **WHERE** clauses, parameter queries, or `CDaoQuerydef` objects that retrieve specific indexed records.

For related information, see the topic "FindFirst, FindLast, FindNext, FindPrevious Methods" in DAO Help.

## <a name="findnext"></a> CDaoRecordset::FindNext

Call this member function to find the next record that matches a specified condition.

```cpp
BOOL FindNext(LPCTSTR lpszFilter);
```

### Parameters

*lpszFilter*<br/>
A string expression (like the **WHERE** clause in a SQL statement without the word **WHERE**) used to locate the record.

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

The `FindNext` member function begins its search at the current record and searches to the end of the recordset.

If you want to include all the records in your search (not just those that meet a specific condition) use one of the Move operations to move from record to record. To locate a record in a table-type recordset, call the `Seek` member function.

If a record matching the criteria is not located, the current record pointer is undetermined, and `FindNext` returns zero. If the recordset contains more than one record that satisfies the criteria, `FindFirst` locates the first occurrence, `FindNext` locates the next occurrence, and so on.

> [!CAUTION]
> If you edit the current record, be sure you save the changes by calling the `Update` member function before you move to another record. If you move to another record without updating, your changes are lost without warning.

Using one of the Find operations is not the same as calling `MoveFirst` or `MoveNext`, however, which simply makes the first or next record current without specifying a condition. You can follow a Find operation with a Move operation.

Keep the following in mind when using the Find operations:

- If `Find` returns nonzero, the current record is not defined. In this case, you must position the current record pointer back to a valid record.

- You cannot use a Find operation with a forward-only scrolling snapshot-type recordset.

- You should use the U.S. date format (month-day-year) when you search for fields containing dates, even if you are not using the U.S. version of the Microsoft Jet database engine; otherwise, matching records may not be found.

- When working with ODBC databases and large dynasets, you may discover that using the Find operations is slow, especially when working with large recordsets. You can improve performance by using SQL queries with customized **ORDERBY** or **WHERE** clauses, parameter queries, or `CDaoQuerydef` objects that retrieve specific indexed records.

For related information, see the topic "FindFirst, FindLast, FindNext, FindPrevious Methods" in DAO Help.

## <a name="findprev"></a> CDaoRecordset::FindPrev

Call this member function to find the previous record that matches a specified condition.

```cpp
BOOL FindPrev(LPCTSTR lpszFilter);
```

### Parameters

*lpszFilter*<br/>
A string expression (like the **WHERE** clause in a SQL statement without the word **WHERE**) used to locate the record.

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

The `FindPrev` member function begins its search at the current record and searches backward towards the beginning of the recordset.

If you want to include all the records in your search (not just those that meet a specific condition) use one of the Move operations to move from record to record. To locate a record in a table-type recordset, call the `Seek` member function.

If a record matching the criteria is not located, the current record pointer is undetermined, and `FindPrev` returns zero. If the recordset contains more than one record that satisfies the criteria, `FindFirst` locates the first occurrence, `FindNext` locates the next occurrence, and so on.

> [!CAUTION]
> If you edit the current record, be sure you save the changes by calling the `Update` member function before you move to another record. If you move to another record without updating, your changes are lost without warning.

Using one of the Find operations is not the same as calling `MoveFirst` or `MoveNext`, however, which simply makes the first or next record current without specifying a condition. You can follow a Find operation with a Move operation.

Keep the following in mind when using the Find operations:

- If `Find` returns nonzero, the current record is not defined. In this case, you must position the current record pointer back to a valid record.

- You cannot use a Find operation with a forward-only scrolling snapshot-type recordset.

- You should use the U.S. date format (month-day-year) when you search for fields containing dates, even if you are not using the U.S. version of the Microsoft Jet database engine; otherwise, matching records may not be found.

- When working with ODBC databases and large dynasets, you may discover that using the Find operations is slow, especially when working with large recordsets. You can improve performance by using SQL queries with customized **ORDERBY** or **WHERE** clauses, parameter queries, or `CDaoQuerydef` objects that retrieve specific indexed records.

For related information, see the topic "FindFirst, FindLast, FindNext, FindPrevious Methods" in DAO Help.

## <a name="getabsoluteposition"></a> CDaoRecordset::GetAbsolutePosition

Returns the record number of a recordset object's current record.

```cpp
long GetAbsolutePosition();
```

### Return Value

An integer from 0 to the number of records in the recordset. Corresponds to the ordinal position of the current record in the recordset.

### Remarks

The AbsolutePosition property value of the underlying DAO object is zero-based; a setting of 0 refers to the first record in the recordset. You can determine the number of populated records in the recordset by calling [GetRecordCount](#getrecordcount). Calling `GetRecordCount` may take some time because it must access all records to determine the count.

If there is no current record, as when there are no records in the recordset, - 1 is returned. If the current record is deleted, the AbsolutePosition property value is not defined, and MFC throws an exception if it is referenced. For dynaset-type recordsets, new records are added to the end of the sequence.

> [!NOTE]
> This property is not intended to be used as a surrogate record number. Bookmarks are still the recommended way of retaining and returning to a given position and are the only way to position the current record across all types of recordset objects. In particular, the position of a given record changes when record(s) preceding it are deleted. There is also no assurance that a given record will have the same absolute position if the recordset is re-created again because the order of individual records within a recordset is not guaranteed unless it is created with a SQL statement using an **ORDERBY** clause.

> [!NOTE]
> This member function is valid only for dynaset-type and snapshot-type recordsets.

For related information, see the topic "AbsolutePosition Property" in DAO Help.

## <a name="getbookmark"></a> CDaoRecordset::GetBookmark

Call this member function to obtain the bookmark value in a particular record.

```cpp
COleVariant GetBookmark();
```

### Return Value

Returns a value representing the bookmark on the current record.

### Remarks

When a recordset object is created or opened, each of its records already has a unique bookmark if it supports them. Call `CanBookmark` to determine whether a recordset supports bookmarks.

You can save the bookmark for the current record by assigning the value of the bookmark to a `COleVariant` object. To quickly return to that record at any time after moving to a different record, call `SetBookmark` with a parameter corresponding to the value of that `COleVariant` object.

> [!NOTE]
> Calling [Requery](#requery) changes DAO bookmarks.

For related information, see the topic "Bookmark Property" in DAO Help.

## <a name="getcachesize"></a> CDaoRecordset::GetCacheSize

Call this member function to obtain the number of records cached.

```cpp
long GetCacheSize();
```

### Return Value

A value that specifies the number of records in a dynaset-type recordset containing data to be locally cached from an ODBC data source.

### Remarks

Data caching improves the performance of an application that retrieves data from a remote server through dynaset-type recordset objects. A cache is a space in local memory that holds the data most recently retrieved from the server in the event that the data will be requested again while the application is running. When data is requested, the Microsoft Jet database engine checks the cache for the requested data first rather than retrieving it from the server, which takes more time. Data that does not come from an ODBC data source is not saved in the cache.

Any ODBC data source, such as an attached table, can have a local cache.

For related information, see the topic "CacheSize, CacheStart Properties" in DAO Help.

## <a name="getcachestart"></a> CDaoRecordset::GetCacheStart

Call this member function to obtain the bookmark value of the first record in the recordset to be cached.

```cpp
COleVariant GetCacheStart();
```

### Return Value

A `COleVariant` that specifies the bookmark of the first record in the recordset to be cached.

### Remarks

The Microsoft Jet database engine requests records within the cache range from the cache, and it requests records outside the cache range from the server.

> [!NOTE]
> Records retrieved from the cache do not reflect changes made concurrently to the source data by other users.

For related information, see the topic "CacheSize, CacheStart Properties" in DAO Help.

## <a name="getcurrentindex"></a> CDaoRecordset::GetCurrentIndex

Call this member function to determine the index currently in use in an indexed table-type `CDaoRecordset` object.

```cpp
CString GetCurrentIndex();
```

### Return Value

A `CString` containing the name of the index currently in use with a table-type recordset. Returns an empty string if no index has been set.

### Remarks

This index is the basis for ordering records in a table-type recordset, and is used by the [Seek](#seek) member function to locate records.

A `CDaoRecordset` object can have more than one index but can use only one index at a time (although a [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) object may have several indexes defined on it).

For related information, see the topic "Index Object" and the definition "current index" in DAO Help.

## <a name="getdatecreated"></a> CDaoRecordset::GetDateCreated

Call this member function to retrieve the date and time a base table was created.

```cpp
COleDateTime GetDateCreated();
```

### Return Value

A [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object containing the date and time the base table was created.

### Remarks

Date and time settings are derived from the computer on which the base table was created.

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getdatelastupdated"></a> CDaoRecordset::GetDateLastUpdated

Call this member function to retrieve the date and time the schema was last updated.

```cpp
COleDateTime GetDateLastUpdated();
```

### Return Value

A [COleDateTime](../../atl-mfc-shared/reference/coledatetime-class.md) object containing the date and time the base table structure (schema) was last updated.

### Remarks

Date and time settings are derived from the computer on which the base table structure (schema) was last updated.

For related information, see the topic "DateCreated, LastUpdated Properties" in DAO Help.

## <a name="getdefaultdbname"></a> CDaoRecordset::GetDefaultDBName

Call this member function to determine the name of the database for this recordset.

```cpp
virtual CString GetDefaultDBName();
```

### Return Value

A `CString` that contains the path and name of the database from which this recordset is derived.

### Remarks

If a recordset is created without a pointer to a [CDaoDatabase](../../mfc/reference/cdaodatabase-class.md), then this path is used by the recordset to open the default database. By default, this function returns an empty string. When ClassWizard derives a new recordset from `CDaoRecordset`, it will create this function for you.

The following example illustrates the use of the double backslash (\\\\) in the string, as is required for the string to be interpreted correctly.

[!code-cpp[NVC_MFCDatabase#4](../../mfc/codesnippet/cpp/cdaorecordset-class_4.cpp)]

## <a name="getdefaultsql"></a> CDaoRecordset::GetDefaultSQL

The framework calls this member function to get the default SQL statement on which the recordset is based.

```cpp
virtual CString GetDefaultSQL();
```

### Return Value

A `CString` that contains the default SQL statement.

### Remarks

This might be a table name or a SQL **SELECT** statement.

You indirectly define the default SQL statement by declaring your recordset class with ClassWizard, and ClassWizard performs this task for you.

If you pass a null SQL string to [Open](#open), then this function is called to determine the table name or SQL for your recordset.

## <a name="geteditmode"></a> CDaoRecordset::GetEditMode

Call this member function to determine the state of editing, which is one of the following values:

```cpp
short GetEditMode();
```

### Return Value

Returns a value that indicates the state of editing for the current record.

### Remarks

|Value|Description|
|-----------|-----------------|
|`dbEditNone`|No editing operation is in progress.|
|`dbEditInProgress`|`Edit` has been called.|
|`dbEditAdd`|`AddNew` has been called.|

For related information, see the topic "EditMode Property" in DAO Help.

## <a name="getfieldcount"></a> CDaoRecordset::GetFieldCount

Call this member function to retrieve the number of fields (columns) defined in the recordset.

```cpp
short GetFieldCount();
```

### Return Value

The number of fields in the recordset.

### Remarks

For related information, see the topic "Count Property" in DAO Help.

## <a name="getfieldinfo"></a> CDaoRecordset::GetFieldInfo

Call this member function to obtain information about the fields in a recordset.

```cpp
void GetFieldInfo(
    int nIndex,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetFieldInfo(
    LPCTSTR lpszName,
    CDaoFieldInfo& fieldinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index of the predefined field in the recordset's Fields collection, for lookup by index.

*fieldinfo*<br/>
A reference to a [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure.

*dwInfoOptions*<br/>
Options that specify which information about the recordset to retrieve. The available options are listed here along with what they cause the function to return. For best performance, retrieve only the level of information you need:

- `AFX_DAO_PRIMARY_INFO` (Default) Name, Type, Size, Attributes

- `AFX_DAO_SECONDARY_INFO` Primary information, plus: Ordinal Position, Required, Allow Zero Length, Collating Order, Foreign Name, Source Field, Source Table

- `AFX_DAO_ALL_INFO` Primary and secondary information, plus: Default Value, Validation Rule, Validation Text

*lpszName*<br/>
The name of the field.

### Remarks

One version of the function lets you look up a field by index. The other version lets you look up a field by name.

For a description of the information returned, see the [CDaoFieldInfo](../../mfc/reference/cdaofieldinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for any prior levels as well.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getfieldvalue"></a> CDaoRecordset::GetFieldValue

Call this member function to retrieve data in a recordset.

```cpp
virtual void GetFieldValue(
    LPCTSTR lpszName,
    COleVariant& varValue);

virtual void GetFieldValue(
    int nIndex,
    COleVariant& varValue);

virtual COleVariant GetFieldValue(LPCTSTR lpszName);
virtual COleVariant GetFieldValue(int nIndex);
```

### Parameters

*lpszName*<br/>
A pointer to a string that contains the name of a field.

*varValue*<br/>
A reference to a `COleVariant` object that will store the value of a field.

*nIndex*<br/>
A zero-based index of the field in the recordset's Fields collection, for lookup by index.

### Return Value

The two versions of `GetFieldValue` that return a value return a [COleVariant](../../mfc/reference/colevariant-class.md) object that contains the value of a field.

### Remarks

You can look up a field by name or by ordinal position.

> [!NOTE]
> It is more efficient to call one of the versions of this member function that takes a `COleVariant` object reference as a parameter, rather than calling a version that returns a `COleVariant` object. The latter versions of this function are kept for backward compatibility.

Use `GetFieldValue` and [SetFieldValue](#setfieldvalue) to dynamically bind fields at run time rather than statically binding columns using the [DoFieldExchange](#dofieldexchange) mechanism.

`GetFieldValue` and the `DoFieldExchange` mechanism can be combined to improve performance. For example, use `GetFieldValue` to retrieve a value that you need only on demand, and assign that call to a "More Information" button in the interface.

For related information, see the topics "Field Object" and "Value Property" in DAO Help.

## <a name="getindexcount"></a> CDaoRecordset::GetIndexCount

Call this member function to determine the number of indexes available on the table-type recordset.

```cpp
short GetIndexCount();
```

### Return Value

The number of indexes in the table-type recordset.

### Remarks

`GetIndexCount` is useful for looping through all indexes in the recordset. For that purpose, use `GetIndexCount` in conjunction with [GetIndexInfo](#getindexinfo). If you call this member function on dynaset-type or snapshot-type recordsets, MFC throws an exception.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getindexinfo"></a> CDaoRecordset::GetIndexInfo

Call this member function to obtain various kinds of information about an index defined in the base table underlying a recordset.

```cpp
void GetIndexInfo(
    int nIndex,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);

void GetIndexInfo(
    LPCTSTR lpszName,
    CDaoIndexInfo& indexinfo,
    DWORD dwInfoOptions = AFX_DAO_PRIMARY_INFO);
```

### Parameters

*nIndex*<br/>
The zero-based index in the table's Indexes collection, for lookup by numerical position.

*indexinfo*<br/>
A reference to a [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) structure.

*dwInfoOptions*<br/>
Options that specify which information about the index to retrieve. The available options are listed here along with what they cause the function to return. For best performance, retrieve only the level of information you need:

- `AFX_DAO_PRIMARY_INFO` (Default) Name, Field Info, Fields

- `AFX_DAO_SECONDARY_INFO` Primary information, plus: Primary, Unique, Clustered, IgnoreNulls, Required, Foreign

- `AFX_DAO_ALL_INFO` Primary and secondary information, plus: Distinct Count

*lpszName*<br/>
A pointer to the name of the index object, for lookup by name.

### Remarks

One version of the function lets you look up a index by its position in the collection. The other version lets you look up an index by name.

For a description of the information returned, see the [CDaoIndexInfo](../../mfc/reference/cdaoindexinfo-structure.md) structure. This structure has members that correspond to the items of information listed above in the description of *dwInfoOptions*. When you request information at one level, you get information for any prior levels as well.

For related information, see the topic "Attributes Property" in DAO Help.

## <a name="getlastmodifiedbookmark"></a> CDaoRecordset::GetLastModifiedBookmark

Call this member function to retrieve the bookmark of the most recently added or updated record.

```cpp
COleVariant GetLastModifiedBookmark();
```

### Return Value

A `COleVariant` containing a bookmark that indicates the most recently added or changed record.

### Remarks

When a recordset object is created or opened, each of its records already has a unique bookmark if it supports them. Call [GetBookmark](#getbookmark) to determine if the recordset supports bookmarks. If the recordset does not support bookmarks, a `CDaoException` is thrown.

When you add a record, it appears at the end of the recordset, and is not the current record. To make the new record current, call `GetLastModifiedBookmark` and then call `SetBookmark` to return to the newly added record.

For related information, see the topic "LastModified Property" in DAO Help.

## <a name="getlockingmode"></a> CDaoRecordset::GetLockingMode

Call this member function to determine the type of locking in effect for the recordset.

```cpp
BOOL GetLockingMode();
```

### Return Value

Nonzero if the type of locking is pessimistic, otherwise 0 for optimistic record locking.

### Remarks

When pessimistic locking is in effect, the data page containing the record you are editing is locked as soon as you call the [Edit](#edit) member function. The page is unlocked when you call the [Update](#update) or [Close](#close) member function or any of the Move or Find operations.

When optimistic locking is in effect, the data page containing the record is locked only while the record is being updated with the `Update` member function.

When working with ODBC data sources, the locking mode is always optimistic.

For related information, see the topics "LockEdits Property" and "Locking Behavior in Multiuser Applications" in DAO Help.

## <a name="getname"></a> CDaoRecordset::GetName

Call this member function to retrieve the name of the recordset.

```cpp
CString GetName();
```

### Return Value

A `CString` containing the name of the recordset.

### Remarks

The name of the recordset must start with a letter and can contain a maximum of 40 characters. It can include numbers and underscore characters but can't include punctuation or spaces.

For related information, see the topic "Name Property" in DAO Help.

## <a name="getparamvalue"></a> CDaoRecordset::GetParamValue

Call this member function to retrieve the current value of the specified parameter stored in the underlying DAOParameter object.

```cpp
virtual COleVariant GetParamValue(int nIndex);
virtual COleVariant GetParamValue(LPCTSTR lpszName);
```

### Parameters

*nIndex*<br/>
The numerical position of the parameter in the underlying DAOParameter object.

*lpszName*<br/>
The name of the parameter whose value you want.

### Return Value

An object of class [COleVariant](../../mfc/reference/colevariant-class.md) that contains the parameter's value.

### Remarks

You can access the parameter either by name or by its numerical position in the collection.

For related information, see the topic "Parameter Object" in DAO Help.

## <a name="getpercentposition"></a> CDaoRecordset::GetPercentPosition

When working with a dynaset-type or snapshot-type recordset, if you call `GetPercentPosition` before fully populating the recordset, the amount of movement is relative to the number of records accessed as indicated by calling [GetRecordCount](#getrecordcount).

```cpp
float GetPercentPosition();
```

### Return Value

A number between 0 and 100 that indicates the approximate location of the current record in the recordset object based on a percentage of the records in the recordset.

### Remarks

You can move to the last record by calling [MoveLast](#movelast) to complete the population of all recordsets, but this may take a significant amount of time.

You can call `GetPercentPosition` on all three types of recordset objects, including tables without indexes. However, you cannot call `GetPercentPosition` on forward-only scrolling snapshots, or on a recordset opened from a pass-through query against an external database. If there is no current record, or he current record has been deleted, a `CDaoException` is thrown.

For related information, see the topic "PercentPosition Property" in DAO Help.

## <a name="getrecordcount"></a> CDaoRecordset::GetRecordCount

Call this member function to find out how many records in a recordset have been accessed.

```cpp
long GetRecordCount();
```

### Return Value

Returns the number of records accessed in a recordset object.

### Remarks

`GetRecordCount` does not indicate how many records are contained in a dynaset-type or snapshot-type recordset until all records have been accessed. This member function call may take a significant amount of time to complete.

Once the last record has been accessed, the return value indicates the total number of undeleted records in the recordset. To force the last record to be accessed, call the `MoveLast` or `FindLast` member function for the recordset. You can also use a SQL Count to determine the approximate number of records your query will return.

As your application deletes records in a dynaset-type recordset, the return value of `GetRecordCount` decreases. However, records deleted by other users are not reflected by `GetRecordCount` until the current record is positioned to a deleted record. If you execute a transaction that affects the record count and subsequently roll back the transaction, `GetRecordCount` will not reflect the actual number of remaining records.

The value of `GetRecordCount` from a snapshot-type recordset is not affected by changes in the underlying tables.

The value of `GetRecordCount` from a table-type recordset reflects the approximate number of records in the table and is affected immediately as table records are added and deleted.

A recordset with no records returns a value of 0. When working with attached tables or ODBC databases, `GetRecordCount` always returns - 1. Calling the `Requery` member function on a recordset resets the value of `GetRecordCount` just as if the query were re-executed.

For related information, see the topic "RecordCount Property" in DAO Help.

## <a name="getsql"></a> CDaoRecordset::GetSQL

Call this member function to get the SQL statement that was used to select the recordset's records when it was opened.

```cpp
CString GetSQL() const;
```

### Return Value

A `CString` that contains the SQL statement.

### Remarks

This will generally be a SQL **SELECT** statement.

The string returned by `GetSQL` is typically different from any string you may have passed to the recordset in the *lpszSQL* parameter to the [Open](#open) member function. This is because the recordset constructs a full SQL statement based on what you passed to `Open`, what you specified with ClassWizard, and what you may have specified in the [m_strFilter](#m_strfilter) and [m_strSort](#m_strsort) data members.

> [!NOTE]
> Call this member function only after calling `Open`.

For related information, see the topic "SQL Property" in DAO Help.

## <a name="gettype"></a> CDaoRecordset::GetType

Call this member function after opening the recordset to determine the type of the recordset object.

```cpp
short GetType();
```

### Return Value

One of the following values that indicates the type of a recordset:

- `dbOpenTable` Table-type recordset

- `dbOpenDynaset` Dynaset-type recordset

- `dbOpenSnapshot` Snapshot-type recordset

### Remarks

For related information, see the topic "Type Property" in DAO Help.

## <a name="getvalidationrule"></a> CDaoRecordset::GetValidationRule

Call this member function to determine the rule used to validate data.

```cpp
CString GetValidationRule();
```

### Return Value

A `CString` object containing a value that validates the data in a record as it is changed or added to a table.

### Remarks

This rule is text-based, and is applied each time the underlying table is changed. If the data is not legal, MFC throws an exception. The returned error message is the text of the ValidationText property of the underlying field object, if specified, or the text of the expression specified by the ValidationRule property of the underlying field object. You can call [GetValidationText](#getvalidationtext) to obtain the text of the error message.

For example, a field in a record that requires the day of the month might have a validation rule such as "DAY BETWEEN 1 AND 31."

For related information, see the topic "ValidationRule Property" in DAO Help.

## <a name="getvalidationtext"></a> CDaoRecordset::GetValidationText

Call this member function to retrieve the text of the ValidationText property of the underlying field object.

```cpp
CString GetValidationText();
```

### Return Value

A `CString` object containing the text of the message that is displayed if the value of a field does not satisfy the validation rule of the underlying field object.

### Remarks

For related information, see the topic "ValidationText Property" in DAO Help.

## <a name="isbof"></a> CDaoRecordset::IsBOF

Call this member function before you scroll from record to record to learn whether you have gone before the first record of the recordset.

```cpp
BOOL IsBOF() const;
```

### Return Value

Nonzero if the recordset contains no records or if you have scrolled backward before the first record; otherwise 0.

### Remarks

You can also call `IsBOF` along with `IsEOF` to determine whether the recordset contains any records or is empty. Immediately after you call `Open`, if the recordset contains no records, `IsBOF` returns nonzero. When you open a recordset that has at least one record, the first record is the current record and `IsBOF` returns 0.

If the first record is the current record and you call `MovePrev`, `IsBOF` will subsequently return nonzero. If `IsBOF` returns nonzero and you call `MovePrev`, an exception is thrown. If `IsBOF` returns nonzero, the current record is undefined, and any action that requires a current record will result in an exception.

Effect of specific methods on `IsBOF` and `IsEOF` settings:

- Calling `Open*` internally makes the first record in the recordset the current record by calling `MoveFirst`. Therefore, calling `Open` on an empty set of records causes `IsBOF` and `IsEOF` to return nonzero. (See the following table for the behavior of a failed `MoveFirst` or `MoveLast` call.)

- All Move operations that successfully locate a record cause both `IsBOF` and `IsEOF` to return 0.

- An `AddNew` call followed by an `Update` call that successfully inserts a new record will cause `IsBOF` to return 0, but only if `IsEOF` is already nonzero. The state of `IsEOF` will always remain unchanged. As defined by the Microsoft Jet database engine, the current record pointer of an empty recordset is at the end of a file, so any new record is inserted after the current record.

- Any `Delete` call, even if it removes the only remaining record from a recordset, will not change the value of `IsBOF` or `IsEOF`.

This table shows which Move operations are allowed with different combinations of `IsBOF`/ `IsEOF`.

|State|MoveFirst, MoveLast|MovePrev,<br /><br /> Move < 0|Move 0|MoveNext,<br /><br /> Move > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`=nonzero,<br /><br /> `IsEOF`=0|Allowed|Exception|Exception|Allowed|
|`IsBOF`=0,<br /><br /> `IsEOF`=nonzero|Allowed|Allowed|Exception|Exception|
|Both nonzero|Exception|Exception|Exception|Exception|
|Both 0|Allowed|Allowed|Allowed|Allowed|

Allowing a Move operation does not mean that the operation will successfully locate a record. It merely indicates that an attempt to perform the specified Move operation is allowed and will not generate an exception. The value of the `IsBOF` and `IsEOF` member functions may change as a result of the attempted move.

The effect of Move operations that do not locate a record on the value of `IsBOF` and `IsEOF` settings is shown in the following table.

|Operations|IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Nonzero|Nonzero|
|`Move` 0|No change|No change|
|`MovePrev`, `Move` < 0|Nonzero|No change|
|`MoveNext`, `Move` > 0|No change|Nonzero|

For related information, see the topic "BOF, EOF Properties" in DAO Help.

## <a name="isdeleted"></a> CDaoRecordset::IsDeleted

Call this member function to determine whether the current record has been deleted.

```cpp
BOOL IsDeleted() const;
```

### Return Value

Nonzero if the recordset is positioned on a deleted record; otherwise 0.

### Remarks

If you scroll to a record and `IsDeleted` returns TRUE (nonzero), then you must scroll to another record before you can perform any other recordset operations.

> [!NOTE]
> You don't need to check the deleted status for records in a snapshot or table-type recordset. Because records cannot be deleted from a snapshot, there is no need to call `IsDeleted`. For table-type recordsets, deleted records are actually removed from the recordset. Once a record has been deleted, either by you, another user, or in another recordset, you cannot scroll back to that record. Therefore, there is no need to call `IsDeleted`.

When you delete a record from a dynaset, it is removed from the recordset and you cannot scroll back to that record. However, if a record in a dynaset is deleted either by another user or in another recordset based on the same table, `IsDeleted` will return TRUE when you later scroll to that record.

For related information, see the topics "Delete Method", "LastModified Property", and "EditMode Property" in DAO Help.

## <a name="iseof"></a> CDaoRecordset::IsEOF

Call this member function as you scroll from record to record to learn whether you have gone beyond the last record of the recordset.

```cpp
BOOL IsEOF() const;
```

### Return Value

Nonzero if the recordset contains no records or if you have scrolled beyond the last record; otherwise 0.

### Remarks

You can also call `IsEOF` to determine whether the recordset contains any records or is empty. Immediately after you call `Open`, if the recordset contains no records, `IsEOF` returns nonzero. When you open a recordset that has at least one record, the first record is the current record and `IsEOF` returns 0.

If the last record is the current record when you call `MoveNext`, `IsEOF` will subsequently return nonzero. If `IsEOF` returns nonzero and you call `MoveNext`, an exception is thrown. If `IsEOF` returns nonzero, the current record is undefined, and any action that requires a current record will result in an exception.

Effect of specific methods on `IsBOF` and `IsEOF` settings:

- Calling `Open` internally makes the first record in the recordset the current record by calling `MoveFirst`. Therefore, calling `Open` on an empty set of records causes `IsBOF` and `IsEOF` to return nonzero. (See the following table for the behavior of a failed `MoveFirst` call.)

- All Move operations that successfully locate a record cause both `IsBOF` and `IsEOF` to return 0.

- An `AddNew` call followed by an `Update` call that successfully inserts a new record will cause `IsBOF` to return 0, but only if `IsEOF` is already nonzero. The state of `IsEOF` will always remain unchanged. As defined by the Microsoft Jet database engine, the current record pointer of an empty recordset is at the end of a file, so any new record is inserted after the current record.

- Any `Delete` call, even if it removes the only remaining record from a recordset, will not change the value of `IsBOF` or `IsEOF`.

This table shows which Move operations are allowed with different combinations of `IsBOF`/ `IsEOF`.

|State|MoveFirst, MoveLast|MovePrev,<br /><br /> Move < 0|Move 0|MoveNext,<br /><br /> Move > 0|
|------|-------------------------|-----------------------------|------------|-----------------------------|
|`IsBOF`=nonzero,<br /><br /> `IsEOF`=0|Allowed|Exception|Exception|Allowed|
|`IsBOF`=0,<br /><br /> `IsEOF`=nonzero|Allowed|Allowed|Exception|Exception|
|Both nonzero|Exception|Exception|Exception|Exception|
|Both 0|Allowed|Allowed|Allowed|Allowed|

Allowing a Move operation does not mean that the operation will successfully locate a record. It merely indicates that an attempt to perform the specified Move operation is allowed and will not generate an exception. The value of the `IsBOF` and `IsEOF` member functions may change as a result of the attempted Move.

The effect of Move operations that do not locate a record on the value of `IsBOF` and `IsEOF` settings is shown in the following table.

|Operations|IsBOF|IsEOF|
|------|-----------|-----------|
|`MoveFirst`, `MoveLast`|Nonzero|Nonzero|
|`Move` 0|No change|No change|
|`MovePrev`, `Move` < 0|Nonzero|No change|
|`MoveNext`, `Move` > 0|No change|Nonzero|

For related information, see the topic "BOF, EOF Properties" in DAO Help.

## <a name="isfielddirty"></a> CDaoRecordset::IsFieldDirty

Call this member function to determine whether the specified field data member of a dynaset has been flagged as "dirty" (changed).

```cpp
BOOL IsFieldDirty(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields are dirty.

### Return Value

Nonzero if the specified field data member is flagged as dirty; otherwise 0.

### Remarks

The data in all dirty field data members will be transferred to the record on the data source when the current record is updated by a call to the `Update` member function of `CDaoRecordset` (following a call to `Edit` or `AddNew`). With this knowledge, you can take further steps, such as unflagging the field data member to mark the column so it will not be written to the data source.

`IsFieldDirty` is implemented through `DoFieldExchange`.

## <a name="isfieldnull"></a> CDaoRecordset::IsFieldNull

Call this member function to determine whether the specified field data member of a recordset has been flagged as Null.

```cpp
BOOL IsFieldNull(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields are Null.

### Return Value

Nonzero if the specified field data member is flagged as Null; otherwise 0.

### Remarks

(In database terminology, Null means "having no value" and is not the same as NULL in C++.) If a field data member is flagged as Null, it is interpreted as a column of the current record for which there is no value.

> [!NOTE]
> In certain situations, using `IsFieldNull` can be inefficient, as the following code example illustrates:

[!code-cpp[NVC_MFCDatabase#5](../../mfc/codesnippet/cpp/cdaorecordset-class_5.cpp)]

> [!NOTE]
> If you are using dynamic record binding, without deriving from `CDaoRecordset`, be sure to use VT_NULL as shown in the example.

## <a name="isfieldnullable"></a> CDaoRecordset::IsFieldNullable

Call this member function to determine whether the specified field data member is "nullable" (can be set to a Null value; C++ NULL is not the same as Null, which, in database terminology, means "having no value").

```cpp
BOOL IsFieldNullable(void* pv);
```

### Parameters

*pv*<br/>
A pointer to the field data member whose status you want to check, or NULL to determine if any of the fields are Null.

### Return Value

Nonzero if the specified field data member can be made Null; otherwise 0.

### Remarks

A field that cannot be Null must have a value. If you attempt to set such a field to Null when adding or updating a record, the data source rejects the addition or update, and `Update` will throw an exception. The exception occurs when you call `Update`, not when you call `SetFieldNull`.

## <a name="isopen"></a> CDaoRecordset::IsOpen

Call this member function to determine if the recordset is open.

```cpp
BOOL IsOpen() const;
```

### Return Value

Nonzero if the recordset object's `Open` or `Requery` member function has previously been called and the recordset has not been closed; otherwise 0.

### Remarks

## <a name="m_bcheckcachefordirtyfields"></a> CDaoRecordset::m_bCheckCacheForDirtyFields

Contains a flag indicating whether cached fields are automatically marked as dirty (changed) and Null.

### Remarks

The flag defaults to TRUE. The setting in this data member controls the entire double-buffering mechanism. If you set the flag to TRUE, you can turn off the caching on a field-by-field basis using the DFX mechanism. If you set the flag to FALSE, you must call `SetFieldDirty` and `SetFieldNull` yourself.

Set this data member before calling `Open`. This mechanism is primarily for ease-of-use. Performance may be slower because of the double-buffering of fields as changes are made.

## <a name="m_nfields"></a> CDaoRecordset::m_nFields

Contains the number of field data members in the recordset class and the number of columns selected by the recordset from the data source.

### Remarks

The constructor for the recordset class must initialize `m_nFields` with the correct number of statically bound fields. ClassWizard writes this initialization for you when you use it to declare your recordset class. You can also write it manually.

The framework uses this number to manage interaction between the field data members and the corresponding columns of the current record on the data source.

> [!NOTE]
> This number must correspond to the number of output columns registered in `DoFieldExchange` after a call to `SetFieldType` with the parameter `CDaoFieldExchange::outputColumn`.

You can bind columns dynamically by way of `CDaoRecordset::GetFieldValue` and `CDaoRecordset::SetFieldValue`. If you do so, you do not need to increment the count in `m_nFields` to reflect the number of DFX function calls in your `DoFieldExchange` member function.

## <a name="m_nparams"></a> CDaoRecordset::m_nParams

Contains the number of parameter data members in the recordset class — the number of parameters passed with the recordset's query.

### Remarks

If your recordset class has any parameter data members, the constructor for the class must initialize *m_nParams* with the correct number. The value of *m_nParams* defaults to 0. If you add parameter data members — which you must do manually — you must also manually add an initialization in the class constructor to reflect the number of parameters (which must be at least as large as the number of '' placeholders in your *m_strFilter* or *m_strSort* string).

The framework uses this number when it parameterizes the recordset's query.

> [!NOTE]
> This number must correspond to the number of "params" registered in `DoFieldExchange` after a call to `SetFieldType` with the parameter `CFieldExchange::param`.

For related information, see the topic "Parameter Object" in DAO Help.

## <a name="m_pdaorecordset"></a> CDaoRecordset::m_pDAORecordset

Contains a pointer to the OLE interface for the DAO recordset object underlying the `CDaoRecordset` object.

### Remarks

Use this pointer if you need to access the DAO interface directly.

For related information, see the topic "Recordset Object" in DAO Help.

## <a name="m_pdatabase"></a> CDaoRecordset::m_pDatabase

Contains a pointer to the `CDaoDatabase` object through which the recordset is connected to a data source.

### Remarks

This variable is set in two ways. Typically, you pass a pointer to an already open `CDaoDatabase` object when you construct the recordset object. If you pass NULL instead, `CDaoRecordset` creates a `CDaoDatabase` object for you and opens it. In either case, `CDaoRecordset` stores the pointer in this variable.

Normally you will not directly need to use the pointer stored in `m_pDatabase`. If you write your own extensions to `CDaoRecordset`, however, you might need to use the pointer. For example, you might need the pointer if you throw your own `CDaoException`(s).

For related information, see the topic "Database Object" in DAO Help.

## <a name="m_strfilter"></a> CDaoRecordset::m_strFilter

Contains a string that is used to construct the **WHERE** clause of a SQL statement.

### Remarks

It does not include the reserved word **WHERE** to filter the recordset. The use of this data member is not applicable to table-type recordsets. The use of `m_strFilter` has no effect when opening a recordset using a `CDaoQueryDef` pointer.

Use the U.S. date format (month-day-year) when you filter fields containing dates, even if you are not using the U.S. version of the Microsoft Jet database engine; otherwise, the data may not be filtered as you expect.

For related information, see the topic "Filter Property" in DAO Help.

## <a name="m_strsort"></a> CDaoRecordset::m_strSort

Contains a string containing the **ORDERBY** clause of a SQL statement without the reserved words **ORDERBY**.

### Remarks

You can sort on dynaset- and snapshot-type recordset objects.

You cannot sort table-type recordset objects. To determine the sort order of a table-type recordset, call [SetCurrentIndex](#setcurrentindex).

The use of *m_strSort* has no effect when opening a recordset using a `CDaoQueryDef` pointer.

For related information, see the topic "Sort Property" in DAO Help.

## <a name="move"></a> CDaoRecordset::Move

Call this member function to position the recordset *lRows* records from the current record.

```cpp
virtual void Move(long lRows);
```

### Parameters

*lRows*<br/>
The number of records to move forward or backward. Positive values move forward, toward the end of the recordset. Negative values move backward, toward the beginning.

### Remarks

You can move forward or backward. `Move( 1 )` is equivalent to `MoveNext`, and `Move( -1 )` is equivalent to `MovePrev`.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. In general, call both `IsBOF` and `IsEOF` before a Move operation to determine whether the recordset has any records. After you call `Open` or `Requery`, call either `IsBOF` or `IsEOF`.

> [!NOTE]
> If you have scrolled past the beginning or end of the recordset ( `IsBOF` or `IsEOF` returns nonzero), a call to `Move` throws a `CDaoException`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

When you call `Move` on a forward-only scrolling snapshot, the *lRows* parameter must be a positive integer and bookmarks are not allowed, so you can move forward only.

To make the first, last, next, or previous record in a recordset the current record, call the `MoveFirst`, `MoveLast`, `MoveNext`, or `MovePrev` member function.

For related information, see the topics "Move Method" and "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" in DAO Help.

## <a name="movefirst"></a> CDaoRecordset::MoveFirst

Call this member function to make the first record in the recordset (if any) the current record.

```cpp
void MoveFirst();
```

### Remarks

You do not have to call `MoveFirst` immediately after you open the recordset. At that time, the first record (if any) is automatically the current record.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. In general, call both `IsBOF` and `IsEOF` before a Move operation to determine whether the recordset has any records. After you call `Open` or `Requery`, call either `IsBOF` or `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

Use the `Move` functions to move from record to record without applying a condition. Use the Find operations to locate records in a dynaset-type or snapshot-type recordset object that satisfy a certain condition. To locate a record in a table-type recordset object, call `Seek`.

If the recordset refers to a table-type recordset, movement follows the table's current index. You can set the current index by using the Index property of the underlying DAO object. If you do not set the current index, the order of returned records is undefined.

If you call `MoveLast` on a recordset object based on a SQL query or querydef, the query is forced to completion and the recordset object is fully populated.

You cannot call the `MoveFirst` or `MovePrev` member function with a forward-only scrolling snapshot.

To move the position of the current record in a recordset object a specific number of records forward or backward, call `Move`.

For related information, see the topics "Move Method" and "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" in DAO Help.

## <a name="movelast"></a> CDaoRecordset::MoveLast

Call this member function to make the last record (if any) in the recordset the current record.

```cpp
void MoveLast();
```

### Remarks

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. In general, call both `IsBOF` and `IsEOF` before a Move operation to determine whether the recordset has any records. After you call `Open` or `Requery`, call either `IsBOF` or `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

Use the `Move` functions to move from record to record without applying a condition. Use the Find operations to locate records in a dynaset-type or snapshot-type recordset object that satisfy a certain condition. To locate a record in a table-type recordset object, call `Seek`.

If the recordset refers to a table-type recordset, movement follows the table's current index. You can set the current index by using the Index property of the underlying DAO object. If you do not set the current index, the order of returned records is undefined.

If you call `MoveLast` on a recordset object based on a SQL query or querydef, the query is forced to completion and the recordset object is fully populated.

To move the position of the current record in a recordset object a specific number of records forward or backward, call `Move`.

For related information, see the topics "Move Method" and "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" in DAO Help.

## <a name="movenext"></a> CDaoRecordset::MoveNext

Call this member function to make the next record in the recordset the current record.

```cpp
void MoveNext();
```

### Remarks

It is recommended that you call `IsBOF` before you attempt to move to the previous record. A call to `MovePrev` will throw a `CDaoException` if `IsBOF` returns nonzero, indicating either that you have already scrolled before the first record or that no records were selected by the recordset.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. In general, call both `IsBOF` and `IsEOF` before a Move operation to determine whether the recordset has any records. After you call `Open` or `Requery`, call either `IsBOF` or `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

Use the `Move` functions to move from record to record without applying a condition. Use the Find operations to locate records in a dynaset-type or snapshot-type recordset object that satisfy a certain condition. To locate a record in a table-type recordset object, call `Seek`.

If the recordset refers to a table-type recordset, movement follows the table's current index. You can set the current index by using the Index property of the underlying DAO object. If you do not set the current index, the order of returned records is undefined.

To move the position of the current record in a recordset object a specific number of records forward or backward, call `Move`.

For related information, see the topics "Move Method" and "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" in DAO Help.

## <a name="moveprev"></a> CDaoRecordset::MovePrev

Call this member function to make the previous record in the recordset the current record.

```cpp
void MovePrev();
```

### Remarks

It is recommended that you call `IsBOF` before you attempt to move to the previous record. A call to `MovePrev` will throw a `CDaoException` if `IsBOF` returns nonzero, indicating either that you have already scrolled before the first record or that no records were selected by the recordset.

> [!CAUTION]
> Calling any of the `Move` functions throws an exception if the recordset has no records. In general, call both `IsBOF` and `IsEOF` before a Move operation to determine whether the recordset has any records. After you call `Open` or `Requery`, call either `IsBOF` or `IsEOF`.

> [!NOTE]
> If you call any of the `Move` functions while the current record is being updated or added, the updates are lost without warning.

Use the `Move` functions to move from record to record without applying a condition. Use the Find operations to locate records in a dynaset-type or snapshot-type recordset object that satisfy a certain condition. To locate a record in a table-type recordset object, call `Seek`.

If the recordset refers to a table-type recordset, movement follows the table's current index. You can set the current index by using the Index property of the underlying DAO object. If you do not set the current index, the order of returned records is undefined.

You cannot call the `MoveFirst` or `MovePrev` member function with a forward-only scrolling snapshot.

To move the position of the current record in a recordset object a specific number of records forward or backward, call `Move`.

For related information, see the topics "Move Method" and "MoveFirst, MoveLast, MoveNext, MovePrevious Methods" in DAO Help.

## <a name="open"></a> CDaoRecordset::Open

You must call this member function to retrieve the records for the recordset.

```cpp
virtual void Open(
    int nOpenType = AFX_DAO_USE_DEFAULT_TYPE,
    LPCTSTR lpszSQL = NULL,
    int nOptions = 0);

virtual void Open(
    CDaoTableDef* pTableDef,
    int nOpenType = dbOpenTable,
    int nOptions = 0);

virtual void Open(
    CDaoQueryDef* pQueryDef,
    int nOpenType = dbOpenDynaset,
    int nOptions = 0);
```

### Parameters

*nOpenType*<br/>
One of the following values:

- `dbOpenDynaset` A dynaset-type recordset with bidirectional scrolling. This is the default.

- `dbOpenTable` A table-type recordset with bidirectional scrolling.

- `dbOpenSnapshot` A snapshot-type recordset with bidirectional scrolling.

*lpszSQL*<br/>
A string pointer containing one of the following:

- A NULL pointer.

- The name of one or more tabledefs and/or querydefs (comma-separated).

- A SQL **SELECT** statement (optionally with a SQL **WHERE** or **ORDERBY** clause).

- A pass-through query.

*nOptions*<br/>
One or more of the options listed below. The default value is 0. Possible values are as follows:

- `dbAppendOnly` You can only append new records (dynaset-type recordset only). This option means literally that records may only be appended. The MFC ODBC database classes have an append-only option that allows records to be retrieved and appended.

- `dbForwardOnly` The recordset is a forward-only scrolling snapshot.

- `dbSeeChanges` Generate an exception if another user is changing data you are editing.

- `dbDenyWrite` Other users cannot modify or add records.

- `dbDenyRead` Other users cannot view records (table-type recordset only).

- `dbReadOnly` You can only view records; other users can modify them.

- `dbInconsistent` Inconsistent updates are allowed (dynaset-type recordset only).

- `dbConsistent` Only consistent updates are allowed (dynaset-type recordset only).

> [!NOTE]
> The constants `dbConsistent` and `dbInconsistent` are mutually exclusive. You can use one or the other, but not both in a given instance of `Open`.

*pTableDef*<br/>
A pointer to a [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) object. This version is valid only for table-type recordsets. When using this option, the `CDaoDatabase` pointer used to construct the `CDaoRecordset` is not used; rather, the database in which the tabledef resides is used.

*pQueryDef*<br/>
A pointer to a [CDaoQueryDef](../../mfc/reference/cdaoquerydef-class.md) object. This version is valid only for dynaset-type and snapshot-type recordsets. When using this option, the `CDaoDatabase` pointer used to construct the `CDaoRecordset` is not used; rather, the database in which the querydef resides is used.

### Remarks

Before calling `Open`, you must construct the recordset object. There are several ways to do this:

- When you construct the recordset object, pass a pointer to a `CDaoDatabase` object that is already open.

- When you construct the recordset object, pass a pointer to a `CDaoDatabase` object that is not open. The recordset opens a `CDaoDatabase` object, but will not close it when the recordset object closes.

- When you construct the recordset object, pass a NULL pointer. The recordset object calls `GetDefaultDBName` to get the name of the Microsoft Access .MDB file to open. The recordset then opens a `CDaoDatabase` object and keeps it open as long as the recordset is open. When you call `Close` on the recordset, the `CDaoDatabase` object is also closed.

    > [!NOTE]
    >  When the recordset opens the `CDaoDatabase` object, it opens the data source with nonexclusive access.

For the version of `Open` that uses the *lpszSQL* parameter, once the recordset is open you can retrieve records in one of several ways. The first option is to have DFX functions in your `DoFieldExchange`. The second option is to use dynamic binding by calling the `GetFieldValue` member function. These options can be implemented separately or in combination. If they are combined, you will have to pass in the SQL statement yourself on the call to `Open`.

When you use the second version of `Open` where you pass in a `CDaoTableDef` object, the resulting columns will be available for you to bind via `DoFieldExchange` and the DFX mechanism, and/or bind dynamically via `GetFieldValue`.

> [!NOTE]
> You can only call `Open` using a `CDaoTableDef` object for table-type recordsets.

When you use the third version of `Open` where you pass in a `CDaoQueryDef` object, that query will be executed, and the resulting columns will be available for you to bind via `DoFieldExchange` and the DFX mechanism, and/or bind dynamically via `GetFieldValue`.

> [!NOTE]
> You can only call `Open` using a `CDaoQueryDef` object for dynaset-type and snapshot-type recordsets.

For the first version of `Open` that uses the `lpszSQL` parameter, records are selected based on criteria shown in the following table.

|Value of the `lpszSQL` parameter|Records selected are determined by|Example|
|--------------------------------------|----------------------------------------|-------------|
|NULL|The string returned by `GetDefaultSQL`.||
|A comma-separated list of one or more tabledefs and/or querydef names.|All columns represented in the `DoFieldExchange`.|`"Customer"`|
|**SELECT** column-list **FROM** table-list|The specified columns from the specified tabledef(s) and/or querydef(s).|`"SELECT CustId, CustName`<br /><br /> `FROM Customer"`|

The usual procedure is to pass NULL to `Open`; in that case, `Open` calls `GetDefaultSQL`, an overridable member function that ClassWizard generates when creating a `CDaoRecordset`-derived class. This value gives the tabledef(s) and/or querydef name(s) you specified in ClassWizard. You can instead specify other information in the *lpszSQL* parameter.

Whatever you pass, `Open` constructs a final SQL string for the query (the string may have SQL **WHERE** and **ORDERBY** clauses appended to the *lpszSQL* string you passed) and then executes the query. You can examine the constructed string by calling `GetSQL` after calling `Open`.

The field data members of your recordset class are bound to the columns of the data selected. If any records are returned, the first record becomes the current record.

If you want to set options for the recordset, such as a filter or sort, set `m_strSort` or `m_strFilter` after you construct the recordset object but before you call `Open`. If you want to refresh the records in the recordset after the recordset is already open, call `Requery`.

If you call `Open` on a dynaset-type or snapshot-type recordset, or if the data source refers to a SQL statement or a tabledef that represents an attached table, you cannot use `dbOpenTable` for the type argument; if you do, MFC throws an exception. To determine whether a tabledef object represents an attached table, create a [CDaoTableDef](../../mfc/reference/cdaotabledef-class.md) object and call its [GetConnect](../../mfc/reference/cdaotabledef-class.md#getconnect) member function.

Use the `dbSeeChanges` flag if you wish to trap changes made by another user or another program on your machine when you are editing or deleting the same record. For example, if two users start editing the same record, the first user to call the `Update` member function succeeds. When `Update` is called by the second user, a `CDaoException` is thrown. Similarly, if the second user tries to call `Delete` to delete the record, and it has already been changed by the first user, a `CDaoException` occurs.

Typically, if the user gets this `CDaoException` while updating, your code should refresh the contents of the fields and retrieve the newly modified values. If the exception occurs in the process of deleting, your code could display the new record data to the user and a message indicating that the data has recently changed. At this point, your code can request a confirmation that the user still wants to delete the record.

> [!TIP]
> Use the forward-only scrolling option (`dbForwardOnly`) to improve performance when your application makes a single pass through a recordset opened from an ODBC data source.

For related information, see the topic "OpenRecordset Method" in DAO Help.

## <a name="requery"></a> CDaoRecordset::Requery

Call this member function to rebuild (refresh) a recordset.

```cpp
virtual void Requery();
```

### Remarks

If any records are returned, the first record becomes the current record.

In order for the recordset to reflect the additions and deletions that you or other users are making to the data source, you must rebuild the recordset by calling `Requery`. If the recordset is a dynaset, it automatically reflects updates that you or other users make to its existing records (but not additions). If the recordset is a snapshot, you must call `Requery` to reflect edits by other users as well as additions and deletions.

For either a dynaset or a snapshot, call `Requery` any time you want to rebuild the recordset using parameter values. Set the new filter or sort by setting [m_strFilter](#m_strfilter) and [m_strSort](#m_strsort) before calling `Requery`. Set new parameters by assigning new values to parameter data members before calling `Requery`.

If the attempt to rebuild the recordset fails, the recordset is closed. Before you call `Requery`, you can determine whether the recordset can be requeried by calling the [CanRestart](#canrestart) member function. `CanRestart` does not guarantee that `Requery` will succeed.

> [!CAUTION]
> Call `Requery` only after you have called `Open`.

> [!NOTE]
> Calling [Requery](#requery) changes DAO bookmarks.

You can't call `Requery` on a dynaset-type or snapshot-type recordset if calling `CanRestart` returns 0, nor can you use it on a table-type recordset.

If both `IsBOF` and `IsEOF` return nonzero after you call `Requery`, the query didn't return any records and the recordset will contain no data.

For related information, see the topic "Requery Method" in DAO Help.

## <a name="seek"></a> CDaoRecordset::Seek

Call this member function to locate the record in an indexed table-type recordset object that satisfies the specified criteria for the current index and make that record the current record.

```cpp
BOOL Seek(
    LPCTSTR lpszComparison,
    COleVariant* pKey1,
    COleVariant* pKey2 = NULL,
    COleVariant* pKey3 = NULL);

BOOL Seek(
    LPCTSTR lpszComparison,
    COleVariant* pKeyArray,
    WORD nKeys);
```

### Parameters

*lpszComparison*<br/>
One of the following string expressions: "<", "\<=", "=", ">=", or ">".

*pKey1*<br/>
A pointer to a [COleVariant](../../mfc/reference/colevariant-class.md) whose value corresponds to the first field in the index. Required.

*pKey2*<br/>
A pointer to a `COleVariant` whose value corresponds to the second field in the index, if any. Defaults to NULL.

*pKey3*<br/>
A pointer to a `COleVariant` whose value corresponds to the third field in the index, if any. Defaults to NULL.

*pKeyArray*<br/>
A pointer to an array of variants. The array size corresponds to the number of fields in the index.

*nKeys*<br/>
An integer corresponding to the size of the array, which is the number of fields in the index.

> [!NOTE]
> Do not specify wildcards in the keys. Wildcards will cause `Seek` to return no matching records.

### Return Value

Nonzero if matching records are found, otherwise 0.

### Remarks

Use the second (array) version of `Seek` to handle indexes of four fields or more.

`Seek` enables high-performance index searching on table-type recordsets. You must set the current index by calling `SetCurrentIndex` before calling `Seek`. If the index identifies a nonunique key field or fields, `Seek` locates the first record that satisfies the criteria. If you do not set an index, an exception is thrown.

Note that if you are not creating a UNICODE recordset, the `COleVariant` objects must be explicitly declared ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.

When you call `Seek`, you pass one or more key values and a comparison operator ("<", "\<=", "=", ">=", or ">"). `Seek` searches through the specified key fields and locates the first record that satisfies the criteria specified by *lpszComparison* and *pKey1*. Once found, `Seek` returns nonzero, and makes that record current. If `Seek` fails to locate a match, `Seek` returns zero, and the current record is undefined. When using DAO directly, you must explicitly check the NoMatch property.

If `lpszComparison` is "=", ">=", or ">", `Seek` starts at the beginning of the index. If *lpszComparison* is "<" or "<=", `Seek` starts at the end of the index and searches backward unless there are duplicate index entries at the end. In this case, `Seek` starts at an arbitrary entry among the duplicate index entries at the end of the index.

There does not have to be a current record when you use `Seek`.

To locate a record in a dynaset-type or snapshot-type recordset that satisfies a specific condition, use the Find operations. To include all records, not just those that satisfy a specific condition, use the Move operations to move from record to record.

You cannot call `Seek` on an attached table of any type because attached tables must be opened as dynaset-type or snapshot-type recordsets. However, if you call `CDaoDatabase::Open` to directly open an installable ISAM database, you can call `Seek` on tables in that database, although the performance may be slow.

For related information, see the topic "Seek Method" in DAO Help.

## <a name="setabsoluteposition"></a> CDaoRecordset::SetAbsolutePosition

Sets the relative record number of a recordset object's current record.

```cpp
void SetAbsolutePosition(long lPosition);
```

### Parameters

*lPosition*<br/>
Corresponds to the ordinal position of the current record in the recordset.

### Remarks

Calling `SetAbsolutePosition` enables you to position the current record pointer to a specific record based on its ordinal position in a dynaset-type or snapshot-type recordset. You can also determine the current record number by calling [GetAbsolutePosition](#getabsoluteposition).

> [!NOTE]
> This member function is valid only for dynaset-type and snapshot-type recordsets.

The AbsolutePosition property value of the underlying DAO object is zero-based; a setting of 0 refers to the first record in the recordset. Setting a value greater than the number of populated records causes MFC to throw an exception. You can determine the number of populated records in the recordset by calling the `GetRecordCount` member function.

If the current record is deleted, the AbsolutePosition property value is not defined, and MFC throws an exception if it is referenced. New records are added to the end of the sequence.

> [!NOTE]
> This property is not intended to be used as a surrogate record number. Bookmarks are still the recommended way of retaining and returning to a given position and are the only way to position the current record across all types of recordset objects that support bookmarks. In particular, the position of a given record changes when record(s) preceding it are deleted. There is also no assurance that a given record will have the same absolute position if the recordset is re-created again because the order of individual records within a recordset is not guaranteed unless it is created with a SQL statement using an **ORDERBY** clause.

For related information, see the topic "AbsolutePosition Property" in DAO Help.

## <a name="setbookmark"></a> CDaoRecordset::SetBookmark

Call this member function to position the recordset on the record containing the specified bookmark.

```cpp
void SetBookmark(COleVariant varBookmark);
```

### Parameters

*varBookmark*<br/>
A [COleVariant](../../mfc/reference/colevariant-class.md) object containing the bookmark value for a specific record.

### Remarks

When a recordset object is created or opened, each of its records already has a unique bookmark. You can retrieve the bookmark for the current record by calling `GetBookmark` and saving the value to a `COleVariant` object. You can later return to that record by calling `SetBookmark` using the saved bookmark value.

> [!NOTE]
> Calling [Requery](#requery) changes DAO bookmarks.

Note that if you are not creating a UNICODE recordset, the `COleVariant` object must be explicitly declared ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.

For related information, see the topics "Bookmark Property" and Bookmarkable Property" in DAO Help.

## <a name="setcachesize"></a> CDaoRecordset::SetCacheSize

Call this member function to set the number of records to be cached.

```cpp
void SetCacheSize(long lSize);
```

### Parameters

*lSize*<br/>
Specifies the number of records. A typical value is 100. A setting of 0 turns off caching. The setting must be between 5 and 1200 records. The cache may use a considerable amount of memory.

### Remarks

A cache is a space in local memory that holds the data most recently retrieved from the server in the event that the data will be requested again while the application is running. Data caching improves the performance of an application that retrieves data from a remote server through dynaset-type recordset objects. When data is requested, the Microsoft Jet database engine checks the cache for the requested data first rather than retrieving it from the server, which takes more time. Data that does not come from an ODBC data source is not saved in the cache.

Any ODBC data source, such as an attached table, can have a local cache. To create the cache, open a recordset object from the remote data source, call the `SetCacheSize` and `SetCacheStart` member functions, and then call the `FillCache` member function or step through the records by using one of the Move operations. The *lSize* parameter of the `SetCacheSize` member function can be based on the number of records your application can work with at one time. For example, if you are using a recordset as the source of the data to be displayed on screen, you could pass the `SetCacheSize` *lSize* parameter as 20 to display 20 records at one time.

For related information, see the topic "CacheSize, CacheStart Properties" in DAO Help.

## <a name="setcachestart"></a> CDaoRecordset::SetCacheStart

Call this member function to specify the bookmark of the first record in the recordset to be cached.

```cpp
void SetCacheStart(COleVariant varBookmark);
```

### Parameters

*varBookmark*<br/>
A [COleVariant](../../mfc/reference/colevariant-class.md) that specifies the bookmark of the first record in the recordset to be cached.

### Remarks

You can use the bookmark value of any record for the *varBookmark* parameter of the `SetCacheStart` member function. Make the record you want to start the cache with the current record, establish a bookmark for that record using [SetBookmark](#setbookmark), and pass the bookmark value as the parameter for the `SetCacheStart` member function.

The Microsoft Jet database engine requests records within the cache range from the cache, and it requests records outside the cache range from the server.

Records retrieved from the cache do not reflect changes made concurrently to the source data by other users.

To force an update of all the cached data, pass the *lSize* parameter of `SetCacheSize` as 0, call `SetCacheSize` again with the size of the cache you originally requested, and then call the `FillCache` member function.

Note that if you are not creating a UNICODE recordset, the `COleVariant` object must be explicitly declared ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.

For related information, see the topic CacheSize, CacheStart Properties" in DAO Help.

## <a name="setcurrentindex"></a> CDaoRecordset::SetCurrentIndex

Call this member function to set an index on a table-type recordset.

```cpp
void SetCurrentIndex(LPCTSTR lpszIndex);
```

### Parameters

*lpszIndex*<br/>
A pointer containing the name of the index to be set.

### Remarks

Records in base tables are not stored in any particular order. Setting an index changes the order of records returned from the database, but it does not affect the order in which the records are stored. The specified index must already be defined. If you try to use an index object that does not exist, or if the index is not set when you call [Seek](#seek), MFC throws an exception.

You can create a new index for the table by calling [CDaoTableDef::CreateIndex](../../mfc/reference/cdaotabledef-class.md#createindex) and appending the new index to the Indexes collection of the underlying tabledef by calling [CDaoTableDef::Append](../../mfc/reference/cdaotabledef-class.md#append), and then reopening the recordset.

Records returned from a table-type recordset can be ordered only by the indexes defined for the underlying tabledef. To sort records in some other order, you can open a dynaset-type or snapshot-type recordset using a SQL **ORDERBY** clause stored in [CDaoRecordset::m_strSort](#m_strsort).

For related information, see the topic "Index Object" and the definition "current index" in DAO Help.

## <a name="setfielddirty"></a> CDaoRecordset::SetFieldDirty

Call this member function to flag a field data member of the recordset as changed or as unchanged.

```cpp
void SetFieldDirty(
    void* pv,
    BOOL bDirty = TRUE);
```

### Parameters

*pv*<br/>
Contains the address of a field data member in the recordset or NULL. If NULL, all field data members in the recordset are flagged. (C++ NULL is not the same as Null in database terminology, which means "having no value.")

*bDirty*<br/>
TRUE if the field data member is to be flagged as "dirty" (changed). Otherwise FALSE if the field data member is to be flagged as "clean" (unchanged).

### Remarks

Marking fields as unchanged ensures the field is not updated.

The framework marks changed field data members to ensure they will be written to the record on the data source by the DAO record field exchange (DFX) mechanism. Changing the value of a field generally sets the field dirty automatically, so you will seldom need to call `SetFieldDirty` yourself, but you might sometimes want to ensure that columns will be explicitly updated or inserted regardless of what value is in the field data member. The DFX mechanism also employs the use of PSEUDONULL. For more information, see [CDaoFieldExchange::m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

If the double-buffering mechanism is not being used, then changing the value of the field does not automatically set the field as dirty. In this case, it will be necessary to explicitly set the field as dirty. The flag contained in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controls this automatic field checking.

> [!NOTE]
> Call this member function only after you have called [Edit](#edit) or [AddNew](#addnew).

Using NULL for the first argument of the function will apply the function to all `outputColumn` fields, not **param** fields in `CDaoFieldExchange`. For instance, the call

[!code-cpp[NVC_MFCDatabase#6](../../mfc/codesnippet/cpp/cdaorecordset-class_6.cpp)]

will set only `outputColumn` fields to NULL; **param** fields will be unaffected.

To work on a **param**, you must supply the actual address of the individual **param** you want to work on, such as:

[!code-cpp[NVC_MFCDatabase#7](../../mfc/codesnippet/cpp/cdaorecordset-class_7.cpp)]

This means you cannot set all **param** fields to NULL, as you can with `outputColumn` fields.

`SetFieldDirty` is implemented through `DoFieldExchange`.

## <a name="setfieldnull"></a> CDaoRecordset::SetFieldNull

Call this member function to flag a field data member of the recordset as Null (specifically having no value) or as non-Null.

```cpp
void SetFieldNull(
    void* pv,
    BOOL bNull = TRUE);
```

### Parameters

*pv*<br/>
Contains the address of a field data member in the recordset or NULL. If NULL, all field data members in the recordset are flagged. (C++ NULL is not the same as Null in database terminology, which means "having no value.")

*bNull*<br/>
Nonzero if the field data member is to be flagged as having no value (Null). Otherwise 0 if the field data member is to be flagged as non-Null.

### Remarks

`SetFieldNull` is used for fields bound in the `DoFieldExchange` mechanism.

When you add a new record to a recordset, all field data members are initially set to a Null value and flagged as "dirty" (changed). When you retrieve a record from a data source, its columns either already have values or are Null. If it is not appropriate to make a field Null, a [CDaoException](../../mfc/reference/cdaoexception-class.md) is thrown.

If you are using the double-buffering mechanism, for example, if you specifically wish to designate a field of the current record as not having a value, call `SetFieldNull` with *bNull* set to TRUE to flag it as Null. If a field was previously marked Null and you now want to give it a value, simply set its new value. You do not have to remove the Null flag with `SetFieldNull`. To determine whether the field is allowed to be Null, call [IsFieldNullable](#isfieldnullable).

If you are not using the double-buffering mechanism, then changing the value of the field does not automatically set the field as dirty and non-Null. You must specifically set the fields dirty and non-Null. The flag contained in [m_bCheckCacheForDirtyFields](#m_bcheckcachefordirtyfields) controls this automatic field checking.

The DFX mechanism employs the use of PSEUDONULL. For more information, see [CDaoFieldExchange::m_nOperation](../../mfc/reference/cdaofieldexchange-class.md#m_noperation).

> [!NOTE]
> Call this member function only after you have called [Edit](#edit) or [AddNew](#addnew).

Using NULL for the first argument of the function will apply the function only to `outputColumn` fields, not **param** fields in `CDaoFieldExchange`. For instance, the call

[!code-cpp[NVC_MFCDatabase#8](../../mfc/codesnippet/cpp/cdaorecordset-class_8.cpp)]

will set only `outputColumn` fields to NULL; **param** fields will be unaffected.

## <a name="setfieldvalue"></a> CDaoRecordset::SetFieldValue

Call this member function to set the value of a field, either by ordinal position or by changing the value of the string.

```cpp
virtual void SetFieldValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);

virtual void SetFieldValue(
    int nIndex,
    const COleVariant& varValue);

void SetFieldValue(
    LPCTSTR lpszName,
    LPCTSTR lpszValue);

void SetFieldValue(
    int nIndex,
    LPCTSTR lpszValue);
```

### Parameters

*lpszName*<br/>
A pointer to a string containing the name of a field.

*varValue*<br/>
A reference to a [COleVariant](../../mfc/reference/colevariant-class.md) object containing the value of the field's contents.

*nIndex*<br/>
An integer that represents the ordinal position of the field in the recordset's Fields collection (zero-based).

*lpszValue*<br/>
A pointer to a string containing the value of the field's contents.

### Remarks

Use `SetFieldValue` and [GetFieldValue](#getfieldvalue) to dynamically bind fields at run time rather than statically binding columns using the [DoFieldExchange](#dofieldexchange) mechanism.

Note that if you are not creating a UNICODE recordset, you must either use a form of `SetFieldValue` that does not contain a `COleVariant` parameter, or the `COleVariant` object must be explicitly declared ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.

For related information, see the topics "Field Object" and "Value Property" in DAO Help.

## <a name="setfieldvaluenull"></a> CDaoRecordset::SetFieldValueNull

Call this member function to set the field to a Null value.

```cpp
void SetFieldValueNull(int nIndex);
void SetFieldValueNull(LPCTSTR lpszName);
```

### Parameters

*nIndex*<br/>
The index of the field in the recordset, for lookup by zero-based index.

*lpszName*<br/>
The name of the field in the recordset, for lookup by name.

### Remarks

C++ NULL is not the same as Null, which, in database terminology, means "having no value."

For related information, see the topics "Field Object" and "Value Property" in DAO Help.

## <a name="setlockingmode"></a> CDaoRecordset::SetLockingMode

Call this member function to set the type of locking for the recordset.

```cpp
void SetLockingMode(BOOL bPessimistic);
```

### Parameters

*bPessimistic*<br/>
A flag that indicates the type of locking.

### Remarks

When pessimistic locking is in effect, the 2K page containing the record you are editing is locked as soon as you call the `Edit` member function. The page is unlocked when you call the `Update` or `Close` member function or any of the Move or Find operations.

When optimistic locking is in effect, the 2K page containing the record is locked only while the record is being updated with the `Update` member function.

If a page is locked, no other user can edit records on the same page. If you call `SetLockingMode` and pass a nonzero value and another user already has the page locked, an exception is thrown when you call `Edit`. Other users can read data from locked pages.

If you call `SetLockingMode` with a zero value and later call `Update` while the page is locked by another user, an exception occurs. To see the changes made to your record by another user (and lose your changes), call the `SetBookmark` member function with the bookmark value of the current record.

When working with ODBC data sources, the locking mode is always optimistic.

## <a name="setparamvalue"></a> CDaoRecordset::SetParamValue

Call this member function to set the value of a parameter in the recordset at run time.

```cpp
virtual void SetParamValue(
    int nIndex,
    const COleVariant& varValue);

virtual void SetParamValue(
    LPCTSTR lpszName,
    const COleVariant& varValue);
```

### Parameters

*nIndex*<br/>
The numerical position of the parameter in the querydef's Parameters collection.

*var*<br/>
The value to set; see Remarks.

*lpszName*<br/>
The name of the parameter whose value you want to set.

### Remarks

The parameter must already have been established as part of the recordset's SQL string. You can access the parameter either by name or by its index position in the collection.

Specify the value to set as a `COleVariant` object. For information about setting the desired value and type in your `COleVariant` object, see class [COleVariant](../../mfc/reference/colevariant-class.md). Note that if you are not creating a UNICODE recordset, the `COleVariant` object must be explicitly declared ANSI. This can be done by using the [COleVariant::COleVariant](../../mfc/reference/colevariant-class.md#colevariant)**(** *lpszSrc* **,** *vtSrc* **)** form of constructor with *vtSrc* set to `VT_BSTRT` (ANSI) or by using the `COleVariant` function [SetString](../../mfc/reference/colevariant-class.md#setstring)**(** *lpszSrc* **,** *vtSrc* **)** with *vtSrc* set to `VT_BSTRT`.

## <a name="setparamvaluenull"></a> CDaoRecordset::SetParamValueNull

Call this member function to set the parameter to a Null value.

```cpp
void SetParamValueNull(int nIndex);
void SetParamValueNull(LPCTSTR lpszName);
```

### Parameters

*nIndex*<br/>
The index of the field in the recordset, for lookup by zero-based index.

*lpszName*<br/>
The name of the field in the recordset, for lookup by name.

### Remarks

C++ NULL is not the same as Null, which, in database terminology, means "having no value."

## <a name="setpercentposition"></a> CDaoRecordset::SetPercentPosition

Call this member function to set a value that changes the approximate location of the current record in the recordset object based on a percentage of the records in the recordset.

```cpp
void SetPercentPosition(float fPosition);
```

### Parameters

*fPosition*<br/>
A number between 0 and 100.

### Remarks

When working with a dynaset-type or snapshot-type recordset, first populate the recordset by moving to the last record before you call `SetPercentPosition`. If you call `SetPercentPosition` before fully populating the recordset, the amount of movement is relative to the number of records accessed as indicated by the value of [GetRecordCount](#getrecordcount). You can move to the last record by calling `MoveLast`.

Once you call `SetPercentPosition`, the record at the approximate position corresponding to that value becomes current.

> [!NOTE]
> Calling `SetPercentPosition` to move the current record to a specific record in a recordset is not recommended. Call the [SetBookmark](#setbookmark) member function instead.

For related information, see the topic "PercentPosition Property" in DAO Help.

## <a name="update"></a> CDaoRecordset::Update

Call this member function after a call to the `AddNew` or `Edit` member function.

```cpp
virtual void Update();
```

### Remarks

This call is required to complete the `AddNew` or `Edit` operation.

Both `AddNew` and `Edit` prepare an edit buffer in which the added or edited data is placed for saving to the data source. `Update` saves the data. Only those fields marked or detected as changed are updated.

If the data source supports transactions, you can make the `Update` call (and its corresponding `AddNew` or `Edit` call) part of a transaction.

> [!CAUTION]
> If you call `Update` without first calling either `AddNew` or `Edit`, `Update` throws a `CDaoException`. If you call `AddNew` or `Edit`, you must call `Update` before you call [MoveNext](#movenext) or close either the recordset or the data source connection. Otherwise, your changes are lost without notification.

When the recordset object is pessimistically locked in a multiuser environment, the record remains locked from the time `Edit` is used until the updating is complete. If the recordset is optimistically locked, the record is locked and compared with the pre-edited record just before it is updated in the database. If the record has changed since you called `Edit`, the `Update` operation fails and MFC throws an exception. You can change the locking mode with `SetLockingMode`.

> [!NOTE]
> Optimistic locking is always used on external database formats, such as ODBC and installable ISAM.

For related information, see the topics "AddNew Method", "CancelUpdate Method", "Delete Method", "LastModified Property", "Update Method", and "EditMode Property" in DAO Help.

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CDaoTableDef Class](../../mfc/reference/cdaotabledef-class.md)<br/>
[CDaoWorkspace Class](../../mfc/reference/cdaoworkspace-class.md)<br/>
[CDaoDatabase Class](../../mfc/reference/cdaodatabase-class.md)<br/>
[CDaoQueryDef Class](../../mfc/reference/cdaoquerydef-class.md)<br/>
