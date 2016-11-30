---
title: "CComPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "CComPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComPtr class"
ms.assetid: 22d9ea8d-ed66-4c34-940f-141db11e83bd
caps.latest.revision: 21
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
# CComPtr Class
A smart pointer class for managing COM interface pointers.  
  
## Syntax  
  
```
template<class T>  class CComPtr
```  
  
#### Parameters  
 `T`  
 A COM interface specifying the type of pointer to be stored.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComPtr::CComPtr](#ccomptr__ccomptr)|The constructor.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CComPtr::operator =](#ccomptr__operator_eq)|Assigns a pointer to the member pointer.|  
  
## Remarks  
 ATL uses `CComPtr` and [CComQIPtr](../../atl/reference/ccomqiptr-class.md) to manage COM interface pointers. Both are derived from [CComPtrBase](../../atl/reference/ccomptrbase-class.md), and both perform automatic reference counting.  
  
 The **CComPtr** and [CComQIPtr](../../atl/reference/ccomqiptr-class.md) classes can help eliminate memory leaks by performing automatic reference counting.  The following functions both perform the same logical operations; however, note how the second version may be less error-prone by using the **CComPtr** class:  
  
 [!code-cpp[NVC_ATL_Utilities#130](../../atl/codesnippet/cpp/ccomptr-class_1.cpp)]  
  
 [!code-cpp[NVC_ATL_Utilities#131](../../atl/codesnippet/cpp/ccomptr-class_2.cpp)]  
  
 In Debug builds, link atlsd.lib for code tracing.  
  
## Inheritance Hierarchy  
 [CComPtrBase](../../atl/reference/ccomptrbase-class.md)  
  
 `CComPtr`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomptr__ccomptr"></a>  CComPtr::CComPtr  
 The constructor.  
  
```
CComPtr() throw ();
CComPtr(T* lp) throw ();
CComPtr (const CComPtr<T>& lp) throw ();
```  
  
### Parameters  
 `lp`  
 Used to initialize the interface pointer.  
  
 `T`  
 A COM interface.  
  
##  <a name="ccomptr__operator_eq"></a>  CComPtr::operator =  
 Assignment operator.  
  
```
T* operator= (T* lp) throw ();

T* operator= (const CComPtr<T>& lp) throw ();
```  
  
### Return Value  
 Returns a pointer to the updated `CComPtr` object  
  
### Remarks  
 This operation AddRefs the new object and releases the existing object, if one exists.  
  
## See Also  
 [CComPtr::CComPtr](#ccomptr__ccomptr)   
 [CComQIPtr::CComQIPtr](../../atl/reference/ccomqiptr-class.md#ccomqiptr__ccomqiptr)   
 [Class Overview](../../atl/atl-class-overview.md)
