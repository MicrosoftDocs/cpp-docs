---
description: "Learn more about: CMapWordToOb Class"
title: "CMapWordToOb Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapWordToOb", "AFXCOLL/CMapWordToOb", "AFXCOLL/CMapWordToOb::CMapWordToOb", "AFXCOLL/CMapWordToOb::GetCount", "AFXCOLL/CMapWordToOb::GetHashTableSize", "AFXCOLL/CMapWordToOb::GetNextAssoc", "AFXCOLL/CMapWordToOb::GetSize", "AFXCOLL/CMapWordToOb::GetStartPosition", "AFXCOLL/CMapWordToOb::HashKey", "AFXCOLL/CMapWordToOb::InitHashTable", "AFXCOLL/CMapWordToOb::IsEmpty", "AFXCOLL/CMapWordToOb::Lookup", "AFXCOLL/CMapWordToOb::LookupKey", "AFXCOLL/CMapWordToOb::RemoveAll", "AFXCOLL/CMapWordToOb::RemoveKey", "AFXCOLL/CMapWordToOb::SetAt"]
helpviewer_keywords: ["CMapWordToOb [MFC], CMapWordToOb", "CMapWordToOb [MFC], GetCount", "CMapWordToOb [MFC], GetHashTableSize", "CMapWordToOb [MFC], GetNextAssoc", "CMapWordToOb [MFC], GetSize", "CMapWordToOb [MFC], GetStartPosition", "CMapWordToOb [MFC], HashKey", "CMapWordToOb [MFC], InitHashTable", "CMapWordToOb [MFC], IsEmpty", "CMapWordToOb [MFC], Lookup", "CMapWordToOb [MFC], LookupKey", "CMapWordToOb [MFC], RemoveAll", "CMapWordToOb [MFC], RemoveKey", "CMapWordToOb [MFC], SetAt"]
ms.assetid: 9c9bcd76-456f-4cf9-b03c-dd28b49d5e4f
---
# CMapWordToOb Class

Supports maps of `CObject` pointers keyed by 16-bit words.

## Syntax

```
class CMapWordToOb : public CObject
```

## Members

The member functions of `CMapWordToOb` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CString` or a **`const`** pointer to **`char`** as a function parameter or return value, substitute WORD.

`BOOL CMapWordToOb::Lookup( WORD <key>, CObject*& <rValue> ) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup( const char* <key>, CObject*& <rValue> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapWordToOb::CMapWordToOb](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapWordToOb::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapWordToOb::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapWordToOb::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapWordToOb::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapWordToOb::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapWordToOb::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapWordToOb::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapWordToOb::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapWordToOb::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapWordToOb::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapWordToOb::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapWordToOb::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapWordToOb::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapWordToOb::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapWordToOb` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. Each element is serialized in turn if a map is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function.

If you need a dump of individual WORD- `CObject` elements, you must set the depth of the dump context to 1 or greater.

When a `CMapWordToOb` object is deleted, or when its elements are removed, the `CObject` pointers are removed. The objects referenced by the `CObject` pointers are not destroyed.

For more information on `CMapWordToOb`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapWordToOb`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
