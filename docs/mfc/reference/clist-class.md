---
title: "CList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "lists"
  - "lists, base class for"
  - "CList class"
ms.assetid: 6f6273c3-c8f6-47f5-ac2a-0a950379ae5d
caps.latest.revision: 23
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
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
|[CList::CList](#clist__clist)|Constructs an empty ordered list.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CList::AddHead](#clist__addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|  
|[CList::AddTail](#clist__addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|  
|[CList::Find](#clist__find)|Gets the position of an element specified by pointer value.|  
|[CList::FindIndex](#clist__findindex)|Gets the position of an element specified by a zero-based index.|  
|[CList::GetAt](#clist__getat)|Gets the element at a given position.|  
|[CList::GetCount](#clist__getcount)|Returns the number of elements in this list.|  
|[CList::GetHead](#clist__gethead)|Returns the head element of the list (cannot be empty).|  
|[CList::GetHeadPosition](#clist__getheadposition)|Returns the position of the head element of the list.|  
|[CList::GetNext](#clist__getnext)|Gets the next element for iterating.|  
|[CList::GetPrev](#clist__getprev)|Gets the previous element for iterating.|  
|[CList::GetSize](#clist__getsize)|Returns the number of elements in this list.|  
|[CList::GetTail](#clist__gettail)|Returns the tail element of the list (cannot be empty).|  
|[CList::GetTailPosition](#clist__gettailposition)|Returns the position of the tail element of the list.|  
|[CList::InsertAfter](#clist__insertafter)|Inserts a new element after a given position.|  
|[CList::InsertBefore](#clist__insertbefore)|Inserts a new element before a given position.|  
|[CList::IsEmpty](#clist__isempty)|Tests for the empty list condition (no elements).|  
|[CList::RemoveAll](#clist__removeall)|Removes all the elements from this list.|  
|[CList::RemoveAt](#clist__removeat)|Removes an element from this list, specified by position.|  
|[CList::RemoveHead](#clist__removehead)|Removes the element from the head of the list.|  
|[CList::RemoveTail](#clist__removetail)|Removes the element from the tail of the list.|  
|[CList::SetAt](#clist__setat)|Sets the element at a given position.|  
  
#### Parameters  
 `TYPE`  
 Type of object stored in the list.  
  
 `ARG` *_* `TYPE`  
 Type used to reference objects stored in the list. Can be a reference.  
  
## Remarks  
 `CList` lists behave like doubly-linked lists.  
  
 A variable of type **POSITION** is a key for the list. You can use a **POSITION** variable as an iterator to traverse a list sequentially and as a bookmark to hold a place. A position is not the same as an index, however.  
  
 Element insertion is very fast at the list head, at the tail, and at a known **POSITION**. A sequential search is necessary to look up an element by value or index. This search can be slow if the list is long.  
  
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
  
##  <a name="clist__addhead"></a>  CList::AddHead  
 Adds a new element or list of elements to the head of this list.  
  
```  
POSITION AddHead(ARG_TYPE newElement);

 
void AddHead(CList* pNewList);
```  
  
### Parameters  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element (can be a reference).  
  
 `newElement`  
 The new element.  
  
 `pNewList`  
 A pointer to another `CList` list. The elements in `pNewList` will be added to this list.  
  
### Return Value  
 The first version returns the **POSITION** value of the newly inserted element.  
  
### Remarks  
 The list can be empty before the operation.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#36](../../mfc/codesnippet/cpp/clist-class_2.cpp)]  
  
##  <a name="clist__addtail"></a>  CList::AddTail  
 Adds a new element or list of elements to the tail of this list.  
  
```  
POSITION AddTail(ARG_TYPE newElement);

 
void AddTail(CList* pNewList);
```  
  
### Parameters  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element (can be a reference).  
  
 `newElement`  
 The element to be added to this list.  
  
 `pNewList`  
 A pointer to another `CList` list. The elements in `pNewList` will be added to this list.  
  
### Return Value  
 The first version returns the **POSITION** value of the newly inserted element.  
  
### Remarks  
 The list can be empty before the operation.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#37](../../mfc/codesnippet/cpp/clist-class_3.cpp)]  
  
##  <a name="clist__clist"></a>  CList::CList  
 Constructs an empty ordered list.  
  
```  
CList(INT_PTR nBlockSize = 10);
```  
  
### Parameters  
 `nBlockSize`  
 The memory-allocation granularity for extending the list.  
  
### Remarks  
 As the list grows, memory is allocated in units of `nBlockSize` entries.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#38](../../mfc/codesnippet/cpp/clist-class_4.cpp)]  
  
##  <a name="clist__find"></a>  CList::Find  
 Searches the list sequentially to find the first element matching the specified `searchValue`.  
  
```  
POSITION Find(
    ARG_TYPE searchValue,  
    POSITION startAfter = NULL) const;

 
```  
  
### Parameters  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element (can be a reference).  
  
 `searchValue`  
 The value to be found in the list.  
  
 `startAfter`  
 The start position for the search. If no value is specified, the search begins with the head element.  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if the object is not found.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#39](../../mfc/codesnippet/cpp/clist-class_5.cpp)]  
  
##  <a name="clist__findindex"></a>  CList::FindIndex  
 Uses the value of `nIndex` as an index into the list.  
  
```  
POSITION FindIndex(INT_PTR nIndex) const;

 
```  
  
### Parameters  
 `nIndex`  
 The zero-based index of the list element to be found.  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if `nIndex` is negative or too large.  
  
### Remarks  
 It starts a sequential scan from the head of the list, stopping on the *n*th element.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#40](../../mfc/codesnippet/cpp/clist-class_6.cpp)]  
  
##  <a name="clist__getat"></a>  CList::GetAt  
 Gets the list element at a given position.  
  
```  
TYPE& GetAt(POSITION position);

 
const TYPE& GetAt(POSITION position) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of object in the list.  
  
 *position*  
 The position in the list of the element to get.  
  
### Return Value  
 See the return value description for `GetHead`.  
  
### Remarks  
 `GetAt` returns the element (or a reference to the element) associated with a given position. It is not the same as an index, and you cannot operate on a **POSITION** value yourself. A variable of type **POSITION** is a key for the list.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
### Example  
  See the example for [CList::GetHeadPosition](#clist__getheadposition).  
  
##  <a name="clist__getcount"></a>  CList::GetCount  
 Gets the number of elements in this list.  
  
```  
INT_PTR GetCount() const;

 
```  
  
### Return Value  
 An integer value containing the element count.  
  
### Remarks  
 Calling this method will generate the same result as the [CList::GetSize](#clist__getsize) method.  
  
### Example  
  See the example for [CList::RemoveHead](#clist__removehead).  
  
##  <a name="clist__gethead"></a>  CList::GetHead  
 Gets the head element (or a reference to the head element) of this list.  
  
```  
const TYPE& GetHead() const;

 
 
TYPE& GetHead();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of object in the list.  
  
### Return Value  
 If the list is **const**, `GetHead` returns a copy of the element at the head of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetHead` returns a reference to the element at the head of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You must ensure that the list is not empty before calling `GetHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#clist__isempty) to verify that the list contains elements.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#41](../../mfc/codesnippet/cpp/clist-class_7.cpp)]  
  
##  <a name="clist__getheadposition"></a>  CList::GetHeadPosition  
 Gets the position of the head element of this list.  
  
```  
POSITION GetHeadPosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if the list is empty.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#42](../../mfc/codesnippet/cpp/clist-class_8.cpp)]  
  
##  <a name="clist__getnext"></a>  CList::GetNext  
 Gets the list element identified by `rPosition`, then sets `rPosition` to the **POSITION** value of the next entry in the list.  
  
```  
TYPE& GetNext(POSITION& rPosition);

 
const TYPE& GetNext(POSITION& rPosition) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of the elements in the list.  
  
 `rPosition`  
 A reference to a **POSITION** value returned by a previous `GetNext`, [GetHeadPosition](#clist__getheadposition), or other member function call.  
  
### Return Value  
 If the list is **const**, `GetNext` returns a copy of an element of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetNext` returns a reference to an element of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You can use `GetNext` in a forward iteration loop if you establish the initial position with a call to `GetHeadPosition` or **Find**.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 If the retrieved element is the last in the list, then the new value of `rPosition` is set to **NULL**.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#43](../../mfc/codesnippet/cpp/clist-class_9.cpp)]  
  
##  <a name="clist__getprev"></a>  CList::GetPrev  
 Gets the list element identified by `rPosition`, then sets `rPosition` to the **POSITION** value of the previous entry in the list.  
  
```  
TYPE& GetPrev(POSITION& rPosition);

 
const TYPE& GetPrev(POSITION& rPosition) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of the elements in the list.  
  
 `rPosition`  
 A reference to a **POSITION** value returned by a previous `GetPrev` or other member function call.  
  
### Return Value  
 If the list is **const**, `GetPrev` returns a copy of the element at the head of the list. This allows the function to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetPrev` returns a reference to an element of the list. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You can use `GetPrev` in a reverse iteration loop if you establish the initial position with a call to `GetTailPosition` or **Find**.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 If the retrieved element is the first in the list, then the new value of `rPosition` is set to **NULL**.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#44](../../mfc/codesnippet/cpp/clist-class_10.cpp)]  
  
##  <a name="clist__getsize"></a>  CList::GetSize  
 Returns the number of list elements.  
  
```  
INT_PTR GetSize() const;

 
```  
  
### Return Value  
 The number of items in the list.  
  
### Remarks  
 Call this method to retrieve the number of elements in the list.  Calling this method will generate the same result as the [CList::GetCount](#clist__getcount) method.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#45](../../mfc/codesnippet/cpp/clist-class_11.cpp)]  
  
##  <a name="clist__gettail"></a>  CList::GetTail  
 Gets the `CObject` pointer that represents the tail element of this list.  
  
```  
TYPE& GetTail();

 
const TYPE& GetTail() const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements in the list.  
  
### Return Value  
 See the return value description for [GetHead](../../mfc/reference/coblist-class.md#coblist__gethead).  
  
### Remarks  
 You must ensure that the list is not empty before calling `GetTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty) to verify that the list contains elements.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#46](../../mfc/codesnippet/cpp/clist-class_12.cpp)]  
  
##  <a name="clist__gettailposition"></a>  CList::GetTailPosition  
 Gets the position of the tail element of this list; **NULL** if the list is empty.  
  
```  
POSITION GetTailPosition() const;

 
```  
  
### Return Value  
 A **POSITION** value that can be used for iteration or object pointer retrieval; **NULL** if the list is empty.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#47](../../mfc/codesnippet/cpp/clist-class_13.cpp)]  
  
##  <a name="clist__insertafter"></a>  CList::InsertAfter  
 Adds an element to this list after the element at the specified position.  
  
```  
POSITION InsertAfter(
    POSITION position, ARG_TYPE newElement);
```  
  
### Parameters  
 *position*  
 A **POSITION** value returned by a previous `GetNext`, `GetPrev`, or **Find** member function call.  
  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element.  
  
 `newElement`  
 The element to be added to this list.  
  
### Return Value  
 A **POSITION** value that can be used for iteration or list element retrieval.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#48](../../mfc/codesnippet/cpp/clist-class_14.cpp)]  
  
##  <a name="clist__insertbefore"></a>  CList::InsertBefore  
 Adds an element to this list before the element at the specified position.  
  
```  
POSITION InsertBefore(
    POSITION position, ARG_TYPE newElement);
```  
  
### Parameters  
 *position*  
 A **POSITION** value returned by a previous `GetNext`, `GetPrev`, or **Find** member function call.  
  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element (can be a reference).  
  
 `newElement`  
 The element to be added to this list.  
  
### Return Value  
 A **POSITION** value that can be used for iteration or list element retrieval.  
  
### Remarks  
 If *position* is **NULL**, the element is inserted at the head of the list.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#49](../../mfc/codesnippet/cpp/clist-class_15.cpp)]  
  
##  <a name="clist__isempty"></a>  CList::IsEmpty  
 Indicates whether this list contains no elements.  
  
```  
BOOL IsEmpty() const;

 
```  
  
### Return Value  
 Nonzero if this list is empty; otherwise 0.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#50](../../mfc/codesnippet/cpp/clist-class_16.cpp)]  
  
##  <a name="clist__removeall"></a>  CList::RemoveAll  
 Removes all the elements from this list and frees the associated memory.  
  
```  
void RemoveAll();
```  
  
### Remarks  
 No error is generated if the list is already empty.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#51](../../mfc/codesnippet/cpp/clist-class_17.cpp)]  
  
##  <a name="clist__removeat"></a>  CList::RemoveAt  
 Removes the specified element from this list.  
  
```  
void RemoveAt(POSITION position);
```  
  
### Parameters  
 *position*  
 The position of the element to be removed from the list.  
  
### Remarks  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#52](../../mfc/codesnippet/cpp/clist-class_18.cpp)]  
  
##  <a name="clist__removehead"></a>  CList::RemoveHead  
 Removes the element from the head of the list and returns a pointer to it.  
  
```  
TYPE RemoveHead();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements in the list.  
  
### Return Value  
 The element previously at the head of the list.  
  
### Remarks  
 You must ensure that the list is not empty before calling `RemoveHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#clist__isempty) to verify that the list contains elements.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#53](../../mfc/codesnippet/cpp/clist-class_19.cpp)]  
  
##  <a name="clist__removetail"></a>  CList::RemoveTail  
 Removes the element from the tail of the list and returns a pointer to it.  
  
```  
TYPE RemoveTail();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements in the list.  
  
### Return Value  
 The element that was at the tail of the list.  
  
### Remarks  
 You must ensure that the list is not empty before calling `RemoveTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](#clist__isempty) to verify that the list contains elements.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#54](../../mfc/codesnippet/cpp/clist-class_20.cpp)]  
  
##  <a name="clist__setat"></a>  CList::SetAt  
 A variable of type **POSITION** is a key for the list.  
  
```  
void SetAt(
    POSITION pos, ARG_TYPE newElement);
```  
  
### Parameters  
 `pos`  
 The **POSITION** of the element to be set.  
  
 `ARG_TYPE`  
 Template parameter specifying the type of the list element (can be a reference).  
  
 `newElement`  
 The element to be added to the list.  
  
### Remarks  
 It is not the same as an index, and you cannot operate on a **POSITION** value yourself. `SetAt` writes the element to the specified position in the list.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
### Example  
 [!code-cpp[NVC_MFCCollections#55](../../mfc/codesnippet/cpp/clist-class_21.cpp)]  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CMap Class](../../mfc/reference/cmap-class.md)   
 [CArray Class](../../mfc/reference/carray-class.md)
