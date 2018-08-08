---
title: "Module::GetActivationFactory Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::GetActivationFactory"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetActivationFactory method"]
ms.assetid: 59da8844-072e-414b-b89c-1db1cc4fd81d
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::GetActivationFactory Method
Gets an activation factory for the module.  
  
## Syntax  
  
```cpp  
WRL_NOTHROW HRESULT GetActivationFactory(  
   _In_ HSTRING pActivatibleClassId,  
   _Deref_out_ IActivationFactory **ppIFactory,  
   wchar_t* serverName = nullptr  
);  
```  
  
### Parameters  
 *pActivatibleClassId*  
 IID of a runtime class.  
  
 *ppIFactory*  
 The IActivationFactory for the specified runtime class.  
  
 *serverName*  
 The name of a subset of class factories in the current module. Specify the server name used in the [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro, or specify **nullptr** to get the default server name.  
  
## Return Value  
 S_OK if successful; otherwise, the HRESULT returned by GetActivationFactory.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module Class](../windows/module-class.md)  
 [ActivatableClass Macros](../windows/activatableclass-macros.md)