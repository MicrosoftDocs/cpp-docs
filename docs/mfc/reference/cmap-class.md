---
description: "Learn more about: CMap Class"
title: "CMap Class"
ms.date: "11/04/2016"
f1_keywords: ["CMap", "AFXTEMPL/CMap", "AFXTEMPL/CMap::CPair", "AFXTEMPL/CMap::CMap", "AFXTEMPL/CMap::GetCount", "AFXTEMPL/CMap::GetHashTableSize", "AFXTEMPL/CMap::GetNextAssoc", "AFXTEMPL/CMap::GetSize", "AFXTEMPL/CMap::GetStartPosition", "AFXTEMPL/CMap::InitHashTable", "AFXTEMPL/CMap::IsEmpty", "AFXTEMPL/CMap::Lookup", "AFXTEMPL/CMap::PGetFirstAssoc", "AFXTEMPL/CMap::PGetNextAssoc", "AFXTEMPL/CMap::PLookup", "AFXTEMPL/CMap::RemoveAll", "AFXTEMPL/CMap::RemoveKey", "AFXTEMPL/CMap::SetAt"]
helpviewer_keywords: ["CMap [MFC], CPair", "CMap [MFC], CMap", "CMap [MFC], GetCount", "CMap [MFC], GetHashTableSize", "CMap [MFC], GetNextAssoc", "CMap [MFC], GetSize", "CMap [MFC], GetStartPosition", "CMap [MFC], InitHashTable", "CMap [MFC], IsEmpty", "CMap [MFC], Lookup", "CMap [MFC], PGetFirstAssoc", "CMap [MFC], PGetNextAssoc", "CMap [MFC], PLookup", "CMap [MFC], RemoveAll", "CMap [MFC], RemoveKey", "CMap [MFC], SetAt"]
ms.assetid: 640a45ab-0993-4def-97ec-42cc78eb10b9
---
# CMap Class

A dictionary collection class that maps unique keys to values.

## Syntax

```
template<class KEY, class ARG_KEY, class VALUE, class ARG_VALUE>class CMap : public CObject
```

#### Parameters

*KEY*<br/>
Class of the object used as the key to the map.

*ARG_KEY*<br/>
Data type used for *KEY* arguments; usually a reference to *KEY*.

*VALUE*<br/>
Class of the object stored in the map.

*ARG_VALUE*<br/>
Data type used for *VALUE* arguments; usually a reference to *VALUE*.

## Members

### Public Structures

|Name|Description|
|----------|-----------------|
|[CMap::CPair](#cpair)|A nested structure containing a key value and the value of the associated object.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMap::CMap](#cmap)|Constructs a collection that maps keys to values.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMap::GetCount](#getcount)|Returns the number of elements in this map.|
|[CMap::GetHashTableSize](#gethashtablesize)|Returns the number of elements in the hash table.|
|[CMap::GetNextAssoc](#getnextassoc)|Gets the next element for iterating.|
|[CMap::GetSize](#getsize)|Returns the number of elements in this map.|
|[CMap::GetStartPosition](#getstartposition)|Returns the position of the first element.|
|[CMap::InitHashTable](#inithashtable)|Initializes the hash table and specifies its size.|
|[CMap::IsEmpty](#isempty)|Tests for the empty-map condition (no elements).|
|[CMap::Lookup](#lookup)|Looks up the value mapped to a given key.|
|[CMap::PGetFirstAssoc](#pgetfirstassoc)|Returns a pointer to the first element.|
|[CMap::PGetNextAssoc](#pgetnextassoc)|Gets a pointer to the next element for iterating.|
|[CMap::PLookup](#plookup)|Returns a pointer to a key whose value matches the specified value.|
|[CMap::RemoveAll](#removeall)|Removes all the elements from this map.|
|[CMap::RemoveKey](#removekey)|Removes an element specified by a key.|
|[CMap::SetAt](#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMap::operator \[ \]](#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

Once you have inserted a key-value pair (element) into the map, you can efficiently retrieve or delete the pair using the key to access it. You can also iterate over all the elements in the map.

A variable of type POSITION is used for alternate access to entries. You can use a POSITION to "remember" an entry and to iterate through the map. You might think that this iteration is sequential by key value; it is not. The sequence of retrieved elements is indeterminate.

Certain member functions of this class call global helper functions that must be customized for most uses of the `CMap` class. See [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md) in the Macros and Globals section of the **MFC Reference**.

`CMap` overrides [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) to support serialization and dumping of its elements. If a map is stored to an archive using `Serialize`, each map element is serialized in turn. The default implementation of the `SerializeElements` helper function does a bitwise write. For information about serialization of pointer collection items derived from `CObject` or other user defined types, see [How to: Make a Type-Safe Collection](../../mfc/how-to-make-a-type-safe-collection.md).

If you need a diagnostic dump of the individual elements in the map (the keys and values), you must set the depth of the dump context to 1 or greater.

When a `CMap` object is deleted, or when its elements are removed, the keys and values both are removed.

Map class derivation is similar to list derivation. See the article [Collections](../../mfc/collections.md) for an illustration of the derivation of a special-purpose list class.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMap`

## Requirements

**Header:** afxtempl.h

## <a name="cmap"></a> CMap::CMap

Constructs an empty map.

```
CMap(INT_PTR nBlockSize = 10);
```

### Parameters

*nBlockSize*<br/>
Specifies the memory-allocation granularity for extending the map.

### Remarks

As the map grows, memory is allocated in units of *nBlockSize* entries.

### Example

[!code-cpp[NVC_MFCCollections#56](../../mfc/codesnippet/cpp/cmap-class_1.cpp)]

## <a name="cpair"></a> CMap::CPair

Contains a key value and the value of the associated object.

### Remarks

This is a nested structure within class [CMap](../../mfc/reference/cmap-class.md).

The structure is composed of two fields:

- `key` The actual value of the key type.

- `value` The value of the associated object.

It is used to store the return values from [CMap::PLookup](#plookup), [CMap::PGetFirstAssoc](#pgetfirstassoc), and [CMap::PGetNextAssoc](#pgetnextassoc).

### Example

For an example of usage, see the example for [CMap::PLookup](#plookup).

## <a name="getcount"></a> CMap::GetCount

Retrieves the number of elements in the map.

```
INT_PTR GetCount() const;
```

### Return Value

The number of elements.

### Example

See the example for [CMap::Lookup](#lookup).

## <a name="gethashtablesize"></a> CMap::GetHashTableSize

Determines the number of elements in the hash table for the map.

```
UINT GetHashTableSize() const;
```

### Return Value

The number of elements in the hash table.

### Example

[!code-cpp[NVC_MFCCollections#57](../../mfc/codesnippet/cpp/cmap-class_2.cpp)]

## <a name="getnextassoc"></a> CMap::GetNextAssoc

Retrieves the map element at `rNextPosition`, then updates `rNextPosition` to refer to the next element in the map.

```cpp
void GetNextAssoc(
    POSITION& rNextPosition,
    KEY& rKey,
    VALUE& rValue) const;
```

### Parameters

*rNextPosition*<br/>
Specifies a reference to a POSITION value returned by a previous `GetNextAssoc` or `GetStartPosition` call.

*KEY*<br/>
Template parameter specifying the type of the map's key.

*rKey*<br/>
Specifies the returned key of the retrieved element.

*VALUE*<br/>
Template parameter specifying the type of the map's value.

*rValue*<br/>
Specifies the returned value of the retrieved element.

### Remarks

This function is most useful for iterating through all the elements in the map. Note that the position sequence is not necessarily the same as the key value sequence.

If the retrieved element is the last in the map, then the new value of *rNextPosition* is set to NULL.

### Example

See the example for [CMap::SetAt](#setat).

## <a name="getsize"></a> CMap::GetSize

Returns the number of map elements.

```
INT_PTR GetSize() const;
```

### Return Value

The number of items in the map.

### Remarks

Call this method to retrieve the number of elements in the map.

### Example

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="getstartposition"></a> CMap::GetStartPosition

Starts a map iteration by returning a POSITION value that can be passed to a `GetNextAssoc` call.

```
POSITION GetStartPosition() const;
```

### Return Value

A POSITION value that indicates a starting position for iterating the map; or NULL if the map is empty.

### Remarks

The iteration sequence is not predictable; therefore, the "first element in the map" has no special significance.

### Example

See the example for [CMap::SetAt](#setat).

## <a name="inithashtable"></a> CMap::InitHashTable

Initializes the hash table.

```cpp
void InitHashTable(UINT hashSize, BOOL  bAllocNow = TRUE);
```

### Parameters

*hashSize*<br/>
Number of entries in the hash table.

*bAllocNow*<br/>
If TRUE, allocates the hash table upon initialization; otherwise the table is allocated when needed.

### Remarks

For best performance, the hash table size should be a prime number. To minimize collisions, the size should be roughly 20 percent larger than the largest anticipated data set.

### Example

See the example for [CMap::Lookup](#lookup).

## <a name="isempty"></a> CMap::IsEmpty

Determines whether the map is empty.

```
BOOL IsEmpty() const;
```

### Return Value

Nonzero if this map contains no elements; otherwise 0.

### Example

See the example for [CMap::RemoveAll](#removeall).

## <a name="lookup"></a> CMap::Lookup

Looks up the value mapped to a given key.

```
BOOL Lookup(ARG_KEY key, VALUE& rValue) const;
```

### Parameters

*ARG_KEY*<br/>
Template parameter specifying the type of the *key* value.

*key*<br/>
Specifies the key that identifies the element to be looked up.

*VALUE*<br/>
Specifies the type of the value to be looked up.

*rValue*<br/>
Receives the looked-up value.

### Return Value

Nonzero if the element was found; otherwise 0.

### Remarks

`Lookup` uses a hashing algorithm to quickly find the map element with a key that exactly matches the given key.

### Example

[!code-cpp[NVC_MFCCollections#58](../../mfc/codesnippet/cpp/cmap-class_3.cpp)]

## <a name="operator_at"></a> CMap::operator [ ]

A convenient substitute for the `SetAt` member function.

```
VALUE& operator[](arg_key key);
```

### Parameters

*VALUE*<br/>
Template parameter specifying the type of the map value.

*ARG_KEY*<br/>
Template parameter specifying the type of the key value.

*key*<br/>
The key used to retrieve the value from the map.

### Remarks

Thus it can be used only on the left side of an assignment statement (an l-value). If there is no map element with the specified key, then a new element is created.

There is no "right side" (r-value) equivalent to this operator because there is a possibility that a key may not be found in the map. Use the `Lookup` member function for element retrieval.

### Example

See the example for [CMap::Lookup](#lookup).

## <a name="pgetfirstassoc"></a> CMap::PGetFirstAssoc

Returns the first entry of the map object.

```
const CPair* PGetFirstAssoc() const;
CPair* PGetFirstAssoc();
```

### Return Value

A pointer to the first entry in the map; see [CMap::CPair](#cpair). If the map contains no entries, the value is NULL.

### Remarks

Call this function to return a pointer the first element in the map object.

### Example

[!code-cpp[NVC_MFCCollections#59](../../mfc/codesnippet/cpp/cmap-class_4.cpp)]

## <a name="pgetnextassoc"></a> CMap::PGetNextAssoc

Retrieves the map element pointed to by *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssocRet) const;

CPair *PGetNextAssoc(const CPair* pAssocRet);
```

### Parameters

*pAssocRet*<br/>
Points to a map entry returned by a previous [PGetNextAssoc](#pgetnextassoc) or [CMap::PGetFirstAssoc](#pgetfirstassoc) call.

### Return Value

A pointer to the next entry in the map; see [CMap::CPair](#cpair). If the element is the last in the map, the value is NULL.

### Remarks

Call this method to iterate through all the elements in the map. Retrieve the first element with a call to `PGetFirstAssoc` and then iterate through the map with successive calls to `PGetNextAssoc`.

### Example

See the example for [CMap::PGetFirstAssoc](#pgetfirstassoc).

## <a name="plookup"></a> CMap::PLookup

Finds the value mapped to a given key.

```
const CPair* PLookup(ARG_KEY key) const;
CPair* PLookup(ARG_KEY key);
```

### Parameters

*key*<br/>
Key for the element to be searched for.

### Return Value

A pointer to a key structure; see [CMap::CPair](#cpair). If no match is found, `CMap::PLookup` returns NULL.

### Remarks

Call this method to search for a map element with a key that exactly matches the given key.

### Example

[!code-cpp[NVC_MFCCollections#60](../../mfc/codesnippet/cpp/cmap-class_5.cpp)]

## <a name="removeall"></a> CMap::RemoveAll

Removes all the values from this map by calling the global helper function `DestructElements`.

```cpp
void RemoveAll();
```

### Remarks

The function works correctly if the map is already empty.

### Example

[!code-cpp[NVC_MFCCollections#61](../../mfc/codesnippet/cpp/cmap-class_6.cpp)]

## <a name="removekey"></a> CMap::RemoveKey

Looks up the map entry corresponding to the supplied key; then, if the key is found, removes the entry.

```
BOOL RemoveKey(ARG_KEY key);
```

### Parameters

*ARG_KEY*<br/>
Template parameter specifying the type of the key.

*key*<br/>
Key for the element to be removed.

### Return Value

Nonzero if the entry was found and successfully removed; otherwise 0.

### Remarks

The `DestructElements` helper function is used to remove the entry.

### Example

See the example for [CMap::SetAt](#setat).

## <a name="setat"></a> CMap::SetAt

The primary means to insert an element in a map.

```cpp
void SetAt(ARG_KEY key, ARG_VALUE newValue);
```

### Parameters

*ARG_KEY*<br/>
Template parameter specifying the type of the *key* parameter.

*key*<br/>
Specifies the key of the new element.

*ARG_VALUE*<br/>
Template parameter specifying the type of the *newValue* parameter.

*newValue*<br/>
Specifies the value of the new element.

### Remarks

First, the key is looked up. If the key is found, then the corresponding value is changed; otherwise a new key-value pair is created.

### Example

[!code-cpp[NVC_MFCCollections#62](../../mfc/codesnippet/cpp/cmap-class_7.cpp)]

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
