---
title: "InterfaceTraits::CastToUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::InterfaceTraits::CastToUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["CastToUnknown method"]
ms.assetid: aca47fa0-3c60-47f2-a73c-258f7160adff
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InterfaceTraits::CastToUnknown Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
template<typename T>  
static __forceinline IUnknown* CastToUnknown(  
   _In_ T* ptr  
);  
```  
  
#### Parameters  
 `T`  
 The type of parameter `ptr`.  
  
 `ptr`  
 Pointer to type `T`.  
  
## Return Value  
 Pointer to the IUnknown from which `Base` is derived.  
  
## Remarks  
 Casts the specified pointer to a pointer to IUnknown.  
  
 For more information about `Base`, see the Public Typedefs section in [InterfaceTraits Structure](../windows/interfacetraits-structure.md).  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InterfaceTraits Structure](../windows/interfacetraits-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)