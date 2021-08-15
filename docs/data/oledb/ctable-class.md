---
description: "Learn more about: CTable Class"
title: "CTable Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CTable", "ATL.CTable", "CTable", "ATL.CTable.Open", "ATL::CTable::Open", "CTable::Open", "CTable.Open"]
helpviewer_keywords: ["CTable class", "Open method"]
ms.assetid: f13fdaa3-e198-4557-977d-54b0bbc3454d
---
# CTable Class

Provides a means to directly access a simple rowset (one with no parameters).

## Syntax

```cpp
template <class TAccessor = CNoAccessor,
            template <typename T> class TRowset = CRowset>
class CTable :
   public CAccessorRowset <TAccessor, TRowset>
```

### Parameters

*TAccessor*<br/>
An accessor class.

*TRowset*<br/>
A rowset class.

## Requirements

**Header:** atldbcli.h

## Members

### Methods

| Name | Description |
|-|-|
|[Open](#open)|Opens the table.|

## Remarks

See [CCommand](../../data/oledb/ccommand-class.md) for information on how to execute a command to access a rowset.

## <a name="open"></a> CTable::Open

Opens the table.

### Syntax

```cpp
HRESULT Open(const CSession& session,
   LPCWSTR wszTableName,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();

HRESULT Open(const CSession& session,
   LPCSTR szTableName,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();

HRESULT Open(const CSession& session,
   DBID& dbid,
   DBPROPSET* pPropSet = NULL,
   ULONG ulPropSets = 0) throw ();
```

#### Parameters

*session*<br/>
[in] The session for which the table is opened.

*wszTableName*<br/>
[in] The name of the table to open, passed as a Unicode string.

*szTableName*<br/>
[in] The name of the table to open, passed as an ANSI string.

*dbid*<br/>
[in] The `DBID` of the table to open.

*pPropSet*<br/>
[in] A pointer to an array of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures containing properties and values to be set. See [Property Sets and Property Groups](/previous-versions/windows/desktop/ms713696(v=vs.85)) in the *OLE DB Programmer's Reference* in the Windows SDK. The default value of NULL specifies no properties.

*ulPropSets*<br/>
[in] The number of [DBPROPSET](/previous-versions/windows/desktop/ms714367(v=vs.85)) structures passed in the *pPropSet* argument.

### Return Value

A standard HRESULT.

### Remarks

For more details, see [IOpenRowset::OpenRowset](/previous-versions/windows/desktop/ms716724(v=vs.85)) in the *OLE DB Programmer's Reference*.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
