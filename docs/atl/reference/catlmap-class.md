---
description: "Learn more about: CAtlMap Class"
title: "CAtlMap Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlMap", "ATLCOLL/ATL::CAtlMap", "ATLCOLL/ATL::CAtlMap::KINARGTYPE", "ATLCOLL/ATL::CAtlMap::KOUTARGTYPE", "ATLCOLL/ATL::CAtlMap::VINARGTYPE", "ATLCOLL/ATL::CAtlMap::VOUTARGTYPE", "ATLCOLL/ATL::CPair::m_key", "ATLCOLL/ATL::CPair::m_value", "ATLCOLL/ATL::CAtlMap::CAtlMap", "ATLCOLL/ATL::CAtlMap::AssertValid", "ATLCOLL/ATL::CAtlMap::DisableAutoRehash", "ATLCOLL/ATL::CAtlMap::EnableAutoRehash", "ATLCOLL/ATL::CAtlMap::GetAt", "ATLCOLL/ATL::CAtlMap::GetCount", "ATLCOLL/ATL::CAtlMap::GetHashTableSize", "ATLCOLL/ATL::CAtlMap::GetKeyAt", "ATLCOLL/ATL::CAtlMap::GetNext", "ATLCOLL/ATL::CAtlMap::GetNextAssoc", "ATLCOLL/ATL::CAtlMap::GetNextKey", "ATLCOLL/ATL::CAtlMap::GetNextValue", "ATLCOLL/ATL::CAtlMap::GetStartPosition", "ATLCOLL/ATL::CAtlMap::GetValueAt", "ATLCOLL/ATL::CAtlMap::InitHashTable", "ATLCOLL/ATL::CAtlMap::IsEmpty", "ATLCOLL/ATL::CAtlMap::Lookup", "ATLCOLL/ATL::CAtlMap::Rehash", "ATLCOLL/ATL::CAtlMap::RemoveAll", "ATLCOLL/ATL::CAtlMap::RemoveAtPos", "ATLCOLL/ATL::CAtlMap::RemoveKey", "ATLCOLL/ATL::CAtlMap::SetAt", "ATLCOLL/ATL::CAtlMap::SetOptimalLoad", "ATLCOLL/ATL::CAtlMap::SetValueAt"]
helpviewer_keywords: ["CAtlMap class"]
ms.assetid: 5e2fe028-8e6d-4686-93df-1433d2080ec3
---
# CAtlMap Class

This class provides methods for creating and managing a map object.

## Syntax

```cpp
template <typename K,
          typename V,
          class KTraits = CElementTraits<K>,
          class VTraits = CElementTraits<V>>
class CAtlMap
```

### Parameters

*K*<br/>
The key element type.

*V*<br/>
The value element type.

*KTraits*<br/>
The code used to copy or move key elements. See [CElementTraits Class](../../atl/reference/celementtraits-class.md) for more details.

*VTraits*<br/>
The code used to copy or move value elements.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CAtlMap::KINARGTYPE](#kinargtype)|Type used when a key is passed as an input argument|
|[CAtlMap::KOUTARGTYPE](#koutargtype)|Type used when a key is returned as an output argument.|
|[CAtlMap::VINARGTYPE](#vinargtype)|Type used when a value is passed as an input argument.|
|[CAtlMap::VOUTARGTYPE](#voutargtype)|Type used when a value is passed as an output argument.|

### Public Classes

|Name|Description|
|----------|-----------------|
|[CAtlMap::CPair Class](#cpair_class)|A class containing the key and value elements.|

### CPair Data Members

|Name|Description|
|----------|-----------------|
|[CPair::m_key](#m_key)|The data member storing the key element.|
|[CPair::m_value](#m_value)|The data member storing the value element.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CAtlMap::CAtlMap](#catlmap)|The constructor.|
|[CAtlMap::~CAtlMap](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CAtlMap::AssertValid](#assertvalid)|Call this method to cause an ASSERT if the `CAtlMap` is not valid.|
|[CAtlMap::DisableAutoRehash](#disableautorehash)|Call this method to disable automatic rehashing of the `CAtlMap` object.|
|[CAtlMap::EnableAutoRehash](#enableautorehash)|Call this method to enable automatic rehashing of the `CAtlMap` object.|
|[CAtlMap::GetAt](#getat)|Call this method to return the element at a specified position in the map.|
|[CAtlMap::GetCount](#getcount)|Call this method to retrieve the number of elements in the map.|
|[CAtlMap::GetHashTableSize](#gethashtablesize)|Call this method to determine the number of bins in the map's hash table.|
|[CAtlMap::GetKeyAt](#getkeyat)|Call this method to retrieve the key stored at the given position in the `CAtlMap` object.|
|[CAtlMap::GetNext](#getnext)|Call this method to obtain a pointer to the next element pair stored in the `CAtlMap` object.|
|[CAtlMap::GetNextAssoc](#getnextassoc)|Gets the next element for iterating.|
|[CAtlMap::GetNextKey](#getnextkey)|Call this method to retrieve the next key from the `CAtlMap` object.|
|[CAtlMap::GetNextValue](#getnextvalue)|Call this method to get the next value from the `CAtlMap` object.|
|[CAtlMap::GetStartPosition](#getstartposition)|Call this method to start a map iteration.|
|[CAtlMap::GetValueAt](#getvalueat)|Call this method to retrieve the value stored at a given position in the `CAtlMap` object.|
|[CAtlMap::InitHashTable](#inithashtable)|Call this method to initialize the hash table.|
|[CAtlMap::IsEmpty](#isempty)|Call this method to test for an empty map object.|
|[CAtlMap::Lookup](#lookup)|Call this method to look up keys or values in the `CAtlMap` object.|
|[CAtlMap::Rehash](#rehash)|Call this method to rehash the `CAtlMap` object.|
|[CAtlMap::RemoveAll](#removeall)|Call this method to remove all elements from the `CAtlMap` object.|
|[CAtlMap::RemoveAtPos](#removeatpos)|Call this method to remove the element at the given position in the `CAtlMap` object.|
|[CAtlMap::RemoveKey](#removekey)|Call this method to remove an element from the `CAtlMap` object, given the key.|
|[CAtlMap::SetAt](#setat)|Call this method to insert an element pair into the map.|
|[CAtlMap::SetOptimalLoad](#setoptimalload)|Call this method to set the optimal load of the `CAtlMap` object.|
|[CAtlMap::SetValueAt](#setvalueat)|Call this method to change the value stored at a given position in the `CAtlMap` object.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CAtlMap::operator\[\]](catlmap-class.md#operator_at)|Replaces or adds a new element to the `CAtlMap`.|

## Remarks

`CAtlMap` provides support for a mapping array of any given type, managing an unordered array of key elements and their associated values. Elements (consisting of a key and a value) are stored using a hashing algorithm, allowing a large amount of data to be efficiently stored and retrieved.

The *KTraits* and *VTraits* parameters are traits classes that contain any supplemental code needed to copy or move elements.

An alternative to `CAtlMap` is offered by the [CRBMap](../../atl/reference/crbmap-class.md) class. `CRBMap` also stores key/value pairs, but exhibits different performance characteristics. The time taken to insert an item, look up a key, or delete a key from a `CRBMap` object is of order *log(n)*, where *n* is the number of elements. For `CAtlMap`, all of these operations typically take a constant time, although worst-case scenarios might be of order *n*. Therefore, in a typical case, `CAtlMap` is faster.

The other difference between `CRBMap` and `CAtlMap` becomes apparent when iterating through the stored elements. In a `CRBMap`, the elements are visited in a sorted order. In a `CAtlMap`, the elements are not ordered, and no order can be inferred.

When a small number of elements need to be stored, consider using the [CSimpleMap](../../atl/reference/csimplemap-class.md) class instead.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## <a name="assertvalid"></a> CAtlMap::AssertValid

Call this method to cause an ASSERT if the `CAtlMap` object is not valid.

```cpp
void AssertValid() const;
```

### Remarks

In debug builds, this method will cause an ASSERT if the `CAtlMap` object is not valid.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="catlmap"></a> CAtlMap::CAtlMap

The constructor.

```cpp
CAtlMap(
    UINT nBins = 17,
    float fOptimalLoad = 0.75f,
    float fLoThreshold = 0.25f,
    float fHiThreshold = 2.25f,
    UINT nBlockSize = 10) throw ();
```

### Parameters

*nBins*<br/>
The number of bins providing pointers to the stored elements. See Remarks later in this topic for an explanation of bins.

*fOptimalLoad*<br/>
The optimal load ratio.

*fLoThreshold*<br/>
The lower threshold for the load ratio.

*fHiThreshold*<br/>
The upper threshold for the load ratio.

*nBlockSize*<br/>
The block size.

### Remarks

`CAtlMap` references all of its stored elements by first creating an index using a hashing algorithm on the key. This index references a "bin" which contains a pointer to the stored elements. If the bin is already in use, a linked-list is created to access the subsequent elements. Traversing a list is slower than directly accessing the correct element, and so the map structure needs to balance storage requirements against performance. The default parameters have been chosen to give good results in most cases.

The load ratio is the ratio of the number of bins to the number of elements stored in the map object. When the map structure is recalculated, the *fOptimalLoad* parameter value will be used to calculate the number of bins required. This value can be changed using the [CAtlMap::SetOptimalLoad](#setoptimalload) method.

The *fLoThreshold* parameter is the lower value that the load ratio can reach before `CAtlMap` will recalculate the optimal size of the map.

The *fHiThreshold* parameter is the upper value that the load ratio can reach before the `CAtlMap` object will recalculate the optimal size of the map.

This recalculation process (known as rehashing) is enabled by default. If you want to disable this process, perhaps when entering a lot of data at one time, call the [CAtlMap::DisableAutoRehash](#disableautorehash) method. Reactivate it with the [CAtlMap::EnableAutoRehash](#enableautorehash) method.

The *nBlockSize* parameter is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.

Before any data can be stored, it is necessary to initialize the hash table with a call to [CAtlMap::InitHashTable](#inithashtable).

### Example

[!code-cpp[NVC_ATL_Utilities#72](../../atl/codesnippet/cpp/catlmap-class_1.cpp)]

## <a name="dtor"></a> CAtlMap::~CAtlMap

The destructor.

```cpp
~CAtlMap() throw();
```

### Remarks

Frees any allocated resources.

## <a name="cpair_class"></a> CAtlMap::CPair Class

A class containing the key and value elements.

```cpp
class CPair : public __POSITION
```

### Remarks

This class is used by the methods [CAtlMap::GetNext](#getnext) and [CAtlMap::Lookup](#lookup) to access the key and value elements stored in the mapping structure.

## <a name="disableautorehash"></a> CAtlMap::DisableAutoRehash

Call this method to disable automatic rehashing of the `CAtlMap` object.

```cpp
void DisableAutoRehash() throw();
```

### Remarks

When automatic rehashing is enabled (which it is by default), the number of bins in the hash table will automatically be recalculated if the load value (the ratio of the number of bins to the number of elements stored in the array) exceeds the maximum or minimum values specified at the time the map was created.

`DisableAutoRehash` is most useful when a large number of elements will be added to the map at once. Instead of triggering the rehashing process every time the limits are exceeded, it is more efficient to call `DisableAutoRehash`, add the elements, and finally call [CAtlMap::EnableAutoRehash](#enableautorehash).

## <a name="enableautorehash"></a> CAtlMap::EnableAutoRehash

Call this method to enable automatic rehashing of the `CAtlMap` object.

```cpp
void EnableAutoRehash() throw();
```

### Remarks

When automatic rehashing is enabled (which it is by default), the number of bins in the hash table will automatically be recalculated if the load value (the ratio of the number of bins to the number of elements stored in the array) exceeds the maximum or minimum values specified at the time the map is created.

`EnableAutoRefresh` is most often used after a call to [CAtlMap::DisableAutoRehash](#disableautorehash).

## <a name="getat"></a> CAtlMap::GetAt

Call this method to return the element at a specified position in the map.

```cpp
void GetAt(
    POSITION pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;

CPair* GetAt(POSITION& pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

*key*<br/>
Template parameter specifying the type of the map's key.

*value*<br/>
Template parameter specifying the type of the map's value.

### Return Value

Returns a pointer to the current pair of key/value elements stored in the map.

### Remarks

In debug builds, an assertion error will occur if *pos* is equal to NULL.

## <a name="getcount"></a> CAtlMap::GetCount

Call this method to retrieve the number of elements in the map.

```cpp
size_t GetCount() const throw();
```

### Return Value

Returns the number of elements in the map object. A single element is a key/value pair.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="gethashtablesize"></a> CAtlMap::GetHashTableSize

Call this method to determine the number of bins in the map's hash table.

```cpp
UINT GetHashTableSize() const throw();
```

### Return Value

Returns the number of bins in the hash table. See [CAtlMap::CAtlMap](#catlmap) for an explanation.

## <a name="getkeyat"></a> CAtlMap::GetKeyAt

Call this method to retrieve the key stored at the given position in the `CAtlMap` object.

```cpp
const K& GetKeyAt(POSITION pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Return Value

Returns a reference to the key stored at the given position in the `CAtlMap` object.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="getnext"></a> CAtlMap::GetNext

Call this method to obtain a pointer to the next element pair stored in the `CAtlMap` object.

```cpp
CPair* GetNext(POSITION& pos) throw();
const CPair* GetNext(POSITION& pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Return Value

Returns a pointer to the next pair of key/value elements stored in the map. The *pos* position counter is updated after each call. If the retrieved element is the last in the map, *pos* is set to NULL.

## <a name="getnextassoc"></a> CAtlMap::GetNextAssoc

Gets the next element for iterating.

```cpp
void GetNextAssoc(
    POSITION& pos,
    KOUTARGTYPE key,
    VOUTARGTYPE value) const;
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

*key*<br/>
Template parameter specifying the type of the map's key.

*value*<br/>
Template parameter specifying the type of the map's value.

### Remarks

The *pos* position counter is updated after each call. If the retrieved element is the last in the map, *pos* is set to NULL.

## <a name="getnextkey"></a> CAtlMap::GetNextKey

Call this method to retrieve the next key from the `CAtlMap` object.

```cpp
const K& GetNextKey(POSITION& pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Return Value

Returns a reference to the next key in the map.

### Remarks

Updates the current position counter, *pos*. If there are no more entries in the map, the position counter is set to NULL.

## <a name="getnextvalue"></a> CAtlMap::GetNextValue

Call this method to get the next value from the `CAtlMap` object.

```cpp
V& GetNextValue(POSITION& pos) throw();
const V& GetNextValue(POSITION& pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Return Value

Returns a reference to the next value in the map.

### Remarks

Updates the current position counter, *pos*. If there are no more entries in the map, the position counter is set to NULL.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="getstartposition"></a> CAtlMap::GetStartPosition

Call this method to start a map iteration.

```cpp
POSITION GetStartPosition() const throw();
```

### Return Value

Returns the start position, or NULL is returned if the map is empty.

### Remarks

Call this method to start a map iteration by returning a POSITION value that can be passed to the `GetNextAssoc` method.

> [!NOTE]
> The iteration sequence is not predictable

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="getvalueat"></a> CAtlMap::GetValueAt

Call this method to retrieve the value stored at a given position in the `CAtlMap` object.

```cpp
V& GetValueAt(POSITION pos) throw();
const V& GetValueAt(POSITION pos) const throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Return Value

Returns a reference to the value stored at the given position in the `CAtlMap` object.

## <a name="inithashtable"></a> CAtlMap::InitHashTable

Call this method to initialize the hash table.

```cpp
bool InitHashTable(
    UINT nBins,
    bool bAllocNow = true);
```

### Parameters

*nBins*<br/>
The number of bins used by the hash table. See [CAtlMap::CAtlMap](#catlmap) for an explanation.

*bAllocNow*<br/>
A flag indication when memory should be allocated.

### Return Value

Returns TRUE on successful initialization, FALSE on failure.

### Remarks

`InitHashTable` must be called before any elements are stored in the hash table.  If this method is not called explicitly, it will be called automatically the first time an element is added using the bin count specified by the `CAtlMap` constructor.  Otherwise, the map will be initialized using the new bin count specified by the *nBins* parameter.

If the *bAllocNow* parameter is false, the memory required by the hash table will not be allocated until it is first required. This can be useful if it is uncertain if the map will be used.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="isempty"></a> CAtlMap::IsEmpty

Call this method to test for an empty map object.

```cpp
bool IsEmpty() const throw();
```

### Return Value

Returns TRUE if the map is empty, FALSE otherwise.

## <a name="kinargtype"></a> CAtlMap::KINARGTYPE

Type used when a key is passed as an input argument.

```cpp
typedef KTraits::INARGTYPE KINARGTYPE;
```

## <a name="koutargtype"></a> CAtlMap::KOUTARGTYPE

Type used when a key is returned as an output argument.

```cpp
typedef KTraits::OUTARGTYPE KOUTARGTYPE;
```

## <a name="lookup"></a> CAtlMap::Lookup

Call this method to look up keys or values in the `CAtlMap` object.

```cpp
bool Lookup(KINARGTYPE key, VOUTARGTYPE value) const;
const CPair* Lookup(KINARGTYPE key) const throw();
CPair* Lookup(KINARGTYPE key) throw();
```

### Parameters

*key*<br/>
Specifies the key that identifies the element to be looked up.

*value*<br/>
Variable that receives the looked-up value.

### Return Value

The first form of the method returns true if the key is found, otherwise false. The second and third forms return a pointer to a [CPair](#cpair_class) which can be used as a position for calls to [CAtlMap::GetNext](#getnext) and so on.

### Remarks

`Lookup` uses a hashing algorithm to quickly find the map element containing a key that exactly matches the given key parameter.

## <a name="operator_at"></a> CAtlMap::operator \[\]

Replaces or adds a new element to the `CAtlMap`.

```cpp
V& operator[](kinargtype key) throw();
```

### Parameters

*key*<br/>
The key of the element to add or replace.

### Return Value

Returns a reference to the value associated with the given key.

### Example

If the key already exists, the element is replaced. If the key does not exist, a new element is added. See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="rehash"></a> CAtlMap::Rehash

Call this method to rehash the `CAtlMap` object.

```cpp
void Rehash(UINT nBins = 0);
```

### Parameters

*nBins*<br/>
The new number of bins to use in the hash table. See [CAtlMap::CAtlMap](#catlmap) for an explanation.

### Remarks

If *nBins* is 0, `CAtlMap` calculates a reasonable number based on the number of elements in the map and the optimal load setting. Normally the rehashing process is automatic, but if [CAtlMap::DisableAutoRehash](#disableautorehash) has been called, this method will perform the necessary resizing.

## <a name="removeall"></a> CAtlMap::RemoveAll

Call this method to remove all elements from the `CAtlMap` object.

```cpp
void RemoveAll() throw();
```

### Remarks

Clears out the `CAtlMap` object, freeing the memory used to store the elements.

## <a name="removeatpos"></a> CAtlMap::RemoveAtPos

Call this method to remove the element at the given position in the `CAtlMap` object.

```cpp
void RemoveAtPos(POSITION pos) throw();
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

### Remarks

Removes the key/value pair stored at the specified position. The memory used to store the element is freed. The POSITION referenced by *pos* becomes invalid, and while the POSITION of any other elements in the map remains valid, they do not necessarily retain the same order.

## <a name="removekey"></a> CAtlMap::RemoveKey

Call this method to remove an element from the `CAtlMap` object, given the key.

```cpp
bool RemoveKey(KINARGTYPE key) throw();
```

### Parameters

*key*<br/>
The key corresponding to the element pair you want to remove.

### Return Value

Returns TRUE if the key is found and removed, FALSE on failure.

### Example

See the example for [CAtlMap::CAtlMap](#catlmap).

## <a name="setat"></a> CAtlMap::SetAt

Call this method to insert an element pair into the map.

```cpp
POSITION SetAt(
    KINARGTYPE key,
    VINARGTYPE value);
```

### Parameters

*key*<br/>
The key value to add to the `CAtlMap` object.

*value*<br/>
The value to add to the `CAtlMap` object.

### Return Value

Returns the position of the key/value element pair in the `CAtlMap` object.

### Remarks

`SetAt` replaces an existing element if a matching key is found. If the key is not found, a new key/value pair is created.

## <a name="setoptimalload"></a> CAtlMap::SetOptimalLoad

Call this method to set the optimal load of the `CAtlMap` object.

```cpp
void SetOptimalLoad(
    float fOptimalLoad,
    float fLoThreshold,
    float fHiThreshold,
    bool bRehashNow = false);
```

### Parameters

*fOptimalLoad*<br/>
The optimal load ratio.

*fLoThreshold*<br/>
The lower threshold for the load ratio.

*fHiThreshold*<br/>
The upper threshold for the load ratio.

*bRehashNow*<br/>
Flag indicating if the hash table should be recalculated.

### Remarks

This method redefines the optimal load value for the `CAtlMap` object. See [CAtlMap::CAtlMap](#catlmap) for a discussion of the various parameters. If *bRehashNow* is true, and the number of elements is outside the minimum and maximum values, the hash table is recalculated.

## <a name="setvalueat"></a> CAtlMap::SetValueAt

Call this method to change the value stored at a given position in the `CAtlMap` object.

```cpp
void SetValueAt(
    POSITION pos,
    VINARGTYPE value);
```

### Parameters

*pos*<br/>
The position counter, returned by a previous call to [CAtlMap::GetNextAssoc](#getnextassoc) or [CAtlMap::GetStartPosition](#getstartposition).

*value*<br/>
The value to add to the `CAtlMap` object.

### Remarks

Changes the value element stored at the given position in the `CAtlMap` object.

## <a name="vinargtype"></a> CAtlMap::VINARGTYPE

Type used when a value is passed as an input argument.

```cpp
typedef VTraits::INARGTYPE VINARGTYPE;
```

## <a name="voutargtype"></a> CAtlMap::VOUTARGTYPE

Type used when a value is passed as an output argument.

```cpp
typedef VTraits::OUTARGTYPE VOUTARGTYPE;
```

## <a name="m_key"></a> CAtlMap::CPair::m_key

The data member storing the key element.

```cpp
const K m_key;
```

### Parameters

*K*<br/>
The key element type.

## <a name="m_value"></a> CAtlMap::CPair::m_value

The data member storing the value element.

```cpp
V  m_value;
```

### Parameters

*V*<br/>
The value element type.

## See also

[Marquee Sample](../../overview/visual-cpp-samples.md)<br/>
[UpdatePV Sample](https://github.com/Microsoft/VCSamples/tree/master/VC2010Samples/ATL/OLEDB/Provider/UPDATEPV)<br/>
[Class Overview](../../atl/atl-class-overview.md)
