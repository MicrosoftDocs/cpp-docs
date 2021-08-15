---
description: "Learn more about: CRBMultiMap Class"
title: "CRBMultiMap Class"
ms.date: "11/04/2016"
f1_keywords: ["CRBMultiMap", "ATLCOLL/ATL::CRBMultiMap", "ATLCOLL/ATL::CRBMultiMap::CRBMultiMap", "ATLCOLL/ATL::CRBMultiMap::FindFirstWithKey", "ATLCOLL/ATL::CRBMultiMap::GetNextValueWithKey", "ATLCOLL/ATL::CRBMultiMap::GetNextWithKey", "ATLCOLL/ATL::CRBMultiMap::Insert", "ATLCOLL/ATL::CRBMultiMap::RemoveKey"]
helpviewer_keywords: ["CRBMultiMap class"]
ms.assetid: 94d3ec0c-3e30-4ab7-a101-d8da4fb8add3
---
# CRBMultiMap Class

This class represents a mapping structure that allows each key can be associated with more than one value, using a Red-Black binary tree.

## Syntax

```
template<typename K,
         typename V,
         class KTraits = CElementTraits<K>,
         class VTraits = CElementTraits<V>>
class CRBMultiMap : public CRBTree<K, V, KTraits, VTraits>
```

#### Parameters

*K*<br/>
The key element type.

*V*<br/>
The value element type.

*KTraits*<br/>
The code used to copy or move key elements. See [CElementTraits Class](../../atl/reference/celementtraits-class.md) for more details.

*VTraits*<br/>
The code used to copy or move value elements.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CRBMultiMap::CRBMultiMap](#crbmultimap)|The constructor.|
|[CRBMultiMap::~CRBMultiMap](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CRBMultiMap::FindFirstWithKey](#findfirstwithkey)|Call this method to find the position of the first element with a given key.|
|[CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey)|Call this method to get the value associated with a given key, and update the position value.|
|[CRBMultiMap::GetNextWithKey](#getnextwithkey)|Call this method to get the element associated with a given key, and update the position value.|
|[CRBMultiMap::Insert](#insert)|Call this method to insert an element pair into the map.|
|[CRBMultiMap::RemoveKey](#removekey)|Call this method to remove all of the key/value elements for a given key.|

## Remarks

`CRBMultiMap` provides support for a mapping array of any given type, managing an ordered array of key elements and values. Unlike the [CRBMap](../../atl/reference/crbmap-class.md) class, each key can be associated with more than one value.

Elements (consisting of a key and a value) are stored in a binary tree structure, using the [CRBMultiMap::Insert](#insert) method. Elements can be removed using the [CRBMultiMap::RemoveKey](#removekey) method, which deletes all elements which match the given key.

Traversing the tree is made possible with methods such as [CRBTree::GetHeadPosition](../../atl/reference/crbtree-class.md#getheadposition), [CRBTree::GetNext](../../atl/reference/crbtree-class.md#getnext), and [CRBTree::GetNextValue](../../atl/reference/crbtree-class.md#getnextvalue). Accessing the potentially multiple values per key is possible using the [CRBMultiMap::FindFirstWithKey](#findfirstwithkey), [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey), and [CRBMultiMap::GetNextWithKey](#getnextwithkey) methods. See the example for [CRBMultiMap::CRBMultiMap](#crbmultimap) for an illustration of this in practice.

The *KTraits* and *VTraits* parameters are traits classes that contain any supplemental code needed to copy or move elements.

`CRBMultiMap` is derived from [CRBTree](../../atl/reference/crbtree-class.md), which implements a binary tree using the Red-Black algorithm. An alternative to `CRBMultiMap` and `CRBMap` is offered by the [CAtlMap](../../atl/reference/catlmap-class.md) class. When only a small number of elements needs to be stored, consider using the [CSimpleMap](../../atl/reference/csimplemap-class.md) class instead.

For a more complete discussion of the various collection classes and their features and performance characteristics, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Inheritance Hierarchy

[CRBTree](../../atl/reference/crbtree-class.md)

`CRBMultiMap`

## Requirements

**Header:** atlcoll.h

## <a name="crbmultimap"></a> CRBMultiMap::CRBMultiMap

The constructor.

```
explicit CRBMultiMap(size_t nBlockSize = 10) throw();
```

### Parameters

*nBlockSize*<br/>
The block size.

### Remarks

The *nBlockSize* parameter is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources. The default will allocate space for 10 elements at a time.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

### Example

[!code-cpp[NVC_ATL_Utilities#85](../../atl/codesnippet/cpp/crbmultimap-class_1.cpp)]

## <a name="dtor"></a> CRBMultiMap::~CRBMultiMap

The destructor.

```
~CRBMultiMap() throw();
```

### Remarks

Frees any allocated resources.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

## <a name="findfirstwithkey"></a> CRBMultiMap::FindFirstWithKey

Call this method to find the position of the first element with a given key.

```
POSITION FindFirstWithKey(KINARGTYPE key) const throw();
```

### Parameters

*key*<br/>
Specifies the key that identifies the element to be found.

### Return Value

Returns the POSITION of the first key/value element if the key is found, NULL otherwise.

### Remarks

A key in the `CRBMultiMap` can have one or more associated values. This method will provide the position value of the first value (which may, in fact, be the only value) associated with that particular key. The position value returned can then be used with [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey) or [CRBMultiMap::GetNextWithKey](#getnextwithkey) to obtain the value and update the position.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

### Example

See the example for [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="getnextvaluewithkey"></a> CRBMultiMap::GetNextValueWithKey

Call this method to get the value associated with a given key and update the position value.

```
const V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
V& GetNextValueWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```

### Parameters

*pos*<br/>
The position value, obtained with either a call to [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) or [CRBMultiMap::GetNextWithKey](#getnextwithkey), or a previous call to `GetNextValueWithKey`.

*key*<br/>
Specifies the key that identifies the element to be found.

### Return Value

Returns the element pair associated with the given key.

### Remarks

The position value is updated to point to the next value associated with the key. If no more values exist, the position value is set to NULL.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

### Example

See the example for [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="getnextwithkey"></a> CRBMultiMap::GetNextWithKey

Call this method to get the element associated with a given key and update the position value.

```
const CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) const throw();
CPair* GetNextWithKey(
    POSITION& pos,
    KINARGTYPE key) throw();
```

### Parameters

*pos*<br/>
The position value, obtained with either a call to [CRBMultiMap::FindFirstWithKey](#findfirstwithkey) or [CRBMultiMap::GetNextValueWithKey](#getnextvaluewithkey), or a previous call to `GetNextWithKey`.

*key*<br/>
Specifies the key that identifies the element to be found.

### Return Value

Returns the next [CRBTree::CPair Class](crbtree-class.md#cpair_class) element associated with the given key.

### Remarks

The position value is updated to point to the next value associated with the key. If no more values exist, the position value is set to NULL.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

## <a name="insert"></a> CRBMultiMap::Insert

Call this method to insert an element pair into the map.

```
POSITION Insert(KINARGTYPE key, VINARGTYPE value) throw(...);
```

### Parameters

*key*<br/>
The key value to add to the `CRBMultiMap` object.

*value*<br/>
The value to add to the `CRBMultiMap` object, associated with *key*.

### Return Value

Returns the position of the key/value element pair in the `CRBMultiMap` object.

### Remarks

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

### Example

See the example for [CRBMultiMap::CRBMultiMap](#crbmultimap).

## <a name="removekey"></a> CRBMultiMap::RemoveKey

Call this method to remove all of the key/value elements for a given key.

```
size_t RemoveKey(KINARGTYPE key) throw();
```

### Parameters

*key*<br/>
Specifies the key that identifies the element(s) to be deleted.

### Return Value

Returns the number of values associated with the given key.

### Remarks

`RemoveKey` deletes all of the key/value elements that have a key that matches *key*.

See the documentation for the base class [CRBTree](../../atl/reference/crbtree-class.md) for information on the other methods available.

### Example

See the example for [CRBMultiMap::CRBMultiMap](#crbmultimap).

## See also

[CRBTree Class](../../atl/reference/crbtree-class.md)<br/>
[CAtlMap Class](../../atl/reference/catlmap-class.md)<br/>
[CRBMap Class](../../atl/reference/crbmap-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
