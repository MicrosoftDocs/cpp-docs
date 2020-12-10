---
description: "Learn more about: CList Class"
title: "CList Class"
ms.date: "11/04/2016"
f1_keywords: ["CList", "AFXTEMPL/CList", "AFXTEMPL/CList::CList", "AFXTEMPL/CList::AddHead", "AFXTEMPL/CList::AddTail", "AFXTEMPL/CList::Find", "AFXTEMPL/CList::FindIndex", "AFXTEMPL/CList::GetAt", "AFXTEMPL/CList::GetCount", "AFXTEMPL/CList::GetHead", "AFXTEMPL/CList::GetHeadPosition", "AFXTEMPL/CList::GetNext", "AFXTEMPL/CList::GetPrev", "AFXTEMPL/CList::GetSize", "AFXTEMPL/CList::GetTail", "AFXTEMPL/CList::GetTailPosition", "AFXTEMPL/CList::InsertAfter", "AFXTEMPL/CList::InsertBefore", "AFXTEMPL/CList::IsEmpty", "AFXTEMPL/CList::RemoveAll", "AFXTEMPL/CList::RemoveAt", "AFXTEMPL/CList::RemoveHead", "AFXTEMPL/CList::RemoveTail", "AFXTEMPL/CList::SetAt"]
helpviewer_keywords: ["CList [MFC], CList", "CList [MFC], AddHead", "CList [MFC], AddTail", "CList [MFC], Find", "CList [MFC], FindIndex", "CList [MFC], GetAt", "CList [MFC], GetCount", "CList [MFC], GetHead", "CList [MFC], GetHeadPosition", "CList [MFC], GetNext", "CList [MFC], GetPrev", "CList [MFC], GetSize", "CList [MFC], GetTail", "CList [MFC], GetTailPosition", "CList [MFC], InsertAfter", "CList [MFC], InsertBefore", "CList [MFC], IsEmpty", "CList [MFC], RemoveAll", "CList [MFC], RemoveAt", "CList [MFC], RemoveHead", "CList [MFC], RemoveTail", "CList [MFC], SetAt"]
ms.assetid: 6f6273c3-c8f6-47f5-ac2a-0a950379ae5d
---
# CList Class

Supports ordered lists of nonunique objects accessible sequentially or by value.

## Syntax

```
template<class TYPE, class ARG_TYPE = const TYPE&>
class CList : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CList::CList](#clist)|Constructs an empty ordered list.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CList::AddHead](#addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|
|[CList::AddTail](#addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|
|[CList::Find](#find)|Gets the position of an element specified by pointer value.|
|[CList::FindIndex](#findindex)|Gets the position of an element specified by a zero-based index.|
|[CList::GetAt](#getat)|Gets the element at a given position.|
|[CList::GetCount](#getcount)|Returns the number of elements in this list.|
|[CList::GetHead](#gethead)|Returns the head element of the list (cannot be empty).|
|[CList::GetHeadPosition](#getheadposition)|Returns the position of the head element of the list.|
|[CList::GetNext](#getnext)|Gets the next element for iterating.|
|[CList::GetPrev](#getprev)|Gets the previous element for iterating.|
|[CList::GetSize](#getsize)|Returns the number of elements in this list.|
|[CList::GetTail](#gettail)|Returns the tail element of the list (cannot be empty).|
|[CList::GetTailPosition](#gettailposition)|Returns the position of the tail element of the list.|
|[CList::InsertAfter](#insertafter)|Inserts a new element after a given position.|
|[CList::InsertBefore](#insertbefore)|Inserts a new element before a given position.|
|[CList::IsEmpty](#isempty)|Tests for the empty list condition (no elements).|
|[CList::RemoveAll](#removeall)|Removes all the elements from this list.|
|[CList::RemoveAt](#removeat)|Removes an element from this list, specified by position.|
|[CList::RemoveHead](#removehead)|Removes the element from the head of the list.|
|[CList::RemoveTail](#removetail)|Removes the element from the tail of the list.|
|[CList::SetAt](#setat)|Sets the element at a given position.|

#### Parameters

*TYPE*<br/>
Type of object stored in the list.

*ARG_TYPE*<br/>
Type used to reference objects stored in the list. Can be a reference.

## Remarks

`CList` lists behave like doubly-linked lists.

A variable of type POSITION is a key for the list. You can use a POSITION variable as an iterator to traverse a list sequentially and as a bookmark to hold a place. A position is not the same as an index, however.

Element insertion is very fast at the list head, at the tail, and at a known POSITION. A sequential search is necessary to look up an element by value or index. This search can be slow if the list is long.

If you need a dump of individual elements in the list, you must set the depth of the dump context to 1 or greater.

Certain member functions of this class call global helper functions that must be customized for most uses of the `CList` class. See [Collection Class Helpers](../../mfc/reference/collection-class-helpers.md) in the "Macros and Globals" section.

For more information on using `CList`, see the article [Collections](../../mfc/collections.md).

## Example

[!code-cpp[NVC_MFCCollections#35](../../mfc/codesnippet/cpp/clist-class_1.cpp)]

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CList`

## Requirements

**Header:** afxtempl.h

## <a name="addhead"></a> CList::AddHead

Adds a new element or list of elements to the head of this list.

```
POSITION AddHead(ARG_TYPE newElement);
void AddHead(CList* pNewList);
```

### Parameters

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element (can be a reference).

*newElement*<br/>
The new element.

*pNewList*<br/>
A pointer to another `CList` list. The elements in *pNewList* will be added to this list.

### Return Value

The first version returns the POSITION value of the newly inserted element.

### Remarks

The list can be empty before the operation.

### Example

[!code-cpp[NVC_MFCCollections#36](../../mfc/codesnippet/cpp/clist-class_2.cpp)]

## <a name="addtail"></a> CList::AddTail

Adds a new element or list of elements to the tail of this list.

```
POSITION AddTail(ARG_TYPE newElement);
void AddTail(CList* pNewList);
```

### Parameters

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element (can be a reference).

*newElement*<br/>
The element to be added to this list.

*pNewList*<br/>
A pointer to another `CList` list. The elements in *pNewList* will be added to this list.

### Return Value

The first version returns the POSITION value of the newly inserted element.

### Remarks

The list can be empty before the operation.

### Example

[!code-cpp[NVC_MFCCollections#37](../../mfc/codesnippet/cpp/clist-class_3.cpp)]

## <a name="clist"></a> CList::CList

Constructs an empty ordered list.

```
CList(INT_PTR nBlockSize = 10);
```

### Parameters

*nBlockSize*<br/>
The memory-allocation granularity for extending the list.

### Remarks

As the list grows, memory is allocated in units of *nBlockSize* entries.

### Example

[!code-cpp[NVC_MFCCollections#38](../../mfc/codesnippet/cpp/clist-class_4.cpp)]

## <a name="find"></a> CList::Find

Searches the list sequentially to find the first element matching the specified *searchValue*.

```
POSITION Find(
    ARG_TYPE searchValue,
    POSITION startAfter = NULL) const;
```

### Parameters

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element (can be a reference).

*searchValue*<br/>
The value to be found in the list.

*startAfter*<br/>
The start position for the search. If no value is specified, the search begins with the head element.

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the object is not found.

### Example

[!code-cpp[NVC_MFCCollections#39](../../mfc/codesnippet/cpp/clist-class_5.cpp)]

## <a name="findindex"></a> CList::FindIndex

Uses the value of *nIndex* as an index into the list.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### Parameters

*nIndex*<br/>
The zero-based index of the list element to be found.

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if *nIndex* is negative or too large.

### Remarks

It starts a sequential scan from the head of the list, stopping on the *n*th element.

### Example

[!code-cpp[NVC_MFCCollections#40](../../mfc/codesnippet/cpp/clist-class_6.cpp)]

## <a name="getat"></a> CList::GetAt

Gets the list element at a given position.

```
TYPE& GetAt(POSITION position);
const TYPE& GetAt(POSITION position) const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of object in the list.

*position*<br/>
The position in the list of the element to get.

### Return Value

See the return value description for `GetHead`.

### Remarks

`GetAt` returns the element (or a reference to the element) associated with a given position. It is not the same as an index, and you cannot operate on a POSITION value yourself. A variable of type POSITION is a key for the list.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

### Example

  See the example for [CList::GetHeadPosition](#getheadposition).

## <a name="getcount"></a> CList::GetCount

Gets the number of elements in this list.

```
INT_PTR GetCount() const;
```

### Return Value

An integer value containing the element count.

### Remarks

Calling this method will generate the same result as the [CList::GetSize](#getsize) method.

### Example

  See the example for [CList::RemoveHead](#removehead).

## <a name="gethead"></a> CList::GetHead

Gets the head element (or a reference to the head element) of this list.

```
const TYPE& GetHead() const;

TYPE& GetHead();
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of object in the list.

### Return Value

If the list is **`const`**, `GetHead` returns a copy of the element at the head of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.

If the list is not **`const`**, `GetHead` returns a reference to the element at the head of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.

### Remarks

You must ensure that the list is not empty before calling `GetHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

### Example

[!code-cpp[NVC_MFCCollections#41](../../mfc/codesnippet/cpp/clist-class_7.cpp)]

## <a name="getheadposition"></a> CList::GetHeadPosition

Gets the position of the head element of this list.

```
POSITION GetHeadPosition() const;
```

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

### Example

[!code-cpp[NVC_MFCCollections#42](../../mfc/codesnippet/cpp/clist-class_8.cpp)]

## <a name="getnext"></a> CList::GetNext

Gets the list element identified by *rPosition*, then sets *rPosition* to the POSITION value of the next entry in the list.

```
TYPE& GetNext(POSITION& rPosition);
const TYPE& GetNext(POSITION& rPosition) const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of the elements in the list.

*rPosition*<br/>
A reference to a POSITION value returned by a previous `GetNext`, [GetHeadPosition](#getheadposition), or other member function call.

### Return Value

If the list is **`const`**, `GetNext` returns a copy of an element of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.

If the list is not **`const`**, `GetNext` returns a reference to an element of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.

### Remarks

You can use `GetNext` in a forward iteration loop if you establish the initial position with a call to `GetHeadPosition` or `Find`.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

If the retrieved element is the last in the list, then the new value of `rPosition` is set to NULL.

### Example

[!code-cpp[NVC_MFCCollections#43](../../mfc/codesnippet/cpp/clist-class_9.cpp)]

## <a name="getprev"></a> CList::GetPrev

Gets the list element identified by `rPosition`, then sets `rPosition` to the POSITION value of the previous entry in the list.

```
TYPE& GetPrev(POSITION& rPosition);
const TYPE& GetPrev(POSITION& rPosition) const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of the elements in the list.

*rPosition*<br/>
A reference to a POSITION value returned by a previous `GetPrev` or other member function call.

### Return Value

If the list is **`const`**, `GetPrev` returns a copy of the element at the head of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.

If the list is not **`const`**, `GetPrev` returns a reference to an element of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.

### Remarks

You can use `GetPrev` in a reverse iteration loop if you establish the initial position with a call to `GetTailPosition` or `Find`.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

If the retrieved element is the first in the list, then the new value of *rPosition* is set to NULL.

### Example

[!code-cpp[NVC_MFCCollections#44](../../mfc/codesnippet/cpp/clist-class_10.cpp)]

## <a name="getsize"></a> CList::GetSize

Returns the number of list elements.

```
INT_PTR GetSize() const;
```

### Return Value

The number of items in the list.

### Remarks

Call this method to retrieve the number of elements in the list.  Calling this method will generate the same result as the [CList::GetCount](#getcount) method.

### Example

[!code-cpp[NVC_MFCCollections#45](../../mfc/codesnippet/cpp/clist-class_11.cpp)]

## <a name="gettail"></a> CList::GetTail

Gets the `CObject` pointer that represents the tail element of this list.

```
TYPE& GetTail();
const TYPE& GetTail() const;
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of elements in the list.

### Return Value

See the return value description for [GetHead](../../mfc/reference/coblist-class.md#gethead).

### Remarks

You must ensure that the list is not empty before calling `GetTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#isempty) to verify that the list contains elements.

### Example

[!code-cpp[NVC_MFCCollections#46](../../mfc/codesnippet/cpp/clist-class_12.cpp)]

## <a name="gettailposition"></a> CList::GetTailPosition

Gets the position of the tail element of this list; NULL if the list is empty.

```
POSITION GetTailPosition() const;
```

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

### Example

[!code-cpp[NVC_MFCCollections#47](../../mfc/codesnippet/cpp/clist-class_13.cpp)]

## <a name="insertafter"></a> CList::InsertAfter

Adds an element to this list after the element at the specified position.

```
POSITION InsertAfter(POSITION position, ARG_TYPE newElement);
```

### Parameters

*position*<br/>
A POSITION value returned by a previous `GetNext`, `GetPrev`, or `Find` member function call.

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element.

*newElement*<br/>
The element to be added to this list.

### Return Value

A POSITION value that can be used for iteration or list element retrieval.

### Example

[!code-cpp[NVC_MFCCollections#48](../../mfc/codesnippet/cpp/clist-class_14.cpp)]

## <a name="insertbefore"></a> CList::InsertBefore

Adds an element to this list before the element at the specified position.

```
POSITION InsertBefore(POSITION position, ARG_TYPE newElement);
```

### Parameters

*position*<br/>
A POSITION value returned by a previous `GetNext`, `GetPrev`, or `Find` member function call.

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element (can be a reference).

*newElement*<br/>
The element to be added to this list.

### Return Value

A POSITION value that can be used for iteration or list element retrieval.

### Remarks

If *position* is NULL, the element is inserted at the head of the list.

### Example

[!code-cpp[NVC_MFCCollections#49](../../mfc/codesnippet/cpp/clist-class_15.cpp)]

## <a name="isempty"></a> CList::IsEmpty

Indicates whether this list contains no elements.

```
BOOL IsEmpty() const;
```

### Return Value

Nonzero if this list is empty; otherwise 0.

### Example

[!code-cpp[NVC_MFCCollections#50](../../mfc/codesnippet/cpp/clist-class_16.cpp)]

## <a name="removeall"></a> CList::RemoveAll

Removes all the elements from this list and frees the associated memory.

```cpp
void RemoveAll();
```

### Remarks

No error is generated if the list is already empty.

### Example

[!code-cpp[NVC_MFCCollections#51](../../mfc/codesnippet/cpp/clist-class_17.cpp)]

## <a name="removeat"></a> CList::RemoveAt

Removes the specified element from this list.

```cpp
void RemoveAt(POSITION position);
```

### Parameters

*position*<br/>
The position of the element to be removed from the list.

### Remarks

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

### Example

[!code-cpp[NVC_MFCCollections#52](../../mfc/codesnippet/cpp/clist-class_18.cpp)]

## <a name="removehead"></a> CList::RemoveHead

Removes the element from the head of the list and returns a pointer to it.

```
TYPE RemoveHead();
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of elements in the list.

### Return Value

The element previously at the head of the list.

### Remarks

You must ensure that the list is not empty before calling `RemoveHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

### Example

[!code-cpp[NVC_MFCCollections#53](../../mfc/codesnippet/cpp/clist-class_19.cpp)]

## <a name="removetail"></a> CList::RemoveTail

Removes the element from the tail of the list and returns a pointer to it.

```
TYPE RemoveTail();
```

### Parameters

*TYPE*<br/>
Template parameter specifying the type of elements in the list.

### Return Value

The element that was at the tail of the list.

### Remarks

You must ensure that the list is not empty before calling `RemoveTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

### Example

[!code-cpp[NVC_MFCCollections#54](../../mfc/codesnippet/cpp/clist-class_20.cpp)]

## <a name="setat"></a> CList::SetAt

A variable of type POSITION is a key for the list.

```cpp
void SetAt(POSITION pos, ARG_TYPE newElement);
```

### Parameters

*pos*<br/>
The POSITION of the element to be set.

*ARG_TYPE*<br/>
Template parameter specifying the type of the list element (can be a reference).

*newElement*<br/>
The element to be added to the list.

### Remarks

It is not the same as an index, and you cannot operate on a POSITION value yourself. `SetAt` writes the element to the specified position in the list.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

### Example

[!code-cpp[NVC_MFCCollections#55](../../mfc/codesnippet/cpp/clist-class_21.cpp)]

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CMap Class](../../mfc/reference/cmap-class.md)<br/>
[CArray Class](../../mfc/reference/carray-class.md)
