---
description: "Learn more about: CDynamicStringAccessorW Class"
title: "CDynamicStringAccessorW Class"
ms.date: "11/04/2016"
f1_keywords: ["CDynamicStringAccessorW"]
helpviewer_keywords: ["CDynamicStringAccessorW class"]
ms.assetid: 9b7fd5cc-3a9b-4b57-b907-f1e35de2c98f
---
# CDynamicStringAccessorW Class

Allows you to access a data source when you have no knowledge of the database schema (underlying structure).

## Syntax

```cpp
typedef CDynamicStringAccessorT<WCHAR, DBTYPE_WSTR> CDynamicStringAccessorW;
```

## Remarks

They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests Unicode string data.

`CDynamicStringAccessorW` inherits `GetString` and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorW` object, `BaseType` is **WCHAR**.

## Requirements

**Header**: atldbcli.h

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)<br/>
[OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)<br/>
[CAccessor Class](../../data/oledb/caccessor-class.md)<br/>
[CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
[CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)<br/>
[CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)<br/>
[CDynamicStringAccessor Class](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
