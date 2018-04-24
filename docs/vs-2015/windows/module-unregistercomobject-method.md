---
title: "Module::UnregisterCOMObject Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::UnregisterCOMObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "UnregisterCOMObject method"
ms.assetid: 5d377525-0385-482a-a215-6e8a1f032861
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::UnregisterCOMObject Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::UnregisterCOMObject Method](https://docs.microsoft.com/cpp/windows/module-unregistercomobject-method).  
  
  
Unregisters one or more COM objects, which prevents other applications from connecting to them.  
  
## Syntax  
  
```  
virtual HRESULT UnregisterCOMObject(  
   const wchar_t* serverName,  
   DWORD* cookies,  
   unsigned int count  
```  
  
#### Parameters  
 `serverName`  
 (Unused)  
  
 `cookies`  
 An array of pointers to values that identify the class objects to be unregistered. The array was created by the [RegisterCOMObject](../windows/module-registercomobject-method.md) method.  
  
 `count`  
 The number of classes to unregister.  
  
## Return Value  
 S_OK if this operation is successful; otherwise, an error HRESULT that indicates the reason the operation failed.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

