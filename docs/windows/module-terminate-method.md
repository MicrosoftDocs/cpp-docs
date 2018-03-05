---
title: "Module::Terminate Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::Terminate"]
dev_langs: ["C++"]
helpviewer_keywords: ["Terminate method"]
ms.assetid: cf358117-45dc-43c7-ac1e-1e1eedc59e41
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# Module::Terminate Method
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