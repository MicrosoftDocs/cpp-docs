---
description: "Learn more about: Determining Which Type of Accessor to Use"
title: "Determining Which Type of Accessor to Use"
ms.date: "05/09/2019"
helpviewer_keywords: ["rowsets [C++], data types", "accessors [C++], types"]
ms.assetid: 22483dd2-f4e0-4dcb-8e4d-cd43a9c1a3db
---
# Determining Which Type of Accessor to Use

You can determine data types on a rowset at compile time or at run time.

If you need to determine data types at compile time, use a static accessor (such as `CAccessor`).

If you need to determine the data types at run time, use a dynamic (`CDynamicAccessor` or its children) or manual accessor (`CManualAccessor`). In these cases, you can call `GetColumnInfo` on the rowset to return the column binding information, from which you can determine types.

The following table lists the types of accessors provided in the consumer templates. Each accessor has advantages and disadvantages. Depending on your situation, one accessor type should suit your needs.

|Accessor class|Binding|Parameter|Comment|
|--------------------|-------------|---------------|-------------|
|`CAccessor`|Create a user record with COLUMN_ENTRY macros. The macros bind a data member in that record to the accessor. When the rowset is created, columns can't be unbound.|Yes, by using a PARAM_MAP macro entry. Once bound, parameters can't be unbound.|Fastest accessor because of small amount of code.|
|`CDynamicAccessor`|Automatic.|No.|Useful if you don't know the type of data in a rowset.|
|`CDynamicParameterAccessor`|Automatic, but can be [overridden](../../data/oledb/overriding-a-dynamic-accessor.md).|Yes, if the provider supports `ICommandWithParameters`. Parameters bound automatically.|Slower than `CDynamicAccessor` but useful for calling generic stored procedures.|
|`CDynamicStringAccessor[A,W]`|Automatic.|No.|Retrieves data accessed from the data store as string data.|
|`CManualAccessor`|Manual using `AddBindEntry`.|Manually using `AddParameterEntry`.|Fast; parameters and columns bound only once. You determine the type of data to use. (See [DBVIEWER](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Consumer) sample for an example.) Requires more code than `CDynamicAccessor` or `CAccessor`. It's more like calling OLE DB directly.|
|`CXMLAccessor`|Automatic.|No.|Retrieves data accessed from the data store as string data and formats it as XML-tagged data.|

## See also

[Using Accessors](../../data/oledb/using-accessors.md)
