---
description: "Learn more about: CByteArray Class"
title: "CByteArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CByteArray", "AFXCOLL/CByteArray", "AFXCOLL/CByteArray::CByteArray", "AFXCOLL/CByteArray::Add", "AFXCOLL/CByteArray::Append", "AFXCOLL/CByteArray::Copy", "AFXCOLL/CByteArray::ElementAt", "AFXCOLL/CByteArray::FreeExtra", "AFXCOLL/CByteArray::GetAt", "AFXCOLL/CByteArray::GetCount", "AFXCOLL/CByteArray::GetData", "AFXCOLL/CByteArray::GetSize", "AFXCOLL/CByteArray::GetUpperBound", "AFXCOLL/CByteArray::InsertAt", "AFXCOLL/CByteArray::IsEmpty", "AFXCOLL/CByteArray::RemoveAll", "AFXCOLL/CByteArray::RemoveAt", "AFXCOLL/CByteArray::SetAt", "AFXCOLL/CByteArray::SetAtGrow", "AFXCOLL/CByteArray::SetSize"]
helpviewer_keywords: ["CByteArray [MFC], CByteArray", "CByteArray [MFC], Add", "CByteArray [MFC], Append", "CByteArray [MFC], Copy", "CByteArray [MFC], ElementAt", "CByteArray [MFC], FreeExtra", "CByteArray [MFC], GetAt", "CByteArray [MFC], GetCount", "CByteArray [MFC], GetData", "CByteArray [MFC], GetSize", "CByteArray [MFC], GetUpperBound", "CByteArray [MFC], InsertAt", "CByteArray [MFC], IsEmpty", "CByteArray [MFC], RemoveAll", "CByteArray [MFC], RemoveAt", "CByteArray [MFC], SetAt", "CByteArray [MFC], SetAtGrow", "CByteArray [MFC], SetSize"]
ms.assetid: 53d4a512-657c-4187-9609-e3f5339a78e0
---
# CByteArray Class

Supports dynamic arrays of bytes.

## Syntax

```
class CByteArray : public CObject
```

## Members

The member functions of `CByteArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a BYTE.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`BYTE CByteArray::GetAt( int <nIndex> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CByteArray::CByteArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CByteArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CByteArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CByteArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CByteArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the byte within the array.|
|[CByteArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CByteArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CByteArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CByteArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be NULL.|
|[CByteArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CByteArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CByteArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CByteArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CByteArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CByteArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CByteArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CByteArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CByteArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CByteArray::operator \[ \]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

`CByteArray` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. If an array of bytes is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function, each element is, in turn, serialized.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

If you need debug output from individual elements in the array, you must set the depth of the `CDumpContext` object to 1 or greater.

For more information on using `CByteArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CByteArray`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObArray Class](../../mfc/reference/cobarray-class.md)
