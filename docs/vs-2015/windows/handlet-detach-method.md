---
title: "HandleT::Detach Method | Microsoft Docs"
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
  - "corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Detach method"
ms.assetid: f7df0f90-fafb-4d1b-a215-a6c62941f6b0
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# HandleT::Detach Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [HandleT::Detach Method](https://docs.microsoft.com/cpp/windows/handlet-detach-method).  
  
  
Disassociates the current HandleT object from its underlying handle.  
  
## Syntax  
  
```  
typename HandleTraits::Type Detach();  
```  
  
## Return Value  
 The underlying handle.  
  
## Remarks  
 When this operation completes, the current HandleT is set to the invalid state.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)

