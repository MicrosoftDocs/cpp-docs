---
title: "CTypedPtrList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CTypedPtrList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CTypedPtrList class"
  - "type-safe collections"
  - "lists [C++]"
  - "template classes, CTypedPtrList class"
  - "linked lists [C++]"
  - "pointer lists"
ms.assetid: c273096e-1756-4340-864b-4a08b674a65e
caps.latest.revision: 24
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
# CTypedPtrList Class
Provides a type-safe "wrapper" for objects of class `CPtrList`.  
  
## Syntax  
  
```  
template<class BASE_CLASS, class TYPE>  
class CTypedPtrList : public BASE_CLASS  
```  
  
#### Parameters  
 `BASE_CLASS`  
 Base class of the typed pointer list class; must be a pointer list class ( `CObList` or `CPtrList`).  
  
 `TYPE`  
 Type of the elements stored in the base-class list.  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CTypedPtrList::AddHead](#ctypedptrlist__addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|  
|[CTypedPtrList::AddTail](#ctypedptrlist__addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|  
|[CTypedPtrList::GetAt](#ctypedptrlist__getat)|Gets the element at a given position.|  
|[CTypedPtrList::GetHead](#ctypedptrlist__gethead)|Returns the head element of the list (cannot be empty).|  
|[CTypedPtrList::GetNext](#ctypedptrlist__getnext)|Gets the next element for iterating.|  
|[CTypedPtrList::GetPrev](#ctypedptrlist__getprev)|Gets the previous element for iterating.|  
|[CTypedPtrList::GetTail](#ctypedptrlist__gettail)|Returns the tail element of the list (cannot be empty).|  
|[CTypedPtrList::RemoveHead](#ctypedptrlist__removehead)|Removes the element from the head of the list.|  
|[CTypedPtrList::RemoveTail](#ctypedptrlist__removetail)|Removes the element from the tail of the list.|  
|[CTypedPtrList::SetAt](#ctypedptrlist__setat)|Sets the element at a given position.|  
  
## Remarks  
 When you use `CTypedPtrList` rather than `CObList` or `CPtrList`, the C++ type-checking facility helps eliminate errors caused by mismatched pointer types.  
  
 In addition, the `CTypedPtrList` wrapper performs much of the casting that would be required if you used `CObList` or `CPtrList`.  
  
 Because all `CTypedPtrList` functions are inline, use of this template does not significantly affect the size or speed of your code.  
  
 Lists derived from `CObList` can be serialized, but those derived from `CPtrList` cannot.  
  
 When a `CTypedPtrList` object is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.  
  
 For more information on using `CTypedPtrList`, see the articles [Collections](../../mfc/collections.md) and [Template-Based Classes](../../mfc/template-based-classes.md).  
  
## Example  
 This example creates an instance of `CTypedPtrList`, adds one object, serializes the list to disk, and then deletes the object:  
  
 [!code-cpp[NVC_MFCCollections#110](../../mfc/codesnippet/cpp/ctypedptrlist-class_1.cpp)]  
  
 [!code-cpp[NVC_MFCCollections#111](../../mfc/codesnippet/cpp/ctypedptrlist-class_2.cpp)]  
  
## Inheritance Hierarchy  
 `BASE_CLASS`  
  
 `_CTypedPtrList`  
  
 `CTypedPtrList`  
  
## Requirements  
 **Header:** afxtempl.h  
  
##  <a name="ctypedptrlist__addhead"></a>  CTypedPtrList::AddHead  
 This member function calls `BASE_CLASS`**::AddHead**.  
  
```  
POSITION AddHead(
    TYPE newElement);

 
void AddHead(
    CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```  
  
### Parameters  
 *TYPE*  
 Type of the elements stored in the base-class list.  
  
 `newElement`  
 The object pointer to be added to this list. A **NULL** value is allowed.  
  
 `BASE_CLASS`  
 Base class of the typed pointer list class; must be a pointer list class ( [CObList](../../mfc/reference/coblist-class.md) or [CPtrList](../../mfc/reference/cptrlist-class.md)).  
  
 `pNewList`  
 A pointer to another [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) object. The elements in `pNewList` will be added to this list.  
  
### Return Value  
 The first version returns the **POSITION** value of the newly inserted element.  
  
### Remarks  
 The first version adds a new element before the head of the list. The second version adds another list of elements before the head.  
  
##  <a name="ctypedptrlist__addtail"></a>  CTypedPtrList::AddTail  
 This member function calls `BASE_CLASS`**::AddTail**.  
  
```  
POSITION AddTail(
    TYPE newElement);

 
void AddTail(
    CTypedPtrList<BASE_CLASS, TYPE>* pNewList);
```  
  
### Parameters  
 *TYPE*  
 Type of the elements stored in the base-class list.  
  
 `newElement`  
 The object pointer to be added to this list. A **NULL** value is allowed.  
  
 `BASE_CLASS`  
 Base class of the typed pointer list class; must be a pointer list class ( [CObList](../../mfc/reference/coblist-class.md) or [CPtrList](../../mfc/reference/cptrlist-class.md)).  
  
 `pNewList`  
 A pointer to another [CTypedPtrList](../../mfc/reference/ctypedptrlist-class.md) object. The elements in `pNewList` will be added to this list.  
  
### Return Value  
 The first version returns the **POSITION** value of the newly inserted element.  
  
### Remarks  
 The first version adds a new element after the tail of the list. The second version adds another list of elements after the tail of the list.  
  
##  <a name="ctypedptrlist__getat"></a>  CTypedPtrList::GetAt  
 A variable of type **POSITION** is a key for the list.  
  
```  
TYPE& GetAt(POSITION position);

 
TYPE GetAt(POSITION position) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the list.  
  
 *position*  
 A **POSITION** value returned by a previous `GetHeadPosition` or **Find** member function call.  
  
### Return Value  
 If the list is accessed through a pointer to a **const CTypedPtrList**, then `GetAt` returns a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.  
  
 If the list is accessed directly or through a pointer to a `CTypedPtrList`, then `GetAt` returns a reference to a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 It is not the same as an index, and you cannot operate on a **POSITION** value yourself. `GetAt` retrieves the `CObject` pointer associated with a given position.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 This inline function calls `BASE_CLASS`**::GetAt**.  
  
##  <a name="ctypedptrlist__gethead"></a>  CTypedPtrList::GetHead  
 Gets the pointer that represents the head element of this list.  
  
```  
TYPE& GetHead();

 
TYPE GetHead() const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the list.  
  
### Return Value  
 If the list is accessed through a pointer to a **const CTypedPtrList**, then `GetHead` returns a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.  
  
 If the list is accessed directly or through a pointer to a `CTypedPtrList`, then `GetHead` returns a reference to a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You must ensure that the list is not empty before calling `GetHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty) to verify that the list contains elements.  
  
##  <a name="ctypedptrlist__getnext"></a>  CTypedPtrList::GetNext  
 Gets the list element identified by `rPosition`, then sets `rPosition` to the **POSITION** value of the next entry in the list.  
  
```  
TYPE& GetNext(POSITION& rPosition);

 
TYPE GetNext(POSITION& rPosition) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements contained in this list.  
  
 `rPosition`  
 A reference to a **POSITION** value returned by a previous `GetNext`, `GetHeadPosition`, or other member function call.  
  
### Return Value  
 If the list is accessed through a pointer to a **const CTypedPtrList**, then `GetNext` returns a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.  
  
 If the list is accessed directly or through a pointer to a `CTypedPtrList`, then `GetNext` returns a reference to a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You can use `GetNext` in a forward iteration loop if you establish the initial position with a call to `GetHeadPosition` or [CPtrList::Find](../../mfc/reference/coblist-class.md#coblist__find).  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 If the retrieved element is the last in the list, then the new value of `rPosition` is set to **NULL**.  
  
 It is possible to remove an element during an iteration. See the example for [CObList::RemoveAt](../../mfc/reference/coblist-class.md#coblist__removeat).  
  
##  <a name="ctypedptrlist__getprev"></a>  CTypedPtrList::GetPrev  
 Gets the list element identified by `rPosition`, then sets `rPosition` to the **POSITION** value of the previous entry in the list.  
  
```  
TYPE& GetPrev(POSITION& rPosition);

 
TYPE GetPrev(POSITION& rPosition) const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements contained in this list.  
  
 `rPosition`  
 A reference to a **POSITION** value returned by a previous `GetPrev` or other member function call.  
  
### Return Value  
 If the list is accessed through a pointer to a **const CTypedPtrList**, then `GetPrev` returns a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.  
  
 If the list is accessed directly or through a pointer to a `CTypedPtrList`, then `GetPrev` returns a reference to a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You can use `GetPrev` in a reverse iteration loop if you establish the initial position with a call to `GetTailPosition` or **Find**.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 If the retrieved element is the first in the list, then the new value of `rPosition` is set to **NULL**.  
  
##  <a name="ctypedptrlist__gettail"></a>  CTypedPtrList::GetTail  
 Gets the pointer that represents the head element of this list.  
  
```  
TYPE& GetTail();

 
TYPE GetTail() const;

 
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the list.  
  
### Return Value  
 If the list is accessed through a pointer to a **const CTypedPtrList**, then `GetTail` returns a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used only on the right side of an assignment statement and thus protects the list from modification.  
  
 If the list is accessed directly or through a pointer to a `CTypedPtrList`, then `GetTail` returns a reference to a pointer of the type specified by the template parameter *TYPE*. This allows the function to be used on either side of an assignment statement and thus allows the list entries to be modified.  
  
### Remarks  
 You must ensure that the list is not empty before calling `GetTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty) to verify that the list contains elements.  
  
##  <a name="ctypedptrlist__removehead"></a>  CTypedPtrList::RemoveHead  
 Removes the element from the head of the list and returns it.  
  
```  
TYPE RemoveHead();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the list.  
  
### Return Value  
 The pointer previously at the head of the list. This pointer is of the type specified by the template parameter *TYPE*.  
  
### Remarks  
 You must ensure that the list is not empty before calling `RemoveHead`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty) to verify that the list contains elements.  
  
##  <a name="ctypedptrlist__removetail"></a>  CTypedPtrList::RemoveTail  
 Removes the element from the tail of the list and returns it.  
  
```  
TYPE RemoveTail();
```  
  
### Parameters  
 *TYPE*  
 Template parameter specifying the type of elements stored in the list.  
  
### Return Value  
 The pointer previously at the tail of the list. This pointer is of the type specified by the template parameter *TYPE*.  
  
### Remarks  
 You must ensure that the list is not empty before calling `RemoveTail`. If the list is empty, then the Debug version of the Microsoft Foundation Class Library asserts. Use [IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty) to verify that the list contains elements.  
  
##  <a name="ctypedptrlist__setat"></a>  CTypedPtrList::SetAt  
 This member function calls `BASE_CLASS`**::SetAt**.  
  
```  
void SetAt(
    POSITION pos, TYPE newElement);
```  
  
### Parameters  
 `pos`  
 The **POSITION** of the element to be set.  
  
 *TYPE*  
 Type of the elements stored in the base-class list.  
  
 `newElement`  
 The object pointer to be written to the list.  
  
### Remarks  
 A variable of type **POSITION** is a key for the list. It is not the same as an index, and you cannot operate on a **POSITION** value yourself. `SetAt` writes the object pointer to the specified position in the list.  
  
 You must ensure that your **POSITION** value represents a valid position in the list. If it is invalid, then the Debug version of the Microsoft Foundation Class Library asserts.  
  
 For more detailed remarks, see [CObList::SetAt](../../mfc/reference/coblist-class.md#coblist__setat).  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)   
 [CPtrList Class](../../mfc/reference/cptrlist-class.md)   
 [CObList Class](../../mfc/reference/coblist-class.md)
