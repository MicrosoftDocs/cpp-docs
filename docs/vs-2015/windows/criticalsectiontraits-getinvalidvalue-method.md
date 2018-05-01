---
title: "CriticalSectionTraits::GetInvalidValue Method | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::CriticalSectionTraits::GetInvalidValue"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetInvalidValue method"
ms.assetid: 665f30a6-ca9c-4968-8c03-8f84e6b2329b
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CriticalSectionTraits::GetInvalidValue Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [CriticalSectionTraits::GetInvalidValue Method](https://docs.microsoft.com/cpp/windows/criticalsectiontraits-getinvalidvalue-method).  
  
  
Specializes a CriticalSection template so that the template is always invalid.  
  
## Syntax  
  
```  
inline static Type GetInvalidValue();  
```  
  
## Return Value  
 Always returns a pointer to an invalid critical section.  
  
## Remarks  
 The *Type* modifier is defined as `typedef CRITICAL_SECTION* Type;`.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [CriticalSectionTraits Structure](../windows/criticalsectiontraits-structure.md)

