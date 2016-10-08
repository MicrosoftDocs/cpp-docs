---
title: "ClassFactory Class"
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
ms.assetid: f13e6bce-722b-4f18-b7cf-3ffa6345c1db
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
  
 The following programming pattern demonstrates how to use the [Implements](../VS_visualcpp/Implements-Structure.md) structure to specify more than three interfaces on a class factory.  
  
 `struct MyFactory : ClassFactory<Implements<I1, I2, I3>, I4, I5>`  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[ClassFactory::ClassFactory Constructor](../VS_visualcpp/ClassFactory--ClassFactory-Constructor.md)||  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[ClassFactory::AddRef Method](../VS_visualcpp/ClassFactory--AddRef-Method.md)|Increments the reference count for the current ClassFactory object.|  
|[ClassFactory::LockServer Method](../VS_visualcpp/ClassFactory--LockServer-Method.md)|Increments or decrements the number of underlying objects that are tracked by the current ClassFactory object.|  
|[ClassFactory::QueryInterface Method](../VS_visualcpp/ClassFactory--QueryInterface-Method.md)|Retrieves a pointer to the interface specified by parameter.|  
|[ClassFactory::Release Method](../VS_visualcpp/ClassFactory--Release-Method.md)|Decrements the reference count for the current ClassFactory object.|  
  
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
 [Microsoft::WRL Namespace](../VS_visualcpp/Microsoft--WRL-Namespace.md)   
 [RuntimeClassType Enumeration](../VS_visualcpp/RuntimeClassType-Enumeration.md)