---
title: "CComHeapPtr Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
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
caps.latest.revision: 14
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
|[CComHeapPtr::CComHeapPtr](../Topic/CComHeapPtr::CComHeapPtr.md)|The constructor.|  
  
## Remarks  
 `CComHeapPtr` derives from `CHeapPtr`, but uses [CComAllocator](../atl/ccomallocator-class.md) to allocate memory using COM routines. See [CHeapPtr](../atl/cheapptr-class.md) and [CHeapPtrBase](../atl/cheapptrbase-class.md) for the methods available.  
  
## Inheritance Hierarchy  
 [CHeapPtrBase](../atl/cheapptrbase-class.md)  
  
 [CHeapPtr](../atl/cheapptr-class.md)  
  
 `CComHeapPtr`  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="ccomheapptr__ccomheapptr"></a>  CComHeapPtr::CComHeapPtr  
 The constructor.  
  
```
CComHeapPtr() throw();

    explicit  CComHeapPtr(T*   pData) throw();
```  
  
### Parameters  
 `pData`  
 An existing `CComHeapPtr` object.  
  
### Remarks  
 The heap pointer can optionally be created using an existing `CComHeapPtr` object. If so, the new `CComHeapPtr` object assumes responsibility for managing the new pointer and resources.  
  
## See Also  
 [CHeapPtr Class](../atl/cheapptr-class.md)   
 [CHeapPtrBase Class](../atl/cheapptrbase-class.md)   
 [CComAllocator Class](../atl/ccomallocator-class.md)   
 [Class Overview](../atl/atl-class-overview.md)

