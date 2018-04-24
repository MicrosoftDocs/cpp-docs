---
title: "MutexTraits Structure | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleTraits::MutexTraits"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MutexTraits structure"
ms.assetid: 6582df80-b9ba-4892-948f-d572a3b23d54
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# MutexTraits Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [MutexTraits Structure](https://docs.microsoft.com/cpp/windows/mutextraits-structure).  
  
  
Defines common characteristics of the [Mutex](../windows/mutex-class1.md) class.  
  
## Syntax  
  
```  
struct MutexTraits : HANDLENullTraits;  
```  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[MutexTraits::Unlock Method](../windows/mutextraits-unlock-method.md)|Releases exclusive control of a shared resource.|  
  
## Inheritance Hierarchy  
 `HANDLENullTraits`  
  
 `MutexTraits`  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [Microsoft::WRL::Wrappers::HandleTraits Namespace](../windows/microsoft-wrl-wrappers-handletraits-namespace.md)

