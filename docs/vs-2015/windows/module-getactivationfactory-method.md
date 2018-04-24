---
title: "Module::GetActivationFactory Method | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::GetActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActivationFactory method"
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::GetActivationFactory Method
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::GetActivationFactory Method](https://docs.microsoft.com/cpp/windows/module-getactivationfactory-method).  
  
  
Gets an activation factory for the module.  
  
## Syntax  
  
```  
WRL_NOTHROW HRESULT GetActivationFactory(  
   _In_ HSTRING pActivatibleClassId,  
   _Deref_out_ IActivationFactory **ppIFactory,  
   wchar_t* serverName = nullptr  
);  
```  
  
#### Parameters  
 `pActivatibleClassId`  
 IID of a runtime class.  
  
 `ppIFactory`  
 The IActivationFactory for the specified runtime class.  
  
 `serverName`  
 The name of a subset of class factories in the current module. Specify the server name used in the [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro, or specify `nullptr` to get the default server name.  
  
## Return Value  
 S_OK if successful; otherwise, the HRESULT returned by GetActivationFactory.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
[Module Class](../windows/module-class.md)
 [ActivatableClass Macros](../windows/activatableclass-macros.md)

