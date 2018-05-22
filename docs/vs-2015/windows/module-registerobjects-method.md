---
title: "Module::RegisterObjects Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::RegisterObjects"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterObjects method"
ms.assetid: db4077b7-068d-4534-aaa5-41b5444ccb49
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::RegisterObjects Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::RegisterObjects Method](https://docs.microsoft.com/cpp/windows/module-registerobjects-method).  
  
  
Registers COM or [!INCLUDE[wrt](../includes/wrt-md.md)] objects so other applications can connect to them.  
  
## Syntax  
  
```  
HRESULT RegisterObjects(  
   ModuleBase* module,   
   const wchar_t* serverName);  
```  
  
#### Parameters  
 `module`  
 An array of COM or [!INCLUDE[wrt](../includes/wrt-md.md)] objects.  
  
 `serverName`  
 Name of the server that created the objects.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the reason the operation failed.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
## See Also
[Module Class](../windows/module-class.md)

