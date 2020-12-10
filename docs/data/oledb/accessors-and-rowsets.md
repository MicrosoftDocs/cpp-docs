---
description: "Learn more about: Accessors and Rowsets"
title: "Accessors and Rowsets"
ms.date: "11/19/2018"
helpviewer_keywords: ["accessors [C++]", "OLE DB consumer templates, rowset support", "OLE DB consumer templates, accessors", "rowsets [C++], accessing", "bulk rowsets", "CAccessorRowset class, accessor types", "single rowsets", "CArrayRowset class, accessors", "CBulkRowset class, accessors", "array rowsets", "CAccessorBase class", "CRowset class, accessors and rowsets", "accessors [C++], rowsets", "rowsets [C++], supported types"]
ms.assetid: edc9c8b3-1a2d-4c2d-869f-7e058c631042
---
# Accessors and Rowsets

To set and retrieve data, OLE DB Templates use an accessor and a rowset through the [CAccessorRowset](../../data/oledb/caccessorrowset-class.md) class. This class can handle multiple accessors of different types.

## Accessor Types

All accessors derive from [CAccessorBase](../../data/oledb/caccessorbase-class.md). `CAccessorBase` provides both parameter and column binding.

The following figure shows the accessor types.

![Accessor types](../../data/oledb/media/vcaccessortypes.gif "Accessor types")<br/>
Accessor Classes

- [CAccessor](../../data/oledb/caccessor-class.md) Use this accessor when you know the structure of the database source at design time. `CAccessor` statically binds a database record, which contains the buffer, to the data source.

- [CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md) Use this accessor when you don't know the structure of the database at design time. `CDynamicAccessor` calls `IColumnsInfo::GetColumnInfo` to get the database column information. It creates and manages an accessor and the buffer.

- [CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md) Use this accessor to handle unknown command types. When you prepare the commands, `CDynamicParameterAccessor` can get parameter information from the `ICommandWithParameters` interface, if the provider supports `ICommandWithParameters`.

- [CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md), [CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md), and [CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md) Use these classes when you have no knowledge of the database schema. `CDynamicStringAccessorA` retrieves data as ANSI strings; `CDynamicStringAccessorW` retrieves data as Unicode strings.

- [CManualAccessor](../../data/oledb/cmanualaccessor-class.md) With this class, you can use whatever data types you want if the provider can convert the type. It handles both result columns and command parameters.

The following table summarizes the support in the OLE DB Template accessor types.

|Accessor type|Dynamic|Handles params|Buffer|Multiple accessors|
|-------------------|-------------|--------------------|------------|------------------------|
|`CAccessor`|No|Yes|User|Yes|
|`CDynamicAccessor`|Yes|No|OLE DB Templates|No|
|`CDynamicParameterAccessor`|Yes|Yes|OLE DB Templates|No|
|`CDynamicStringAccessor[A,W]`|Yes|No|OLE DB Templates|No|
|`CManualAccessor`|Yes|Yes|User|Yes|

## Rowset Types

The OLE DB Templates support three kinds of rowsets (see the preceding figure): single rowsets (implemented by [CRowset](../../data/oledb/crowset-class.md)), bulk rowsets (implemented by [CBulkRowset](../../data/oledb/cbulkrowset-class.md)), and array rowsets (implemented by [CArrayRowset](../../data/oledb/carrayrowset-class.md)). Single rowsets fetch a single row handle when `MoveNext` is called. Bulk rowsets can fetch multiple row handles. Array rowsets are rowsets that can be accessed using array syntax.

The following figure shows the rowset types.

![RowsetType graphic](../../data/oledb/media/vcrowsettypes.gif "RowsetType graphic")<br/>
Rowset Classes

[Schema rowsets](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) don't access data in the data store but instead access information about the data store, called metadata. Schema rowsets are typically used in situations in which the database structure isn't known at compile time and must be obtained at run time.

## See also

[OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)
