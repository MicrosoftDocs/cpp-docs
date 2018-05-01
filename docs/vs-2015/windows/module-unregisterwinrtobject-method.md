---
title: "Module::UnregisterWinRTObject Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::UnregisterWinRTObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnregisterWinRTObject method"
ms.assetid: 32334aa7-2293-40d2-9a89-4b02e2e31f3c
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::UnregisterWinRTObject Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::UnregisterWinRTObject Method](https://docs.microsoft.com/cpp/windows/module-unregisterwinrtobject-method).  
  
  
Unregisters one or more [!INCLUDE[wrt](../includes/wrt-md.md)] objects so that other applications cannot connect to them.  
  
## Syntax  
  
```  
virtual HRESULT UnregisterWinRTObject(  
   unsigned int,  
   _Inout_ WINRT_REGISTRATION_COOKIE* cookie  
);  
  
```  
  
#### Parameters  
 `cookie`  
 A pointer to a value that identifies the class object whose registration is to be revoked.  
  
## Return Value  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

