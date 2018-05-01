---
title: "ModuleBase::IncrementObjectCount Method | Microsoft Docs"
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
  - "implements/Microsoft::WRL::Details::ModuleBase::IncrementObjectCount"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IncrementObjectCount method"
ms.assetid: 2d70b472-684c-4bb7-8bab-09505cfcaf28
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# ModuleBase::IncrementObjectCount Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [ModuleBase::IncrementObjectCount Method](https://docs.microsoft.com/cpp/windows/modulebase-incrementobjectcount-method).  
  
  
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
virtual long IncrementObjectCount() = 0;  
```  
  
## Return Value  
 The count before the increment operation.  
  
## Remarks  
 When implemented, increments the number of objects tracked by the module.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ModuleBase Class](../windows/modulebase-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

