---
description: "Learn more about: CDWordArray Class"
title: "CDWordArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CDWordArray", "AFXCOLL/CDWordArray", "AFXCOLL/CDWordArray::CDWordArray", "AFXCOLL/CDWordArray::Add", "AFXCOLL/CDWordArray::Append", "AFXCOLL/CDWordArray::Copy", "AFXCOLL/CDWordArray::ElementAt", "AFXCOLL/CDWordArray::FreeExtra", "AFXCOLL/CDWordArray::GetAt", "AFXCOLL/CDWordArray::GetCount", "AFXCOLL/CDWordArray::GetData", "AFXCOLL/CDWordArray::GetSize", "AFXCOLL/CDWordArray::GetUpperBound", "AFXCOLL/CDWordArray::InsertAt", "AFXCOLL/CDWordArray::IsEmpty", "AFXCOLL/CDWordArray::RemoveAll", "AFXCOLL/CDWordArray::RemoveAt", "AFXCOLL/CDWordArray::SetAt", "AFXCOLL/CDWordArray::SetAtGrow", "AFXCOLL/CDWordArray::SetSize"]
helpviewer_keywords: ["CDWordArray [MFC], CDWordArray", "CDWordArray [MFC], Add", "CDWordArray [MFC], Append", "CDWordArray [MFC], Copy", "CDWordArray [MFC], ElementAt", "CDWordArray [MFC], FreeExtra", "CDWordArray [MFC], GetAt", "CDWordArray [MFC], GetCount", "CDWordArray [MFC], GetData", "CDWordArray [MFC], GetSize", "CDWordArray [MFC], GetUpperBound", "CDWordArray [MFC], InsertAt", "CDWordArray [MFC], IsEmpty", "CDWordArray [MFC], RemoveAll", "CDWordArray [MFC], RemoveAt", "CDWordArray [MFC], SetAt", "CDWordArray [MFC], SetAtGrow", "CDWordArray [MFC], SetSize"]
ms.assetid: 581be11e-ced6-47d1-8679-e0b8e7d99494
---
# CDWordArray Class

Supports arrays of 32-bit doublewords.

## Syntax

```
class CDWordArray : public CObject
```

## Members

The member functions of `CDWordArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a `DWORD`.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`DWORD CDWordArray::GetAt( int <nIndex> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CDWordArray::CDWordArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CDWordArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CDWordArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CDWordArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CDWordArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the byte within the array.|
|[CDWordArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CDWordArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CDWordArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CDWordArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be NULL.|
|[CDWordArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CDWordArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CDWordArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CDWordArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CDWordArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CDWordArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CDWordArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CDWordArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CDWordArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CDWordArray::operator \[ \]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

`CDWordArray` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. If an array of doublewords is stored to an archive, either with the overloaded insertion ( **<<**) operator or with the `Serialize` member function, each element is, in turn, serialized.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

If you need debug output from individual elements in the array, you must set the depth of the `CDumpContext` object to 1 or greater.

For more information on using `CDWordArray`, see the article [Collections](../../mfc/collections.md).

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObArray Class](../../mfc/reference/cobarray-class.md)
