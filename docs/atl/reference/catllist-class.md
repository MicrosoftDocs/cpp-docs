---
title: "CAtlList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL.CAtlList"
  - "CAtlList"
  - "ATL::CAtlList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAtlList class"
ms.assetid: 09e98053-64b2-4efa-99ab-d0542caaf981
caps.latest.revision: 19
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
# CAtlList Class
This class provides methods for creating and managing a list object.  
  
## Syntax  
  
```
template<typename E,  class ETraits = CElementTraits<E>>  class CAtlList
```  
  
#### Parameters  
 `E`  
 The element type.  
  
 `ETraits`  
 The code used to copy or move elements. See [CElementTraits Class](../../atl/reference/celementtraits-class.md) for more details.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlList::INARGTYPE](#catllist__inargtype)||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlList::CAtlList](#catllist__catllist)|The constructor.|  
|[CAtlList::~CAtlList](#catllist___dtorcatllist)|The destructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CAtlList::AddHead](#catllist__addhead)|Call this method to add an element to the head of the list.|  
|[CAtlList::AddHeadList](#catllist__addheadlist)|Call this method to add an existing list to the head of the list.|  
|[CAtlList::AddTail](#catllist__addtail)|Call this method to add an element to the tail of this list.|  
|[CAtlList::AddTailList](#catllist__addtaillist)|Call this method to add an existing list to the tail of this list.|  
|[CAtlList::AssertValid](#catllist__assertvalid)|Call this method to confirm the list is valid.|  
|[CAtlList::Find](#catllist__find)|Call this method to search the list for the specified element.|  
|[CAtlList::FindIndex](#catllist__findindex)|Call this method to obtain the position of an element, given an index value.|  
|[CAtlList::GetAt](#catllist__getat)|Call this method to return the element at a specified position in the list.|  
|[CAtlList::GetCount](#catllist__getcount)|Call this method to return the number of objects in the list.|  
|[CAtlList::GetHead](#catllist__gethead)|Call this method to return the element at the head of the list.|  
|[CAtlList::GetHeadPosition](#catllist__getheadposition)|Call this method to obtain the position of the head of the list.|  
|[CAtlList::GetNext](#catllist__getnext)|Call this method to return the next element from the list.|  
|[CAtlList::GetPrev](#catllist__getprev)|Call this method to return the previous element from the list.|  
|[CAtlList::GetTail](#catllist__gettail)|Call this method to return the element at the tail of the list.|  
|[CAtlList::GetTailPosition](#catllist__gettailposition)|Call this method to obtain the position of the tail of the list.|  
|[CAtlList::InsertAfter](#catllist__insertafter)|Call this method to insert a new element into the list after the specified position.|  
|[CAtlList::InsertBefore](#catllist__insertbefore)|Call this method to insert a new element into the list before the specified position.|  
|[CAtlList::IsEmpty](#catllist__isempty)|Call this method to determine if the list is empty.|  
|[CAtlList::MoveToHead](#catllist__movetohead)|Call this method to move the specified element to the head of the list.|  
|[CAtlList::MoveToTail](#catllist__movetotail)|Call this method to move the specified element to the tail of the list.|  
|[CAtlList::RemoveAll](#catllist__removeall)|Call this method to remove all of the elements from the list.|  
|[CAtlList::RemoveAt](#catllist__removeat)|Call this method to remove a single element from the list.|  
|[CAtlList::RemoveHead](#catllist__removehead)|Call this method to remove the element at the head of the list.|  
|[CAtlList::RemoveHeadNoReturn](#catllist__removeheadnoreturn)|Call this method to remove the element at the head of the list without returning a value.|  
|[CAtlList::RemoveTail](#catllist__removetail)|Call this method to remove the element at the tail of the list.|  
|[CAtlList::RemoveTailNoReturn](#catllist__removetailnoreturn)|Call this method to remove the element at the tail of the list without returning a value.|  
|[CAtlList::SetAt](#catllist__setat)|Call this method to set the value of the element at a given position in the list.|  
|[CAtlList::SwapElements](#catllist__swapelements)|Call this method to swap elements in the list.|  
  
## Remarks  
 The `CAtlList` class supports ordered lists of nonunique objects accessible sequentially or by value. `CAtlList` lists behave like doubly linked lists. Each list has a head and a tail, and new elements (or lists in some cases) can be added to either end of the list, or inserted before or after specific elements.  
  
 Most of the `CAtlList` methods make use of a position value. This value is used by the methods to reference the actual memory location where the elements are stored, and should not be calculated or predicted directly. If it is necessary to access the *n*th element in the list, the method [CAtlList::FindIndex](#catllist__findindex) will return the corresponding position value for a given index. The methods [CAtlList::GetNext](#catllist__getnext) and [CAtlList::GetPrev](#catllist__getprev) can be used to iterate through the objects in the list.  
  
 For more information regarding the collection classes available with ATL, see [ATL Collection Classes](../../atl/atl-collection-classes.md).  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="catllist__addhead"></a>  CAtlList::AddHead  
 Call this method to add an element to the head of the list.  
  
```
POSITION AddHead();
POSITION AddHead(INARGTYPE   element);
```  
  
### Parameters  
 `element`  
 The new element.  
  
### Return Value  
 Returns the position of the newly added element.  
  
### Remarks  
 If the first version is used, an empty element is created using its default constructor, rather than its copy constructor.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#13](../../atl/codesnippet/cpp/catllist-class_1.cpp)]  
  
##  <a name="catllist__addheadlist"></a>  CAtlList::AddHeadList  
 Call this method to add an existing list to the head of the list.  
  
```
void AddHeadList(const CAtlList<E, ETraits>* plNew);
```  
  
### Parameters  
 `plNew`  
 The list to be added.  
  
### Remarks  
 The list pointed to by `plNew` is inserted at the start of the existing list. In debug builds, an assertion failure will occur if `plNew` is equal to NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#14](../../atl/codesnippet/cpp/catllist-class_2.cpp)]  
  
##  <a name="catllist__addtail"></a>  CAtlList::AddTail  
 Call this method to add an element to the tail of this list.  
  
```
POSITION AddTail();
POSITION AddTail(INARGTYPE   element);
```  
  
### Parameters  
 `element`  
 The element to add.  
  
### Return Value  
 Returns the POSITION of the newly added element.  
  
### Remarks  
 If the first version is used, an empty element is created using its default constructor, rather than its copy constructor. The element is added to the end of the list, and so it now becomes the tail. This method can be used with an empty list.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#15](../../atl/codesnippet/cpp/catllist-class_3.cpp)]  
  
##  <a name="catllist__addtaillist"></a>  CAtlList::AddTailList  
 Call this method to add an existing list to the tail of this list.  
  
```
void AddTailList(const CAtlList<E, ETraits>* plNew);
```  
  
### Parameters  
 `plNew`  
 The list to be added.  
  
### Remarks  
 The list pointed to by `plNew` is inserted after the last element (if any) in the list object. The last element in the `plNew` list therefore becomes the tail. In debug builds, an assertion failure will occur if *plNew* is equal to NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#16](../../atl/codesnippet/cpp/catllist-class_4.cpp)]  
  
##  <a name="catllist__assertvalid"></a>  CAtlList::AssertValid  
 Call this method to confirm the list is valid.  
  
```
void AssertValid() const;
```  
  
### Remarks  
 In debug builds, an assertion failure will occur if the list object is not valid. To be valid, an empty list must have both the head and tail pointing to NULL, and a list that is not empty must have both the head and tail pointing to valid addresses.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#17](../../atl/codesnippet/cpp/catllist-class_5.cpp)]  
  
##  <a name="catllist__catllist"></a>  CAtlList::CAtlList  
 The constructor.  
  
```
CAtlList(UINT nBlockSize = 10) throw();
```  
  
### Parameters  
 `nBlockSize`  
 The block size.  
  
### Remarks  
 The constructor for the `CAtlList` object. The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#18](../../atl/codesnippet/cpp/catllist-class_6.cpp)]  
  
##  <a name="catllist___dtorcatllist"></a>  CAtlList::~CAtlList  
 The destructor.  
  
```
~CAtlList() throw();
```  
  
### Remarks  
 Frees all allocated resources, including a call to [CAtlList::RemoveAll](#catllist__removeall) to remove all elements from the list.  
  
 In debug builds, an assertion failure will occur if the list still contains some elements after the call to `RemoveAll`.  
  
##  <a name="catllist__find"></a>  CAtlList::Find  
 Call this method to search the list for the specified element.  
  
```
POSITION Find(INARGTYPE element,  POSITION posStartAfter = NULL) const throw();
```  
  
### Parameters  
 `element`  
 The element to be found in the list.  
  
 `posStartAfter`  
 The start position for the search. If no value is specified, the search begins with the head element.  
  
### Return Value  
 Returns the POSITION value of the element if found, otherwise returns NULL.  
  
### Remarks  
 In debug builds, an assertion failure will occur if the list object is not valid, or if the `posStartAfter` value is out of range.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#19](../../atl/codesnippet/cpp/catllist-class_7.cpp)]  
  
##  <a name="catllist__findindex"></a>  CAtlList::FindIndex  
 Call this method to obtain the position of an element, given an index value.  
  
```
POSITION FindIndex(size_t iElement) const throw();
```  
  
### Parameters  
 `iElement`  
 The zero-based index of the required list element.  
  
### Return Value  
 Returns the corresponding POSITION value, or NULL if `iElement` is out of range.  
  
### Remarks  
 This method returns the POSITION corresponding to a given index value, allowing access to the *n*th element in the list.  
  
 In debug builds, an assertion failure will occur if the list object is not valid.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#20](../../atl/codesnippet/cpp/catllist-class_8.cpp)]  
  
##  <a name="catllist__getat"></a>  CAtlList::GetAt  
 Call this method to return the element at a specified position in the list.  
  
```
E& GetAt(POSITION pos) throw();

const E& GetAt(POSITION pos) const throw();
```  
  
### Parameters  
 `pos`  
 The POSITION value specifying a particular element.  
  
### Return Value  
 A reference to, or copy of, the element.  
  
### Remarks  
 If the list is **const**, `GetAt` returns a copy of the element. This allows the method to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetAt` returns a reference to the element. This allows the method to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
 In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 See the example for [CAtlList::FindIndex](#catllist__findindex).  
  
##  <a name="catllist__getcount"></a>  CAtlList::GetCount  
 Call this method to return the number of objects in the list.  
  
```
size_t GetCount() const throw();
```  
  
### Return Value  
 Returns the number of elements in the list.  
  
### Example  
 See the example for [CAtlList::Find](#catllist__find).  
  
##  <a name="catllist__gethead"></a>  CAtlList::GetHead  
 Call this method to return the element at the head of the list.  
  
```
E& GetHead() throw();

const E& GetHead() const throw();
```  
  
### Return Value  
 Returns a reference to, or a copy of, the element at the head of the list.  
  
### Remarks  
 If the list is **const**, `GetHead` returns a copy of the element at the head of the list. This allows the method to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetHead` returns a reference to the element at the head of the list. This allows the method to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
 In debug builds, an assertion failure will occur if the head of the list points to NULL.  
  
### Example  
 See the example for [CAtlList::AddHead](#catllist__addhead).  
  
##  <a name="catllist__getheadposition"></a>  CAtlList::GetHeadPosition  
 Call this method to obtain the position of the head of the list.  
  
```
POSITION GetHeadPosition() const throw();
```  
  
### Return Value  
 Returns the POSITION value corresponding to the element at the head of the list.  
  
### Remarks  
 If the list is empty, the value returned is NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#21](../../atl/codesnippet/cpp/catllist-class_9.cpp)]  
  
##  <a name="catllist__getnext"></a>  CAtlList::GetNext  
 Call this method to return the next element from the list.  
  
```
E& GetNext(POSITION& pos) throw();

const E& GetNext(POSITION& pos) const throw();
```  
  
### Parameters  
 `pos`  
 A POSITION value, returned by a previous call to `GetNext`, [CAtlList::GetHeadPosition](#catllist__getheadposition), or other `CAtlList` method.  
  
### Return Value  
 If the list is **const**, `GetNext` returns a copy of the next element of the list. This allows the method to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetNext` returns a reference to the next element of the list. This allows the method to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 The POSITION counter, `pos`, is updated to point to the next element in the list, or NULL if there are no more elements. In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 See the example for [CAtlList::GetHeadPosition](#catllist__getheadposition).  
  
##  <a name="catllist__getprev"></a>  CAtlList::GetPrev  
 Call this method to return the previous element from the list.  
  
```
E& GetPrev(POSITION& pos) throw();

const E& GetPrev(POSITION& pos) const throw();
```  
  
### Parameters  
 `pos`  
 A POSITION value, returned by a previous call to `GetPrev`, [CAtlList::GetTailPosition](#catllist__gettailposition), or other `CAtlList` method.  
  
### Return Value  
 If the list is **const**, `GetPrev` returns a copy of an element of the list. This allows the method to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetPrev` returns a reference to an element of the list. This allows the method to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 The POSITION counter, `pos`, is updated to point to the previous element in the list, or NULL if there are no more elements. In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 See the example for [CAtlList::GetTailPosition](#catllist__gettailposition).  
  
##  <a name="catllist__gettail"></a>  CAtlList::GetTail  
 Call this method to return the element at the tail of the list.  
  
```
E& GetTail() throw();

const E& GetTail() const throw();
```  
  
### Return Value  
 Returns a reference to, or a copy of, the element at the tail of the list.  
  
### Remarks  
 If the list is **const**, `GetTail` returns a copy of the element at the head of the list. This allows the method to be used only on the right side of an assignment statement and protects the list from modification.  
  
 If the list is not **const**, `GetTail` returns a reference to the element at the head of the list. This allows the method to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
 In debug builds, an assertion failure will occur if the tail of the list points to NULL.  
  
### Example  
 See the example for [CAtlList::AddTail](#catllist__addtail).  
  
##  <a name="catllist__gettailposition"></a>  CAtlList::GetTailPosition  
 Call this method to obtain the position of the tail of the list.  
  
```
POSITION GetTailPosition() const throw();
```  
  
### Return Value  
 Returns the POSITION value corresponding to the element at the tail of the list.  
  
### Remarks  
 If the list is empty, the value returned is NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#22](../../atl/codesnippet/cpp/catllist-class_10.cpp)]  
  
##  <a name="catllist__inargtype"></a>  CAtlList::INARGTYPE  
 Type used when an element is passed as an input argument.  
  
```
typedef ETraits::INARGTYPE INARGTYPE;
```  
  
##  <a name="catllist__insertafter"></a>  CAtlList::InsertAfter  
 Call this method to insert a new element into the list after the specified position.  
  
```
POSITION InsertAfter(POSITION pos,  INARGTYPE element);
```  
  
### Parameters  
 `pos`  
 The POSITION value after which the new element will be inserted.  
  
 `element`  
 The element to be inserted.  
  
### Return Value  
 Returns the POSITION value of the new element.  
  
### Remarks  
 In debug builds, an assertion failure will occur if the list isn't valid, if the insert fails, or if an attempt is made to insert the element after the tail.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#23](../../atl/codesnippet/cpp/catllist-class_11.cpp)]  
  
##  <a name="catllist__insertbefore"></a>  CAtlList::InsertBefore  
 Call this method to insert a new element into the list before the specified position.  
  
```
POSITION InsertBefore(POSITION pos,  INARGTYPE element);
```  
  
### Parameters  
 `pos`  
 The new element will be inserted into the list before this POSITION value.  
  
 `element`  
 The element to be inserted.  
  
### Return Value  
 Returns the POSITION value of the new element.  
  
### Remarks  
 In debug builds, an assertion failure will occur if the list isn't valid, if the insert fails, or if an attempt is made to insert the element before the head.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#24](../../atl/codesnippet/cpp/catllist-class_12.cpp)]  
  
##  <a name="catllist__isempty"></a>  CAtlList::IsEmpty  
 Call this method to determine if the list is empty.  
  
```
bool IsEmpty() const throw();
```  
  
### Return Value  
 Returns true if the list contains no objects, otherwise false.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#25](../../atl/codesnippet/cpp/catllist-class_13.cpp)]  
  
##  <a name="catllist__movetohead"></a>  CAtlList::MoveToHead  
 Call this method to move the specified element to the head of the list.  
  
```
void MoveToHead(POSITION pos) throw();
```  
  
### Parameters  
 `pos`  
 The POSITION value of the element to move.  
  
### Remarks  
 The specified element is moved from its current position to the head of the list. In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#26](../../atl/codesnippet/cpp/catllist-class_14.cpp)]  
  
##  <a name="catllist__movetotail"></a>  CAtlList::MoveToTail  
 Call this method to move the specified element to the tail of the list.  
  
```
void MoveToTail(POSITION pos) throw();
```  
  
### Parameters  
 `pos`  
 The POSITION value of the element to move.  
  
### Remarks  
 The specified element is moved from its current position to the tail of the list. In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 See the example for [CAtlList::MoveToHead](#catllist__movetohead).  
  
##  <a name="catllist__removeall"></a>  CAtlList::RemoveAll  
 Call this method to remove all of the elements from the list.  
  
```
void RemoveAll() throw();
```  
  
### Remarks  
 This method removes all of the elements from the list and frees the allocated memory. In debugs builds, an ATLASSERT will be raised if all elements aren't deleted or if the list structure has become corrupted.  
  
### Example  
 See the example for [CAtlList::IsEmpty](#catllist__isempty).  
  
##  <a name="catllist__removeat"></a>  CAtlList::RemoveAt  
 Call this method to remove a single element from the list.  
  
```
void RemoveAt(POSITION pos) throw();
```  
  
### Parameters  
 `pos`  
 The POSITION value of the element to remove.  
  
### Remarks  
 The element referenced by `pos` is removed, and memory is freed. It is acceptable to use `RemoveAt` to remove the head or tail of the list.  
  
 In debug builds, an assertion failure will occur if the list is not valid or if removing the element causes the list to access memory which isn't part of the list structure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#27](../../atl/codesnippet/cpp/catllist-class_15.cpp)]  
  
##  <a name="catllist__removehead"></a>  CAtlList::RemoveHead  
 Call this method to remove the element at the head of the list.  
  
```
E RemoveHead();
```  
  
### Return Value  
 Returns the element at the head of the list.  
  
### Remarks  
 The head element is deleted from the list, and memory is freed. A copy of the element is returned. In debug builds, an assertion failure will occur if the list is empty.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#28](../../atl/codesnippet/cpp/catllist-class_16.cpp)]  
  
##  <a name="catllist__removeheadnoreturn"></a>  CAtlList::RemoveHeadNoReturn  
 Call this method to remove the element at the head of the list without returning a value.  
  
```
void RemoveHeadNoReturn() throw();
```  
  
### Remarks  
 The head element is deleted from the list, and memory is freed. In debug builds, an assertion failure will occur if the list is empty.  
  
### Example  
 See the example for [CAtlList::IsEmpty](#catllist__isempty).  
  
##  <a name="catllist__removetail"></a>  CAtlList::RemoveTail  
 Call this method to remove the element at the tail of the list.  
  
```
E RemoveTail();
```  
  
### Return Value  
 Returns the element at the tail of the list.  
  
### Remarks  
 The tail element is deleted from the list, and memory is freed. A copy of the element is returned. In debug builds, an assertion failure will occur if the list is empty.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#29](../../atl/codesnippet/cpp/catllist-class_17.cpp)]  
  
##  <a name="catllist__removetailnoreturn"></a>  CAtlList::RemoveTailNoReturn  
 Call this method to remove the element at the tail of the list without returning a value.  
  
```
void RemoveTailNoReturn() throw();
```  
  
### Remarks  
 The tail element is deleted from the list, and memory is freed. In debug builds, an assertion failure will occur if the list is empty.  
  
### Example  
 See the example for [CAtlList::IsEmpty](#catllist__isempty).  
  
##  <a name="catllist__setat"></a>  CAtlList::SetAt  
 Call this method to set the value of the element at a given position in the list.  
  
```
void SetAt(POSITION pos,  INARGTYPE element);
```  
  
### Parameters  
 `pos`  
 The POSITION value corresponding to the element to change.  
  
 `element`  
 The new element value.  
  
### Remarks  
 Replaces the existing value with `element`. In debug builds, an assertion failure will occur if `pos` is equal to NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#30](../../atl/codesnippet/cpp/catllist-class_18.cpp)]  
  
##  <a name="catllist__swapelements"></a>  CAtlList::SwapElements  
 Call this method to swap elements in the list.  
  
```
void SwapElements(POSITION pos1,  POSITION pos2) throw();
```  
  
### Parameters  
 *pos1*  
 The first POSITION value.  
  
 *pos2*  
 The second POSITION value.  
  
### Remarks  
 Swaps the elements at the two positions specified. In debug builds, an assertion failure will occur if either position value is equal to NULL.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#31](../../atl/codesnippet/cpp/catllist-class_19.cpp)]  
  
## See Also  
 [CList Class](../../mfc/reference/clist-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
