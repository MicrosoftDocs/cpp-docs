---
title: "Module::RegisterWinRTObject Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::RegisterWinRTObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterWinRTObject method"
ms.assetid: a2782c9c-b9c5-4e4b-9c8d-ef513aea20c5
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::RegisterWinRTObject Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::RegisterWinRTObject Method](https://docs.microsoft.com/cpp/windows/module-registerwinrtobject-method).  
  
  
Registers one or more [!INCLUDE[wrt](../includes/wrt-md.md)] objects so other applications can connect to them.  
  
## Syntax  
  
```  
HRESULT RegisterWinRTObject(const wchar_t* serverName,  
   wchar_t** activatableClassIds,  
   WINRT_REGISTRATION_COOKIE* cookie,  
   unsigned int count)  
```  
  
#### Parameters  
 `serverName`  
 A name that specifies a subset of objects affected by this operation.  
  
 `activatableClassIds`  
 An array of activatable CLSIDs to register.  
  
 `cookie`  
 A value that identifies the class objects that were registered. This value is used later to revoke the registration.  
  
 `count`  
 The number of objects to register.  
  
## Return Value  
 S_OK if successful; otherwise, an error HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

