---
title: "CInterfaceArray Class"
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
ms.assetid: 1f29cf66-a086-4a7b-b6a8-64f73da39f79
caps.latest.revision: 12
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
# CInterfaceArray Class
This class provides methods useful when constructing an array of COM interface pointers.  
  
## Syntax  
  
```  
  
template<  
      class  I,  
      const IID*  piid  
    = & __uuidof(  I  
    )>  
   class CInterfaceArray : public CAtlArray<  
      ATL::CComQIPtr<  I  
   ,  piid  
    >,  
      CComQIPtrElementTraits<  I  
   ,  piid  
    >>  
  
```  
  
#### Parameters  
 `I`  
 A COM interface specifying the type of pointer to be stored.  
  
 `piid`  
 A pointer to the IID of `I`.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[CInterfaceArray::CInterfaceArray](../Topic/CInterfaceArray::CInterfaceArray.md)|The constructor for the interface array.|  
  
## Remarks  
 This class provides a constructor and derived methods for creating an array of COM interface pointers. Use [CInterfaceList](../VS_visualcpp/CInterfaceList-Class.md) when a list is required.  
  
 For more information, see [ATL Collection Classes](../VS_visualcpp/ATL-Collection-Classes.md).  
  
## Inheritance Hierarchy  
 `CAtlArray`  
  
 `CInterfaceArray`  
  
## Requirements  
 **Header:** atlcoll.h  
  
##  <a name="cinterfacearray__cinterfacearray"></a>  CInterfaceArray::CInterfaceArray  
 The constructor.  
  
```  
  
CInterfaceArray( ) throw( );  
  
```  
  
### Remarks  
 Initializes the smart pointer array.  
  
## See Also  
 [CAtlArray Class](../VS_visualcpp/CAtlArray-Class.md)   
 [CComQIPtr Class](../VS_visualcpp/CComQIPtr-Class.md)   
 [CComQIPtrElementTraits Class](../VS_visualcpp/CComQIPtrElementTraits-Class.md)   
 [Class Overview](../VS_visualcpp/ATL-Class-Overview.md)