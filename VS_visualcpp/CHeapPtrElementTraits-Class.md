---
title: "CHeapPtrElementTraits Class"
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
ms.assetid: 910e0e06-3c8b-4242-bf00-b57eb74fbc77
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
# CHeapPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of heap pointers.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```  
template<  
    typename T,  
    class Allocator = ATL::CCRTAllocator>  
    class CHeapPtrElementTraits : public CDefaultElementTraits<  
    ATL::CHeapPtr< T,Allocator>>  
```  
  
#### Parameters  
 `T`  
 The object type to be stored in the collection class.  
  
 `Allocator`  
 The memory allocation class to use. The default is [CCRTAllocator](../VS_visualcpp/CCRTAllocator-Class.md).  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CHeapPtrElementTraits::INARGTYPE](../Topic/CHeapPtrElementTraits::INARGTYPE.md)|The data type to use for adding elements to the collection class object.|  
|[CHeapPtrElementTraits::OUTARGTYPE](../Topic/CHeapPtrElementTraits::OUTARGTYPE.md)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing heap pointers. The class `CHeapPtrList` derives from `CHeapPtrElementTraits`.  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../VS_visualcpp/CDefaultCompareTraits-Class.md)  
  
 [CDefaultHashTraits](../VS_visualcpp/CDefaultHashTraits-Class.md)  
  
 [CElementTraitsBase](../VS_visualcpp/CElementTraitsBase-Class.md)  
  
 [CDefaultElementTraits](../VS_visualcpp/CDefaultElementTraits-Class.md)  
  
 `CHeapPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cheapptrelementtraits__inargtype"></a>  CHeapPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```  
typedef CHeapPtr<T,  
    Allocator> & INARGTYPE;  
```  
  
##  <a name="cheapptrelementtraits__outargtype"></a>  CHeapPtrElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```  
typedef T *& OUTARGTYPE;  
```  
  
## See Also  
 [CDefaultElementTraits Class](../VS_visualcpp/CDefaultElementTraits-Class.md)   
 [CComHeapPtr Class](../VS_visualcpp/CComHeapPtr-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)