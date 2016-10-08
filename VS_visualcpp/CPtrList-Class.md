---
title: "CPtrList Class"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 4139a09c-4338-4f42-9eea-51336120b43c
caps.latest.revision: 19
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# CPtrList Class
Supports lists of void pointers.  
  
## Syntax  
  
```  
class CPtrList : public CObject  
```  
  
## Members  
 The member functions of `CPtrList` are similar to the member functions of class [CObList](../VS_visualcpp/CObList-Class.md). Because of this similarity, you can use the `CObList` reference documentation for member function specifics. Wherever you see a `CObject` pointer as a function parameter or return value, substitute a pointer to `void`.  
  
 `CObject*& CObList::GetHead() const;`  
  
 for example, translates to  
  
 `void*& CPtrList::GetHead() const;`  
  
## Remarks  
 `CPtrList` incorporates the `IMPLEMENT_DYNAMIC` macro to support run-time type access and dumping to a `CDumpContext` object. If you need a dump of individual pointer list elements, you must set the depth of the dump context to 1 or greater.  
  
 Pointer lists cannot be serialized.  
  
 When a `CPtrList` object is deleted, or when its elements are removed, only the pointers are removed, not the entities they reference.  
  
 For more information on using `CPtrList`, see the article [Collections](../VS_visualcpp/Collections.md).  
  
## Inheritance Hierarchy  
 [CObject](../VS_visualcpp/CObject-Class.md)  
  
 `CPtrList`  
  
## Requirements  
 **Header:** afxcoll.h  
  
## See Also  
 [CObject Class](../VS_visualcpp/CObject-Class.md)   
 [Hierarchy Chart](../VS_visualcpp/Hierarchy-Chart.md)   
 [CObList Class](../VS_visualcpp/CObList-Class.md)