---
description: "Learn more about: CObList Class"
title: "CObList Class"
ms.date: "11/04/2016"
f1_keywords: ["CObList", "AFXCOLL/CObList", "AFXCOLL/CObList::CObList", "AFXCOLL/CObList::AddHead", "AFXCOLL/CObList::AddTail", "AFXCOLL/CObList::Find", "AFXCOLL/CObList::FindIndex", "AFXCOLL/CObList::GetAt", "AFXCOLL/CObList::GetCount", "AFXCOLL/CObList::GetHead", "AFXCOLL/CObList::GetHeadPosition", "AFXCOLL/CObList::GetNext", "AFXCOLL/CObList::GetPrev", "AFXCOLL/CObList::GetSize", "AFXCOLL/CObList::GetTail", "AFXCOLL/CObList::GetTailPosition", "AFXCOLL/CObList::InsertAfter", "AFXCOLL/CObList::InsertBefore", "AFXCOLL/CObList::IsEmpty", "AFXCOLL/CObList::RemoveAll", "AFXCOLL/CObList::RemoveAt", "AFXCOLL/CObList::RemoveHead", "AFXCOLL/CObList::RemoveTail", "AFXCOLL/CObList::SetAt"]
helpviewer_keywords: ["CObList [MFC], CObList", "CObList [MFC], AddHead", "CObList [MFC], AddTail", "CObList [MFC], Find", "CObList [MFC], FindIndex", "CObList [MFC], GetAt", "CObList [MFC], GetCount", "CObList [MFC], GetHead", "CObList [MFC], GetHeadPosition", "CObList [MFC], GetNext", "CObList [MFC], GetPrev", "CObList [MFC], GetSize", "CObList [MFC], GetTail", "CObList [MFC], GetTailPosition", "CObList [MFC], InsertAfter", "CObList [MFC], InsertBefore", "CObList [MFC], IsEmpty", "CObList [MFC], RemoveAll", "CObList [MFC], RemoveAt", "CObList [MFC], RemoveHead", "CObList [MFC], RemoveTail", "CObList [MFC], SetAt"]
ms.assetid: 80699c93-33d8-4f8b-b8cf-7b58aeab64ca
---
# CObList Class

Supports ordered lists of nonunique `CObject` pointers accessible sequentially or by pointer value.

## Syntax

```
class CObList : public CObject
```

## Members

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CObList::CObList](#coblist)|Constructs an empty list for `CObject` pointers.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CObList::AddHead](#addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|
|[CObList::AddTail](#addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|
|[CObList::Find](#find)|Gets the position of an element specified by pointer value.|
|[CObList::FindIndex](#findindex)|Gets the position of an element specified by a zero-based index.|
|[CObList::GetAt](#getat)|Gets the element at a given position.|
|[CObList::GetCount](#getcount)|Returns the number of elements in this list.|
|[CObList::GetHead](#gethead)|Returns the head element of the list (cannot be empty).|
|[CObList::GetHeadPosition](#getheadposition)|Returns the position of the head element of the list.|
|[CObList::GetNext](#getnext)|Gets the next element for iterating.|
|[CObList::GetPrev](#getprev)|Gets the previous element for iterating.|
|[CObList::GetSize](#getsize)|Returns the number of elements in this list.|
|[CObList::GetTail](#gettail)|Returns the tail element of the list (cannot be empty).|
|[CObList::GetTailPosition](#gettailposition)|Returns the position of the tail element of the list.|
|[CObList::InsertAfter](#insertafter)|Inserts a new element after a given position.|
|[CObList::InsertBefore](#insertbefore)|Inserts a new element before a given position.|
|[CObList::IsEmpty](#isempty)|Tests for the empty list condition (no elements).|
|[CObList::RemoveAll](#removeall)|Removes all the elements from this list.|
|[CObList::RemoveAt](#removeat)|Removes an element from this list, specified by position.|
|[CObList::RemoveHead](#removehead)|Removes the element from the head of the list.|
|[CObList::RemoveTail](#removetail)|Removes the element from the tail of the list.|
|[CObList::SetAt](#setat)|Sets the element at a given position.|

## Remarks

`CObList` lists behave like doubly-linked lists.

A variable of type POSITION is a key for the list. You can use a POSITION variable both as an iterator to traverse a list sequentially and as a bookmark to hold a place. A position is not the same as an index, however.

Element insertion is very fast at the list head, at the tail, and at a known POSITION. A sequential search is necessary to look up an element by value or index. This search can be slow if the list is long.

`CObList` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. If a list of `CObject` pointers is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each `CObject` element is serialized in turn.

If you need a dump of individual `CObject` elements in the list, you must set the depth of the dump context to 1 or greater.

When a `CObList` object is deleted, or when its elements are removed, only the `CObject` pointers are removed, not the objects they reference.

You can derive your own classes from `CObList`. Your new list class, designed to hold pointers to objects derived from `CObject`, adds new data members and new member functions. Note that the resulting list is not strictly type safe, because it allows insertion of any `CObject` pointer.

> [!NOTE]
> You must use the [IMPLEMENT_SERIAL](run-time-object-model-services.md#implement_serial) macro in the implementation of your derived class if you intend to serialize the list.

For more information on using `CObList`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CObList`

## Requirements

**Header:** afxcoll.h

## <a name="addhead"></a> CObList::AddHead

Adds a new element or list of elements to the head of this list.

```
POSITION AddHead(CObject* newElement);
void AddHead(CObList* pNewList);
```

### Parameters

*newElement*<br/>
The `CObject` pointer to be added to this list.

*pNewList*<br/>
A pointer to another `CObList` list. The elements in *pNewList* will be added to this list.

### Return Value

The first version returns the POSITION value of the newly inserted element.

The following table shows other member functions that are similar to `CObList::AddHead`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION AddHead( void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddHead( CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION AddHead(const CString&** `newElement` **);**<br /><br /> **POSITION AddHead(LPCTSTR** `newElement` **);**<br /><br /> **void AddHead(CStringList** <strong>\*</strong> `pNewList` **);**|

### Remarks

The list can be empty before the operation.

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#89](../../mfc/codesnippet/cpp/coblist-class_1.cpp)]

The results from this program are as follows:

```Output
AddHead example: A CObList with 2 elements
a CAge at $44A8 40
a CAge at $442A 21
```

## <a name="addtail"></a> CObList::AddTail

Adds a new element or list of elements to the tail of this list.

```
POSITION AddTail(CObject* newElement);
void AddTail(CObList* pNewList);
```

### Parameters

*newElement*<br/>
The `CObject` pointer to be added to this list.

*pNewList*<br/>
A pointer to another `CObList` list. The elements in *pNewList* will be added to this list.

### Return Value

The first version returns the POSITION value of the newly inserted element.

### Remarks

The list can be empty before the operation.

The following table shows other member functions that are similar to `CObList::AddTail`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION AddTail( void** <strong>\*</strong> `newElement` **);**<br /><br /> **void AddTail( CPtrList** <strong>\*</strong> `pNewList` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION AddTail( const CString&** `newElement` **);**<br /><br /> **POSITION AddTail( LPCTSTR** `newElement` **);**<br /><br /> **void AddTail( CStringList** <strong>\*</strong> `pNewList` **);**|

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#90](../../mfc/codesnippet/cpp/coblist-class_2.cpp)]

The results from this program are as follows:

```Output
AddTail example: A CObList with 2 elements
a CAge at $444A 21
a CAge at $4526 40
```

## <a name="coblist"></a> CObList::CObList

Constructs an empty `CObject` pointer list.

```
CObList(INT_PTR nBlockSize = 10);
```

### Parameters

*nBlockSize*<br/>
The memory-allocation granularity for extending the list.

### Remarks

As the list grows, memory is allocated in units of *nBlockSize* entries. If a memory allocation fails, a `CMemoryException` is thrown.

The following table shows other member functions that are similar to `CObList::CObList`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**CPtrList( INT_PTR** `nBlockSize` **= 10 );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CStringList( INT_PTR** `nBlockSize` **= 10 );**|

### Example

  Below is a listing of the `CObject`-derived class `CAge` used in all the collection examples:

[!code-cpp[NVC_MFCCollections#91](../../mfc/codesnippet/cpp/coblist-class_3.h)]

Below is an example of `CObList` constructor usage:

[!code-cpp[NVC_MFCCollections#92](../../mfc/codesnippet/cpp/coblist-class_4.cpp)]

## <a name="find"></a> CObList::Find

Searches the list sequentially to find the first `CObject` pointer matching the specified `CObject` pointer.

```
POSITION Find(
    CObject* searchValue,
    POSITION startAfter = NULL) const;
```

### Parameters

*searchValue*<br/>
The object pointer to be found in this list.

*startAfter*<br/>
The start position for the search.

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the object is not found.

### Remarks

Note that the pointer values are compared, not the contents of the objects.

The following table shows other member functions that are similar to `CObList::Find`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION Find( void** <strong>\*</strong> `searchValue` **, POSITION** `startAfter` **= NULL ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION Find( LPCTSTR** `searchValue` **, POSITION** `startAfter` **= NULL ) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#93](../../mfc/codesnippet/cpp/coblist-class_5.cpp)]

## <a name="findindex"></a> CObList::FindIndex

Uses the value of *nIndex* as an index into the list.

```
POSITION FindIndex(INT_PTR nIndex) const;
```

### Parameters

*nIndex*<br/>
The zero-based index of the list element to be found.

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if *nIndex* is too large. (The framework generates an assertion if *nIndex* is negative.)

### Remarks

It starts a sequential scan from the head of the list, stopping on the *n*th element.

The following table shows other member functions that are similar to `CObList::FindIndex`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION FindIndex( INT_PTR** `nIndex` **) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION FindIndex( INT_PTR** `nIndex` **) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#94](../../mfc/codesnippet/cpp/coblist-class_6.cpp)]

## <a name="getat"></a> CObList::GetAt

A variable of type POSITION is a key for the list.

```
CObject*& GetAt(POSITION position);
const CObject*& GetAt(POSITION position) const;
```

### Parameters

*position*<br/>
A POSITION value returned by a previous `GetHeadPosition` or `Find` member function call.

### Return Value

See the return value description for [GetHead](#gethead).

### Remarks

It is not the same as an index, and you cannot operate on a POSITION value yourself. `GetAt` retrieves the `CObject` pointer associated with a given position.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

The following table shows other member functions that are similar to `CObList::GetAt`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetAt( POSITION** *position* **) const;**<br /><br /> **void\*& GetAt( POSITION** *position* **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetAt( POSITION** *position* **) const;**<br /><br /> **CString& GetAt( POSITION** *position* **);**|

### Example

  See the example for [FindIndex](#findindex).

## <a name="getcount"></a> CObList::GetCount

Gets the number of elements in this list.

```
INT_PTR GetCount() const;
```

### Return Value

An integer value containing the element count.

The following table shows other member functions that are similar to `CObList::GetCount`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetCount( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetCount( ) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#95](../../mfc/codesnippet/cpp/coblist-class_7.cpp)]

## <a name="gethead"></a> CObList::GetHead

Gets the `CObject` pointer that represents the head element of this list.

```
CObject*& GetHead();
const CObject*& GetHead() const;
```

### Return Value

If the list is accessed through a pointer to a `const CObList`, then `GetHead` returns a `CObject` pointer. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.

If the list is accessed directly or through a pointer to a `CObList`, then `GetHead` returns a reference to a `CObject` pointer. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.

### Remarks

You must ensure that the list is not empty before calling `GetHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

The following table shows other member functions that are similar to `CObList::GetHead`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetHead( ) const; void\*& GetHead( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetHead( ) const; CString& GetHead( );**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

The following example illustrates the use of `GetHead` on the left side of an assignment statement.

[!code-cpp[NVC_MFCCollections#96](../../mfc/codesnippet/cpp/coblist-class_8.cpp)]

## <a name="getheadposition"></a> CObList::GetHeadPosition

Gets the position of the head element of this list.

```
POSITION GetHeadPosition() const;
```

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

The following table shows other member functions that are similar to `CObList::GetHeadPosition`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetHeadPosition( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetHeadPosition( ) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#97](../../mfc/codesnippet/cpp/coblist-class_9.cpp)]

## <a name="getnext"></a> CObList::GetNext

Gets the list element identified by *rPosition*, then sets *rPosition* to the `POSITION` value of the next entry in the list.

```
CObject*& GetNext(POSITION& rPosition);
const CObject* GetNext(POSITION& rPosition) const;
```

### Parameters

*rPosition*<br/>
A reference to a POSITION value returned by a previous `GetNext`, `GetHeadPosition`, or other member function call.

### Return Value

See the return value description for [GetHead](#gethead).

### Remarks

You can use `GetNext` in a forward iteration loop if you establish the initial position with a call to `GetHeadPosition` or `Find`.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

If the retrieved element is the last in the list, then the new value of *rPosition* is set to NULL.

It is possible to remove an element during an iteration. See the example for [RemoveAt](#removeat).

> [!NOTE]
> As of MFC 8.0 the const version of this method has changed to return `const CObject*` instead of `const CObject*&`.  This change was made to bring the compiler into conformance with the C++ standard.

The following table shows other member functions that are similar to `CObList::GetNext`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const void* GetNext( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetNext( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetNext( POSITION&` `rPosition` `) const;`|

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#98](../../mfc/codesnippet/cpp/coblist-class_10.cpp)]

The results from this program are as follows:

```Output
a CAge at $479C 40
a CAge at $46C0 21
```

## <a name="getprev"></a> CObList::GetPrev

Gets the list element identified by *rPosition*, then sets *rPosition* to the POSITION value of the previous entry in the list.

```
CObject*& GetPrev(POSITION& rPosition);
const CObject* GetPrev(POSITION& rPosition) const;
```

### Parameters

*rPosition*<br/>
A reference to a POSITION value returned by a previous `GetPrev` or other member function call.

### Return Value

See the return value description for [GetHead](#gethead).

### Remarks

You can use `GetPrev` in a reverse iteration loop if you establish the initial position with a call to `GetTailPosition` or `Find`.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

If the retrieved element is the first in the list, then the new value of *rPosition* is set to NULL.

> [!NOTE]
> As of MFC 8.0 the const version of this method has changed to return `const CObject*` instead of `const CObject*&`.  This change was made to bring the compiler into conformance with the C++ standard.

The following table shows other member functions that are similar to `CObList::GetPrev`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|`void*& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const void* GetPrev( POSITION&` `rPosition` `) const;`|
|[CStringList](../../mfc/reference/cstringlist-class.md)|`CString& GetPrev( POSITION&` `rPosition` `);`<br /><br /> `const CString& GetPrev( POSITION&` `rPosition` `) const;`|

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#99](../../mfc/codesnippet/cpp/coblist-class_11.cpp)]

The results from this program are as follows:

```Output
a CAge at $421C 21
a CAge at $421C 40
```

## <a name="getsize"></a> CObList::GetSize

Returns the number of list elements.

```
INT_PTR GetSize() const;
```

### Return Value

The number of items in the list.

### Remarks

Call this method to retrieve the number of elements in the list.

The following table shows other member functions that are similar to `CObList::GetSize`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**INT_PTR GetSize( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**INT_PTR GetSize( ) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#100](../../mfc/codesnippet/cpp/coblist-class_12.cpp)]

## <a name="gettail"></a> CObList::GetTail

Gets the `CObject` pointer that represents the tail element of this list.

```
CObject*& GetTail();
const CObject*& GetTail() const;
```

### Return Value

See the return value description for [GetHead](#gethead).

### Remarks

You must ensure that the list is not empty before calling `GetTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

The following table shows other member functions that are similar to `CObList::GetTail`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**const void\*& GetTail( ) const; void\*& GetTail( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**const CString& GetTail( ) const; CString& GetTail( );**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#101](../../mfc/codesnippet/cpp/coblist-class_13.cpp)]

## <a name="gettailposition"></a> CObList::GetTailPosition

Gets the position of the tail element of this list; **NULL** if the list is empty.

```
POSITION GetTailPosition() const;
```

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

The following table shows other member functions that are similar to `CObList::GetTailPosition`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION GetTailPosition( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION GetTailPosition( ) const;**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#102](../../mfc/codesnippet/cpp/coblist-class_14.cpp)]

## <a name="insertafter"></a> CObList::InsertAfter

Adds an element to this list after the element at the specified position.

```
POSITION InsertAfter(
    POSITION position,
    CObject* newElement);
```

### Parameters

*position*<br/>
A POSITION value returned by a previous `GetNext`, `GetPrev`, or `Find` member function call.

*newElement*<br/>
The object pointer to be added to this list.

The following table shows other member functions that are similar to `CObList::InsertAfter`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION InsertAfter( POSITION** *position* **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION InsertAfter( POSITION** *position* **, const CString&** `newElement` **);**<br /><br /> **POSITION InsertAfter( POSITION** *position* **, LPCTSTR** `newElement` **);**|

### Return Value

A POSITION value which is the same as the *position* parameter.

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#103](../../mfc/codesnippet/cpp/coblist-class_15.cpp)]

The results from this program are as follows:

```Output
InsertAfter example: A CObList with 3 elements
a CAge at $4A44 40
a CAge at $4A64 65
a CAge at $4968 21
```

## <a name="insertbefore"></a> CObList::InsertBefore

Adds an element to this list before the element at the specified position.

```
POSITION InsertBefore(
    POSITION position,
    CObject* newElement);
```

### Parameters

*position*<br/>
A POSITION value returned by a previous `GetNext`, `GetPrev`, or `Find` member function call.

*newElement*<br/>
The object pointer to be added to this list.

### Return Value

A POSITION value that can be used for iteration or object pointer retrieval; NULL if the list is empty.

The following table shows other member functions that are similar to `CObList::InsertBefore`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**POSITION InsertBefore( POSITION** *position* **, void** <strong>\*</strong> `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**POSITION InsertBefore( POSITION** *position* **, const CString&** `newElement` **);**<br /><br /> **POSITION InsertBefore( POSITION** *position* **, LPCTSTR** `newElement` **);**|

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#104](../../mfc/codesnippet/cpp/coblist-class_16.cpp)]

The results from this program are as follows:

```Output
InsertBefore example: A CObList with 3 elements
a CAge at $4AE2 40
a CAge at $4B02 65
a CAge at $49E6 21
```

## <a name="isempty"></a> CObList::IsEmpty

Indicates whether this list contains no elements.

```
BOOL IsEmpty() const;
```

### Return Value

Nonzero if this list is empty; otherwise 0.

The following table shows other member functions that are similar to `CObList::IsEmpty`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**BOOL IsEmpty( ) const;**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**BOOL IsEmpty( ) const;**|

### Example

  See the example for [RemoveAll](#removeall).

## <a name="removeall"></a> CObList::RemoveAll

Removes all the elements from this list and frees the associated `CObList` memory.

```cpp
void RemoveAll();
```

### Remarks

No error is generated if the list is already empty.

When you remove elements from a `CObList`, you remove the object pointers from the list. It is your responsibility to delete the objects themselves.

The following table shows other member functions that are similar to `CObList::RemoveAll`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAll( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAll( );**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#105](../../mfc/codesnippet/cpp/coblist-class_17.cpp)]

## <a name="removeat"></a> CObList::RemoveAt

Removes the specified element from this list.

```cpp
void RemoveAt(POSITION position);
```

### Parameters

*position*<br/>
The position of the element to be removed from the list.

### Remarks

When you remove an element from a `CObList`, you remove the object pointer from the list. It is your responsibility to delete the objects themselves.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

The following table shows other member functions that are similar to `CObList::RemoveAt`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void RemoveAt( POSITION** *position* **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void RemoveAt( POSITION** *position* **);**|

### Example

  Be careful when removing an element during a list iteration. The following example shows a removal technique that guarantees a valid **POSITION** value for [GetNext](#getnext).

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#106](../../mfc/codesnippet/cpp/coblist-class_18.cpp)]

The results from this program are as follows:

`RemoveAt example: A CObList with 2 elements`

`a CAge at $4C1E 65`

`a CAge at $4B22 21`

## <a name="removehead"></a> CObList::RemoveHead

Removes the element from the head of the list and returns a pointer to it.

```
CObject* RemoveHead();
```

### Return Value

The `CObject` pointer previously at the head of the list.

### Remarks

You must ensure that the list is not empty before calling `RemoveHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

The following table shows other member functions that are similar to `CObList::RemoveHead`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveHead( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveHead( );**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#107](../../mfc/codesnippet/cpp/coblist-class_19.cpp)]

## <a name="removetail"></a> CObList::RemoveTail

Removes the element from the tail of the list and returns a pointer to it.

```
CObject* RemoveTail();
```

### Return Value

A pointer to the object that was at the tail of the list.

### Remarks

You must ensure that the list is not empty before calling `RemoveTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#isempty) to verify that the list contains elements.

The following table shows other member functions that are similar to `CObList::RemoveTail`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void\* RemoveTail( );**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**CString RemoveTail( );**|

### Example

See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#108](../../mfc/codesnippet/cpp/coblist-class_20.cpp)]

## <a name="setat"></a> CObList::SetAt

Sets the element at a given position.

```cpp
void SetAt(
    POSITION pos,
    CObject* newElement);
```

### Parameters

*pos*<br/>
The POSITION of the element to be set.

*newElement*<br/>
The `CObject` pointer to be written to the list.

### Remarks

A variable of type POSITION is a key for the list. It is not the same as an index, and you cannot operate on a POSITION value yourself. `SetAt` writes the `CObject` pointer to the specified position in the list.

You must ensure that your POSITION value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.

The following table shows other member functions that are similar to `CObList::SetAt`.

|Class|Member Function|
|-----------|---------------------|
|[CPtrList](../../mfc/reference/cptrlist-class.md)|**void SetAt( POSITION** `pos` **, const CString&** `newElement` **);**|
|[CStringList](../../mfc/reference/cstringlist-class.md)|**void SetAt( POSITION** `pos` **, LPCTSTR** `newElement` **);**|

### Example

  See [CObList::CObList](#coblist) for a listing of the `CAge` class.

[!code-cpp[NVC_MFCCollections#109](../../mfc/codesnippet/cpp/coblist-class_21.cpp)]

The results from this program are as follows:

```Output
SetAt example: A CObList with 2 elements
a CAge at $4D98 40
a CAge at $4DB8 65
```

## See also

[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)<br/>
[CStringList Class](../../mfc/reference/cstringlist-class.md)<br/>
[CPtrList Class](../../mfc/reference/cptrlist-class.md)
