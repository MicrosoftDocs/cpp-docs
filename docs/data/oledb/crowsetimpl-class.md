---
description: "Learn more about: CRowsetImpl Class"
title: "CRowsetImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["CRowsetImpl", "ATL.CRowsetImpl", "ATL::CRowsetImpl", "CRowsetImpl.NameFromDBID", "CRowsetImpl::NameFromDBID", "CRowsetImpl.SetCommandText", "CRowsetImpl::SetCommandText", "CRowsetImpl.GetColumnInfo", "CRowsetImpl::GetColumnInfo", "CRowsetImpl::GetCommandFromID", "GetCommandFromID", "CRowsetImpl.GetCommandFromID", "CRowsetImpl.ValidateCommandID", "CRowsetImpl::ValidateCommandID", "CRowsetImpl.m_rgRowData", "CRowsetImpl::m_rgRowData", "CRowsetImpl::m_strCommandText", "CRowsetImpl.m_strCommandText", "CRowsetImpl::m_strIndexText", "CRowsetImpl.m_strIndexText"]
helpviewer_keywords: ["CRowsetImpl class", "NameFromDBID method", "SetCommandText method", "GetColumnInfo method", "GetCommandFromID method", "ValidateCommandID method", "m_rgRowData", "m_strCommandText", "m_strIndexText"]
ms.assetid: e97614b3-b11d-4806-a0d3-b9401331473f
---
# CRowsetImpl Class

Provides a standard OLE DB rowset implementation without requiring multiple inheritance of many implementation interfaces.

## Syntax

```cpp
template <
   class T,
   class Storage,
   class CreatorClass,
   class ArrayType = CAtlArray<Storage>,
   class RowClass = CSimpleRow,
   class RowsetInterface = IRowsetImpl <T, IRowset>
>
class CRowsetImpl :
   public CComObjectRootEx<CreatorClass::_ThreadModel>,
   public CRowsetBaseImpl<T, Storage, ArrayType, RowsetInterface>,
   public IRowsetInfoImpl<T, CreatorClass::_PropClass>
```

### Parameters

*T*<br/>
The user's class that derives from `CRowsetImpl`.

*Storage*<br/>
The user record class.

*CreatorClass*<br/>
The class that contains properties for the rowset; typically the command.

*ArrayType*<br/>
The class that will act as storage for the rowset's data. This parameter defaults to `CAtlArray`, but it can be any class that supports the required functionality.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[NameFromDBID](#namefromdbid)|Extracts a string from a `DBID` and copies it to the *bstr* passed in.|
|[SetCommandText](#setcommandtext)|Validates and stores the `DBID`s in the two strings ([m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext)).|

### Overridable Methods

| Name | Description |
|-|-|
|[GetColumnInfo](#getcolumninfo)|Retrieves column information for a particular client request.|
|[GetCommandFromID](#getcommandfromid)|Checks to see if either or both parameters contain string values, and if so, copies the string values to the data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext).|
|[ValidateCommandID](#validatecommandid)|Checks to see if either or both `DBID`s contain string values, and if so, copies them to its data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext).|

### Data Members

| Name | Description |
|-|-|
|[m_rgRowData](#rgrowdata)|By default, a `CAtlArray` that templatizes on the user record template argument to `CRowsetImpl`. Another array type class can be used by changing the `ArrayType` template argument to `CRowsetImpl`.|
|[m_strCommandText](#strcommandtext)|Contains the rowset's initial command.|
|[m_strIndexText](#strindextext)|Contains the rowset's initial index.|

## Remarks

`CRowsetImpl` provides overrides in the form of static upcasts. The methods control the manner in which a given rowset will validate command text. You can create your own `CRowsetImpl`-style class by making your implementation interfaces multiple-inherited. The only method for which you must provide implementation is `Execute`. Depending on what type of rowset you are creating, the creator methods will expect different signatures for `Execute`. For example, if you are using a `CRowsetImpl`-derived class to implement a schema rowset, the `Execute` method will have the following signature:

`HRESULT Execute(LONG* pcRows, ULONG cRestrictions, const VARIANT* rgRestrictions)`

If you are creating a `CRowsetImpl`-derived class to implement a command or session's rowset, the `Execute` method will have the following signature:

`HRESULT Execute(LONG* pcRows, DBPARAMS* pParams)`

To implement any of the `CRowsetImpl`-derived `Execute` methods, you must populate your internal data buffers ([m_rgRowData](#rgrowdata)).

## <a name="namefromdbid"></a> CRowsetImpl::NameFromDBID

Extracts a string from a `DBID` and copies it to the *bstr* passed in.

### Syntax

```cpp
HRESULT CRowsetBaseImpl::NameFromDBID(DBID* pDBID,
   CComBSTR& bstr,
   bool bIndex);
```

#### Parameters

*pDBID*<br/>
[in] A pointer to the `DBID` from which to extract a string.

*bstr*<br/>
[in] A [CComBSTR](../../atl/reference/ccombstr-class.md) reference to place a copy of the `DBID` string.

*bIndex*<br/>
[in] **`true`** if an index `DBID`; **`false`** if a table `DBID`.

### Return Value

A standard HRESULT. Depending on whether the `DBID` is a table or an index (denoted by *bIndex*), the method will either return DB_E_NOINDEX or DB_E_NOTABLE.

### Remarks

This method is called by the `CRowsetImpl` implementations of [ValidateCommandID](#validatecommandid) and [GetCommandFromID](#getcommandfromid).

## <a name="setcommandtext"></a> CRowsetImpl::SetCommandText

Validates and stores the `DBID`s in the two strings ([m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext)).

### Syntax

```cpp
HRESULT CRowsetBaseImpl::SetCommandText(DBID* pTableID,
   DBID* pIndexID);
```

#### Parameters

*pTableID*<br/>
[in] A pointer to the `DBID` representing the table ID.

*pIndexID*<br/>
[in] A pointer to the `DBID` representing the index ID.

### Return Value

A standard HRESULT.

### Remarks

The `SetCommentText` method is called by `CreateRowset`, a static templatized method of `IOpenRowsetImpl`.

This method delegates its work by calling [ValidateCommandID](#validatecommandid) and [GetCommandFromID](#getcommandfromid) through an upcasted pointer.

## <a name="getcolumninfo"></a> CRowsetImpl::GetColumnInfo

Retrieves column information for a particular client request.

### Syntax

```cpp
static ATLCOLUMNINFO* CRowsetBaseImpl::GetColumnInfo(T* pv,
   ULONG* pcCols);
```

#### Parameters

*pv*<br/>
[in] A pointer to the user's `CRowsetImpl` derived class.

*pcCols*<br/>
[in] A pointer (output) to the number of columns returned.

### Return Value

A pointer to a static `ATLCOLUMNINFO` structure.

### Remarks

This method is an advanced override.

This method is called by several base implementation classes to retrieve column information for a particular client request. Usually, this method would be called by `IColumnsInfoImpl`. If you override this method, you must place a version of the method in your `CRowsetImpl`-derived class. Because the method may be placed in a non-templatized class, you must change *pv* to the appropriate `CRowsetImpl`-derived class.

The following example demonstrates `GetColumnInfo` usage. In this example, `CMyRowset` is a `CRowsetImpl`-derived class. In order to override `GetColumnInfo` for all instances of this class, place the following method in the `CMyRowset` class definition:

[!code-cpp[NVC_OLEDB_Provider#1](../../data/oledb/codesnippet/cpp/crowsetimpl-getcolumninfo_1.h)]

## <a name="getcommandfromid"></a> CRowsetImpl::GetCommandFromID

Checks to see if either or both parameters contain string values, and if so, copies the string values to the data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext).

### Syntax

```cpp
HRESULT CRowsetBaseImpl::GetCommandFromID(DBID* pTableID,
   DBID* pIndexID);
```

#### Parameters

*pTableID*<br/>
[in] A pointer to the `DBID` representing the Table ID.

*pIndexID*<br/>
[in] A pointer to the `DBID` representing the Index ID.

### Return Value

A standard HRESULT.

### Remarks

This method is called through a static upcast by `CRowsetImpl` to populate the data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext). By default, this method checks to see if either or both parameters contain string values. If they contain string values, this method copies the string values to the data members. By placing a method with this signature in your `CRowsetImpl`-derived class, your method will be called instead of the base implementation.

## <a name="validatecommandid"></a> CRowsetImpl::ValidateCommandID

Checks to see if either or both `DBID`s contain string values, and if so, copies them to its data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext).

### Syntax

```cpp
HRESULT CRowsetBaseImpl::ValidateCommandID(DBID* pTableID,
   DBID* pIndexID);
```

#### Parameters

*pTableID*<br/>
[in] A pointer to the `DBID` representing the table ID.

*pIndexID*<br/>
[in] A pointer to the `DBID` representing the index ID.

### Return Value

A standard HRESULT.

### Remarks

This method is called through a static upcast by `CRowsetImpl` to populate its data members [m_strCommandText](#strcommandtext) and [m_strIndexText](#strindextext). By default, this method checks to see if either or both `DBID`s contain string values, and if so, copies them to its data members. By placing a method with this signature in your `CRowsetImpl`-derived class, your method will be called instead of the base implementation.

## <a name="rgrowdata"></a> CRowsetImpl::m_rgRowData

By default, a `CAtlArray` that templatizes on the user record template argument to `CRowsetImpl`.

### Syntax

```cpp
ArrayType CRowsetBaseImpl::m_rgRowData;
```

### Remarks

*ArrayType* is a template parameter to `CRowsetImpl`.

## <a name="strcommandtext"></a> CRowsetImpl::m_strCommandText

Contains the rowset's initial command.

### Syntax

```cpp
CComBSTR CRowsetBaseImpl::m_strCommandText;
```

## <a name="strindextext"></a> CRowsetImpl::m_strIndexText

Contains the rowset's initial index.

### Syntax

```cpp
CComBSTR CRowsetBaseImpl::m_strIndexText;
```
