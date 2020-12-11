---
description: "Learn more about: CSimpleMap Class"
title: "CSimpleMap Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleMap", "ATLSIMPCOLL/ATL::CSimpleMap", "ATLSIMPCOLL/ATL::CSimpleMap::_ArrayElementType", "ATLSIMPCOLL/ATL::CSimpleMap::_ArrayKeyType", "ATLSIMPCOLL/ATL::CSimpleMap::CSimpleMap", "ATLSIMPCOLL/ATL::CSimpleMap::Add", "ATLSIMPCOLL/ATL::CSimpleMap::FindKey", "ATLSIMPCOLL/ATL::CSimpleMap::FindVal", "ATLSIMPCOLL/ATL::CSimpleMap::GetKeyAt", "ATLSIMPCOLL/ATL::CSimpleMap::GetSize", "ATLSIMPCOLL/ATL::CSimpleMap::GetValueAt", "ATLSIMPCOLL/ATL::CSimpleMap::Lookup", "ATLSIMPCOLL/ATL::CSimpleMap::Remove", "ATLSIMPCOLL/ATL::CSimpleMap::RemoveAll", "ATLSIMPCOLL/ATL::CSimpleMap::RemoveAt", "ATLSIMPCOLL/ATL::CSimpleMap::ReverseLookup", "ATLSIMPCOLL/ATL::CSimpleMap::SetAt", "ATLSIMPCOLL/ATL::CSimpleMap::SetAtIndex"]
helpviewer_keywords: ["CSimpleMap class"]
ms.assetid: 61b06eb4-ae73-44b0-a305-0afb5a33e8b1
---
# CSimpleMap Class

This class provides support for a simple mapping array.

## Syntax

```
template <class TKey, class TVal, class TEqual = CSimpleMapEqualHelper<TKey, TVal>>
class CSimpleMap
```

#### Parameters

*TKey*<br/>
The key element type.

*TVal*<br/>
The value element type.

*TEqual*<br/>
A trait object, defining the equality test for elements of type `T`.

## Members

### Public Typedefs

|Name|Description|
|----------|-----------------|
|[CSimpleMap::_ArrayElementType](#_arrayelementtype)|Typedef for the value type.|
|[CSimpleMap::_ArrayKeyType](#_arraykeytype)|Typedef for the key type.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSimpleMap::CSimpleMap](#csimplemap)|The constructor.|
|[CSimpleMap::~CSimpleMap](#dtor)|The destructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleMap::Add](#add)|Adds a key and associated value to the map array.|
|[CSimpleMap::FindKey](#findkey)|Finds a specific key.|
|[CSimpleMap::FindVal](#findval)|Finds a specific value.|
|[CSimpleMap::GetKeyAt](#getkeyat)|Retrieves the specified key.|
|[CSimpleMap::GetSize](#getsize)|Returns the number of entries in the mapping array.|
|[CSimpleMap::GetValueAt](#getvalueat)|Retrieves the specified value.|
|[CSimpleMap::Lookup](#lookup)|Returns the value associated with the given key.|
|[CSimpleMap::Remove](#remove)|Removes a key and matching value.|
|[CSimpleMap::RemoveAll](#removeall)|Removes all keys and values.|
|[CSimpleMap::RemoveAt](#removeat)|Removes a specific key and matching value.|
|[CSimpleMap::ReverseLookup](#reverselookup)|Returns the key associated with the given value.|
|[CSimpleMap::SetAt](#setat)|Sets the value associated with the given key.|
|[CSimpleMap::SetAtIndex](#setatindex)|Sets the specific key and value.|

## Remarks

`CSimpleMap` provides support for a simple mapping array of any given type `T`, managing an unordered array of key elements and their associated values.

The parameter `TEqual` provides a means of defining an equality function for two elements of type `T`. By creating a class similar to [CSimpleMapEqualHelper](../../atl/reference/csimplemapequalhelper-class.md), it is possible to alter the behavior of the equality test for any given array. For example, when dealing with an array of pointers, it may be useful to define the equality as depending on the values the pointers reference. The default implementation utilizes **operator==()**.

Both `CSimpleMap` and [CSimpleArray](../../atl/reference/csimplearray-class.md) are provided for compatibility with previous ATL releases, and more complete and efficient collection implementations are provided by [CAtlArray](../../atl/reference/catlarray-class.md) and [CAtlMap](../../atl/reference/catlmap-class.md).

Unlike other map collections in ATL and MFC, this class is implemented with a simple array, and lookup searches require a linear search. `CAtlMap` should be used when the array contains a large number of elements.

## Requirements

**Header:** atlsimpcoll.h

## Example

[!code-cpp[NVC_ATL_Utilities#91](../../atl/codesnippet/cpp/csimplemap-class_1.cpp)]

## <a name="add"></a> CSimpleMap::Add

Adds a key and associated value to the map array.

```
BOOL Add(const TKey& key, const TVal& val);
```

### Parameters

*key*<br/>
The key.

*val*<br/>
The associated value.

### Return Value

Returns TRUE if the key and value were successfully added, FALSE otherwise.

### Remarks

Each key and value pair added causes the mapping array memory to be freed and reallocated, in order to ensure the data for each is always stored contiguously. That is, the second key element always directly follows the first key element in memory and so on.

## <a name="_arrayelementtype"></a> CSimpleMap::_ArrayElementType

A typedef for the key type.

```
typedef TVal _ArrayElementType;
```

## <a name="_arraykeytype"></a> CSimpleMap::_ArrayKeyType

A typedef for the value type.

```
typedef TKey _ArrayKeyType;
```

## <a name="csimplemap"></a> CSimpleMap::CSimpleMap

The constructor.

```
CSimpleMap();
```

### Remarks

Initializes the data members.

## <a name="dtor"></a> CSimpleMap::~CSimpleMap

The destructor.

```
~CSimpleMap();
```

### Remarks

Frees all allocated resources.

## <a name="findkey"></a> CSimpleMap::FindKey

Finds a specific key.

```
int FindKey(const TKey& key) const;
```

### Parameters

*key*<br/>
The key to search for.

### Return Value

Returns the index of the key if found, otherwise returns -1.

## <a name="findval"></a> CSimpleMap::FindVal

Finds a specific value.

```
int FindVal(const TVal& val) const;
```

### Parameters

*val*<br/>
The value for which to search.

### Return Value

Returns the index of the value if it is found, otherwise returns -1.

## <a name="getkeyat"></a> CSimpleMap::GetKeyAt

Retrieves the key at the specified index.

```
TKey& GetKeyAt(int nIndex) const;
```

### Parameters

*nIndex*<br/>
The index of the key to return.

### Return Value

Returns the key referenced by *nIndex*.

### Remarks

The index passed by *nIndex* must be valid for the return value to be meaningful.

## <a name="getsize"></a> CSimpleMap::GetSize

Returns the number of entries in the mapping array.

```
int GetSize() const;
```

### Return Value

Returns the number of entries (a key and value is one entry) in the mapping array.

## <a name="getvalueat"></a> CSimpleMap::GetValueAt

Retrieves the value at the specific index.

```
TVal& GetValueAt(int nIndex) const;
```

### Parameters

*nIndex*<br/>
The index of the value to return.

### Return Value

Returns the value referenced by *nIndex*.

### Remarks

The index passed by *nIndex* must be valid for the return value to be meaningful.

## <a name="lookup"></a> CSimpleMap::Lookup

Returns the value associated with the given key.

```
TVal Lookup(const TKey& key) const;
```

### Parameters

*key*<br/>
The key.

### Return Value

Returns the associated value. If no matching key is found, NULL is returned.

## <a name="remove"></a> CSimpleMap::Remove

Removes a key and matching value.

```
BOOL Remove(const TKey& key);
```

### Parameters

*key*<br/>
The key.

### Return Value

Returns TRUE if the key, and matching value, were successfully removed, FALSE otherwise.

## <a name="removeall"></a> CSimpleMap::RemoveAll

Removes all keys and values.

```cpp
void RemoveAll();
```

### Remarks

Removes all keys and values from the mapping array object.

## <a name="removeat"></a> CSimpleMap::RemoveAt

Removes a key and associated value at the specified index.

```
BOOL RemoveAt(int nIndex);
```

### Parameters

*nIndex*<br/>
The index of the key and associated value to remove.

### Return Value

Returns TRUE on success, FALSE if the index specified is an invalid index.

## <a name="reverselookup"></a> CSimpleMap::ReverseLookup

Returns the key associated with the given value.

```
TKey ReverseLookup(const TVal& val) const;
```

### Parameters

*val*<br/>
The value.

### Return Value

Returns the associated key. If no matching key is found, NULL is returned.

## <a name="setat"></a> CSimpleMap::SetAt

Sets the value associated with the given key.

```
BOOL SetAt(const TKey& key, const TVal& val);
```

### Parameters

*key*<br/>
The key.

*val*<br/>
The new value to assign.

### Return Value

Returns TRUE if the key was found, and the value was successfully changed, FALSE otherwise.

## <a name="setatindex"></a> CSimpleMap::SetAtIndex

Sets the key and value at a specified index.

```
BOOL SetAtIndex(
    int nIndex,
    const TKey& key,
    const TVal& val);
```

### Parameters

*nIndex*<br/>
The index, referencing the key and value pairing to change.

*key*<br/>
The new key.

*val*<br/>
The new value.

### Return Value

Returns TRUE if successful, FALSE if the index was not valid.

### Remarks

Updates both the key and value pointed to by *nIndex*.

## See also

[Class Overview](../../atl/atl-class-overview.md)
