---
title: "Module::RegisterObjects Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
# Module::RegisterObjects Method
Registers COM or [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] objects so other applications can connect to them.  
  
## Syntax  
  
```  
HRESULT RegisterObjects(  
   ModuleBase* module,   
   const wchar_t* serverName);  
```  
  
#### Parameters  
 `module`  
 An array of COM or [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] objects.  
  
 `serverName`  
 Name of the server that created the objects.  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the reason the operation failed.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
## See Also
[Module Class](../windows/module-class.md)