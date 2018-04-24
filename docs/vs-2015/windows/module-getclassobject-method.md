---
title: "Module::GetClassObject Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::GetClassObject"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetClassObject method"
ms.assetid: 95b0de1b-f728-4f96-9f44-f6ea71ce56e4
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::GetClassObject Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::GetClassObject Method](https://docs.microsoft.com/cpp/windows/module-getclassobject-method).  
  
  
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
 Use this method only for COM, not the [!INCLUDE[wrt](../includes/wrt-md.md)]. This method exposes only IClassFactory methods.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

