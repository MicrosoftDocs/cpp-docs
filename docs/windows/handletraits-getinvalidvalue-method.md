---
title: "HANDLETraits::GetInvalidValue Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleTraits::HANDLETraits::GetInvalidValue"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetInvalidValue method"]
ms.assetid: e95d2cc1-e70f-463f-8ff0-183cdeac1138
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# HANDLETraits::GetInvalidValue Method
Represents an invalid handle.  
  
## Syntax  
  
```  
inline static HANDLE GetInvalidValue();  
```  
  
## Return Value  
 Always returns INVALID_HANDLE_VALUE. (INVALID_HANDLE_VALUE is defined by Windows.)  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers::HandleTraits  
  
## See Also  
 [HANDLETraits Structure](../windows/handletraits-structure.md)