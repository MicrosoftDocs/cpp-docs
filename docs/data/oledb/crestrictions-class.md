---
description: "Learn more about: CRestrictions Class"
title: "CRestrictions Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CRestrictions", "CRestrictions", "ATL.CRestrictions", "CRestrictions.Open", "ATL::CRestrictions::Open", "ATL.CRestrictions.Open", "CRestrictions::Open"]
helpviewer_keywords: ["CRestrictions class", "Open method"]
ms.assetid: 0aaa2364-641c-4318-b110-7446aada4b4f
---
# CRestrictions Class

A generic class that allows you to specify restrictions for schema rowsets.

## Syntax

```cpp
template <class T, short nRestrictions, const GUID* pguid>
class CRestrictions :
   public CSchemaRowset <T, nRestrictions>
```

### Parameters

*T*<br/>
The class used for the accessor.

*nRestrictions*<br/>
The number of restriction columns for the schema rowset.

*pguid*<br/>
A pointer to the GUID for the schema.

## Requirements

**Header:** atldbsch.h

## Members

### Methods

| Name | Description |
|-|-|
|[Open](#open)|Returns a result set according to the user-supplied restrictions.|

## <a name="open"></a> CRestrictions::Open

Returns a result set according to the user-supplied restrictions.

### Syntax

```cpp
HRESULT Open(const CSession& session,
   LPCTSTR lpszParam 1 = NULL,
   LPCTSTR lpszParam 2 = NULL,
   LPCTSTR lpszParam 3 = NULL,
   LPCTSTR lpszParam 4 = NULL,
   LPCTSTR lpszParam 5 = NULL,
   LPCTSTR lpszParam 6 = NULL,
   LPCTSTR lpszParam 7 = NULL,
   bool bBind = true);
```

#### Parameters

*session*<br/>
[in] Specifies an existing session object used to connect to the data source.

*lpszParam*<br/>
[in] Specifies the restrictions on the schema rowset.

*bBind*<br/>
[in] Specifies whether to bind the column map automatically. The default is **`true`**, which causes the column map to be bound automatically. Setting *bBind* to **`false`** prevents the automatic binding of the column map so that you can bind manually. (Manual binding is of particular interest to OLAP users.)

### Return Value

One of the standard HRESULT values.

### Remarks

You can specify a maximum of seven restrictions on a schema rowset.

See [IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85)) for information about the defined restrictions on each schema rowset.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)
