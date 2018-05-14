---
title: "ChainInterfaces::CastToUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::ChainInterfaces::CastToUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["CastToUnknown method"]
ms.assetid: a6a58555-e5b0-4773-aba0-959d9d362c6b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ChainInterfaces::CastToUnknown Method
Casts the interface pointer of the type defined by the `I0` template parameter to a pointer to IUnknown.  
  
## Syntax  
  
```  
__forceinline IUnknown* CastToUnknown();  
```  
  
## Return Value  
 A pointer to IUnknown.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ChainInterfaces Structure](../windows/chaininterfaces-structure.md)