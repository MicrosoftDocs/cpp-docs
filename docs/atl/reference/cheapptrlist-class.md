---
title: "CHeapPtrList Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-atl"]
ms.topic: "reference"
f1_keywords: ["CHeapPtrList", "ATLCOLL/ATL::CHeapPtrList", "ATLCOLL/ATL::CHeapPtrList::CHeapPtrList"]
dev_langs: ["C++"]
helpviewer_keywords: ["CHeapPtrList class"]
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus"]
---
# CHeapPtrList Class
This class provides methods useful when constructing a list of heap pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<typename E, class Allocator = ATL::CCRTAllocator>  
class CHeapPtrList 
   : public CAtlList<ATL::CHeapPtr<E, Allocator>,
                     CHeapPtrElementTraits<E, Allocator>>
```  
  
#### Parameters  
 *E*  
 The object type to be stored in the collection class.  
  
 *Allocator*  
 The memory allocation class to use. The default is [CCRTAllocator](../../atl/reference/ccrtallocator-class.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtrList::CHeapPtrList](#cheapptrlist)|The constructor.|  
  
## Remarks  
 This class provides a constructor and derives methods from [CAtlList](../../atl/reference/catllist-class.md) and [CHeapPtrElementTraits](../../atl/reference/cheapptrelementtraits-class.md) to aid the creation of a collection class object storing heap pointers.  
  
## Inheritance Hierarchy  
 [CAtlList](../../atl/reference/catllist-class.md)  
  
 `CHeapPtrList`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cheapptrlist"></a>  CHeapPtrList::CHeapPtrList  
 The constructor.  
  
```
CHeapPtrList(UINT nBlockSize = 10) throw();
```  
  
### Parameters  
 *nBlockSize*  
 The block size.  
  
### Remarks  
 The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.  
  
## See Also  
 [CAtlList Class](../../atl/reference/catllist-class.md)   
 [CHeapPtr Class](../../atl/reference/cheapptr-class.md)   
 [CHeapPtrElementTraits Class](../../atl/reference/cheapptrelementtraits-class.md)   
 [Class Overview](../../atl/atl-class-overview.md)
