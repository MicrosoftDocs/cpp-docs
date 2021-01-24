---
description: "Learn more about: CSimpleArray Class"
title: "CSimpleArray Class"
ms.date: "11/04/2016"
f1_keywords: ["CSimpleArray", "ATLSIMPCOLL/ATL::CSimpleArray", "ATLSIMPCOLL/ATL::CSimpleArray::CSimpleArray", "ATLSIMPCOLL/ATL::CSimpleArray::Add", "ATLSIMPCOLL/ATL::CSimpleArray::Find", "ATLSIMPCOLL/ATL::CSimpleArray::GetData", "ATLSIMPCOLL/ATL::CSimpleArray::GetSize", "ATLSIMPCOLL/ATL::CSimpleArray::Remove", "ATLSIMPCOLL/ATL::CSimpleArray::RemoveAll", "ATLSIMPCOLL/ATL::CSimpleArray::RemoveAt", "ATLSIMPCOLL/ATL::CSimpleArray::SetAtIndex"]
helpviewer_keywords: ["CSimpleArray class"]
ms.assetid: ee0c9f39-b61c-4c18-bc43-4eada21dca3a
---
# CSimpleArray Class

This class provides methods for managing a simple array.

## Syntax

```
template <class T, class TEqual = CSimpleArrayEqualHelper<T>>
class CSimpleArray
```

#### Parameters

*T*<br/>
The type of data to store in the array.

*TEqual*<br/>
A trait object, defining the equality test for elements of type *T*.

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CSimpleArray::CSimpleArray](#csimplearray)|The constructor for the simple array.|
|[CSimpleArray::~CSimpleArray](#dtor)|The destructor for the simple array.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CSimpleArray::Add](#add)|Adds a new element to the array.|
|[CSimpleArray::Find](#find)|Finds an element in the array.|
|[CSimpleArray::GetData](#getdata)|Returns a pointer to the data stored in the array.|
|[CSimpleArray::GetSize](#getsize)|Returns the number of elements stored in the array.|
|[CSimpleArray::Remove](#remove)|Removes a given element from the array.|
|[CSimpleArray::RemoveAll](#removeall)|Removes all elements from the array.|
|[CSimpleArray::RemoveAt](#removeat)|Removes the specified element from the array.|
|[CSimpleArray::SetAtIndex](#setatindex)|Sets the specified element in the array.|

### Public Operators

|Name|Description|
|----------|-----------------|
|[CSimpleArray::operator\[\]](#operator_at)|Retrieves an element from the array.|
|[CSimpleArray::operator =](#operator_eq)|Assignment operator.|

## Remarks

`CSimpleArray` provides methods for creating and managing a simple array, of any given type `T`.

The parameter `TEqual` provides a means of defining an equality function for two elements of type `T`. By creating a class similar to [CSimpleArrayEqualHelper](../../atl/reference/csimplearrayequalhelper-class.md), it is possible to alter the behavior of the equality test for any given array. For example, when dealing with an array of pointers, it may be useful to define the equality as depending on the values the pointers reference. The default implementation utilizes **operator=()**.

Both `CSimpleArray` and [CSimpleMap](../../atl/reference/csimplemap-class.md) are designed for a small number of elements. [CAtlArray](../../atl/reference/catlarray-class.md) and [CAtlMap](../../atl/reference/catlmap-class.md) should be used when the array contains a large number of elements.

## Requirements

**Header:** atlsimpcoll.h

## Example

[!code-cpp[NVC_ATL_Utilities#86](../../atl/codesnippet/cpp/csimplearray-class_1.cpp)]

## <a name="add"></a> CSimpleArray::Add

Adds a new element to the array.

```
BOOL Add(const T& t);
```

### Parameters

*t*<br/>
The element to add to the array.

### Return Value

Returns TRUE if the element is successfully added to the array, FALSE otherwise.

### Example

[!code-cpp[NVC_ATL_Utilities#87](../../atl/codesnippet/cpp/csimplearray-class_2.cpp)]

## <a name="csimplearray"></a> CSimpleArray::CSimpleArray

The constructor for the array object.

```
CSimpleArray(const CSimpleArray<T, TEqual>& src);
CSimpleArray();
```

### Parameters

*src*<br/>
An existing `CSimpleArray` object.

### Remarks

Initializes the data members, creating a new empty `CSimpleArray` object, or a copy of an existing `CSimpleArray` object.

## <a name="dtor"></a> CSimpleArray::~CSimpleArray

The destructor.

```
~CSimpleArray();
```

### Remarks

Frees all allocated resources.

## <a name="find"></a> CSimpleArray::Find

Finds an element in the array.

```
int Find(const T& t) const;
```

### Parameters

*t*<br/>
The element for which to search.

### Return Value

Returns the index of the found element, or -1 if the element is not found.

### Example

[!code-cpp[NVC_ATL_Utilities#88](../../atl/codesnippet/cpp/csimplearray-class_3.cpp)]

## <a name="getdata"></a> CSimpleArray::GetData

Returns a pointer to the data stored in the array.

```
T* GetData() const;
```

### Return Value

Returns a pointer to the data in the array.

## <a name="getsize"></a> CSimpleArray::GetSize

Returns the number of elements stored in the array.

```
int GetSize() const;
```

### Return Value

Returns the number of elements stored in the array.

## <a name="operator_at"></a> CSimpleArray::operator \[\]

Retrieves an element from the array.

```
T& operator[](int nindex);
```

### Parameters

*nIndex*<br/>
The element index.

### Return Value

Returns the element of the array referenced by *nIndex*.

### Example

[!code-cpp[NVC_ATL_Utilities#89](../../atl/codesnippet/cpp/csimplearray-class_4.cpp)]

## <a name="operator_eq"></a> CSimpleArray::operator =

Assignment operator.

```
CSimpleArray<T, TEqual>
& operator=(
    const CSimpleArray<T, TEqual>& src);
```

### Parameters

*src*<br/>
The array to copy.

### Return Value

Returns a pointer to the updated `CSimpleArray` object.

### Remarks

Copies all elements from the `CSimpleArray` object referenced by *src* into the current array object, replacing all existing data.

### Example

[!code-cpp[NVC_ATL_Utilities#90](../../atl/codesnippet/cpp/csimplearray-class_5.cpp)]

## <a name="remove"></a> CSimpleArray::Remove

Removes a given element from the array.

```
BOOL Remove(const T& t);
```

### Parameters

*t*<br/>
The element to remove from the array.

### Return Value

Returns TRUE if the element is found and removed, FALSE otherwise.

### Remarks

When an element is removed, the remaining elements in the array are renumbered to fill the empty space.

## <a name="removeall"></a> CSimpleArray::RemoveAll

Removes all elements from the array.

```cpp
void RemoveAll();
```

### Remarks

Removes all elements currently stored in the array.

## <a name="removeat"></a> CSimpleArray::RemoveAt

Removes the specified element from the array.

```
BOOL RemoveAtint nIndex);
```

### Parameters

*nIndex*<br/>
Index pointing to the element to remove.

### Return Value

Returns TRUE if the element was removed, FALSE if the index was invalid.

### Remarks

When an element is removed, the remaining elements in the array are renumbered to fill the empty space.

## <a name="setatindex"></a> CSimpleArray::SetAtIndex

Set the specified element in the array.

```
BOOL SetAtIndex(
    int nIndex,
    const T& t);
```

### Parameters

*nIndex*<br/>
The index of the element to change.

*t*<br/>
The value to assign to the specified element.

### Return Value

Returns TRUE if successful, FALSE if the index was not valid.

## See also

[Class Overview](../../atl/atl-class-overview.md)
