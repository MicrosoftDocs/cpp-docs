---
title: "ChainInterfaces::Verify Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces::Verify"]
dev_langs: ["C++"]
helpviewer_keywords: ["Verify method"]
ms.assetid: c591e130-8686-4130-ba69-1aaedc250038
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ChainInterfaces::Verify Method
Verifies that each interface defined by template parameters *I0* through *I9* inherits from `IUnknown` and/or `IInspectable`, and that *I0* inherits from *I1* through *I9*.  
  
## Syntax  
  
```cpp  
WRL_NOTHROW __forceinline static void Verify();  
```  
  
## Remarks  
 If the verification operation fails, a **static_assert** emits an error message describing the failure.  

 Template parameters *I0* and *I1* are required, and parameters *I2* through *I9* are optional.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ChainInterfaces Structure](../windows/chaininterfaces-structure.md)