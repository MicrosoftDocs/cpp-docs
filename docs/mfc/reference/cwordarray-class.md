---
description: "Learn more about: CWordArray Class"
title: "CWordArray Class"
ms.date: "09/07/2019"
f1_keywords: ["CWordArray", "AFXCOLL/CWordArray", "AFXCOLL/CWordArray::CWordArray", "AFXCOLL/CWordArray::Add", "AFXCOLL/CWordArray::Append", "AFXCOLL/CWordArray::Copy", "AFXCOLL/CWordArray::ElementAt", "AFXCOLL/CWordArray::FreeExtra", "AFXCOLL/CWordArray::GetAt", "AFXCOLL/CWordArray::GetCount", "AFXCOLL/CWordArray::GetData", "AFXCOLL/CWordArray::GetSize", "AFXCOLL/CWordArray::GetUpperBound", "AFXCOLL/CWordArray::InsertAt", "AFXCOLL/CWordArray::IsEmpty", "AFXCOLL/CWordArray::RemoveAll", "AFXCOLL/CWordArray::RemoveAt", "AFXCOLL/CWordArray::SetAt", "AFXCOLL/CWordArray::SetAtGrow", "AFXCOLL/CWordArray::SetSize"]
helpviewer_keywords: ["CWordArray [MFC], CWordArray", "CWordArray [MFC], Add", "CWordArray [MFC], Append", "CWordArray [MFC], Copy", "CWordArray [MFC], ElementAt", "CWordArray [MFC], FreeExtra", "CWordArray [MFC], GetAt", "CWordArray [MFC], GetCount", "CWordArray [MFC], GetData", "CWordArray [MFC], GetSize", "CWordArray [MFC], GetUpperBound", "CWordArray [MFC], InsertAt", "CWordArray [MFC], IsEmpty", "CWordArray [MFC], RemoveAll", "CWordArray [MFC], RemoveAt", "CWordArray [MFC], SetAt", "CWordArray [MFC], SetAtGrow", "CWordArray [MFC], SetSize"]
ms.assetid: 2ba2c194-2c6c-40ff-9db4-e9dbe57e1f57
---
# CWordArray Class

Supports arrays of 16-bit words.

## Syntax

```
class CWordArray : public CObject
```

## Members

The member functions of `CWordArray` are similar to the member functions of class [CObArray](../../mfc/reference/cobarray-class.md). Because of this similarity, you can use the `CObArray` reference documentation for member function specifics. Wherever you see a [CObject](../../mfc/reference/cobject-class.md) pointer as a function parameter or return value, substitute a WORD.

`CObject* CObArray::GetAt( int <nIndex> ) const;`

for example, translates to

`WORD CWordArray::GetAt( int <nIndex> ) const;`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CWordArray::CWordArray](../../mfc/reference/cobarray-class.md#cobarray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CWordArray::Add](../../mfc/reference/cobarray-class.md#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CWordArray::Append](../../mfc/reference/cobarray-class.md#append)|Appends another array to the array; grows the array if necessary.|
|[CWordArray::Copy](../../mfc/reference/cobarray-class.md#copy)|Copies another array to the array; grows the array if necessary.|
|[CWordArray::ElementAt](../../mfc/reference/cobarray-class.md#elementat)|Returns a temporary reference to the element pointer within the array.|
|[CWordArray::FreeExtra](../../mfc/reference/cobarray-class.md#freeextra)|Frees all unused memory above the current upper bound.|
|[CWordArray::GetAt](../../mfc/reference/cobarray-class.md#getat)|Returns the value at a given index.|
|[CWordArray::GetCount](../../mfc/reference/cobarray-class.md#getcount)|Gets the number of elements in this array.|
|[CWordArray::GetData](../../mfc/reference/cobarray-class.md#getdata)|Allows access to elements in the array. Can be NULL.|
|[CWordArray::GetSize](../../mfc/reference/cobarray-class.md#getsize)|Gets the number of elements in this array.|
|[CWordArray::GetUpperBound](../../mfc/reference/cobarray-class.md#getupperbound)|Returns the largest valid index.|
|[CWordArray::InsertAt](../../mfc/reference/cobarray-class.md#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CWordArray::IsEmpty](../../mfc/reference/cobarray-class.md#isempty)|Determines if the array is empty.|
|[CWordArray::RemoveAll](../../mfc/reference/cobarray-class.md#removeall)|Removes all the elements from this array.|
|[CWordArray::RemoveAt](../../mfc/reference/cobarray-class.md#removeat)|Removes an element at a specific index.|
|[CWordArray::SetAt](../../mfc/reference/cobarray-class.md#setat)|Sets the value for a given index; array not allowed to grow.|
|[CWordArray::SetAtGrow](../../mfc/reference/cobarray-class.md#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CWordArray::SetSize](../../mfc/reference/cobarray-class.md#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CWordArray::operator &#91;&#93;](../../mfc/reference/cobarray-class.md#operator_at)|Sets or gets the element at the specified index.|

## Remarks

`CWordArray` incorporates the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro to support serialization and dumping of its elements. If an array of words is stored to an archive, either with an overloaded insertion operator or with the [CObject::Serialize](../../mfc/reference/cobject-class.md#serialize) member function, each element is, in turn, serialized.

> [!NOTE]
> Before using an array, use `SetSize` to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

If you need a dump of individual elements in the array, you must set the depth of the dump context to 1 or greater.

For more information on using `CWordArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CWordArray`

## Requirements

**Header:** afxcoll.h

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
