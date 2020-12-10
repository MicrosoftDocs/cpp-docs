---
description: "Learn more about: CStringList Class"
title: "CStringList Class"
ms.date: "11/04/2016"
f1_keywords: ["CStringList", "AFXCOLL/CStringList", "AFXCOLL/CStringList::CStringList", "AFXCOLL/CStringList::AddHead", "AFXCOLL/CStringList::AddTail", "AFXCOLL/CStringList::Find", "AFXCOLL/CStringList::FindIndex", "AFXCOLL/CStringList::GetAt", "AFXCOLL/CStringList::GetCount", "AFXCOLL/CStringList::GetHead", "AFXCOLL/CStringList::GetHeadPosition", "AFXCOLL/CStringList::GetNext", "AFXCOLL/CStringList::GetPrev", "AFXCOLL/CStringList::GetSize", "AFXCOLL/CStringList::GetTail", "AFXCOLL/CStringList::GetTailPosition", "AFXCOLL/CStringList::InsertAfter", "AFXCOLL/CStringList::InsertBefore", "AFXCOLL/CStringList::IsEmpty", "AFXCOLL/CStringList::RemoveAll", "AFXCOLL/CStringList::RemoveAt", "AFXCOLL/CStringList::RemoveHead", "AFXCOLL/CStringList::RemoveTail", "AFXCOLL/CStringList::SetAt"]
helpviewer_keywords: ["CStringList [MFC], CStringList", "CStringList [MFC], AddHead", "CStringList [MFC], AddTail", "CStringList [MFC], Find", "CStringList [MFC], FindIndex", "CStringList [MFC], GetAt", "CStringList [MFC], GetCount", "CStringList [MFC], GetHead", "CStringList [MFC], GetHeadPosition", "CStringList [MFC], GetNext", "CStringList [MFC], GetPrev", "CStringList [MFC], GetSize", "CStringList [MFC], GetTail", "CStringList [MFC], GetTailPosition", "CStringList [MFC], InsertAfter", "CStringList [MFC], InsertBefore", "CStringList [MFC], IsEmpty", "CStringList [MFC], RemoveAll", "CStringList [MFC], RemoveAt", "CStringList [MFC], RemoveHead", "CStringList [MFC], RemoveTail", "CStringList [MFC], SetAt"]
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
---
# CStringList Class

Supports lists of `CString` objects.

## Syntax

```
class CStringList : public CObject
```

## Members

The member functions of `CStringList` are similar to the member functions of class [CObList](../../mfc/reference/coblist-class.md). Because of this similarity, you can use the `CObList` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a return value, substitute a `CString` (not a `CString` pointer). Wherever you see a `CObject` pointer as a function parameter, substitute an `LPCTSTR`.

`CObject*& CObList::GetHead() const;`

for example, translates to

`CString& CStringList::GetHead() const;`

and

`POSITION AddHead( CObject* <newElement> );`

translates to

`POSITION AddHead( LPCTSTR <newElement> );`

### Public Constructors

|Name|Description|
|----------|-----------------|
|[CStringList::CStringList](../../mfc/reference/coblist-class.md#coblist)|Constructs an empty list.|

### Public Methods

|Name|Description|
|----------|-----------------|
|[CStringList::AddHead](../../mfc/reference/coblist-class.md#addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|
|[CStringList::AddTail](../../mfc/reference/coblist-class.md#addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|
|[CStringList::Find](../../mfc/reference/coblist-class.md#find)|Gets the position of an element specified by pointer value.|
|[CStringList::FindIndex](../../mfc/reference/coblist-class.md#findindex)|Gets the position of an element specified by a zero-based index.|
|[CStringList::GetAt](../../mfc/reference/coblist-class.md#getat)|Gets the element at a given position.|
|[CStringList::GetCount](../../mfc/reference/coblist-class.md#getcount)|Returns the number of elements in this list.|
|[CStringList::GetHead](../../mfc/reference/coblist-class.md#gethead)|Returns the head element of the list (cannot be empty).|
|[CStringList::GetHeadPosition](../../mfc/reference/coblist-class.md#getheadposition)|Returns the position of the head element of the list.|
|[CStringList::GetNext](../../mfc/reference/coblist-class.md#getnext)|Gets the next element for iterating.|
|[CStringList::GetPrev](../../mfc/reference/coblist-class.md#getprev)|Gets the previous element for iterating.|
|[CStringList::GetSize](../../mfc/reference/coblist-class.md#getsize)|Returns the number of elements in this list.|
|[CStringList::GetTail](../../mfc/reference/coblist-class.md#gettail)|Returns the tail element of the list (cannot be empty).|
|[CStringList::GetTailPosition](../../mfc/reference/coblist-class.md#gettailposition)|Returns the position of the tail element of the list.|
|[CStringList::InsertAfter](../../mfc/reference/coblist-class.md#insertafter)|Inserts a new element after a given position.|
|[CStringList::InsertBefore](../../mfc/reference/coblist-class.md#insertbefore)|Inserts a new element before a given position.|
|[CStringList::IsEmpty](../../mfc/reference/coblist-class.md#isempty)|Tests for the empty list condition (no elements).|
|[CStringList::RemoveAll](../../mfc/reference/coblist-class.md#removeall)|Removes all the elements from this list.|
|[CStringList::RemoveAt](../../mfc/reference/coblist-class.md#removeat)|Removes an element from this list, specified by position.|
|[CStringList::RemoveHead](../../mfc/reference/coblist-class.md#removehead)|Removes the element from the head of the list.|
|[CStringList::RemoveTail](../../mfc/reference/coblist-class.md#removetail)|Removes the element from the tail of the list.|
|[CStringList::SetAt](../../mfc/reference/coblist-class.md#setat)|Sets the element at a given position.|

## Remarks

All comparisons are done by value, meaning that the characters in the string are compared instead of the addresses of the strings.

`CStringList` incorporates the IMPLEMENT_SERIAL macro to support serialization and dumping of its elements. If a list of `CString` objects is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each `CString` element is serialized in turn.

If you need a dump of individual `CString` elements, you must set the depth of the dump context to 1 or greater.

For more information on using `CStringList`, see the article [Collections](../../mfc/collections.md).

## Inheritance Hierarchy

[CObject](../../mfc/reference/cobject-class.md)

`CStringList`

## Requirements

**Header:** afxcoll.h

## See also

[MFC Sample COLLECT](../../overview/visual-cpp-samples.md)<br/>
[CObject Class](../../mfc/reference/cobject-class.md)<br/>
[Hierarchy Chart](../../mfc/hierarchy-chart.md)
