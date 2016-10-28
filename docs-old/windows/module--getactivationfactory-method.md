---
title: "Module::GetActivationFactory Method"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::GetActivationFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetActivationFactory method"
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
caps.latest.revision: 6
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
# Module::GetActivationFactory Method
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
 [ActivatableClass Macros](../windows/activatableclass-macros.md)