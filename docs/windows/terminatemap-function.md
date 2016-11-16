---
title: "TerminateMap Function | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::TerminateMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "TerminateMap function"
ms.assetid: 1c314a61-da5d-49bb-ac44-c34ee3c23b66
caps.latest.revision: 7
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
# TerminateMap Function
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
inline bool TerminateMap(  
   _In_ ModuleBase *module,   
   _In_opt_z_ const wchar_t *serverName,   
    bool forceTerminate) throw()  
```  
  
## Parameters  
 `module`  
 A [module](../windows/module-class.md).  
  
 `serverName`  
 The name of a subset of class factories in the module specified by parameter `module`.  
  
 `forceTerminate`  
 `true` to terminate the class factories regardless of they are active; `false` to not terminate the class factories if any factory is active.  
  
## Return Value  
 `true` if all class factories were terminated; otherwise, `false`.  
  
## Remarks  
 Shuts down the class factories in the specified module.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)