---
title: "Module::RegisterCOMObject Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::RegisterCOMObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RegisterCOMObject method"
ms.assetid: 59f223dc-03c6-429d-95da-b74b3f73b702
caps.latest.revision: 5
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
# Module::RegisterCOMObject Method
Registers one or more COM objects so other applications can connect to them.  
  
## Syntax  
  
```  
WRL_NOTHROW virtual HRESULT RegisterCOMObject(  
   const wchar_t* serverName,  
   IID* clsids,  
   IClassFactory** factories,  
   DWORD* cookies,  
   unsigned int count);  
  
```  
  
#### Parameters  
 `serverName`  
 Fully-qualified name of a server.  
  
 `clsids`  
 An array of CLSIDs to register.  
  
 `factories`  
 An array of IUnknown interfaces of the class objects whose availability is being published.  
  
 `cookies`  
 When the operation completes, an array of pointers to values that identify the class objects that were registered. These values are later used revoke the registration.  
  
 `count`  
 The number of CLSIDs to register.  
  
## Return Value  
 S_OK if successfu; otherwise, an HRESULT such as CO_E_OBJISREG that indicates the reason the operation failed.  
  
## Remarks  
 The COM objects are registered with the CLSCTX_LOCAL_SERVER enumerator of the CLSCTX enumeration.  
  
 The type of connection to the registered objects is specified by a combination of the current `comflag` template parameter and the REGCLS_SUSPENDED enumerator of the REGCLS enumeration.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)