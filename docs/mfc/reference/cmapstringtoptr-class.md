---
description: "Learn more about: CMapStringToPtr Class"
title: "CMapStringToPtr Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapStringToPtr", "AFXCOLL/CMapStringToPtr", "AFXCOLL/CMapStringToPtr::CMapStringToPtr", "AFXCOLL/CMapStringToPtr::GetCount", "AFXCOLL/CMapStringToPtr::GetHashTableSize", "AFXCOLL/CMapStringToPtr::GetNextAssoc", "AFXCOLL/CMapStringToPtr::GetSize", "AFXCOLL/CMapStringToPtr::GetStartPosition", "AFXCOLL/CMapStringToPtr::HashKey", "AFXCOLL/CMapStringToPtr::InitHashTable", "AFXCOLL/CMapStringToPtr::IsEmpty", "AFXCOLL/CMapStringToPtr::Lookup", "AFXCOLL/CMapStringToPtr::LookupKey", "AFXCOLL/CMapStringToPtr::RemoveAll", "AFXCOLL/CMapStringToPtr::RemoveKey", "AFXCOLL/CMapStringToPtr::SetAt"]
helpviewer_keywords: ["CMapStringToPtr [MFC], CMapStringToPtr", "CMapStringToPtr [MFC], GetCount", "CMapStringToPtr [MFC], GetHashTableSize", "CMapStringToPtr [MFC], GetNextAssoc", "CMapStringToPtr [MFC], GetSize", "CMapStringToPtr [MFC], GetStartPosition", "CMapStringToPtr [MFC], HashKey", "CMapStringToPtr [MFC], InitHashTable", "CMapStringToPtr [MFC], IsEmpty", "CMapStringToPtr [MFC], Lookup", "CMapStringToPtr [MFC], LookupKey", "CMapStringToPtr [MFC], RemoveAll", "CMapStringToPtr [MFC], RemoveKey", "CMapStringToPtr [MFC], SetAt"]
ms.assetid: 1ac11143-eb0a-4511-a662-2df0d1d9005b
---
# CMapStringToPtr Class

Supports maps of void pointers keyed by `CString` objects.

## Syntax

```
class CMapStringToPtr : public CObject
```

## Members

The member functions of `CMapStringToPtr` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to **`void`**.

`BOOL CMapStringToPtr::Lookup( LPCTSTR <key>, void*& <rValue> ) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapStringToPtr::CMapStringToPtr](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapStringToPtr::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapStringToPtr::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapStringToPtr::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapStringToPtr::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapStringToPtr::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapStringToPtr::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapStringToPtr::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapStringToPtr::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapStringToPtr::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapStringToPtr::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapStringToPtr::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapStringToPtr::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapStringToPtr::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapStringToPtr::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapStringToPtr` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual map elements, you must set the depth of the dump context to 1 or greater.

String-to-pointer maps may not be serialized.

When a `CMapStringToPtr` object is deleted, or when its elements are removed, the `CString` key objects and the words are removed.

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToPtr`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
