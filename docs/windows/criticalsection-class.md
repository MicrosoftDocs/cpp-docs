---
title: "CriticalSection Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "corewrappers/Microsoft::WRL::Wrappers::CriticalSection"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CriticalSection class"
ms.assetid: f2e0a024-71a3-4f6b-99ea-d93a4a608ac4
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
# CriticalSection Class
Represents a critical section object.  
  
## Syntax  
  
```  
class CriticalSection;  
```  
  
## Members  
  
### Constructor  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSection::CriticalSection Constructor](../windows/criticalsection-criticalsection-constructor.md)|Initializes a synchronization object that is similar to a mutex object, but can be used by only the threads of a single process.|  
|[CriticalSection::~CriticalSection Destructor](../windows/criticalsection-tilde-criticalsection-destructor.md)|Deinitializes and destroys the current CriticalSection object.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSection::TryLock Method](../windows/criticalsection-trylock-method.md)|Attempts to enter a critical section without blocking. If the call is successful, the calling thread takes ownership of the critical section.|  
|[CriticalSection::Lock Method](../windows/criticalsection-lock-method.md)|Waits for ownership of the specified critical section object. The function returns when the calling thread is granted ownership.|  
|[CriticalSection::IsValid Method](../windows/criticalsection-isvalid-method.md)|Indicates whether the current critical section is valid.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CriticalSection::cs_ Data Member](../windows/criticalsection-cs-data-member.md)|Declares a critical section data member.|  
  
## Inheritance Hierarchy  
 `CriticalSection`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [Microsoft::WRL::Wrappers Namespace](../windows/microsoft-wrl-wrappers-namespace.md)