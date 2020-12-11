---
description: "Learn more about: IRowsetImpl Class"
title: "IRowsetImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["IRowsetImpl", "IRowsetImpl::AddRefRows", "IRowsetImpl.AddRefRows", "ATL::IRowsetImpl::AddRefRows", "ATL.IRowsetImpl.AddRefRows", "IRowsetImpl.CreateRow", "ATL.IRowsetImpl.CreateRow", "ATL::IRowsetImpl::CreateRow", "CreateRow", "IRowsetImpl::CreateRow", "ATL.IRowsetImpl.GetData", "ATL::IRowsetImpl::GetData", "IRowsetImpl::GetData", "IRowsetImpl.GetData", "GetDBStatus", "IRowsetImpl.GetDBStatus", "IRowsetImpl::GetDBStatus", "GetNextRows", "ATL.IRowsetImpl.GetNextRows", "ATL::IRowsetImpl::GetNextRows", "IRowsetImpl::GetNextRows", "IRowsetImpl.GetNextRows", "IRowsetImpl.IRowsetImpl", "ATL::IRowsetImpl::IRowsetImpl", "ATL.IRowsetImpl.IRowsetImpl", "IRowsetImpl::IRowsetImpl", "ATL::IRowsetImpl::RefRows", "ATL.IRowsetImpl.RefRows", "IRowsetImpl.RefRows", "RefRows", "IRowsetImpl::RefRows", "ATL.IRowsetImpl.ReleaseRows", "IRowsetImpl::ReleaseRows", "ATL::IRowsetImpl::ReleaseRows", "IRowsetImpl.ReleaseRows", "ATL.IRowsetImpl.RestartPosition", "IRowsetImpl::RestartPosition", "RestartPosition", "ATL::IRowsetImpl::RestartPosition", "IRowsetImpl.RestartPosition", "IRowsetImpl.SetDBStatus", "IRowsetImpl::SetDBStatus", "SetDBStatus", "ATL.IRowsetImpl.m_bCanFetchBack", "ATL::IRowsetImpl::m_bCanFetchBack", "IRowsetImpl.m_bCanFetchBack", "IRowsetImpl::m_bCanFetchBack", "m_bCanFetchBack", "IRowsetImpl::m_bCanScrollBack", "ATL::IRowsetImpl::m_bCanScrollBack", "IRowsetImpl.m_bCanScrollBack", "ATL.IRowsetImpl.m_bCanScrollBack", "m_bCanScrollBack", "ATL.IRowsetImpl.m_bReset", "IRowsetImpl.m_bReset", "m_bReset", "IRowsetImpl::m_bReset", "ATL::IRowsetImpl::m_bReset", "IRowsetImpl::m_iRowset", "IRowsetImpl.m_iRowset", "ATL::IRowsetImpl::m_iRowset", "ATL.IRowsetImpl.m_iRowset", "m_iRowset", "IRowsetImpl::m_rgRowHandles", "IRowsetImpl.m_rgRowHandles", "m_rgRowHandles", "ATL::IRowsetImpl::m_rgRowHandles", "ATL.IRowsetImpl.m_rgRowHandles"]
helpviewer_keywords: ["IRowsetImpl class", "AddRefRows method", "CreateRow method", "GetData method [OLE DB]", "GetDBStatus method", "GetNextRows method", "IRowsetImpl constructor", "RefRows method", "ReleaseRows method", "RestartPosition method", "SetDBStatus method", "m_bCanFetchBack", "m_bCanScrollBack", "m_bReset", "m_iRowset", "m_rgRowHandles"]
ms.assetid: 6a9189af-7556-45b1-adcb-9d62bb36704c
---
# IRowsetImpl Class

Provides an implementation of the `IRowset` interface.

## Syntax

```cpp
template <
   class T,
   class RowsetInterface,
   class RowClass = CSimpleRow,
   class MapClass = CAtlMap <
      RowClass::KeyType,
      RowClass*>>
class ATL_NO_VTABLE IRowsetImpl : public RowsetInterface
```

### Parameters

*T*<br/>
Your class, derived from `IRowsetImpl`.

*RowsetInterface*<br/>
A class derived from `IRowsetImpl`.

*RowClass*<br/>
Storage unit for the `HROW`.

*MapClass*<br/>
Storage unit for all row handles held by the provider.

## Requirements

**Header:** atldb.h

## Members

### Methods

| Name | Description |
|-|-|
|[AddRefRows](#addrefrows)|Adds a reference count to an existing row handle.|
|[CreateRow](#createrow)|Called by [GetNextRows](#getnextrows) to allocate a new `HROW`. Not called directly by user.|
|[GetData](#getdata)|Retrieves data from the rowset's copy of the row.|
|[GetDBStatus](#getdbstatus)|Returns the status for the specified field.|
|[GetNextRows](#getnextrows)|Fetches rows sequentially, remembering the previous position.|
|[IRowsetImpl](#irowsetimpl)|The constructor. Not called directly by user.|
|[RefRows](#refrows)|Called by [AddRefRows](#addrefrows) and [ReleaseRows](#releaserows). Not called directly by user.|
|[ReleaseRows](#releaserows)|Releases rows.|
|[RestartPosition](#restartposition)|Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.|
|[SetDBStatus](#setdbstatus)|Sets the status flags for the specified field.|

### Data Members

| Name | Description |
|-|-|
|[m_bCanFetchBack](#bcanfetchback)|Indicates whether a provider supports backward fetching.|
|[m_bCanScrollBack](#bcanscrollback)|Indicates whether a provider can have its cursor scroll backwards.|
|[m_bReset](#breset)|Indicates whether a provider has reset its cursor position. This has special meaning when scrolling backwards or fetching backwards in [GetNextRows](#getnextrows).|
|[m_iRowset](#irowset)|An index to the rowset, representing the cursor.|
|[m_rgRowHandles](#rgrowhandles)|A list of row handles.|

## Remarks

[IRowset](/previous-versions/windows/desktop/ms720986(v=vs.85)) is the base rowset interface.

## <a name="addrefrows"></a> IRowsetImpl::AddRefRows

Adds a reference count to an existing row handle.

### Syntax

```cpp
STDMETHOD(AddRefRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### Parameters

See [IRowset::AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="createrow"></a> IRowsetImpl::CreateRow

A helper method called by [GetNextRows](#getnextrows) to allocate a new `HROW`.

### Syntax

```cpp
HRESULT CreateRow(DBROWOFFSET lRowsOffset,
   DBCOUNTITEM& cRowsObtained,
   HROW* rgRows);
```

#### Parameters

*lRowsOffset*<br/>
Cursor position of the row being created.

*cRowsObtained*<br/>
A reference passed back to the user indicating the number of rows created.

*rgRows*<br/>
An array of `HROW`s returned to the caller with the newly created row handles.

### Remarks

If the row exists, this method calls [AddRefRows](#addrefrows) and returns. Otherwise, it allocates a new instance of the RowClass template variable and adds it to [m_rgRowHandles](#rgrowhandles).

## <a name="getdata"></a> IRowsetImpl::GetData

Retrieves data from the rowset's copy of the row.

### Syntax

```cpp
STDMETHOD(GetData )(HROW hRow,
   HACCESSOR hAccessor,
   void* pDstData);
```

#### Parameters

See [IRowset::GetData](/previous-versions/windows/desktop/ms716988(v=vs.85)) in the *OLE DB Programmer's Reference*.

Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in `IRowset::GetData`:

|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|
|--------------------------------|------------------------------------------------|
|*pDstData*|*pData*|

### Remarks

Also handles data conversion using the OLE DB data conversion DLL.

## <a name="getdbstatus"></a> IRowsetImpl::GetDBStatus

Returns the DBSTATUS status flags for the specified field.

### Syntax

```cpp
virtual DBSTATUS GetDBStatus(RowClass* currentRow,
   ATLCOLUMNINFO* columnNames);
```

#### Parameters

*currentRow*<br/>
[in] The current row.

*columnNames*<br/>
[in] The column for which status is being requested.

### Return Value

The [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) flags for the column.

## <a name="getnextrows"></a> IRowsetImpl::GetNextRows

Fetches rows sequentially, remembering the previous position.

### Syntax

```cpp
STDMETHOD(GetNextRows )(HCHAPTER hReserved,
   DBROWOFFSET lRowsOffset,
   DBROWCOUNT cRows,
   DBCOUNTITEM* pcRowsObtained,
   HROW** prghRows);
```

#### Parameters

See [IRowset::GetNextRows](/previous-versions/windows/desktop/ms709827(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="irowsetimpl"></a> IRowsetImpl::IRowsetImpl

The constructor.

### Syntax

```cpp
IRowsetImpl();
```

### Remarks

You usually do not need to call this method directly.

## <a name="refrows"></a> IRowsetImpl::RefRows

Called by [AddRefRows](#addrefrows) and [ReleaseRows](#releaserows) to either increment or release a reference count to an existing row handle.

### Syntax

```cpp
HRESULT RefRows(DBCOUNTITEM cRows,
   const HROWrghRows[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[],
   BOOL bAdd);
```

#### Parameters

See [IRowset::AddRefRows](/previous-versions/windows/desktop/ms719619(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Return Value

A standard HRESULT value.

## <a name="releaserows"></a> IRowsetImpl::ReleaseRows

Releases rows.

### Syntax

```cpp
STDMETHOD(ReleaseRows )(DBCOUNTITEM cRows,
   const HROW rghRows[],
   DBROWOPTIONS rgRowOptions[],
   DBREFCOUNT rgRefCounts[],
   DBROWSTATUS rgRowStatus[]);
```

#### Parameters

See [IRowset::ReleaseRows](/previous-versions/windows/desktop/ms719771(v=vs.85)) in the *OLE DB Programmer's Reference*.

## <a name="restartposition"></a> IRowsetImpl::RestartPosition

Repositions the next fetch position to its initial position; that is, its position when the rowset was first created.

### Syntax

```cpp
STDMETHOD(RestartPosition )(HCHAPTER /* hReserved */);
```

#### Parameters

See [IRowset::RestartPosition](/previous-versions/windows/desktop/ms712877(v=vs.85)) in the *OLE DB Programmer's Reference*.

### Remarks

The rowset position is undefined until `GetNextRow` is called. You can move backwards in a rowet by calling `RestartPosition` and then fetching or scrolling backwards.

## <a name="setdbstatus"></a> IRowsetImpl::SetDBStatus

Sets the DBSTATUS status flags for the specified field.

### Syntax

```cpp
virtual HRESULT SetDBStatus(DBSTATUS* statusFlags,
   RowClass* currentRow,
   ATLCOLUMNINFO* columnInfo);
```

#### Parameters

*statusFlags*<br/>
The [DBSTATUS](/previous-versions/windows/desktop/ms722617(v=vs.85)) flags to set for the column.

*currentRow*<br/>
The current row.

*columnInfo*<br/>
The column for which status is being set.

### Return Value

A standard HRESULT value.

### Remarks

The provider overrides this function to provide special processing for DBSTATUS_S_ISNULL and DBSTATUS_S_DEFAULT.

## <a name="bcanfetchback"></a> IRowsetImpl::m_bCanFetchBack

Indicates whether a provider supports backward fetching.

### Syntax

```cpp
unsigned m_bCanFetchBack:1;
```

### Remarks

Linked to the `DBPROP_CANFETCHBACKWARDS` property in the `DBPROPSET_ROWSET` group. The provider must support `DBPROP_CANFETCHBACKWARDS` for `m_bCanFetchBackwards` to be **`true`**.

## <a name="bcanscrollback"></a> IRowsetImpl::m_bCanScrollBack

Indicates whether a provider can have its cursor scroll backwards.

### Syntax

```cpp
unsigned  m_bCanScrollBack:1;
```

### Remarks

Linked to the `DBPROP_CANSCROLLBACKWARDS` property in the `DBPROPSET_ROWSET` group. The provider must support `DBPROP_CANSCROLLBACKWARDS` for `m_bCanFetchBackwards` to be **`true`**.

## <a name="breset"></a> IRowsetImpl::m_bReset

A bit flag used to determine if the cursor position is defined on the rowset.

### Syntax

```cpp
unsigned m_bReset:1;
```

### Remarks

If the consumer calls [GetNextRows](#getnextrows) with a negative `lOffset` or *cRows* and `m_bReset` is true, `GetNextRows` moves to the end of the rowset. If `m_bReset` is false, the consumer receives an error code, in conformance with the OLE DB specification. The `m_bReset` flag gets set to **`true`** when the rowset is first created and when the consumer calls [IRowsetImpl::RestartPosition](#restartposition). It gets set to **`false`** when you call `GetNextRows`.

## <a name="irowset"></a> IRowsetImpl::m_iRowset

An index to the rowset, representing the cursor.

### Syntax

```cpp
DBROWOFFSET m_iRowset;
```

## <a name="rgrowhandles"></a> IRowsetImpl::m_rgRowHandles

A map of row handles currently contained by the provider in response to `GetNextRows`.

### Syntax

```cpp
MapClass m_rgRowHandles;
```

### Remarks

Row handles are removed by calling `ReleaseRows`. See the [IRowsetImpl overview](../../data/oledb/irowsetimpl-class.md) for the definition of *MapClass*.

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
[CSimpleRow Class](../../data/oledb/csimplerow-class.md)
