---
description: "Learn more about: IRowsetUpdateImpl Class"
title: "IRowsetUpdateImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IRowsetUpdateImpl", "ATL.IRowsetUpdateImpl", "ATL::IRowsetUpdateImpl", "IRowsetUpdateImpl::SetData", "IRowsetUpdateImpl.SetData", "ATL::IRowsetUpdateImpl::SetData", "ATL.IRowsetUpdateImpl.SetData", "ATL.IRowsetUpdateImpl.GetOriginalData", "IRowsetUpdateImpl.GetOriginalData", "ATL::IRowsetUpdateImpl::GetOriginalData", "IRowsetUpdateImpl::GetOriginalData", "IRowsetUpdateImpl::GetPendingRows", "GetPendingRows", "IRowsetUpdateImpl.GetPendingRows", "ATL::IRowsetUpdateImpl::GetPendingRows", "ATL.IRowsetUpdateImpl.GetPendingRows", "ATL.IRowsetUpdateImpl.GetRowStatus", "IRowsetUpdateImpl::GetRowStatus", "IRowsetUpdateImpl.GetRowStatus", "ATL::IRowsetUpdateImpl::GetRowStatus", "ATL.IRowsetUpdateImpl.Undo", "ATL::IRowsetUpdateImpl::Undo", "IRowsetUpdateImpl::Undo", "IRowsetUpdateImpl.Undo", "ATL::IRowsetUpdateImpl::Update", "IRowsetUpdateImpl::Update", "IRowsetUpdateImpl.Update", "ATL.IRowsetUpdateImpl.Update", "IRowsetUpdateImpl::IsUpdateAllowed", "IRowsetUpdateImpl.IsUpdateAllowed", "IsUpdateAllowed", "IRowsetUpdateImpl.m_mapCachedData", "IRowsetUpdateImpl::m_mapCachedData", "m_mapCachedData"]
helpviewer_keywords: ["providers, updatable", "IRowsetUpdateImpl class", "updatable providers, deferred update", "SetData method", "GetOriginalData method", "GetPendingRows method", "GetRowStatus method", "Undo method", "Update method", "IsUpdateAllowed method", "m_mapCachedData"]
ms.assetid: f85af76b-ab6f-4f8b-8f4a-337c9679d68f
---
# IRowsetUpdateImpl Class

The OLE DB Templates implementation of the [IRowsetUpdate](/previous-versions/windows/desktop/ms714401(v=vs.85)) interface.

## Syntax

```cpp
template <
   class T,
   class Storage,
   class UpdateArray = CAtlArray<Storage>,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap <RowClass::KeyType, RowClass*>
>

class IRowsetUpdateImpl : public IRowsetChangeImpl<
   T,
   Storage,
   IRowsetUpdate,
   RowClass,
   MapClass>
```

### Parameters

*T*<br/>
A class derived from `IRowsetUpdateImpl`.

*Storage*<br/>
The user record.

*UpdateArray*<br/>
An array containing cached data for updating the rowset.

*RowClass*<br/>
The storage unit for the `HROW`.

*MapClass*<br/>
The storage unit for all row handles held by the provider.

## Requirements

**Header:** atldb.h

## Members

### Interface Methods (Used with IRowsetChange)

| Name | Description |
|-|-|
|[SetData](#setdata)|Sets data values in one or more columns.|

### Interface Methods (Used with IRowsetUpdate)

| Name | Description |
|-|-|
|[GetOriginalData](#getoriginaldata)|Gets the data most recently transmitted to or obtained from the data source, ignoring pending changes.|
|[GetPendingRows](#getpendingrows)|Returns a list of rows with pending changes.|
|[GetRowStatus](#getrowstatus)|Returns the status of specified rows.|
|[Undo](#undo)|Undoes any changes to the row since the last fetch or update.|
|[Update](#update)|Transmits any changes made to the row since the last fetch or update.|

### Implementation Methods (Callback)

| Name | Description |
|-|-|
|[IsUpdateAllowed](#isupdateallowed)|Used to check for security, integrity, and so on before allowing updates.|

### Data Members

| Name | Description |
|-|-|
|[m_mapCachedData](#mapcacheddata)|Contains the original data for the deferred operation.|

## Remarks

You should first read and understand the documentation for [IRowsetChange](/previous-versions/windows/desktop/ms715790(v=vs.85)), because everything described there also applies here. You should also read chapter 6 of the *OLE DB Programmer's Reference* on setting data.

`IRowsetUpdateImpl` implements the OLE DB `IRowsetUpdate` interface, which enables consumers to delay the transmission of changes made with `IRowsetChange` to the data source and undo changes before transmission.

> [!IMPORTANT]
> It is strongly recommended that you read the following documentation BEFORE attempting to implement your provider:

- [Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)

- Chapter 6 of the *OLE DB Programmer's Reference*

- Also see how the `RUpdateRowset` class is used in the [UpdatePV](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV) sample

## <a name="setdata"></a> IRowsetUpdateImpl::SetData

Sets data values in one or more columns.

### Syntax

```cpp
STDMETHOD (SetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pSrcData);
```

#### Parameters

See [IRowsetChange::SetData](/previous-versions/windows/desktop/ms721232(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

This method overrides the [IRowsetChangeImpl::SetData](./irowsetchangeimpl-class.md#setdata) method but includes caching of original data to permit either immediate or deferred processing of the operation.

## <a name="getoriginaldata"></a> IRowsetUpdateImpl::GetOriginalData

Gets the data most recently transmitted to or obtained from the data source, ignoring pending changes.

### Syntax

```cpp
STDMETHOD (GetOriginalData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pData);
```

#### Parameters

See [IRowsetUpdate::GetOriginalData](/previous-versions/windows/desktop/ms709947(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getpendingrows"></a> IRowsetUpdateImpl::GetPendingRows

Returns a list of rows with pending changes.

### Syntax

```cpp
STDMETHOD (GetPendingRows )(HCHAPTER /* hReserved */,
   DBPENDINGSTATUS dwRowStatus,
   DBCOUNTITEM* pcPendingRows,
   HROW** prgPendingRows,
   DBPENDINGSTATUS** prgPendingStatus);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to the *hChapter* parameter in [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)).

For other parameters, see [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

For more information, see [IRowsetUpdate::GetPendingRows](/previous-versions/windows/desktop/ms719626(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="getrowstatus"></a> IRowsetUpdateImpl::GetRowStatus

Returns the status of specified rows.

### Syntax

```cpp
STDMETHOD (GetRowStatus )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBPENDINGSTATUS rgPendingStatus[]);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to the *hChapter* parameter in [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)).

For other parameters, see [IRowsetUpdate::GetRowStatus](/previous-versions/windows/desktop/ms724377(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="undo"></a> IRowsetUpdateImpl::Undo

Undoes any changes to the row since the last fetch or update.

### Syntax

```cpp
STDMETHOD (Undo )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[ ],
   DBCOUNTITEM* pcRowsUndone,
   HROW** prgRowsUndone,
   DBROWSTATUS** prgRowStatus);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to the *hChapter* parameter in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*pcRowsUndone*<br/>
[out] Corresponds to the *pcRows* parameter in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

*prgRowsUndone*<br/>
[in] Corresponds to the *prgRows* parameter in [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)).

For other parameters, see [IRowsetUpdate::Undo](/previous-versions/windows/desktop/ms719655(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="update"></a> IRowsetUpdateImpl::Update

Transmits any changes made to the row since the last fetch or update.

### Syntax

```cpp
STDMETHOD (Update )(HCHAPTER /* hReserved */,
   DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBCOUNTITEM* pcRows,
   HROW** prgRows,
   DBROWSTATUS** prgRowStatus);
```

#### Parameters

*hReserved*<br/>
[in] Corresponds to the *hChapter* parameter in [IRowsetUpdate::Update](/previous-versions/windows/desktop/ms719709(v=vs.85)).

For other parameters, see [IRowsetUpdate::Update](/previous-versions/windows/desktop/ms719709(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

Changes are transmitted by calling [IRowsetChangeImpl::FlushData](./irowsetchangeimpl-class.md#flushdata). The consumer must call [CRowset::Update](./crowset-class.md#update) for the changes to take effect. Set *prgRowstatus* to an appropriate value as described in [Row States](/previous-versions/windows/desktop/ms722752(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="isupdateallowed"></a> IRowsetUpdateImpl::IsUpdateAllowed

Override this method to check for security, integrity, and so on before updates.

### Syntax

```cpp
HRESULT IsUpdateAllowed(DBPENDINGSTATUS /* [in] */ /* status */,
   HROW /* [in] */ /* hRowUpdate */,
   DBROWSTATUS* /* [out] */ /* pRowStatus */);
```

#### Parameters

*status*<br/>
[in] The status of pending operations on the rows.

*hRowUpdate*<br/>
[in] Handle for the rows the user wants to update.

*pRowStatus*<br/>
[out] The status returned to the user.

### Remarks

If you determine that an update should be allowed, returns S_OK; otherwise returns E_FAIL. If you allow an update, you also need to set the `DBROWSTATUS` in [IRowsetUpdateImpl::Update](#update) to an appropriate [row state](/previous-versions/windows/desktop/ms722752(v=vs.85)).

## <a name="mapcacheddata"></a> IRowsetUpdateImpl::m_mapCachedData

A map containing the original data for the deferred operation.

### Syntax

```cpp
CAtlMap<
   HROW hRow,
   Storage* pData
>
m_mapCachedData;
```

#### Parameters

*hRow*<br/>
Handle to the rows for the data.

*pData*<br/>
A pointer to the data to be cached. The data is of type *Storage* (the user record class). See the *Storage* template argument in [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md).

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[Creating an Updatable Provider](../../data/oledb/creating-an-updatable-provider.md)
