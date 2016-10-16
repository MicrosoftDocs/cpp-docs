---
title: "CAutoVectorPtrElementTraits Class"
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
  - "ATL::CAutoVectorPtrElementTraits<T>"
  - "ATL.CAutoVectorPtrElementTraits"
  - "ATL.CAutoVectorPtrElementTraits<T>"
  - "ATL::CAutoVectorPtrElementTraits"
  - "CAutoVectorPtrElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAutoVectorPtrElementTraits class"
ms.assetid: 16b81a56-55fb-46ca-b376-66a1884231a6
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
# CAutoVectorPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of smart pointers using vector new and delete operators.  
  
> [!IMPORTANT]
>  This class and its members cannot be used in applications that execute in the Windows Runtime.  
  
## Syntax  
  
```
template<
    typename   T>
    class  CAutoVectorPtrElementTraits : public CDefaultElementTraits<
    ATL::CAutoVectorPtr<T>>
```  
  
#### Parameters  
 `T`  
 The pointer type.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CAutoVectorPtrElementTraits::INARGTYPE](../Topic/CAutoVectorPtrElementTraits::INARGTYPE.md)|The data type to use for adding elements to the collection class object.|  
|[CAutoVectorPtrElementTraits::OUTARGTYPE](../Topic/CAutoVectorPtrElementTraits::OUTARGTYPE.md)|The data type to use for retrieving elements from the collection class object.|  
  
## Remarks  
 This class provides methods, static functions, and typedefs for aiding the creation of collection class objects containing smart pointers. Unlike [CAutoPtrElementTraits](../atl/cautoptrelementtraits-class.md), this class uses vector new and delete operators.  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../atl/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../atl/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../atl/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../atl/cdefaultelementtraits-class.md)  
  
 `CAutoVectorPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cautovectorptrelementtraits__inargtype"></a>  CAutoVectorPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef CAutoVectorPtr<T>& INARGTYPE;
```  
  
##  <a name="cautovectorptrelementtraits__outargtype"></a>  CAutoVectorPtrElementTraits::OUTARGTYPE  
 The data type to use for retrieving elements from the collection class object.  
  
```
typedef T *& OUTARGTYPE;
```  
  
## See Also  
 [CDefaultElementTraits Class](../atl/cdefaultelementtraits-class.md)   
 [CAutoVectorPtr Class](../atl/cautovectorptr-class.md)   
 [Class Overview](../atl/atl-class-overview.md)

