---
title: "MixIn Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::MixIn"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MixIn structure"
ms.assetid: 47e2df9b-3a2e-4ae8-8ba3-b1fd3aa73566
caps.latest.revision: 4
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
# MixIn Structure
Ensures that a runtime class derives from [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] interfaces, if any, and then classic COM interfaces.  
  
## Syntax  
  
```  
template<  
   typename Derived,  
   typename MixInType,  
   bool hasImplements = __is_base_of(Details::ImplementsBase,  
   MixInType)  
>  
struct MixIn;  
```  
  
#### Parameters  
 `Derived`  
 A type derived from the [Implements](../windows/implements-structure.md) structure.  
  
 `MixInType`  
 A base type.  
  
 `hasImplements`  
 `true` if `MixInType` is derived from the current implementation the base type; `false` otherwise.  
  
## Remarks  
 If a class is derived from both [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] and class COM interfaces, the class declaration list must first list any [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] interfaces and then any classic COM interfaces. MixIn ensures that the interfaces are specified in the correct order.  
  
## Inheritance Hierarchy  
 `MixIn`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)