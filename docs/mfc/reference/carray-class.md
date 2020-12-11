---
description: "Learn more about: CArray Class"
title: "CArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CArray", "AFXTEMPL/CArray", "AFXTEMPL/CArray::CArray", "AFXTEMPL/CArray::Add", "AFXTEMPL/CArray::Append", "AFXTEMPL/CArray::Copy", "AFXTEMPL/CArray::ElementAt", "AFXTEMPL/CArray::FreeExtra", "AFXTEMPL/CArray::GetAt", "AFXTEMPL/CArray::GetCount", "AFXTEMPL/CArray::GetData", "AFXTEMPL/CArray::GetSize", "AFXTEMPL/CArray::GetUpperBound", "AFXTEMPL/CArray::InsertAt", "AFXTEMPL/CArray::IsEmpty", "AFXTEMPL/CArray::RemoveAll", "AFXTEMPL/CArray::RemoveAt", "AFXTEMPL/CArray::SetAt", "AFXTEMPL/CArray::SetAtGrow", "AFXTEMPL/CArray::SetSize"]
helpviewer_keywords: ["CArray [MFC], CArray", "CArray [MFC], Add", "CArray [MFC], Append", "CArray [MFC], Copy", "CArray [MFC], ElementAt", "CArray [MFC], FreeExtra", "CArray [MFC], GetAt", "CArray [MFC], GetCount", "CArray [MFC], GetData", "CArray [MFC], GetSize", "CArray [MFC], GetUpperBound", "CArray [MFC], InsertAt", "CArray [MFC], IsEmpty", "CArray [MFC], RemoveAll", "CArray [MFC], RemoveAt", "CArray [MFC], SetAt", "CArray [MFC], SetAtGrow", "CArray [MFC], SetSize"]
ms.assetid: fead8b00-4cfd-4625-ad0e-251df62ba92f
---
# CArray Class

Supports arrays that are like C arrays, but can dynamically reduce and grow as necessary.

## Syntax

```
template <class TYPE, class ARG_TYPE = const TYPE&>
class CArray : public CObject
```

#### Parameters

*TYPE*<br/>
Template parameter that specifies the type of objects stored in the array. *TYPE* is a parameter that is returned by `CArray`.

*ARG_TYPE*<br/>
Template parameter that specifies the argument type that is used to access objects stored in the array. Often a reference to *TYPE*. *ARG_TYPE* is a parameter that is passed to `CArray`.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CArray::CArray](#carray)|Constructs an empty array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CArray::Add](#add)|Adds an element to the end of the array; grows the array if necessary.|
|[CArray::Append](#append)|Appends another array to the array; grows the array if necessary|
|[CArray::Copy](#copy)|Copies another array to the array; grows the array if necessary.|
|[CArray::ElementAt](#elementat)|Returns a temporary reference to the element pointer within the array.|
|[CArray::FreeExtra](#freeextra)|Frees all unused memory above the current upper bound.|
|[CArray::GetAt](#getat)|Returns the value at a given index.|
|[CArray::GetCount](#getcount)|Gets the number of elements in this array.|
|[CArray::GetData](#getdata)|Allows access to elements in the array. Can be NULL.|
|[CArray::GetSize](#getsize)|Gets the number of elements in this array.|
|[CArray::GetUpperBound](#getupperbound)|Returns the largest valid index.|
|[CArray::InsertAt](#insertat)|Inserts an element (or all the elements in another array) at a specified index.|
|[CArray::IsEmpty](#isempty)|Determines whether the array is empty.|
|[CArray::RemoveAll](#removeall)|Removes all the elements from this array.|
|[CArray::RemoveAt](#removeat)|Removes an element at a specific index.|
|[CArray::SetAt](#setat)|Sets the value for a given index; array not allowed to grow.|
|[CArray::SetAtGrow](#setatgrow)|Sets the value for a given index; grows the array if necessary.|
|[CArray::SetSize](#setsize)|Sets the number of elements to be contained in this array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[operator&#91;&#93;](#operator_at)|Sets or gets the element at the specified index.|

## Remarks

Array indexes always start at position 0. You can decide whether to fix the upper bound or enable the array to expand when you add elements past the current bound. Memory is allocated contiguously to the upper bound, even if some elements are null.

> [!NOTE]
> Most methods that resize a `CArray` object or add elements to it use [memcpy_s](../../c-runtime-library/reference/memcpy-s-wmemcpy-s.md) to move elements. This is a problem because `memcpy_s` is not compatible with any objects that require the constructor to be called. If the items in the `CArray` are not compatible with `memcpy_s`, you must create a new `CArray` of the appropriate size. You must then use [CArray::Copy](#copy) and [CArray::SetAt](#setat) to populate the new array because those methods use an assignment operator instead of `memcpy_s`.

As with a C array, the access time for a `CArray` indexed element is constant and is independent of the array size.

> [!TIP]
> Before using an array, use [SetSize](#setsize) to establish its size and allocate memory for it. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

If you need a dump of individual elements in an array, you must set the depth of the [CDumpContext](../../mfc/reference/cdumpcontext-class.md) object to 1 or larger.

Certain member functions of this class call global helper functions that must be customized for most uses of the `CArray` class. See the topic [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md) in the MFC Macros and Globals section.

Array class derivation is like list derivation.

For more information about how to use `CArray`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CArray`

## Requirements

**Header:** afxtempl.h

## <a name="add"></a> CArray::Add

Adds a new element to the end of an array, growing the array by 1.

```
INT_PTR Add(ARG_TYPE newElement);
```

### Parameters

*ARG_TYPE*<br/>
Template parameter specifying the type of arguments referencing elements in this array.

*newElement*<br/>
The element to be added to this array.

### Return Value

The index of the added element.

### Remarks

If [SetSize](#setsize) has been used with an `nGrowBy` value greater than 1, then extra memory may be allocated. However, the upper bound will increase by only 1.

### Example

[!code-cpp[NVC_MFCCollections#22](../../mfc/codesnippet/cpp/carray-class_1.cpp)]

## <a name="append"></a> CArray::Append

Call this member function to add the contents of one array to the end of another.

```
INT_PTR Append(const CArray& src);
```

### Parameters

*src*<br/>
Source of the elements to be appended to an array.

### Return Value

The index of the first appended element.

### Remarks

The arrays must be of the same type.

If necessary, `Append` may allocate extra memory to accommodate the elements appended to the array.

### Example

[!code-cpp[NVC_MFCCollections#23](../../mfc/codesnippet/cpp/carray-class_2.cpp)]

## <a name="carray"></a> CArray::CArray

Constructs an empty array.

```
CArray();
```

### Remarks

The array grows one element at a time.

### Example

[!code-cpp[NVC_MFCCollections#24](../../mfc/codesnippet/cpp/carray-class_3.cpp)]

## <a name="copy"></a> CArray::Copy

Use this member function to copy the elements of one array to another.

```cpp
void Copy(const CArray& src);
```

### Parameters

*src*<br/>
Source of the elements to be copied to an array.

### Remarks

Call this member function to overwrite the elements of one array with the elements of another array.

`Copy` does not free memory; however, if necessary, `Copy` may allocate extra memory to accommodate the elements copied to the array.

### Example

[!code-cpp[NVC_MFCCollections#25](../../mfc/codesnippet/cpp/carray-class_4.cpp)]

## <a name="elementat"></a> CArray::ElementAt

Returns a temporary reference to the specified element within the array.

```
TYPE& ElementAt(INT_PTR nIndex);
const TYPE& ElementAt(INT_PTR nIndex) const;
```

### Parameters

*nIndex*<br/>
An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#getupperbound).

### Return Value

A reference to an array element.

### Remarks

It is used to implement the left-side assignment operator for arrays.

### Example

  See the example for [GetSize](#getsize).

## <a name="freeextra"></a> CArray::FreeExtra

Frees any extra memory that was allocated while the array was grown.

```cpp
void FreeExtra();
```

### Remarks

This function has no effect on the size or upper bound of the array.

### Example

  See the example for [GetData](#getdata).

## <a name="getat"></a> CArray::GetAt

Returns the array element at the specified index.

```
TYPE& GetAt(INT_PTR nIndex);
const TYPE& GetAt(INT_PTR nIndex) const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of the array elements.

*nIndex*<br/>
An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#getupperbound).

### Return Value

The array element currently at this index.

### Remarks

Passing a negative value or a value greater than the value returned by `GetUpperBound` will result in a failed assertion.

### Example

[!code-cpp[NVC_MFCCollections#26](../../mfc/codesnippet/cpp/carray-class_5.cpp)]

## <a name="getcount"></a> CArray::GetCount

Returns the number of array elements.

```
INT_PTR GetCount() const;
```

### Return Value

The number of items in the array.

### Remarks

Call this method to retrieve the number of elements in the array. Because indexes are zero-based, the size is 1 greater than the largest index. Calling this method will generate the same result as the [CArray::GetSize](#getsize) method.

### Example

[!code-cpp[NVC_MFCCollections#27](../../mfc/codesnippet/cpp/carray-class_6.cpp)]

## <a name="getdata"></a> CArray::GetData

Use this member function to gain direct access to the elements in an array.

```
const TYPE* GetData() const;
TYPE* GetData();
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of the array elements.

### Return Value

A pointer to an array element.

### Remarks

If no elements are available, `GetData` returns a null value.

While direct access to the elements of an array can help you work more quickly, use caution when calling `GetData`; any errors you make directly affect the elements of your array.

### Example

[!code-cpp[NVC_MFCCollections#28](../../mfc/codesnippet/cpp/carray-class_7.cpp)]

## <a name="getsize"></a> CArray::GetSize

Returns the size of the array.

```
INT_PTR GetSize() const;
```

### Remarks

Because indexes are zero-based, the size is 1 greater than the largest index. Calling this method will generate the same result as the [CArray::GetCount](#getcount) method.

### Example

[!code-cpp[NVC_MFCCollections#29](../../mfc/codesnippet/cpp/carray-class_8.cpp)]

## <a name="getupperbound"></a> CArray::GetUpperBound

Returns the current upper bound of this array.

```
INT_PTR GetUpperBound() const;
```

### Remarks

Because array indexes are zero-based, this function returns a value 1 less than `GetSize`.

The condition `GetUpperBound( )` = -1 indicates that the array contains no elements.

### Example

  See the example for [CArray::GetAt](#getat).

## <a name="insertat"></a> CArray::InsertAt

The first version of `InsertAt` inserts one element (or multiple copies of an element) at a specified index in an array.

```cpp
void InsertAt(
    INT_PTR nIndex,
    ARG_TYPE newElement,
    INT_PTR nCount = 1);

void InsertAt(
    INT_PTR nStartIndex,
    CArray* pNewArray);
```

### Parameters

*nIndex*<br/>
An integer index that may be greater than the value returned by `GetUpperBound`.

*ARG_TYPE*<br/>
Template parameter specifying the type of elements in this array.

*newElement*<br/>
The element to be placed in this array.

*nCount*<br/>
The number of times this element should be inserted (defaults to 1).

*nStartIndex*<br/>
An integer index that may be greater than the value returned by [GetUpperBound](#getupperbound).

*pNewArray*<br/>
Another array that contains elements to be added to this array.

### Remarks

In the process, it shifts up (by incrementing the index) the existing element at this index, and it shifts up all the elements above it.

The second version inserts all the elements from another `CArray` collection, starting at the *nStartIndex* position.

The `SetAt` function, in contrast, replaces one specified array element and does not shift any elements.

### Example

[!code-cpp[NVC_MFCCollections#30](../../mfc/codesnippet/cpp/carray-class_9.cpp)]

## <a name="isempty"></a> CArray::IsEmpty

Determines whether the array is empty.

```
BOOL IsEmpty() const;
```

### Return Value

Nonzero if the array contains no elements; otherwise 0.

## <a name="operator_at"></a> CArray::operator \[\]

These subscript operators are a convenient substitute for the [SetAt](#setat) and [GetAt](#getat) functions.

```
TYPE& operator[](int_ptr nindex);
const TYPE& operator[](int_ptr nindex) const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of elements in this array.

*nIndex*<br/>
Index of the element to be accessed.

### Remarks

The first operator, called for arrays that are not **`const`**, may be used on either the right (r-value) or the left (l-value) of an assignment statement. The second, called for **`const`** arrays, may be used only on the right.

The Debug version of the library asserts if the subscript (either on the left or right side of an assignment statement) is out of bounds.

### Example

[!code-cpp[NVC_MFCCollections#34](../../mfc/codesnippet/cpp/carray-class_10.cpp)]

## <a name="relocateelements"></a> CArray::RelocateElements

Relocates data to a new buffer when the array should grow or shrink.

```
template<class TYPE, class ARG_TYPE>
AFX_INLINE void CArray<TYPE, ARG_TYPE>::RelocateElements(
    TYPE* pNewData,
    const TYPE* pData,
    INT_PTR nCount);
```

### Parameters

*pNewData*<br/>
A new buffer for the array of elements.

*pData*<br/>
The old array of elements.

*nCount*<br/>
Number of elements in the old array.

### Remarks

*pNewData* is always large enough to hold all the *pData* elements.

The [CArray](../../mfc/reference/carray-class.md) implementation uses this method to copy the old data to a new buffer when the array should grow or shrink (when [SetSize](#setsize) or [FreeExtra](#freeextra) are called). The default implementation just copies the data.

For arrays in which an element contains a pointer to one of its own members, or another structure contains a pointer to one of the array elements, the pointers are not updated in plain copy. In this case, you can correct pointers by implementing a specialization of `RelocateElements` with the relevant types. You are also responsible for data copying.

## <a name="removeall"></a> CArray::RemoveAll

Removes all the elements from this array.

```cpp
void RemoveAll();
```

### Remarks

If the array is already empty, the function still works.

### Example

[!code-cpp[NVC_MFCCollections#31](../../mfc/codesnippet/cpp/carray-class_11.cpp)]

## <a name="removeat"></a> CArray::RemoveAt

Removes one or more elements starting at a specified index in an array.

```cpp
void RemoveAt(
    INT_PTR nIndex,
    INT_PTR nCount = 1);
```

### Parameters

*nIndex*<br/>
An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#getupperbound).

*nCount*<br/>
The number of elements to remove.

### Remarks

In the process, it shifts down all the elements above the removed element(s). It decrements the upper bound of the array but does not free memory.

If you try to remove more elements than are contained in the array above the removal point, then the Debug version of the library asserts.

### Example

[!code-cpp[NVC_MFCCollections#32](../../mfc/codesnippet/cpp/carray-class_12.cpp)]

## <a name="setat"></a> CArray::SetAt

Sets the array element at the specified index.

```cpp
void SetAt(INT_PTR nIndex, ARG_TYPE newElement);
```

### Parameters

*nIndex*<br/>
An integer index that is greater than or equal to 0 and less than or equal to the value returned by [GetUpperBound](#getupperbound).

*ARG_TYPE*<br/>
Template parameter specifying the type of arguments used for referencing array elements.

*newElement*<br/>
The new element value to be stored at the specified position.

### Remarks

`SetAt` will not cause the array to grow. Use [SetAtGrow](#setatgrow) if you want the array to grow automatically.

You must ensure that your index value represents a valid position in the array. If it is out of bounds, then the Debug version of the library asserts.

### Example

  See the example for [GetAt](#getat).

## <a name="setatgrow"></a> CArray::SetAtGrow

Sets the array element at the specified index.

```cpp
void SetAtGrow(INT_PTR nIndex, ARG_TYPE newElement);
```

### Parameters

*nIndex*<br/>
An integer index that is greater than or equal to 0.

*ARG_TYPE*<br/>
Template parameter specifying the type of elements in the array.

*newElement*<br/>
The element to be added to this array. A NULL value is allowed.

### Remarks

The array grows automatically if necessary (that is, the upper bound is adjusted to accommodate the new element).

### Example

[!code-cpp[NVC_MFCCollections#33](../../mfc/codesnippet/cpp/carray-class_13.cpp)]

## <a name="setsize"></a> CArray::SetSize

Establishes the size of an empty or existing array; allocates memory if necessary.

```cpp
void SetSize(
    INT_PTR nNewSize,
    INT_PTR nGrowBy = -1);
```

### Parameters

*nNewSize*<br/>
The new array size (number of elements). Must be greater than or equal to 0.

*nGrowBy*<br/>
The minimum number of element slots to allocate if a size increase is necessary.

### Remarks

If the new size is smaller than the old size, then the array is truncated and all unused memory is released.

Use this function to set the size of your array before you begin using the array. If you do not use `SetSize`, adding elements to your array causes it to be frequently reallocated and copied. Frequent reallocation and copying are inefficient and can fragment memory.

The *nGrowBy* parameter affects internal memory allocation while the array is growing. Its use never affects the array size as reported by [GetSize](#getsize) and [GetUpperBound](#getupperbound). If the default value is used, MFC allocates memory in a way calculated to avoid memory fragmentation and optimize efficiency for most cases.

### Example

  See the example for [GetData](#getdata).

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CObArray Class](../../mfc/reference/cobarray-class.md)<br/>
[Collection Class Helpers](../../mfc/reference/collection-class-helpers.md)
