---
description: "Learn more about: CMapPtrToWord Class"
title: "CMapPtrToWord Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapPtrToWord", "AFXCOLL/CMapPtrToWord", "AFXCOLL/CMapPtrToWord::CMapPtrToWord", "AFXCOLL/CMapPtrToWord::GetCount", "AFXCOLL/CMapPtrToWord::GetHashTableSize", "AFXCOLL/CMapPtrToWord::GetNextAssoc", "AFXCOLL/CMapPtrToWord::GetSize", "AFXCOLL/CMapPtrToWord::GetStartPosition", "AFXCOLL/CMapPtrToWord::HashKey", "AFXCOLL/CMapPtrToWord::InitHashTable", "AFXCOLL/CMapPtrToWord::IsEmpty", "AFXCOLL/CMapPtrToWord::Lookup", "AFXCOLL/CMapPtrToWord::LookupKey", "AFXCOLL/CMapPtrToWord::RemoveAll", "AFXCOLL/CMapPtrToWord::RemoveKey", "AFXCOLL/CMapPtrToWord::SetAt"]
helpviewer_keywords: ["CMapPtrToWord [MFC], CMapPtrToWord", "CMapPtrToWord [MFC], GetCount", "CMapPtrToWord [MFC], GetHashTableSize", "CMapPtrToWord [MFC], GetNextAssoc", "CMapPtrToWord [MFC], GetSize", "CMapPtrToWord [MFC], GetStartPosition", "CMapPtrToWord [MFC], HashKey", "CMapPtrToWord [MFC], InitHashTable", "CMapPtrToWord [MFC], IsEmpty", "CMapPtrToWord [MFC], Lookup", "CMapPtrToWord [MFC], LookupKey", "CMapPtrToWord [MFC], RemoveAll", "CMapPtrToWord [MFC], RemoveKey", "CMapPtrToWord [MFC], SetAt"]
ms.assetid: 4631c6b6-d49f-49d9-adc0-1e0491e32d7b
---
# CMapPtrToWord Class

Supports maps of 16-bit words keyed by void pointers.

## Syntax

```
class CMapPtrToWord : public CObject
```

## Members

The member functions of `CMapPtrToWord` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute WORD. Wherever you see a `CString` or a **`const`** pointer to **`char`** as a function parameter or return value, substitute a pointer to **`void`**.

`BOOL CMapPtrToWord::Lookup( const void* <key>, WORD& <rValue> ) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapPtrToWord::CMapPtrToWord](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapPtrToWord::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapPtrToWord::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapPtrToWord::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapPtrToWord::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapPtrToWord::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapPtrToWord::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapPtrToWord::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapPtrToWord::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapPtrToWord::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapPtrToWord::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapPtrToWord::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapPtrToWord::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapPtrToWord::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapPtrToWord::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapWordToPtr` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual map elements, you must set the depth of the dump context to 1 or greater.

Pointer-to-word maps may not be serialized.

When a `CMapPtrToWord` object is deleted, or when its elements are removed, the pointers and the words are removed. The entities referenced by the key pointers are not removed.

For more information on `CMapPtrToWord`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapPtrToWord`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
