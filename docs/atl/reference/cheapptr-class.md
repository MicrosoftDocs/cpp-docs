---
title: "CHeapPtr Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "ATL::CHeapPtr"
  - "CHeapPtr"
  - "ATL.CHeapPtr"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CHeapPtr class"
ms.assetid: e5c5bfd4-9bf1-4164-8a83-8155fe253454
caps.latest.revision: 20
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
# CHeapPtr Class
A smart pointer class for managing heap pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<
typename
T,
class
Allocator
= CCRTAllocator
> class CHeapPtr :
public CHeapPtrBase<
T,
Allocator>
```  
  
#### Parameters  
 `T`  
 The object type to be stored on the heap.  
  
 `Allocator`  
 The memory allocation class to use.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtr::CHeapPtr](#cheapptr__cheapptr)|The constructor.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtr::Allocate](#cheapptr__allocate)|Call this method to allocate memory on the heap to store objects.|  
|[CHeapPtr::Reallocate](#cheapptr__reallocate)|Call this method to reallocate the memory on the heap.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtr::operator =](#cheapptr__operator_eq)|The assignment operator.|  
  
## Remarks  
 `CHeapPtr` is derived from [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md) and by default uses the CRT routines (in [CCRTAllocator](../../atl/reference/ccrtallocator-class.md)) to allocate and free memory. The class [CHeapPtrList](../../atl/reference/cheapptrlist-class.md) may be used to construct a list of heap pointers. See also [CComHeapPtr](../../atl/reference/ccomheapptr-class.md), which uses COM memory allocation routines.  
  
## Inheritance Hierarchy  
 [CHeapPtrBase](../../atl/reference/cheapptrbase-class.md)  
  
 `CHeapPtr`  
  
## Requirements  
 **Header:** atlcore.h  
  
##  <a name="cheapptr__allocate"></a>  CHeapPtr::Allocate  
 Call this method to allocate memory on the heap to store objects.  
  
```
bool Allocate(size_t
nElements = 1) throw();
```  
  
### Parameters  
 `nElements`  
 The number of elements used to calculate the amount of memory to allocate. The default value is 1.  
  
### Return Value  
 Returns true if the memory was successfully allocated, false on failure.  
  
### Remarks  
 The allocator routines are used to reserve enough memory on the heap to store *nElement* objects of a type defined in the constructor.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#77](../../atl/codesnippet/cpp/cheapptr-class_1.cpp)]  
  
##  <a name="cheapptr__cheapptr"></a>  CHeapPtr::CHeapPtr  
 The constructor.  
  
```
CHeapPtr() throw();

explicit CHeapPtr(
    T* p) throw();

CHeapPtr(
    CHeapPtr<T, Allocator>& p) throw();
```  
  
### Parameters  
 `p`  
 An existing heap pointer or `CHeapPtr`.  
  
### Remarks  
 The heap pointer can optionally be created using an existing pointer, or a `CHeapPtr` object. If so, the new `CHeapPtr` object assumes responsibility for managing the new pointer and resources.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#78](../../atl/codesnippet/cpp/cheapptr-class_2.cpp)]  
  
##  <a name="cheapptr__operator_eq"></a>  CHeapPtr::operator =  
 Assignment operator.  
  
```
CHeapPtr<T,
    Allocator>& operator=(
    CHeapPtr<T,
 Allocator>& p) throw();
```  
  
### Parameters  
 `p`  
 An existing `CHeapPtr` object.  
  
### Return Value  
 Returns a reference to the updated `CHeapPtr`.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#80](../../atl/codesnippet/cpp/cheapptr-class_3.cpp)]  
  
##  <a name="cheapptr__reallocate"></a>  CHeapPtr::Reallocate  
 Call this method to reallocate the memory on the heap.  
  
```
bool Reallocate(size_t    nElements) throw();
```  
  
### Parameters  
 `nElements`  
 The new number of elements used to calculate the amount of memory to allocate.  
  
### Return Value  
 Returns true if the memory was successfully allocated, false on failure.  
  
### Example  
 [!code-cpp[NVC_ATL_Utilities#79](../../atl/codesnippet/cpp/cheapptr-class_4.cpp)]  
  
## See Also  
 [CHeapPtrBase Class](../../atl/reference/cheapptrbase-class.md)   
 [CCRTAllocator Class](../../atl/reference/ccrtallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
