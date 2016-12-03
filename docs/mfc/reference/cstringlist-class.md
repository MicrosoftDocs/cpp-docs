---
title: "CStringList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CStringList"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "strings [C++], lists"
  - "lists, string"
  - "CStringList class"
  - "strings [C++], collections"
ms.assetid: 310a7edb-263c-4bd2-ac43-0bfbfddc5a33
caps.latest.revision: 25
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
|[CObList::CObList](../../mfc/reference/coblist-class.md#coblist__coblist)|Constructs an empty list.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CObList::AddHead](../../mfc/reference/coblist-class.md#coblist__addhead)|Adds an element (or all the elements in another list) to the head of the list (makes a new head).|  
|[CObList::AddTail](../../mfc/reference/coblist-class.md#coblist__addtail)|Adds an element (or all the elements in another list) to the tail of the list (makes a new tail).|  
|[CObList::Find](../../mfc/reference/coblist-class.md#coblist__find)|Gets the position of an element specified by pointer value.|  
|[CObList::FindIndex](../../mfc/reference/coblist-class.md#coblist__findindex)|Gets the position of an element specified by a zero-based index.|  
|[CObList::GetAt](../../mfc/reference/coblist-class.md#coblist__getat)|Gets the element at a given position.|  
|[CObList::GetCount](../../mfc/reference/coblist-class.md#coblist__getcount)|Returns the number of elements in this list.|  
|[CObList::GetHead](../../mfc/reference/coblist-class.md#coblist__gethead)|Returns the head element of the list (cannot be empty).|  
|[CObList::GetHeadPosition](../../mfc/reference/coblist-class.md#coblist__getheadposition)|Returns the position of the head element of the list.|  
|[CObList::GetNext](../../mfc/reference/coblist-class.md#coblist__getnext)|Gets the next element for iterating.|  
|[CObList::GetPrev](../../mfc/reference/coblist-class.md#coblist__getprev)|Gets the previous element for iterating.|  
|[CObList::GetSize](../../mfc/reference/coblist-class.md#coblist__getsize)|Returns the number of elements in this list.|  
|[CObList::GetTail](../../mfc/reference/coblist-class.md#coblist__gettail)|Returns the tail element of the list (cannot be empty).|  
|[CObList::GetTailPosition](../../mfc/reference/coblist-class.md#coblist__gettailposition)|Returns the position of the tail element of the list.|  
|[CObList::InsertAfter](../../mfc/reference/coblist-class.md#coblist__insertafter)|Inserts a new element after a given position.|  
|[CObList::InsertBefore](../../mfc/reference/coblist-class.md#coblist__insertbefore)|Inserts a new element before a given position.|  
|[CObList::IsEmpty](../../mfc/reference/coblist-class.md#coblist__isempty)|Tests for the empty list condition (no elements).|  
|[CObList::RemoveAll](../../mfc/reference/coblist-class.md#coblist__removeall)|Removes all the elements from this list.|  
|[CObList::RemoveAt](../../mfc/reference/coblist-class.md#coblist__removeat)|Removes an element from this list, specified by position.|  
|[CObList::RemoveHead](../../mfc/reference/coblist-class.md#coblist__removehead)|Removes the element from the head of the list.|  
|[CObList::RemoveTail](../../mfc/reference/coblist-class.md#coblist__removetail)|Removes the element from the tail of the list.|  
|[CObList::SetAt](../../mfc/reference/coblist-class.md#coblist__setat)|Sets the element at a given position.|  
  
## Remarks  
 All comparisons are done by value, meaning that the characters in the string are compared instead of the addresses of the strings.  
  
 `CStringList` incorporates the `IMPLEMENT_SERIAL` macro to support serialization and dumping of its elements. If a list of `CString` objects is stored to an archive, either with an overloaded insertion operator or with the `Serialize` member function, each `CString` element is serialized in turn.  
  
 If you need a dump of individual `CString` elements, you must set the depth of the dump context to 1 or greater.  
  
 For more information on using `CStringList`, see the article [Collections](../../mfc/collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../../mfc/reference/cobject-class.md)  
  
 `CStringList`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [MFC Sample COLLECT](../../visual-cpp-samples.md)   
 [CObject Class](../../mfc/reference/cobject-class.md)   
 [Hierarchy Chart](../../mfc/hierarchy-chart.md)



