---
title: "CHeapPtrList Class"
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
ms.assetid: cc70e585-362a-4007-81db-c705eb181226
caps.latest.revision: 14
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
# CHeapPtrList Class
This class provides methods useful when constructing a list of heap pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template<  
    typename E,  
    class Allocator = ATL::CCRTAllocator>  
    class CHeapPtrList : public CAtlList<  
    ATL::CHeapPtr< E,Allocator  
   >,  
    CHeapPtrElementTraits< E,Allocator>>  
```  
  
#### Parameters  
 `E`  
 The object type to be stored in the collection class.  
  
 `Allocator`  
 The memory allocation class to use. The default is [CCRTAllocator](../VS_visualcpp/CCRTAllocator-Class.md).  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtrList::CHeapPtrList](../Topic/CHeapPtrList::CHeapPtrList.md)|The constructor.|  
  
## Remarks  
 This class provides a constructor and derives methods from [CAtlList](../VS_visualcpp/CAtlList-Class.md) and [CHeapPtrElementTraits](../VS_visualcpp/CHeapPtrElementTraits-Class.md) to aid the creation of a collection class object storing heap pointers.  
  
## Inheritance Hierarchy  
 [CAtlList](../VS_visualcpp/CAtlList-Class.md)  
  
 `CHeapPtrList`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cheapptrlist__cheapptrlist"></a>  CHeapPtrList::CHeapPtrList  
 The constructor.  
  
```  
CHeapPtrList(    UINT nBlockSize = 10 ) throw();  
```  
  
### Parameters  
 `nBlockSize`  
 The block size.  
  
### Remarks  
 The block size is a measure of the amount of memory allocated when a new element is required. Larger block sizes reduce calls to memory allocation routines, but use more resources.  
  
## See Also  
 [CAtlList Class](../VS_visualcpp/CAtlList-Class.md)   
 [CHeapPtr Class](../VS_visualcpp/CHeapPtr-Class.md)   
 [CHeapPtrElementTraits Class](../VS_visualcpp/CHeapPtrElementTraits-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)