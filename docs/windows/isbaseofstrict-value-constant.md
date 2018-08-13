---
title: "IsBaseOfStrict::value Constant | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["internal/Microsoft::WRL::Details::IsBaseOfStrict::value"]
dev_langs: ["C++"]
helpviewer_keywords: ["value constant"]
ms.assetid: 4a0cdab0-ba03-482b-babf-eeec519ba687
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# IsBaseOfStrict::value Constant
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
static const bool value = __is_base_of(Base, Derived);  
```  
  
## Remarks  
 Indicates whether one type is the base of another.  
  
 **value** is **true** if type `Base` is a base class of the type `Derived`, otherwise it is **false**.  
  
## Requirements  
 **Header:** internal.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [IsBaseOfStrict Structure](../windows/isbaseofstrict-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)