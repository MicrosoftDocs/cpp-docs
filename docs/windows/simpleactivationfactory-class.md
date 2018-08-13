---
title: "SimpleActivationFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleActivationFactory"]
dev_langs: ["C++"]
helpviewer_keywords: ["SimpleActivationFactory class"]
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleActivationFactory Class
Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.  
  
## Syntax  
  
```cpp  
template<typename Base>  
class SimpleActivationFactory : public ActivationFactory<>;  
```  
  
### Parameters  
 *Base*  
 A base class.  
  
## Remarks  
 The base class must provide a default constructor.  
  
 The following code example demonstrates how to use SimpleActivationFactory with the [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro.  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SimpleActivationFactory::ActivateInstance Method](../windows/simpleactivationfactory-activateinstance-method.md)|Creates an instance of the specified interface.|  
|[SimpleActivationFactory::GetRuntimeClassName Method](../windows/simpleactivationfactory-getruntimeclassname-method.md)|Gets the runtime class name of an instance of the class specified by the *Base* class template parameter.|  
|[SimpleActivationFactory::GetTrustLevel Method](../windows/simpleactivationfactory-gettrustlevel-method.md)|Gets the trust level of an instance of the class specified by the *Base* class template parameter.|  
  
## Inheritance Hierarchy  
 `I0`  
  
 `ChainInterfaces`  
  
 `I0`  
  
 `RuntimeClassBase`  
  
 `ImplementsHelper`  
  
 `DontUseNewUseMake`  
  
 `RuntimeClassFlags`  
  
 `RuntimeClassBaseT`  
  
 `RuntimeClass`  
  
 `ActivationFactory`  
  
 `SimpleActivationFactory`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)