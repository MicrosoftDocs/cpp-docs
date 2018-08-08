---
title: "SimpleClassFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::SimpleClassFactory"]
dev_langs: ["C++"]
helpviewer_keywords: ["SimpleClassFactory class"]
ms.assetid: 6edda1b2-4e44-4e14-9364-72f519249962
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# SimpleClassFactory Class
Provides a fundamental mechanism to create a base class.  
  
## Syntax  
  
```cpp  
template<typename Base>  
class SimpleClassFactory : public ClassFactory<>;  
```  
  
### Parameters  
 *Base*  
 A base class.  
  
## Remarks  
 The base class must provide a default constructor.  
  
 The following code example demonstrates how to use **SimpleClassFactory** with the [ActivatableClassWithFactoryEx](../windows/activatableclass-macros.md) macro.  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleClassFactory, MyServerName);`  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SimpleClassFactory::CreateInstance Method](../windows/simpleclassfactory-createinstance-method.md)|Creates an instance of the specified interface.|  
  
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
  
 `ClassFactory`  
  
 `SimpleClassFactory`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)