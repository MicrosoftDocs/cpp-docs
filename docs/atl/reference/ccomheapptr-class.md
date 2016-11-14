---
title: "CComHeapPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CComHeapPtr"
  - "ATL.CComHeapPtr<T>"
  - "ATL::CComHeapPtr<T>"
  - "CComHeapPtr"
  - "ATL.CComHeapPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComHeapPtr class"
ms.assetid: bd08b53d-da2b-43ab-a79c-e7c8dbbc5994
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
# CComHeapPtr Class
A smart pointer class for managing heap pointers.  
  
## Syntax  
  
```
template<typename T> class CComHeapPtr :  public CHeapPtr<T,CComAllocator>
```  
  
#### Parameters  
 `T`  
 The object type to be stored on the heap.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CComHeapPtr::CComHeapPtr](#ccomheapptr__ccomheapptr)|The constructor.|  
  
## Remarks  
 `CComHeapPtr` derives from `CHeapPtr`, but uses [CComAllocator](../../atl/reference/ccomallocator-class.md) to allocate memory using COM routines. See [CHeapPtr](../../atl/reference/cheapptr-class.md) and [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) for the methods available.  
  
## Inheritance Hierarchy  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 [CHeapPtr](../../atl/reference/cheapptr-class.md)  
  
 `CComHeapPtr`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomheapptr__ccomheapptr"></a>  CComHeapPtr::CComHeapPtr  
 The constructor.  
  
```
CComHeapPtr() throw();
explicit CComHeapPtr(T* pData) throw();
```  
  
### Parameters  
 `pData`  
 An existing `CComHeapPtr` object.  
  
### Remarks  
 The heap pointer can optionally be created using an existing `CComHeapPtr` object. If so, the new `CComHeapPtr` object assumes responsibility for managing the new pointer and resources.  
  
## See Also  
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CHeapPtrBase Class](../../atl/reference/cheapptrbase-class.md)   
 [CComAllocator Class](../../atl/reference/ccomallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
