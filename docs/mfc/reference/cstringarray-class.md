---
description: "Learn more about: CStringArray Class"
title: "CStringArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CStringArray", "AFXCOLL/CStringArray", "AFXCOLL/CStringArray::CStringArray", "AFXCOLL/CStringArray::Add", "AFXCOLL/CStringArray::Append", "AFXCOLL/CStringArray::Copy", "AFXCOLL/CStringArray::ElementAt", "AFXCOLL/CStringArray::FreeExtra", "AFXCOLL/CStringArray::GetAt", "AFXCOLL/CStringArray::GetCount", "AFXCOLL/CStringArray::GetData", "AFXCOLL/CStringArray::GetSize", "AFXCOLL/CStringArray::GetUpperBound", "AFXCOLL/CStringArray::InsertAt", "AFXCOLL/CStringArray::IsEmpty", "AFXCOLL/CStringArray::RemoveAll", "AFXCOLL/CStringArray::RemoveAt", "AFXCOLL/CStringArray::SetAt", "AFXCOLL/CStringArray::SetAtGrow", "AFXCOLL/CStringArray::SetSize"]
helpviewer_keywords: ["CStringArray [MFC], CStringArray", "CStringArray [MFC], Add", "CStringArray [MFC], Append", "CStringArray [MFC], Copy", "CStringArray [MFC], ElementAt", "CStringArray [MFC], FreeExtra", "CStringArray [MFC], GetAt", "CStringArray [MFC], GetCount", "CStringArray [MFC], GetData", "CStringArray [MFC], GetSize", "CStringArray [MFC], GetUpperBound", "CStringArray [MFC], InsertAt", "CStringArray [MFC], IsEmpty", "CStringArray [MFC], RemoveAll", "CStringArray [MFC], RemoveAt", "CStringArray [MFC], SetAt", "CStringArray [MFC], SetAtGrow", "CStringArray [MFC], SetSize"]
ms.assetid: 6c637e06-bba8-4c08-b0fc-cf8cb067ce34
---
# CStringArray Class

Supports arrays of [CString](../../atl-mfc-shared/using-cstring.md) objects.

## Syntax

```
class CStringArray : public CObject
```

## Members

The member functions of `CStringArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value, substitute a [CString](../../atl-mfc-shared/using-cstring.md) object (not a [CString](../../atl-mfc-shared/using-cstring.md) pointer). Wherever you see a `CObject` pointer as a function parameter, substitute a `LPCTSTR`.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`CString CStringArray::GetAt( int <nIndex> ) const;`

and

`void SetAt( int <nIndex>, CObject* <newElement> )`

translates to

`void SetAt( int <nIndex>, LPCTSTR <newElement> )`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStringArray::CStringArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStringArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CStringArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CStringArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CStringArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the element pointer within the array.|
|[CStringArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CStringArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CStringArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CStringArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be **NULL**.|
|[CStringArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CStringArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CStringArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CStringArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CStringArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CStringArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CStringArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CStringArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CStringArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CStringArray::operator \[ \]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

`CStringArray` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. If an array of `CString` objects is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each element is serialized in turn.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

If you need a dump of individual string elements in the array, you must set the depth of the dump context to 1 or greater.

When a `CString` array is deleted, or when its elements are removed, string memory is freed as appropriate.

For more information on using `CStringArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CStringArray`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
