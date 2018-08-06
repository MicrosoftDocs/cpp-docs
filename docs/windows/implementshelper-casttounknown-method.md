---
title: "ImplementsHelper::CastToUnknown Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::ImplementsHelper::CastToUnknown"]
dev_langs: ["C++"]
helpviewer_keywords: ["CastToUnknown method"]
ms.assetid: 5bcfcbaf-c75f-4d43-87b3-0d6838c838d9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ImplementsHelper::CastToUnknown Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
IUnknown* CastToUnknown();  
```  
  
## Return Value  
 Pointer to the underlying IUnknown interface.  
  
## Remarks  
 Gets a pointer to the underlying `IUnknown` interface for the current `Implements` structure.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ImplementsHelper Structure](../windows/implementshelper-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)