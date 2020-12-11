---
description: "Learn more about: CMapPtrToPtr Class"
title: "CMapPtrToPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapPtrToPtr", "AFXCOLL/CMapPtrToPtr", "AFXCOLL/CMapPtrToPtr::CMapPtrToPtr", "AFXCOLL/CMapPtrToPtr::GetCount", "AFXCOLL/CMapPtrToPtr::GetHashTableSize", "AFXCOLL/CMapPtrToPtr::GetNextAssoc", "AFXCOLL/CMapPtrToPtr::GetSize", "AFXCOLL/CMapPtrToPtr::GetStartPosition", "AFXCOLL/CMapPtrToPtr::HashKey", "AFXCOLL/CMapPtrToPtr::InitHashTable", "AFXCOLL/CMapPtrToPtr::IsEmpty", "AFXCOLL/CMapPtrToPtr::Lookup", "AFXCOLL/CMapPtrToPtr::LookupKey", "AFXCOLL/CMapPtrToPtr::RemoveAll", "AFXCOLL/CMapPtrToPtr::RemoveKey", "AFXCOLL/CMapPtrToPtr::SetAt"]
helpviewer_keywords: ["CMapPtrToPtr [MFC], CMapPtrToPtr", "CMapPtrToPtr [MFC], GetCount", "CMapPtrToPtr [MFC], GetHashTableSize", "CMapPtrToPtr [MFC], GetNextAssoc", "CMapPtrToPtr [MFC], GetSize", "CMapPtrToPtr [MFC], GetStartPosition", "CMapPtrToPtr [MFC], HashKey", "CMapPtrToPtr [MFC], InitHashTable", "CMapPtrToPtr [MFC], IsEmpty", "CMapPtrToPtr [MFC], Lookup", "CMapPtrToPtr [MFC], LookupKey", "CMapPtrToPtr [MFC], RemoveAll", "CMapPtrToPtr [MFC], RemoveKey", "CMapPtrToPtr [MFC], SetAt"]
ms.assetid: 23cbbaec-9d64-48f2-92ae-5e24fa64b926
---
# CMapPtrToPtr Class

Supports maps of void pointers keyed by void pointers.

## Syntax

```
class CMapPtrToPtr : public CObject
```

## Members

The member functions of `CMapPtrToPtr` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to **`void`**. Wherever you see a `CString` or a **`const`** pointer to **`char`** as a function parameter or return value, substitute a pointer to **`void`**.

`BOOL CMapPtrToPtr::Lookup( void* <key>, void*& <rValue> ) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapPtrToPtr::CMapPtrToPtr](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapPtrToPtr::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapPtrToPtr::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapPtrToPtr::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapPtrToPtr::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapPtrToPtr::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapPtrToPtr::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapPtrToPtr::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapPtrToPtr::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapPtrToPtr::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapPtrToPtr::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapPtrToPtr::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapPtrToPtr::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapPtrToPtr::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapPtrToPtr::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapPtrToPtr` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual map elements (pointer values), you must set the depth of the dump context to 1 or greater.

Pointer-to-pointer maps may not be serialized.

When a `CMapPtrToPtr` object is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.

For more information on `CMapPtrToPtr`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapPtrToPtr`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
