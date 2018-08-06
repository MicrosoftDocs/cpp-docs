---
title: "HandleT::Detach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT::Detach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Detach method"]
ms.assetid: f7df0f90-fafb-4d1b-a215-a6c62941f6b0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HandleT::Detach Method
Disassociates the current **HandleT** object from its underlying handle.  
  
## Syntax  
  
```  
typename HandleTraits::Type Detach();  
```  
  
## Return Value  
 The underlying handle.  
  
## Remarks  
 When this operation completes, the current **HandleT** is set to the invalid state.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)