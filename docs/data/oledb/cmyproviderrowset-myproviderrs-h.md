---
description: "Learn more about: CCustomRowset (CustomRS.H)"
title: "CCustomRowset (CustomRS.H)"
ms.date: "10/22/2018"
f1_keywords: ["cmyproviderrowset", "ccustomrowset"]
helpviewer_keywords: ["OLE DB providers, wizard-generated files", "CMyProviderRowset class in MyProviderRS.H", "CCustomRowset class in CustomRS.H"]
ms.assetid: 7ba1a124-3842-40eb-a36b-302190a1af3a
---
# CCustomRowset (CustomRS.H)

The wizard generates an entry for the rowset object. In this case, it's called `CCustomRowset`. The `CCustomRowset` class inherits from an OLE DB provider class called `CRowsetImpl`, which implements all the necessary interfaces for the rowset object. The following code shows the inheritance chain for `CRowsetImpl`:

```cpp
template <class T, class Storage, class CreatorClass,
   class ArrayType = CAtlArray<Storage>>
class CMyRowsetImpl:
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType,
      CSimpleRow, IRowsetLocateImpl< T >>
```

`CRowsetImpl` also uses the `IAccessor` and `IColumnsInfo` interfaces. It uses these interfaces for output fields in tables. The class also provides an implementation for `IRowsetIdentity`, which allows the consumer to determine if two rows are the same. The `IRowsetInfo` interface implements properties for the rowset object. The `IConvertType` interface allows the provider to resolve differences between data types requested by the consumer and those used by the provider.

The `IRowset` interface actually handles data retrieval. The consumer first calls a method called `GetNextRows` to return a handle to a row, known as an `HROW`. The consumer then calls `IRowset::GetData` with that `HROW` to retrieve the requested data.

`CRowsetImpl` also takes several template parameters. These parameters allow you to determine how the `CRowsetImpl` class handles data. The `ArrayType` argument allows you to determine what storage mechanism is used to store the row data. The *RowClass* parameter specifies what class contains an `HROW`.

The *RowsetInterface* parameter allows you to also use the `IRowsetLocate` or `IRowsetScroll` interface. The `IRowsetLocate` and `IRowsetScroll` interfaces both inherit from `IRowset`. Therefore, the OLE DB provider templates must provide special handling for these interfaces. If you want to use either of these interfaces, you need to use this parameter.

## See also

[Provider Wizard-Generated Files](../../data/oledb/provider-wizard-generated-files.md)<br/>
