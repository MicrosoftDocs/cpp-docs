---
description: "Learn more about: CPtrArray Class"
title: "CPtrArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CPtrArray", "AFXCOLL/CPtrArray", "AFXCOLL/CPtrArray::CPtrArray", "AFXCOLL/CPtrArray::Add", "AFXCOLL/CPtrArray::Append", "AFXCOLL/CPtrArray::Copy", "AFXCOLL/CPtrArray::ElementAt", "AFXCOLL/CPtrArray::FreeExtra", "AFXCOLL/CPtrArray::GetAt", "AFXCOLL/CPtrArray::GetCount", "AFXCOLL/CPtrArray::GetData", "AFXCOLL/CPtrArray::GetSize", "AFXCOLL/CPtrArray::GetUpperBound", "AFXCOLL/CPtrArray::InsertAt", "AFXCOLL/CPtrArray::IsEmpty", "AFXCOLL/CPtrArray::RemoveAll", "AFXCOLL/CPtrArray::RemoveAt", "AFXCOLL/CPtrArray::SetAt", "AFXCOLL/CPtrArray::SetAtGrow", "AFXCOLL/CPtrArray::SetSize"]
helpviewer_keywords: ["CPtrArray [MFC], CPtrArray", "CPtrArray [MFC], Add", "CPtrArray [MFC], Append", "CPtrArray [MFC], Copy", "CPtrArray [MFC], ElementAt", "CPtrArray [MFC], FreeExtra", "CPtrArray [MFC], GetAt", "CPtrArray [MFC], GetCount", "CPtrArray [MFC], GetData", "CPtrArray [MFC], GetSize", "CPtrArray [MFC], GetUpperBound", "CPtrArray [MFC], InsertAt", "CPtrArray [MFC], IsEmpty", "CPtrArray [MFC], RemoveAll", "CPtrArray [MFC], RemoveAt", "CPtrArray [MFC], SetAt", "CPtrArray [MFC], SetAtGrow", "CPtrArray [MFC], SetSize"]
ms.assetid: c23b87a3-bf84-49d6-a66b-61e999d0938a
---
# CPtrArray Class

Supports arrays of void pointers.

## Syntax

```
class CPtrArray : public CObject
```

## Members

The member functions of `CPtrArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to **`void`**.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`void* CPtrArray::GetAt( int <nIndex> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CPtrArray::CPtrArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CPtrArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CPtrArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CPtrArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CPtrArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the element pointer within the array.|
|[CPtrArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CPtrArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CPtrArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CPtrArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be `NULL`.|
|[CPtrArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CPtrArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CPtrArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CPtrArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CPtrArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CPtrArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CPtrArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CPtrArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CPtrArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CPtrArray::operator \[ \]](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

`CPtrArray` incorporates the IMPLEMENT_DYNAMIC macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual pointer array elements, you must set the depth of the dump context to 1 or greater.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

Pointer arrays cannot be serialized.

When a pointer array is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.

For more information on using `CPtrArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CPtrArray`

## Requirements

**Header:** afxcoll.h

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObArray Class](../../mfc/reference/cobarray-class.md)
