---
description: "Learn more about: CNoRowset Class"
title: "CNoRowset Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL.CNoRowset", "ATL::CNoRowset<TAccessor>", "CNoRowset", "ATL.CNoRowset<TAccessor>", "ATL::CNoRowset"]
helpviewer_keywords: ["CNoRowset class"]
ms.assetid: 55c6c7a4-9e3a-4775-a2dd-c8b333012fa6
---
# CNoRowset Class

Can be used as a template argument (`TRowset`) for [CCommand](../../data/oledb/ccommand-class.md) or [CTable](../../data/oledb/ctable-class.md).

## Syntax

```cpp
template <class TAccessor = CAccessorBase>
class CNoRowset
```

### Parameters

*TAccessor*<br/>
An accessor class. The default is `CAccessorBase`.

## Remarks

Use `CNoRowset` as a template argument if the command does not return a rowset.

`CNoRowset` implements the following stub methods, each of which correspond to other accessor class methods:

- `BindFinished` - Indicates when binding is complete (returns `S_OK`).

- `Close` - Releases rows and the current IRowset interface.

- `GetIID` - Retrieves the interface ID of a connection point.

- `GetInterface` - Retrieves an interface.

- `GetInterfacePtr` - Retrieves an encapsulated interface pointer.

- `SetAccessor` - Sets a pointer to the accessor.

- `SetupOptionalRowsetInterfaces` - Sets up optional interfaces for the rowset.

## Requirements

**Header:** atldbcli.h

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
