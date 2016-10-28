---
title: "CComQIPtrElementTraits Class"
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
  - "ATL.CComQIPtrElementTraits"
  - "CComQIPtrElementTraits"
  - "ATL::CComQIPtrElementTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CComQIPtrElementTraits class"
ms.assetid: 9df9250a-5413-4362-b133-332932a597c4
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
# CComQIPtrElementTraits Class
This class provides methods, static functions, and typedefs useful when creating collections of COM interface pointers.  
  
## Syntax  
  
```
template<typename I,
    const IID* piid =& __uuidof(I)>   class CComQIPtrElementTraits : public CDefaultElementTraits<
    ATL::CComQIPtr<I,
    piid>>
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
 This class derives methods and provides a typedef useful when creating a collection class of [CComQIPtr](../atl/ccomqiptr-class.md) COM interface pointer objects. This class is utilized by both the [CInterfaceArray](../atl/cinterfacearray-class.md) and [CInterfaceList](../atl/cinterfacelist-class.md) classes.  
  
 For more information, see [ATL Collection Classes](../atl/atl-collection-classes.md).  
  
## Inheritance Hierarchy  
 [CDefaultCompareTraits](../atl/cdefaultcomparetraits-class.md)  
  
 [CDefaultHashTraits](../atl/cdefaulthashtraits-class.md)  
  
 [CElementTraitsBase](../atl/celementtraitsbase-class.md)  
  
 [CDefaultElementTraits](../atl/cdefaultelementtraits-class.md)  
  
 `CComQIPtrElementTraits`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="ccomqiptrelementtraits__inargtype"></a>  CComQIPtrElementTraits::INARGTYPE  
 The data type to use for adding elements to the collection class object.  
  
```
typedef I* INARGTYPE;
```  
  
## See Also  
 [CDefaultElementTraits Class](../atl/cdefaultelementtraits-class.md)   
 [Class Overview](../atl/atl-class-overview.md)

