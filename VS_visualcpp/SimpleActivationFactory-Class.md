---
title: "SimpleActivationFactory Class"
ms.custom: na
ms.date: 10/04/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: aff768e0-0038-4fd7-95d2-ad7d308da41c
caps.latest.revision: 4
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# SimpleActivationFactory Class
Provides a fundamental mechanism to create a Windows Runtime or classic COM base class.  
  
## Syntax  
  
```  
template<  
   typename Base  
>  
class SimpleActivationFactory : public ActivationFactory<>;  
```  
  
#### Parameters  
 `Base`  
 A base class.  
  
## Remarks  
 The base class must provide a default constructor.  
  
 The following code example demonstrates how to use SimpleActivationFactory with the [ActivatableClassWithFactoryEx](../VS_visualcpp/ActivatableClass-Macros.md) macro.  
  
 `ActivatableClassWithFactoryEx(MyClass, SimpleActivationFactory, MyServerName);`  
  
## Members  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[SimpleActivationFactory::ActivateInstance Method](../VS_visualcpp/SimpleActivationFactory--ActivateInstance-Method.md)|Creates an instance of the specified interface.|  
|[SimpleActivationFactory::GetRuntimeClassName Method](../VS_visualcpp/SimpleActivationFactory--GetRuntimeClassName-Method.md)|Gets the runtime class name of an instance of the class specified by the `Base` class template parameter.|  
|[SimpleActivationFactory::GetTrustLevel Method](../VS_visualcpp/SimpleActivationFactory--GetTrustLevel-Method.md)|Gets the trust level of an instance of the class specified by the `Base` class template parameter.|  
  
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
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)