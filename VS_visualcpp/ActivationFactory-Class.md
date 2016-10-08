---
title: "ActivationFactory Class"
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
ms.assetid: 5faddf1f-43b6-4f8a-97de-8c9d3ae1e1ff
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
# ActivationFactory Class
Enables one or more classes to be activated by the Windows Runtime.  
  
## Syntax  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ActivationFactory : public Details::RuntimeClass<typename Details::InterfaceListHelper<IActivationFactory, I0, I1, I2, Details::Nil>::TypeT, RuntimeClassFlags<WinRt | InhibitWeakReference>, false>;  
```  
  
#### Parameters  
 `I0`  
 The zeroth interface.  
  
 `I1`  
 The first interface.  
  
 `I2`  
 The second interface.  
  
## Remarks  
 ActivationFactory provides registration methods and basic functionality for the IActivationFactory interface. ActivationFactory also enables you to provide a custom factory implementation.  
  
 The following code fragment symbolically illustrates how to use ActivationFactory.  
  
 [!CODE [wrl-microsoft__wrl__activationfactory#1](../CodeSnippet/VS_Snippets_Misc/wrl-microsoft__wrl__activationfactory#1)]  
  
 The following code fragment shows how to use the [Implements](../VS_visualcpp/Implements-Structure.md) structure to specify more than three interface IDs.  
  
 `struct MyFactory : ActivationFactory<Implements<I1, I2, I3>, I4, I5>;`  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ActivationFactory::ActivationFactory Constructor](../VS_visualcpp/ActivationFactory--ActivationFactory-Constructor.md)|Initializes the ActivationFactory class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ActivationFactory::AddRef Method](../VS_visualcpp/ActivationFactory--AddRef-Method.md)|Increments the reference count of the current ActivationFactory object.|  
|[ActivationFactory::GetIids Method](../VS_visualcpp/ActivationFactory--GetIids-Method.md)|Retrieves an array of implemented interface IDs.|  
|[ActivationFactory::GetRuntimeClassName Method](../VS_visualcpp/ActivationFactory--GetRuntimeClassName-Method.md)|Gets the runtime class name of the object that the current ActivationFactory instantiates.|  
|[ActivationFactory::GetTrustLevel Method](../VS_visualcpp/ActivationFactory--GetTrustLevel-Method.md)|Gets the trust level of the object that the current ActivationFactory instantiates.|  
|[ActivationFactory::QueryInterface Method](../VS_visualcpp/ActivationFactory--QueryInterface-Method.md)|Retrieves a pointer to the specified interface.|  
|[ActivationFactory::Release Method](../VS_visualcpp/ActivationFactory--Release-Method.md)|Decrements the reference count of the current ActivationFactory object.|  
  
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
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)