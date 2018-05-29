---
title: "AgileActivationFactory Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::AgileActivationFactory"]
dev_langs: ["C++"]
ms.assetid: fab98f32-bb93-4c0f-badb-49fbddb194b0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# AgileActivationFactory Class
Represents an apartment-friendly activation factory that implements [FtmBase](../windows/ftmbase-class.md).  
  
## Syntax  
  
```cpp  
template <  
   typename I0 = Details::Nil,   
   typename I1 = Details::Nil,   
   typename I2 = Details::Nil,   
FactoryCacheFlags cacheFlagValue = FactoryCacheDefault>  
class AgileActivationFactory :   
   public ActivationFactory<Implements<FtmBase, I0>, I1, I2, cacheFlagValue>{};  
```  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)   
 [ActivationFactory Class](../windows/activationfactory-class.md)