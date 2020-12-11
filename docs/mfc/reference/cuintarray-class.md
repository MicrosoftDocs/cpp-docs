---
description: "Learn more about: CUIntArray Class"
title: "CUIntArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CUIntArray", "AFXCOLL/CUIntArray", "AFXCOLL/CUIntArray::CUIntArray", "AFXCOLL/CUIntArray::Add", "AFXCOLL/CUIntArray::Append", "AFXCOLL/CUIntArray::Copy", "AFXCOLL/CUIntArray::ElementAt", "AFXCOLL/CUIntArray::FreeExtra", "AFXCOLL/CUIntArray::GetAt", "AFXCOLL/CUIntArray::GetCount", "AFXCOLL/CUIntArray::GetData", "AFXCOLL/CUIntArray::GetSize", "AFXCOLL/CUIntArray::GetUpperBound", "AFXCOLL/CUIntArray::InsertAt", "AFXCOLL/CUIntArray::IsEmpty", "AFXCOLL/CUIntArray::RemoveAll", "AFXCOLL/CUIntArray::RemoveAt", "AFXCOLL/CUIntArray::SetAt", "AFXCOLL/CUIntArray::SetAtGrow", "AFXCOLL/CUIntArray::SetSize"]
helpviewer_keywords: ["CUIntArray [MFC], CUIntArray", "CUIntArray [MFC], Add", "CUIntArray [MFC], Append", "CUIntArray [MFC], Copy", "CUIntArray [MFC], ElementAt", "CUIntArray [MFC], FreeExtra", "CUIntArray [MFC], GetAt", "CUIntArray [MFC], GetCount", "CUIntArray [MFC], GetData", "CUIntArray [MFC], GetSize", "CUIntArray [MFC], GetUpperBound", "CUIntArray [MFC], InsertAt", "CUIntArray [MFC], IsEmpty", "CUIntArray [MFC], RemoveAll", "CUIntArray [MFC], RemoveAt", "CUIntArray [MFC], SetAt", "CUIntArray [MFC], SetAtGrow", "CUIntArray [MFC], SetSize"]
ms.assetid: d71f3d8f-ef9f-4e48-9b69-7782c0e2ddf7
---
# CUIntArray Class

Supports arrays of unsigned integers.

## Syntax

```
class CUIntArray : public CObject
```

## Members

The member functions of `CUIntArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a UINT.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`UINT CUIntArray::GetAt( int <nIndex> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CUIntArray::CUIntArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CUIntArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CUIntArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CUIntArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CUIntArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the element pointer within the array.|
|[CUIntArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CUIntArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CUIntArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CUIntArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be NULL.|
|[CUIntArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CUIntArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CUIntArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CUIntArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CUIntArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CUIntArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CUIntArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CUIntArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CUIntArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CUIntArray::operator \[ \]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

An unsigned integer, or UINT, differs from words and doublewords in that the physical size of a UINT can change depending on the target operating environment. A UINT is the same size as a doubleword.

`CUIntArray` incorporates the [IMPLEMENT_DYNAMIC](run-time-object-model-services.md#implement_dynamic) macro to support run-time type access and dumping to a [CDumpContext](../../mfc/reference/cdumpcontext-class.md) object. If you need a dump of individual unsigned integer elements, you must set the depth of the dump context to 1 or greater. Unsigned integer arrays cannot be serialized.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

For more information on using `CUIntArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CUIntArray`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
