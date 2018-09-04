---
title: "CComAllocator Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CComAllocator", "ATLBASE/ATL::CComAllocator", "ATLBASE/ATL::CComAllocator::Allocate", "ATLBASE/ATL::CComAllocator::Free", "ATLBASE/ATL::CComAllocator::Reallocate"]
dev_langs: ["C++"]
helpviewer_keywords: ["CComAllocator class"]
ms.assetid: 0cd706fd-0c7b-42d3-9054-febe2966fc8e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CComAllocator Class
This class provides methods for managing memory using COM memory routines.  
  
## Syntax  
  
```
class CComAllocator
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CComAllocator::Allocate](#allocate)|Call this static method to allocate memory.|  
|[CComAllocator::Free](#free)|Call this static method to free allocated memory.|  
|[CComAllocator::Reallocate](#reallocate)|Call this static method to reallocate memory.|  
  
## Remarks  
 This class is used by [CComHeapPtr](../../atl/reference/ccomheapptr-class.md) to provide the COM memory allocation routines. The counterpart class, [CCRTAllocator](../../atl/reference/ccrtallocator-class.md), provides the same methods using CRT routines.  
  
## Requirements  
 **Header:** atlbase.h  
  
##  <a name="allocate"></a>  CComAllocator::Allocate  
 Call this static function to allocate memory.  
  
```
static void* Allocate(size_t nBytes) throw();
```  
  
### Parameters  
 *nBytes*  
 The number of bytes to allocate.  
  
### Return Value  
 Returns a void pointer to the allocated space, or NULL if there is insufficient memory available.  
  
### Remarks  
 Allocates memory. See [CoTaskMemAlloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemalloc) for more details.  
  
##  <a name="free"></a>  CComAllocator::Free  
 Call this static function to free allocated memory.  
  
```
static void Free(void* p) throw();
```  
  
### Parameters  
 *p*  
 Pointer to the allocated memory.  
  
### Remarks  
 Frees the allocated memory. See [CoTaskMemFree](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemfree) for more details.  
  
##  <a name="reallocate"></a>  CComAllocator::Reallocate  
 Call this static function to reallocate memory.  
  
```
static void* Reallocate(void* p, size_t nBytes) throw();
```  
  
### Parameters  
 *p*  
 Pointer to the allocated memory.  
  
 *nBytes*  
 The number of bytes to reallocate.  
  
### Return Value  
 Returns a void pointer to the allocated space, or NULL if there is insufficient memory  
  
### Remarks  
 Resizes the amount of allocated memory. See [CoTaskMemRealloc](/windows/desktop/api/combaseapi/nf-combaseapi-cotaskmemrealloc) for more details.  
  
## See Also  
 [CComHeapPtr Class](../../atl/reference/ccomheapptr-class.md)   
 [CCRTAllocator Class](../../atl/reference/ccrtallocator-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
