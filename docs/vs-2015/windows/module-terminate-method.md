---
title: "Module::Terminate Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::Terminate"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Terminate method"
ms.assetid: cf358117-45dc-43c7-ac1e-1e1eedc59e41
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::Terminate Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::Terminate Method](https://docs.microsoft.com/cpp/windows/module-terminate-method).  
  
  
Causes all factories instantiated by the module to shut down.  
  
## Syntax  
  
```  
void Terminate();  
```  
  
## Remarks  
 Releases the factories in the cache.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

