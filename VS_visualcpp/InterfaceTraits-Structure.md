---
title: "InterfaceTraits Structure"
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
ms.assetid: ede0c284-19a7-4892-9738-ff3da4923d0a
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# InterfaceTraits Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<  
   typename I0  
>  
struct __declspec(novtable) InterfaceTraits;  
template<  
   typename CloakedType  
>  
struct __declspec(novtable) InterfaceTraits<CloakedIid<CloakedType>>;  
  
template<>  
struct __declspec(novtable) InterfaceTraits<Nil>;  
```  
  
#### Parameters  
 `I0`  
 The name of an interface.  
  
 `CloakedType`  
 For RuntimeClass, Implements and ChainInterfaces, an interface that won't be in the list of supported interface IDs.  
  
## Remarks  
 Implements common characteristics of an interface.  
  
 The second template is a specialization for cloaked interfaces. The third template is a specialization for Nil parameters.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Base`|A synonym for the `I0` template parameter.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[InterfaceTraits::CanCastTo Method](../VS_visualcpp/InterfaceTraits--CanCastTo-Method.md)|Indicates whether the specified pointer can be cast to a pointer to `Base`.|  
|[InterfaceTraits::CastToBase Method](../VS_visualcpp/InterfaceTraits--CastToBase-Method.md)|Casts the specified pointer to a pointer to `Base`.|  
|[InterfaceTraits::CastToUnknown Method](../VS_visualcpp/InterfaceTraits--CastToUnknown-Method.md)|Casts the specified pointer to a pointer to IUnknown.|  
|[InterfaceTraits::FillArrayWithIid Method](../VS_visualcpp/InterfaceTraits--FillArrayWithIid-Method.md)|Assigns the interface ID of `Base` to the array element specified by the index argument.|  
|[InterfaceTraits::Verify Method](../VS_visualcpp/InterfaceTraits--Verify-Method.md)|Verifies that Base is properly derived.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[InterfaceTraits::IidCount Constant](../VS_visualcpp/InterfaceTraits--IidCount-Constant.md)|Holds the number of interface IDs associated with the current InterfaceTraits object.|  
  
## Inheritance Hierarchy  
 `InterfaceTraits`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../VS_visualcpp/Microsoft--WRL--Details-Namespace.md)