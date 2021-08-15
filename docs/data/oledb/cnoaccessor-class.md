---
description: "Learn more about: CNoAccessor Class"
title: "CNoAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["ATL::CNoAccessor", "CNoAccessor", "ATL.CNoAccessor"]
helpviewer_keywords: ["CNoAccessor class"]
ms.assetid: eb669ae5-0a56-49a3-9646-c4ae6239da31
---
# CNoAccessor Class

Can be used as a template argument (`TAccessor`) for template classes, such as `CCommand` and `CTable`, that require an accessor class argument.

## Syntax

```cpp
class CNoAccessor
```

## Remarks

Use `CNoAccessor` as a template argument when you do not want the class to support parameters or output columns.

`CNoAccessor` implements the following stub methods, each of which correspond to other accessor class methods:

- `BindColumns` - Binds columns to accessors.

- `BindParameters` - Binds the created parameters to columns.

- `Bind` - Creates bindings.

- `Close` - Closes the accessor.

- `ReleaseAccessors` - Releases the accessors created by the class.

- `FreeRecordMemory` - Frees any columns in the current record that need to be freed.

- `GetColumnInfo` - Gets column information from the opened rowset.

- `GetNumAccessors` - Retrieves the number of accessors created by the class.

- `IsAutoAccessor` - Returns true if data is automatically retrieved for the accessor during a Move operation.

- `GetHAccessor` - Retrieves the accessor handle of a specified accessor.

- `GetBuffer` - Retrieves the pointer to the bookmark buffer.

- `NoBindOnNullRowset` - Prevents data binding on empty rowsets.

## Requirements

**Header:** atldbcli.h

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
