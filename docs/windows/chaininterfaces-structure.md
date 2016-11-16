---
title: "ChainInterfaces Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::ChainInterfaces"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ChainInterfaces structure"
ms.assetid: d7415b59-5468-4bef-a3fd-8d82b12f0e9c
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# ChainInterfaces Structure
Specifies verification and initialization functions that can be applied to a set of interface IDs.  
  
## Syntax  
  
```  
template <  
   typename I0,  
   typename I1,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
struct ChainInterfaces : I0;  
template <  
   typename DerivedType,  
   typename BaseType,  
   bool hasImplements,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8,  
   typename I9  
>  
struct ChainInterfaces<MixIn<DerivedType, BaseType, hasImplements>, I1, I2, I3, I4, I5, I6, I7, I8, I9>;  
```  
  
#### Parameters  
 `I0`  
 (Required) Interface ID 0.  
  
 `I1`  
 (Required) Interface ID 1.  
  
 `I2`  
 (Optional) Interface ID 2.  
  
 `I3`  
 (Optional) Interface ID 3.  
  
 `I4`  
 (Optional) Interface ID 4.  
  
 `I5`  
 (Optional) Interface ID 5.  
  
 `I6`  
 (Optional) Interface ID 6.  
  
 `I7`  
 (Optional) Interface ID 7.  
  
 `I8`  
 (Optional) Interface ID 8.  
  
 `I9`  
 (Optional) Interface ID 9.  
  
 `DerivedType`  
 A derived type.  
  
 `BaseType`  
 The base type of a derived type.  
  
 `hasImplements`  
 A Boolean value that if `true`, means you can't use a [MixIn](../windows/mixin-structure.md) structure with a class that does not derive from the [Implements](../windows/implements-structure.md) stucture.  
  
## Members  
  
### Protected Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ChainInterfaces::CanCastTo Method](../windows/chaininterfaces-cancastto-method.md)|Indicates whether the specified interface ID can be cast to each of the specializations defined by the ChainInterface template parameters.|  
|[ChainInterfaces::CastToUnknown Method](../windows/chaininterfaces-casttounknown-method.md)|Casts the interface pointer of the type defined by the `I0` template parameter to a pointer to IUnknown.|  
|[ChainInterfaces::FillArrayWithIid Method](../windows/chaininterfaces-fillarraywithiid-method.md)|Stores the interface ID defined by the `I0` template parameter into a specified location in a specified array of interface IDs.|  
|[ChainInterfaces::Verify Method](../windows/chaininterfaces-verify-method.md)|Verifies that each interface defined by template parameters `I0` through `I9` inherits from IUnknown and/or IInspectable, and that `I0` inherits from `I1` through `I9`.|  
  
### Protected Constants  
  
|Name|Description|  
|----------|-----------------|  
|[ChainInterfaces::IidCount Constant](../windows/chaininterfaces-iidcount-constant.md)|The total number of interface IDs contained in the interfaces specified by template parameters `I0` through `I9`.|  
  
## Inheritance Hierarchy  
 `I0`  
  
 `ChainInterfaces`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)