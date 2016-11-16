---
title: "CriticalSectionTraits Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CriticalSectionTraits structure"
ms.assetid: c515a1b5-4eb0-40bc-9035-c4d9352c9de7
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
# CriticalSectionTraits Structure
Specializes a CriticalSection object to support either an invalid critical section or a function to release a critical section.  
  
## Syntax  
  
```  
struct CriticalSectionTraits;  
```  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`Type`|A `typedef` that defines a pointer to a critical section. `Type` is defined as `typedef CRITICAL_SECTION* Type;`.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSectionTraits::GetInvalidValue Method](../windows/criticalsectiontraits-getinvalidvalue-method.md)|Specializes a CriticalSection template so that the template is always invalid.|  
|[CriticalSectionTraits::Unlock Method](../windows/criticalsectiontraits-unlock-method.md)|Specializes a CriticalSection template so that it supports releasing ownership of the specified critical section object.|  
  
## Inheritance Hierarchy  
 `CriticalSectionTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)