---
description: "Learn more about: CMapWordToPtr Class"
title: "CMapWordToPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapWordToPtr", "AFXCOLL/CMapWordToPtr", "AFXCOLL/CMapWordToPtr::CMapWordToPtr", "AFXCOLL/CMapWordToPtr::GetCount", "AFXCOLL/CMapWordToPtr::GetHashTableSize", "AFXCOLL/CMapWordToPtr::GetNextAssoc", "AFXCOLL/CMapWordToPtr::GetSize", "AFXCOLL/CMapWordToPtr::GetStartPosition", "AFXCOLL/CMapWordToPtr::HashKey", "AFXCOLL/CMapWordToPtr::InitHashTable", "AFXCOLL/CMapWordToPtr::IsEmpty", "AFXCOLL/CMapWordToPtr::Lookup", "AFXCOLL/CMapWordToPtr::LookupKey", "AFXCOLL/CMapWordToPtr::RemoveAll", "AFXCOLL/CMapWordToPtr::RemoveKey", "AFXCOLL/CMapWordToPtr::SetAt"]
helpviewer_keywords: ["CMapWordToPtr [MFC], CMapWordToPtr", "CMapWordToPtr [MFC], GetCount", "CMapWordToPtr [MFC], GetHashTableSize", "CMapWordToPtr [MFC], GetNextAssoc", "CMapWordToPtr [MFC], GetSize", "CMapWordToPtr [MFC], GetStartPosition", "CMapWordToPtr [MFC], HashKey", "CMapWordToPtr [MFC], InitHashTable", "CMapWordToPtr [MFC], IsEmpty", "CMapWordToPtr [MFC], Lookup", "CMapWordToPtr [MFC], LookupKey", "CMapWordToPtr [MFC], RemoveAll", "CMapWordToPtr [MFC], RemoveKey", "CMapWordToPtr [MFC], SetAt"]
ms.assetid: b204d87f-6427-43e1-93e3-a4b1bb41099f
---
# CMapWordToPtr Class

Supports maps of void pointers keyed by 16-bit words.

## Syntax

```
class CMapWordToPtr : public CObject
```

## Members

The member functions of `CMapWordToPtr` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to **`void`**. Wherever you see a `CString` or a **`const`** pointer to **`char`** as a function parameter or return value, substitute WORD.

`BOOL CMapWordToPtr::Lookup( WORD <key>, void*& <rValue> ) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapWordToPtr::CMapWordToPtr](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapWordToPtr::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapWordToPtr::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapWordToPtr::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapWordToPtr::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapWordToPtr::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapWordToPtr::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapWordToPtr::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapWordToPtr::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapWordToPtr::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapWordToPtr::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapWordToPtr::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapWordToPtr::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapWordToPtr::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapWordToPtr::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapWordToPtr` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual map elements, you must set the depth of the dump context to 1 or greater.

Word-to-pointer maps may not be serialized.

When a `CMapWordToPtr` object is deleted, or when its elements are removed, the words and the pointers are removed. The entities referenced by the pointers are not removed.

For more information on `CMapWordToPtr`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapWordToPtr`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
