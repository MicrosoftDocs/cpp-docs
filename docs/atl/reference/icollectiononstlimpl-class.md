---
description: "Learn more about: ICollectionOnSTLImpl Class"
title: "ICollectionOnSTLImpl Class"
ms.date: "11/04/2016"
f1_keywords: ["ICollectionOnSTLImpl", "ATLCOM/ATL::ICollectionOnSTLImpl", "ATLCOM/ATL::ICollectionOnSTLImpl::get__NewEnum", "ATLCOM/ATL::ICollectionOnSTLImpl::getcount", "ATLCOM/ATL::ICollectionOnSTLImpl::get_Item", "ATLCOM/ATL::ICollectionOnSTLImpl::m_coll"]
helpviewer_keywords: ["ICollectionOnSTLImpl class"]
ms.assetid: 683c88b0-0d97-4779-a762-e493334ba7f9
---
# ICollectionOnSTLImpl Class

This class provides methods used by a collection class.

## Syntax

```
template <class T, class CollType, class ItemType, class CopyItem, class EnumType>
class ICollectionOnSTLImpl : public T
```

#### Parameters

*T*<br/>
A COM collection interface.

*CollType*<br/>
A C++ Standard Library container class.

*ItemType*<br/>
The type of item exposed by the container interface.

*CopyItem*<br/>
A [copy policy class](../../atl/atl-copy-policy-classes.md).

*EnumType*<br/>
A [CComEnumOnSTL](../../atl/reference/ccomenumonstl-class.md)-compatible enumerator class.

## Members

### Public Methods

|Name|Description|
|----------|-----------------|
|[ICollectionOnSTLImpl::get__NewEnum](#newenum)|Returns an enumerator object for the collection.|
|[ICollectionOnSTLImpl::getcount](#get_count)|Returns the number of elements in the collection.|
|[ICollectionOnSTLImpl::get_Item](#get_item)|Returns the requested item from the collection.|

### Public Data Members

|Name|Description|
|----------|-----------------|
|[ICollectionOnSTLImpl::m_coll](#m_coll)|The collection.|

## Remarks

This class provides the implementation for three methods of a collection interface: [getcount](#get_count), [get_Item](#get_item), and [get__NewEnum](#newenum).

To use this class:

- Define (or borrow) a collection interface that you wish to implement.

- Derive your class from a specialization of `ICollectionOnSTLImpl` based on this collection interface.

- Use your derived class to implement any methods from the collection interface not handled by `ICollectionOnSTLImpl`.

> [!NOTE]
> If the collection interface is a dual interface, derive your class from [IDispatchImpl](../../atl/reference/idispatchimpl-class.md), passing the `ICollectionOnSTLImpl` specialization as the first template parameter if you want ATL to provide the implementation of the `IDispatch` methods.

- Add items to the [m_coll](#m_coll) member to populate the collection.

For more information and examples, see [ATL Collections and Enumerators](../../atl/atl-collections-and-enumerators.md).

## Inheritance Hierarchy

`T`

`ICollectionOnSTLImpl`

## Requirements

**Header:** atlcom.h

## <a name="get_count"></a> ICollectionOnSTLImpl::getcount

This method returns the number of items in the collection.

```
STDMETHOD(getcount)(long* pcount);
```

### Parameters

*pcount*<br/>
[out] The number of elements in the collection.

### Return Value

A standard HRESULT value.

## <a name="get_item"></a> ICollectionOnSTLImpl::get_Item

This method returns the specified item from the collection.

```
STDMETHOD(get_Item)(long Index, ItemType* pvar);
```

### Parameters

*Index*<br/>
[in] The 1-based index of an item in the collection.

*pvar*<br/>
[out] The item corresponding to *Index*.

### Return Value

A standard HRESULT value.

### Remarks

The item is obtained by copying the data at the specified position in [m_coll](#m_coll) using the copy method of the [copy policy class](../../atl/atl-copy-policy-classes.md) passed as a template argument in the `ICollectionOnSTLImpl` specialization.

## <a name="newenum"></a> ICollectionOnSTLImpl::get__NewEnum

Returns an enumerator object for the collection.

```
STDMETHOD(get__NewEnum)(IUnknown** ppUnk);
```

### Parameters

*ppUnk*<br/>
[out] The **IUnknown** pointer of a newly created enumerator object.

### Return Value

A standard HRESULT value.

### Remarks

The newly created enumerator maintains an iterator on the original collection, `m_coll`, (so no copy is made) and holds a COM reference on the collection object to ensure that the collection remains alive while there are outstanding enumerators.

## <a name="m_coll"></a> ICollectionOnSTLImpl::m_coll

This member holds the items represented by the collection.

```
CollType m_coll;
```

## See also

[ATLCollections Sample](../../overview/visual-cpp-samples.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
