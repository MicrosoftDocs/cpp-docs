---
title: "Implements Structure"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 29b13e90-34d4-4a0b-babd-5187c9eb0c36
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
# Implements Structure
Implements QueryInterface and GetIid for the specified interfaces.  
  
## Syntax  
  
```  
template <  
   typename I0,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
struct __declspec(novtable) Implements : Details::ImplementsHelper<RuntimeClassFlags<WinRt>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT>, Details::ImplementsBase;  
template <  
   int flags,  
   typename I0,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8  
>  
struct __declspec(novtable) Implements<RuntimeClassFlags<flags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : Details::ImplementsHelper<RuntimeClassFlags<flags>, typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT>, Details::ImplementsBase;  
```  
  
#### Parameters  
 `I0`  
 The zeroth interface ID. (Mandatory)  
  
 `I1`  
 The first interface ID. (Optional)  
  
 `I2`  
 The second interface ID. (Optional)  
  
 `I3`  
 The third interface ID. (Optional)  
  
 `I4`  
 The fourth interface ID. (Optional)  
  
 `I5`  
 The fifth interface ID. (Optional)  
  
 `I6`  
 The sixth interface ID. (Optional)  
  
 `I7`  
 The seventh interface ID. (Optional)  
  
 `I8`  
 The eigth interface ID. (Optional)  
  
 `I9`  
 The ninth interface ID. (Optional)  
  
 `flags`  
 Configuration flags for the class. One or more [RuntimeClassType](../VS_visualcpp/RuntimeClassType-Enumeration.md) enumerations that are specified in a [RuntimeClassFlags](../VS_visualcpp/RuntimeClassFlags-Structure.md) structure.  
  
## Remarks  
 Derives from the list of specified interfaces and implements helper templates for QueryInterface and GetIid.  
  
 Each `I0` through `I9` interface parameter must derive from either IUnknown, IInspectable, or the [ChainInterfaces](../VS_visualcpp/ChainInterfaces-Structure.md) template. The `flags` parameter determines whether support is generated for IUnknown or IInspectable.  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`ClassFlags`|A synonym for `RuntimeClassFlags<WinRt>`.|  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Implements::CanCastTo Method](../VS_visualcpp/Implements--CanCastTo-Method.md)|Gets a pointer to the specified interface.|  
|[Implements::CastToUnknown Method](../VS_visualcpp/Implements--CastToUnknown-Method.md)|Gets a pointer to the underlying IUnknown interface.|  
|[Implements::FillArrayWithIid Method](../VS_visualcpp/Implements--FillArrayWithIid-Method.md)|Inserts the interface ID specified by the current zeroth template parameter into the specified array element.|  
  
### Protected Constants  
  
|Name|Description|  
|----------|-----------------|  
|[Implements::IidCount Constant](../VS_visualcpp/Implements--IidCount-Constant.md)|Holds the number of implemented interface IDs.|  
  
## Inheritance Hierarchy  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `ImplementsBase`  
  
 `ImplementsHelper`  
  
 `Implements`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)