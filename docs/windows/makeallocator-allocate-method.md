---
title: "MakeAllocator::Allocate Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::MakeAllocator::Allocate"]
dev_langs: ["C++"]
helpviewer_keywords: ["Allocate method"]
ms.assetid: a01997bc-4ff1-4ed0-9def-e4aaa15b0598
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# MakeAllocator::Allocate Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
__forceinline void* Allocate();  
```  
  
## Return Value  
 If successful, a pointer to the allocated memory; otherwise, **nullptr**.  
  
## Remarks  
 Allocates memory and associates it with the current **MakeAllocator** object.  
  
 The size of the allocated memory is the size of the type specified by the current **MakeAllocator** template parameter.  
  
 A developer needs to override only the **Allocate()** method to implement a different memory allocation model.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [MakeAllocator Class](../windows/makeallocator-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)