---
title: "MakeAllocator::Detach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::MakeAllocator::Detach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Detach method"]
ms.assetid: 78012634-2dda-4ea2-9ffe-40f105d2fe47
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# MakeAllocator::Detach Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
__forceinline void Detach();  
```  
  
## Remarks  
 Disassociates memory allocated by the [Allocate](../windows/makeallocator-allocate-method.md) method from the current MakeAllocator object.  
  
 If you call Detach(), you are responsible for deleting the memory provided by the Allocate method.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [MakeAllocator Class](../windows/makeallocator-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)