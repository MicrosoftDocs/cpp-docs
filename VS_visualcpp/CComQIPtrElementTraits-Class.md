---
title: "CComQIPtrElementTraits Class"
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
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
caps.latest.revision: 13
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
# CComQIPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of COM interface pointers.  
  
## Syntax  
  
```  
template<  
    typename I,  
    const IID* piid = & __uuidof( I )   
   >   
    class CComQIPtrElementTraits : public CDefaultElementTraits<  
    ATL::CComQIPtr< I,piid  
    >>  
```  
  
#### Parameters  
 `I`  
 A COM interface specifying the type of pointer to be stored.  
  
 `piid`  
 A pointer to the IID of `I`.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|[CComQIPtrElementTraits::INARGTYPE](../Topic/CComQIPtrElementTraits::INARGTYPE.md)|The data type to use for adding elements to the collection class object.|  
  
## Remarks  
 This class derives methods and provides a typedef useful when creating a collection class of [CComQIPtr](../VS_visualcpp/CComQIPtr-Class.md) COM interface pointer objects. This class is utilized by both the [CInterfaceArray](../VS_visualcpp/CInterfaceArray-Class.md) and [CInterfaceList](../VS_visualcpp/CInterfaceList-Class.md) classes.  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../VS_visualcpp/CDefaultCompareTraits-Class.md)  
  
 [CDefaultHashTraits](../VS_visualcpp/CDefaultHashTraits-Class.md)  
  
 [CElementTraitsBase](../VS_visualcpp/CElementTraitsBase-Class.md)  
  
 [CDefaultElementTraits](../VS_visualcpp/CDefaultElementTraits-Class.md)  
  
 `CComQIPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="ccomqiptrelementtraits__inargtype"></a>  CComQIPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```  
typedef I * INARGTYPE;  
```  
  
## See Also  
 [CDefaultElementTraits Class](../VS_visualcpp/CDefaultElementTraits-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)