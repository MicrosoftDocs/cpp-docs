---
title: "RuntimeClass Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClass"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClass class"
ms.assetid: d52f9d1a-98e5-41f2-a143-8fb629dd0727
caps.latest.revision: 5
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# RuntimeClass Class
Represents an instantiated class that inherits the specified number of interfaces, and provides the specified [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)], classic COM, and weak reference support.  
  
 You typically derive your WRL types from `RuntimeClass` because this class implements `AddRef`, `Release`, and `QueryInterface`, and helps manage the overall reference count of the module.  
  
## Syntax  
  
```  
template <  
   typename I0,  
   typename I1 = Details::Nil,  
   typename I2 = Details::Nil,  
   typename I3 = Details::Nil,  
   typename I4 = Details::Nil,  
   typename I5 = Details::Nil,  
   typename I6 = Details::Nil,  
   typename I7 = Details::Nil,  
   typename I8 = Details::Nil,  
   typename I9 = Details::Nil  
>  
class RuntimeClass : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8, I9>::TypeT, RuntimeClassFlags<WinRt>>;  
  
template <  
   unsigned int classFlags,  
   typename I0,  
   typename I1,  
   typename I2,  
   typename I3,  
   typename I4,  
   typename I5,  
   typename I6,  
   typename I7,  
   typename I8  
>  
class RuntimeClass<RuntimeClassFlags<classFlags>, I0, I1, I2, I3, I4, I5, I6, I7, I8> : public Details::RuntimeClass<typename Details::InterfaceListHelper<I0, I1, I2, I3, I4, I5, I6, I7, I8>::TypeT, RuntimeClassFlags<classFlags> >;  
```  
  
#### Parameters  
 `I0`  
 The zeroth interface ID. (Mandatory)  
  
 `I1`  
 The first interface ID. (Optional)  
  
 `I2`  
 The second interface ID. (Optional)  
  
 `I3`  
 The third interface ID. (Optional)  
  
 `I4`  
 The fourth interface ID. (Optional)  
  
 `I5`  
 The fifth interface ID. (Optional)  
  
 `I6`  
 The sixth interface ID. (Optional)  
  
 `I7`  
 The seventh interface ID. (Optional)  
  
 `I8`  
 The eigth interface ID. (Optional)  
  
 `I9`  
 The ninth interface ID. (Optional)  
  
 `classFlags`  
 A combination of one or more [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumeration values.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[RuntimeClass::RuntimeClass Constructor](../windows/runtimeclass-runtimeclass-constructor.md)|Initializes the current instance of the RuntimeClass class.|  
|[RuntimeClass::~RuntimeClass Destructor](../windows/runtimeclass-tilde-runtimeclass-destructor.md)|Deinitializes the current instance of the RuntimeClass class.|  
  
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
  
 `RuntimeClass`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)