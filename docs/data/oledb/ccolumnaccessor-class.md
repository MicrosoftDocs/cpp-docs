---
description: "Learn more about: CColumnAccessor Class"
title: "CColumnAccessor Class"
ms.date: "11/04/2016"
f1_keywords: ["CColumnAccessor", "ATL::CColumnAccessor", "ATL.CColumnAccessor"]
helpviewer_keywords: ["CColumnAccessor class"]
ms.assetid: 6ce1e67f-6a20-490d-9326-c168b43eee7e
---
# CColumnAccessor Class

Generates injected consumer code.

## Syntax

```cpp
class CColumnAccessor : public CAccessorBase
```

## Remarks

In the injected code, every column is bound as a separate accessor. You should be aware that this class is used in the injected code (for example, you might encounter it when debugging), but you typically never have to use it or its methods directly.

`CColumnAccessor` implements the following stub methods, each of which correspond in functionality to other accessor class methods:

- `CColumnAccessor` The constructor; instantiates and initializes the `CColumnAccessor` object.

- `CreateAccessor` Allocates memory for the column binding structures and initializes the column data members.

- `BindColumns` Binds columns to accessors.

- `SetParameterBuffer` Allocates buffers for parameters.

- `AddParameter` Adds a parameter entry to the parameter entry structures.

- `HasOutputColumns` Determines whether the accessor has output columns

- `HasParameters` Determines whether the accessor has parameters.

- `BindParameters` Binds the created parameters to columns.

## Requirements

**Header:** atldbcli.h

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)
