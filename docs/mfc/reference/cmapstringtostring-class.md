---
description: "Learn more about: CMapStringToString Class"
title: "CMapStringToString Class"
ms.date: "11/04/2016"
f1_keywords: ["CMapStringToString", "AFXCOLL/CMapStringToString", "AFXCOLL/CMapStringToString::CPair", "AFXCOLL/CMapStringToString::CMapStringToString", "AFXCOLL/CMapStringToString::GetCount", "AFXCOLL/CMapStringToString::GetHashTableSize", "AFXCOLL/CMapStringToString::GetNextAssoc", "AFXCOLL/CMapStringToString::GetSize", "AFXCOLL/CMapStringToString::GetStartPosition", "AFXCOLL/CMapStringToString::HashKey", "AFXCOLL/CMapStringToString::InitHashTable", "AFXCOLL/CMapStringToString::IsEmpty", "AFXCOLL/CMapStringToString::Lookup", "AFXCOLL/CMapStringToString::LookupKey", "AFXCOLL/CMapStringToString::PGetFirstAssoc", "AFXCOLL/CMapStringToString::PGetNextAssoc", "AFXCOLL/CMapStringToString::PLookup", "AFXCOLL/CMapStringToString::RemoveAll", "AFXCOLL/CMapStringToString::RemoveKey", "AFXCOLL/CMapStringToString::SetAt"]
helpviewer_keywords: ["CMapStringToString [MFC], CPair", "CMapStringToString [MFC], CMapStringToString", "CMapStringToString [MFC], GetCount", "CMapStringToString [MFC], GetHashTableSize", "CMapStringToString [MFC], GetNextAssoc", "CMapStringToString [MFC], GetSize", "CMapStringToString [MFC], GetStartPosition", "CMapStringToString [MFC], HashKey", "CMapStringToString [MFC], InitHashTable", "CMapStringToString [MFC], IsEmpty", "CMapStringToString [MFC], Lookup", "CMapStringToString [MFC], LookupKey", "CMapStringToString [MFC], PGetFirstAssoc", "CMapStringToString [MFC], PGetNextAssoc", "CMapStringToString [MFC], PLookup", "CMapStringToString [MFC], RemoveAll", "CMapStringToString [MFC], RemoveKey", "CMapStringToString [MFC], SetAt"]
ms.assetid: b45794c2-fe6b-4edb-a8ca-faa03b57b4a8
---
# CMapStringToString Class

Supports maps of `CString` objects keyed by `CString` objects.

## Syntax

```
class CMapStringToString : public CObject
```

## Members

The member functions of `CMapStringToString` are similar to the member functions of class [CMapStringToOb](../../mfc/reference/cmapstringtoob-class.md). Because of this similarity, you can use the `CMapStringToOb` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value or "output" function parameter, substitute a pointer to **`char`**. Wherever you see a `CObject` pointer as an "input" function parameter, substitute a pointer to **`char`**.

`BOOL CMapStringToString::Lookup(LPCTSTR<key>, CString&<rValue>) const;`

for example, translates to

`BOOL CMapStringToOb::Lookup(const char*<key>, CObject*&<rValue>) const;`

### Public Structures

|Name|Description|
|----------|-----------------|
|[CMapStringToString::CPair](#cpair)|A nested structure containing a key value and the value of the associated string object.|

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CMapStringToString::CMapStringToString](../../mfc/reference/cmapstringtoob-class.md#cmapstringtoob)|Constructor.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CMapStringToString::GetCount](../../mfc/reference/cmapstringtoob-class.md#getcount)|Returns the number of elements in this map.|
|[CMapStringToString::GetHashTableSize](../../mfc/reference/cmapstringtoob-class.md#gethashtablesize)|Determines the current number of elements in the hash table.|
|[CMapStringToString::GetNextAssoc](../../mfc/reference/cmapstringtoob-class.md#getnextassoc)|Gets the next element for iterating.|
|[CMapStringToString::GetSize](../../mfc/reference/cmapstringtoob-class.md#getsize)|Returns the number of elements in this map.|
|[CMapStringToString::GetStartPosition](../../mfc/reference/cmapstringtoob-class.md#getstartposition)|Returns the position of the first element.|
|[CMapStringToString::HashKey](../../mfc/reference/cmapstringtoob-class.md#hashkey)|Calculates the hash value of a specified key.|
|[CMapStringToString::InitHashTable](../../mfc/reference/cmapstringtoob-class.md#inithashtable)|Initializes the hash table.|
|[CMapStringToString::IsEmpty](../../mfc/reference/cmapstringtoob-class.md#isempty)|Tests for the empty-map condition (no elements).|
|[CMapStringToString::Lookup](../../mfc/reference/cmapstringtoob-class.md#lookup)|Looks up a void pointer based on the void pointer key. The pointer value, not the entity it points to, is used for the key comparison.|
|[CMapStringToString::LookupKey](../../mfc/reference/cmapstringtoob-class.md#lookupkey)|Returns a reference to the key associated with the specified key value.|
|[CMapStringToString::PGetFirstAssoc](#pgetfirstassoc)|Gets a pointer to the first `CString` in the map.|
|[CMapStringToString::PGetNextAssoc](#pgetnextassoc)|Gets a pointer to the next `CString` for iterating.|
|[CMapStringToString::PLookup](#plookup)|Returns a pointer to a `CString` whose value matches the specified value.|
|[CMapStringToString::RemoveAll](../../mfc/reference/cmapstringtoob-class.md#removeall)|Removes all the elements from this map.|
|[CMapStringToString::RemoveKey](../../mfc/reference/cmapstringtoob-class.md#removekey)|Removes an element specified by a key.|
|[CMapStringToString::SetAt](../../mfc/reference/cmapstringtoob-class.md#setat)|Inserts an element into the map; replaces an existing element if a matching key is found.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CMapStringToString::operator \[ \]](../../mfc/reference/cmapstringtoob-class.md#operator_at)|Inserts an element into the map — operator substitution for `SetAt`.|

## Remarks

`CMapStringToString` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. Each element is serialized in turn if a map is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function.

If you need a dump of individual `CString`- `CString` elements, you must set the depth of the dump context to 1 or greater.

When a `CMapStringToString` object is deleted, or when its elements are removed, the `CString` objects are removed as appropriate.

For more information on `CMapStringToString`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CMapStringToString`

## Requirements

**Header:** afxcoll.h

## <a name="cpair"></a> CMapStringToString::CPair

Contains a key value and the value of the associated string object.

### Remarks

This is a nested structure within class [CMapStringToString](../../mfc/reference/cmapstringtostring-class.md).

The structure is composed of two fields:

- `key` The actual value of the key type.

- `value` The value of the associated object.

It is used to store the return values from [CMapStringToString::PLookup](#plookup), [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc), and [CMapStringToString::PGetNextAssoc](#pgetnextassoc).

### Example

  For an example of usage, see the example for [CMapStringToString::PLookup](#plookup).

## <a name="pgetfirstassoc"></a> CMapStringToString::PGetFirstAssoc

Returns the first entry of the map object.

```
const CPair* PGetFirstAssoc() const;

CPair* PGetFirstAssoc();
```

### Return Value

A pointer to the first entry in the map; see [CMapStringToString::CPair](#cpair). If the map is empty, the value is NULL.

### Remarks

Call this function to return a pointer the first element in the map object.

### Example

[!code-cpp[NVC_MFCCollections#73](../../mfc/codesnippet/cpp/cmapstringtostring-class_1.cpp)]

## <a name="pgetnextassoc"></a> CMapStringToString::PGetNextAssoc

Retrieves the map element pointed to by *pAssocRec*.

```
const CPair *PGetNextAssoc(const CPair* pAssoc) const;

CPair *PGetNextAssoc(const CPair* pAssoc);
```

### Parameters

*pAssoc*<br/>
Points to a map entry returned by a previous [PGetNextAssoc](#pgetnextassoc) or [PGetFirstAssoc](#pgetfirstassoc) call.

### Return Value

A pointer to the next entry in the map; see [CMapStringToString::CPair](#cpair). If the element is the last in the map, the value is NULL.

### Remarks

Call this method to iterate through all the elements in the map. Retrieve the first element with a call to `PGetFirstAssoc` and then iterate through the map with successive calls to `PGetNextAssoc`.

### Example

  See the example for [CMapStringToString::PGetFirstAssoc](#pgetfirstassoc).

## <a name="plookup"></a> CMapStringToString::PLookup

Looks up the value mapped to a given key.

```
const CPair* PLookup(LPCTSTR key) const;

CPair* PLookup(LPCTSTR key);
```

### Parameters

*key*<br/>
A pointer to the key for the element to be searched for.

### Return Value

A pointer to the specified key.

### Remarks

Call this method to search for a map element with a key that exactly matches the given key.

### Example

[!code-cpp[NVC_MFCCollections#74](../../mfc/codesnippet/cpp/cmapstringtostring-class_2.cpp)]

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
