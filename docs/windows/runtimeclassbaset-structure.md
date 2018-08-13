---
title: "RuntimeClassBaseT Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::Details::RuntimeClassBaseT"]
dev_langs: ["C++"]
ms.assetid: a62775fb-3359-4f45-9ff1-c07fa8da464b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassBaseT Structure
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
template <  
   unsigned int RuntimeClassTypeT  
>  
friend struct Details::RuntimeClassBaseT;  
```  
  
### Parameters  
 *RuntimeClassTypeT*  
 A field of flags that specifies one or more [RuntimeClassType](../windows/runtimeclasstype-enumeration.md) enumerators.  
  
## Remarks  
 Provides helper methods for `QueryInterface` operations and getting interface IDs.  
  
## Members  
  
## Inheritance Hierarchy  
 `RuntimeClassBaseT`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Reference (Windows Runtime Library)](http://msdn.microsoft.com/00000000-0000-0000-0000-000000000000)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)