---
title: "ClassFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::ClassFactory"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ClassFactory class"
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
caps.latest.revision: 4
author: "mikeblome"
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
# ClassFactory Class
Implements the basic functionality of the IClassFactory interface.  
  
## Syntax  
  
```  
template <  
   typename I0 = Details::Nil,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil  
>  
class ClassFactory : public Details::RuntimeClass<  
   typename Details::InterfaceListHelper<IClassFactory,   
   I0,   
   I1,   
   I2,   
   Details::Nil>::TypeT,   
   RuntimeClassFlags<ClassicCom | InhibitWeakReference>,   
      false>;  
```  
  
#### Parameters  
 `I0`  
 The zeroth interface.  
  
 `I1`  
 The first interface.  
  
 `I2`  
 The second interface.  
  
## Remarks  
 Utilize `ClassFactory` to provide a user-defined factory implementation.  
  
 The following programming pattern demonstrates how to use the [Implements](../windows/implements-structure.md) structure to specify more than three interfaces on a class factory.  
  
 `struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ClassFactory::ClassFactory Constructor](../windows/classfactory-classfactory-constructor.md)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ClassFactory::AddRef Method](../windows/classfactory-addref-method.md)|Increments the reference count for the current ClassFactory object.|  
|[ClassFactory::LockServer Method](../windows/classfactory-lockserver-method.md)|Increments or decrements the number of underlying objects that are tracked by the current ClassFactory object.|  
|[ClassFactory::QueryInterface Method](../windows/classfactory-queryinterface-method.md)|Retrieves a pointer to the interface specified by parameter.|  
|[ClassFactory::Release Method](../windows/classfactory-release-method.md)|Decrements the reference count for the current ClassFactory object.|  
  
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
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)   
 [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md)