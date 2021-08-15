---
description: "Learn more about: CDynamicStringAccessorA Class"
title: "CDynamicStringAccessorA Class"
ms.date: "11/04/2016"
f1_keywords: ["CDynamicStringAccessorA"]
helpviewer_keywords: ["CDynamicStringAccessorA class"]
ms.assetid: ed0d9821-a655-41f1-a902-43c3042ac49c
---
# CDynamicStringAccessorA Class

Allows you to access a data source when you have no knowledge of the database schema (underlying structure).

## Syntax

```cpp
typedef CDynamicStringAccessorT<CHAR, DBTYPE_STR> CDynamicStringAccessorA;
```

## Remarks

They both request that the provider fetch all data accessed from the data store as string data, but `CDynamicStringAccessor` requests ANSI string data.

`CDynamicStringAccessorA` inherits `GetString` and `SetString` from `CDynamicStringAccessor`. When you use these methods in a `CDynamicStringAccessorA` object, `BaseType` is **CHAR**.

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
