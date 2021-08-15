---
description: "Learn more about: CAtlArray Class"
title: "CAtlArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CAtlArray", "ATLCOLL/ATL::CAtlArray", "ATLCOLL/ATL::Add", "ATLCOLL/ATL::Append", "ATLCOLL/ATL::AssertValid", "ATLCOLL/ATL::Copy", "ATLCOLL/ATL::FreeExtra", "ATLCOLL/ATL::GetAt", "ATLCOLL/ATL::GetCount", "ATLCOLL/ATL::GetData", "ATLCOLL/ATL::InsertArrayAt", "ATLCOLL/ATL::InsertAt", "ATLCOLL/ATL::IsEmpty", "ATLCOLL/ATL::RemoveAll", "ATLCOLL/ATL::RemoveAt", "ATLCOLL/ATL::SetAt", "ATLCOLL/ATL::SetAtGrow", "ATLCOLL/ATL::SetCount", "ATLCOLL/ATL::INARGTYPE", "ATLCOLL/ATL::OUTARGTYPE"]
helpviewer_keywords: ["CAtlArray class"]
ms.assetid: 0b503aa8-2357-40af-a326-6654bf1da098
---
# CAtlArray Class

This class implements an array object.

## Syntax

```cpp
template<typename E, class ETraits = CElementTraits<E>>
class CAtlArray
```

### Parameters

*E*<br/>
The type of data to be stored in the array.

*ETraits*<br/>
The code used to copy or move elements.

## Members

### Methods

|Function|Description|
|-|-|
|[Add](#add)|Call this method to add an element to the array object.|
|[Append](#append)|Call this method to add the contents of one array to the end of another.|
|[AssertValid](#assertvalid)|Call this method to confirm that the array object is valid.|
|[CAtlArray](#catlarray)|The constructor.|
|[~CAtlArray](#dtor)|The destructor.|
|[Copy](#copy)|Call this method to copy the elements of one array to another.|
|[FreeExtra](#freeextra)|Call this method to remove any empty elements from the array.|
|[GetAt](#getat)|Call this method to retrieve a single element from the array object.|
|[GetCount](#getcount)|Call this method to return the number of elements stored in the array.|
|[GetData](#getdata)|Call this method to return a pointer to the first element in the array.|
|[InsertArrayAt](#insertarrayat)|Call this method to insert one array into another.|
|[InsertAt](#insertat)|Call this method to insert a new element (or multiple copies of an element) into the array object.|
|[IsEmpty](#isempty)|Call this method to test if the array is empty.|
|[RemoveAll](#removeall)|Call this method to remove all elements from the array object.|
|[RemoveAt](#removeat)|Call this method to remove one or more elements from the array.|
|[SetAt](#setat)|Call this method to set the value of an element in the array object.|
|[SetAtGrow](#setatgrow)|Call this method to set the value of an element in the array object, expanding the array as required.|
|[SetCount](#setcount)|Call this method to set the size of the array object.|

### Operators

|Operator|Description|
|-|-|
|[operator &#91;&#93;](#operator_at)|Call this operator to return a reference to an element in the array.|

### Typedefs

|Typedef|Description|
|-|-|
|[INARGTYPE](#inargtype)|The data type to use for adding elements to the array.|
|[OUTARGTYPE](#outargtype)|The data type to use for retrieving elements from the array.|

## Remarks

`CAtlArray` provides methods for creating and managing an array of elements of a user-defined type. Although similar to standard C arrays, the `CAtlArray` object can dynamically shrink and grow as necessary. The array index always starts at position 0, and the upper bound can be fixed, or allowed to expand as new elements are added.

For arrays with a small number of elements, the ATL class [CSimpleArray](../../atl/reference/csimplearray-class.md) can be used.

`CAtlArray` is closely related to MFC's `CArray` class and will work in an MFC project, albeit without serialization support.

For more information, see [ATL Collection Classes](../../atl/atl-collection-classes.md).

## Requirements

**Header:** atlcoll.h

## <a name="add"></a> CAtlArray::Add

Call this method to add an element to the array object.

```cpp
size_t Add(INARGTYPE element);
size_t Add();
```

### Parameters

*element*<br/>
The element to be added to the array.

### Return Value

Returns the index of the added element.

### Remarks

The new element is added to the end of the array. If no element is provided, an empty element is added; that is, the array is increased in size as though a real element has been added. If the operation fails, [AtlThrow](debugging-and-error-reporting-global-functions.md#atlthrow) is called with the argument E_OUTOFMEMORY.

### Example

[!code-cpp[NVC_ATL_Utilities#1](../../atl/codesnippet/cpp/catlarray-class_1.cpp)]

## <a name="append"></a> CAtlArray::Append

Call this method to add the contents of one array to the end of another.

```cpp
size_t Append(const CAtlArray<E, ETraits>& aSrc);
```

### Parameters

*aSrc*<br/>
The array to append.

### Return Value

Returns the index of the first appended element.

### Remarks

The elements in the supplied array are added to the end of the existing array. If necessary, memory will be allocated to accommodate the new elements.

The arrays must be of the same type, and it is not possible to append an array to itself.

In debug builds, an ATLASSERT will be raised if the `CAtlArray` argument is not a valid array or if *aSrc* refers to the same object. In release builds, invalid arguments may lead to unpredictable behavior.

### Example

[!code-cpp[NVC_ATL_Utilities#2](../../atl/codesnippet/cpp/catlarray-class_2.cpp)]

## <a name="assertvalid"></a> CAtlArray::AssertValid

Call this method to confirm that the array object is valid.

```cpp
void AssertValid() const;
```

### Remarks

If the array object is not valid, ATLASSERT will throw an assertion. This method is available only if _DEBUG is defined.

### Example

[!code-cpp[NVC_ATL_Utilities#3](../../atl/codesnippet/cpp/catlarray-class_3.cpp)]

## <a name="catlarray"></a> CAtlArray::CAtlArray

The constructor.

```cpp
CAtlArray() throw();
```

### Remarks

Initializes the array object.

### Example

[!code-cpp[NVC_ATL_Utilities#4](../../atl/codesnippet/cpp/catlarray-class_4.cpp)]

## <a name="dtor"></a> CAtlArray::~CAtlArray

The destructor.

```cpp
~CAtlArray() throw();
```

### Remarks

Frees up any resources used by the array object.

## <a name="copy"></a> CAtlArray::Copy

Call this method to copy the elements of one array to another.

```cpp
void Copy(const CAtlArray<E, ETraits>& aSrc);
```

### Parameters

*aSrc*<br/>
The source of the elements to copy to an array.

### Remarks

Call this method to overwrite elements of one array with the elements of another array. If necessary, memory will be allocated to accommodate the new elements. It is not possible to copy elements of an array to itself.

If the existing contents of the array are to be retained, use [CAtlArray::Append](#append) instead.

In debug builds, an ATLASSERT will be raised if the existing `CAtlArray` object is not valid, or if *aSrc* refers to the same object. In release builds, invalid arguments may lead to unpredictable behavior.

> [!NOTE]
> `CAtlArray::Copy` does not support arrays consisting of elements created with the [CAutoPtr](../../atl/reference/cautoptr-class.md) class.

### Example

[!code-cpp[NVC_ATL_Utilities#5](../../atl/codesnippet/cpp/catlarray-class_5.cpp)]

## <a name="freeextra"></a> CAtlArray::FreeExtra

Call this method to remove any empty elements from the array.

```cpp
void FreeExtra() throw();
```

### Remarks

Any empty elements are removed, but the size and upper bound of the array remain unchanged.

In debug builds, an ATLASSERT will be raised if the CAtlArray object is not valid, or if the array would exceed its maximum size.

## <a name="getat"></a> CAtlArray::GetAt

Call this method to retrieves a single element from the array object.

```cpp
const E& GetAt(size_t iElement) const throw();
E& GetAt(size_t iElement) throw();
```

### Parameters

*iElement*<br/>
The index value of the array element to return.

### Return Value

Returns a reference to the required array element.

### Remarks

In debug builds, an ATLASSERT will be raised if *iElement* exceeds the number of elements in the array. In release builds, an invalid argument may lead to unpredictable behavior.

### Example

[!code-cpp[NVC_ATL_Utilities#6](../../atl/codesnippet/cpp/catlarray-class_6.cpp)]

## <a name="getcount"></a> CAtlArray::GetCount

Call this method to return the number of elements stored in the array.

```cpp
size_t GetCount() const throw();
```

### Return Value

Returns the number of elements stored in the array.

### Remarks

As the first element in the array is at position 0, the value returned by `GetCount` is always 1 greater than the largest index.

### Example

See the example for [CAtlArray::GetAt](#getat).

## <a name="getdata"></a> CAtlArray::GetData

Call this method to return a pointer to the first element in the array.

```cpp
E* GetData() throw();
const E* GetData() const throw();
```

### Return Value

Returns a pointer to the memory location storing the first element in the array. If no elements are available, NULL is returned.

### Example

[!code-cpp[NVC_ATL_Utilities#7](../../atl/codesnippet/cpp/catlarray-class_7.cpp)]

## <a name="inargtype"></a> CAtlArray::INARGTYPE

The data type to use for adding elements to the array.

```cpp
typedef ETraits::INARGTYPE INARGTYPE;
```

## <a name="insertarrayat"></a> CAtlArray::InsertArrayAt

Call this method to insert one array into another.

```cpp
void InsertArrayAt(size_t iStart, const CAtlArray<E, ETraits>* paNew);
```

### Parameters

*iStart*<br/>
The index at which the array is to be inserted.

*paNew*<br/>
The array to be inserted.

### Remarks

Elements from the array *paNew* are copied into the array object, beginning at element *iStart*. The existing array elements are moved to avoid being overwritten.

In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid, or if the *paNew* pointer is NULL or invalid.

> [!NOTE]
> `CAtlArray::InsertArrayAt` does not support arrays consisting of elements created with the [CAutoPtr](../../atl/reference/cautoptr-class.md) class.

### Example

[!code-cpp[NVC_ATL_Utilities#8](../../atl/codesnippet/cpp/catlarray-class_8.cpp)]

## <a name="insertat"></a> CAtlArray::InsertAt

Call this method to insert a new element (or multiple copies of an element) into the array object.

```cpp
void InsertAt(size_t iElement, INARGTYPE element, size_t nCount = 1);
```

### Parameters

*iElement*<br/>
The index where the element or elements are to be inserted.

*element*<br/>
The value of the element or elements to be inserted.

*nCount*<br/>
The number of elements to add.

### Remarks

Inserts one or more elements into the array, starting at index *iElement*. Existing elements are moved to avoid being overwritten.

In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is invalid, the number of elements to be added is zero, or the combined number of elements is too large for the array to contain. In retail builds, passing invalid parameters may cause unpredictable results.

### Example

[!code-cpp[NVC_ATL_Utilities#9](../../atl/codesnippet/cpp/catlarray-class_9.cpp)]

## <a name="isempty"></a> CAtlArray::IsEmpty

Call this method to test if the array is empty.

```cpp
bool IsEmpty() const throw();
```

### Return Value

Returns true if the array is empty, false otherwise.

### Remarks

The array is said to be empty if it contains no elements. Therefore, even if the array contains empty elements, it is not empty.

### Example

[!code-cpp[NVC_ATL_Utilities#10](../../atl/codesnippet/cpp/catlarray-class_10.cpp)]

## <a name="operator_at"></a> CAtlArray::operator []

Call this operator to return a reference to an element in the array.

```cpp
E& operator[](size_t ielement) throw();
const E& operator[](size_t ielement) const throw();
```

### Parameters

*iElement*<br/>
The index value of the array element to return.

### Return Value

Returns a reference to the required array element.

### Remarks

Performs a similar function to [CAtlArray::GetAt](#getat). Unlike the MFC class [CArray](../../mfc/reference/carray-class.md), this operator cannot be used as a substitute for [CAtlArray::SetAt](#setat).

In debug builds, an ATLASSERT will be raised if *iElement* exceeds the total number of elements in the array. In retail builds, an invalid parameter may cause unpredictable results.

## <a name="outargtype"></a> CAtlArray::OUTARGTYPE

The data type to use for retrieving elements from the array.

```cpp
typedef ETraits::OUTARGTYPE OUTARGTYPE;
```

## <a name="removeall"></a> CAtlArray::RemoveAll

Call this method to remove all elements from the array object.

```cpp
void RemoveAll() throw();
```

### Remarks

Removes all of the elements from the array object.

This method calls [CAtlArray::SetCount](#setcount) to resize the array and subsequently frees any allocated memory.

### Example

See the example for [CAtlArray::IsEmpty](#isempty).

## <a name="removeat"></a> CAtlArray::RemoveAt

Call this method to remove one or more elements from the array.

```cpp
void RemoveAt(size_t iElement, size_t nCount = 1);
```

### Parameters

*iElement*<br/>
The index of the first element to remove.

*nCount*<br/>
The number of elements to remove.

### Remarks

Removes one or more elements from the array. Any remaining elements are shifted down. The upper bound is decremented, but memory is not freed until a call to [CAtlArray::FreeExtra](#freeextra) is made.

In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid, or if the combined total of *iElement* and *nCount* exceeds the total number of elements in the array. In retail builds, invalid parameters may cause unpredictable results.

### Example

[!code-cpp[NVC_ATL_Utilities#11](../../atl/codesnippet/cpp/catlarray-class_11.cpp)]

## <a name="setat"></a> CAtlArray::SetAt

Call this method to set the value of an element in the array object.

```cpp
void SetAt(size_t iElement, INARGTYPE element);
```

### Parameters

*iElement*<br/>
The index pointing to the array element to set.

*element*<br/>
The new value of the specified element.

### Remarks

In debug builds, an ATLASSERT will be raised if *iElement* exceeds the number of elements in the array. In retail builds, an invalid parameter may result in unpredictable results.

### Example

See the example for [CAtlArray::GetAt](#getat).

## <a name="setcount"></a> CAtlArray::SetCount

Call this method to set the size of the array object.

```cpp
bool SetCount(size_t nNewSize, int nGrowBy = - 1);
```

### Parameters

*nNewSize*<br/>
The required size of the array.

*nGrowBy*<br/>
A value used to determine how large to make the buffer. A value of -1 causes an internally calculated value to be used.

### Return Value

Returns true if the array is successfully resized, false otherwise.

### Remarks

The array can be increased or decreased in size. If increased, extra empty elements are added to the array. If decreased, the elements with the largest indices will be deleted and memory freed.

Use this method to set the size of the array before using it. If `SetCount` is not used, the process of adding elements — and the subsequent memory allocation performed — will reduce performance and fragment memory.

### Example

See the example for [CAtlArray::GetData](#getdata).

## <a name="setatgrow"></a> CAtlArray::SetAtGrow

Call this method to set the value of an element in the array object, expanding the array as required.

```cpp
void SetAtGrow(size_t iElement, INARGTYPE element);
```

### Parameters

*iElement*<br/>
The index pointing to the array element to set.

*element*<br/>
The new value of the specified element.

### Remarks

Replaces the value of the element pointed to by the index. If *iElement* is larger than the current size of the array, the array is automatically increased using a call to [CAtlArray::SetCount](#setcount). In debug builds, an ATLASSERT will be raised if the `CAtlArray` object is not valid. In retail builds, invalid parameters may cause unpredictable results.

### Example

[!code-cpp[NVC_ATL_Utilities#12](../../atl/codesnippet/cpp/catlarray-class_12.cpp)]

## See also

[MMXSwarm Sample](../../overview/visual-cpp-samples.md)<br/>
[DynamicConsumer Sample](../../overview/visual-cpp-samples.md)<br/>
[UpdatePV Sample](../../overview/visual-cpp-samples.md)<br/>
[Marquee Sample](../../overview/visual-cpp-samples.md)<br/>
[CArray Class](../../mfc/reference/carray-class.md)<br/>
[Class Overview](../../atl/atl-class-overview.md)
