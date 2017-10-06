---
title: "Module::GetClassObject Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::GetClassObject"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetClassObject method"]
ms.assetid: 95b0de1b-f728-4f96-9f44-f6ea71ce56e4
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::GetClassObject Method
Retreives a cache of class factories.  
  
## Syntax  
  
```  
 HRESULT GetClassObject(  
   REFCLSID clsid,  
   REFIID riid,  
   _Deref_out_ void **ppv,  
   wchar_t* serverName = nullptr  
);  
```  
  
#### Parameters  
 `clsid`  
 Class ID.  
  
 `riid`  
 Interface ID that you request.  
  
 `ppv`  
 Pointer to returned object.  
  
 `serverName`  
 The server name that is specified in either the `ActivatableClassWithFactory`, `ActivatableClassWithFactoryEx`, or `ActivatableClass` macro; or `nullptr` to get the default server name.  
  
## Return Value  
  
## Remarks  
 Use this method only for COM, not the Windows Runtime. This method exposes only IClassFactory methods.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)