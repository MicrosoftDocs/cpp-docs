---
description: "Learn more about: Modifying the Inheritance of RCustomRowset"
title: "Modifying the Inheritance of RCustomRowset"
ms.date: "10/26/2018"
helpviewer_keywords: ["RMyProviderRowset", "inheritance [C++]", "RCustomRowset"]
ms.assetid: 33089c90-98a4-43e7-8e67-d4bb137e267e
---
# Modifying the Inheritance of RCustomRowset

To add the `IRowsetLocate` interface to the simple read-only provider example, modify the inheritance of `CCustomRowset`. Initially, `CCustomRowset` inherits from `CRowsetImpl`. You need to modify it to inherit from `CRowsetBaseImpl`.

To do this, create a new class, `CCustomRowsetImpl`, in *Custom*RS.h:

```cpp
////////////////////////////////////////////////////////////////////////
// CustomRS.h

template <class T, class Storage, class CreatorClass, class ArrayType = CAtlArray<Storage>>
class CMyRowsetImpl:
   public CRowsetImpl<T, Storage, CreatorClass, ArrayType, CSimpleRow, IRowsetLocateImpl< T, IRowsetLocate >>
{
...
};
```

Now, edit the COM interface map in *Custom*RS.h to be as follows:

```cpp
BEGIN_COM_MAP(CMyRowsetImpl)
   COM_INTERFACE_ENTRY(IRowsetLocate)
   COM_INTERFACE_ENTRY_CHAIN(_RowsetBaseClass)
END_COM_MAP()
```

This code creates a COM interface map that tells `CMyRowsetImpl` to call `QueryInterface` for both the `IRowset` and `IRowsetLocate` interfaces. To get all of the implementation for the other rowset classes, the map links the `CMyRowsetImpl` class back to the `CRowsetBaseImpl` class defined by the OLE DB Templates; the map uses the COM_INTERFACE_ENTRY_CHAIN macro, which tells OLE DB templates to scan the COM map in `CRowsetBaseImpl` in response to a `QueryInterface` call.

Finally, link `CCustomRowset` to `CMyRowsetBaseImpl` by modifying `CCustomRowset` to inherit from `CMyRowsetImpl`, as follows:

```cpp
class CCustomRowset : public CMyRowsetImpl<CCustomRowset, CCustomWindowsFile, CCustomCommand>
```

`CCustomRowset` can now use the `IRowsetLocate` interface while taking advantage of the rest of the implementation for the rowset class.

When this is done, you can [dynamically determine columns returned to the consumer](../../data/oledb/dynamically-determining-columns-returned-to-the-consumer.md).

## See also

[Enhancing the Simple Read-Only Provider](../../data/oledb/enhancing-the-simple-read-only-provider.md)<br/>
