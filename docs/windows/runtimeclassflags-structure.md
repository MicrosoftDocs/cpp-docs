---
title: "RuntimeClassFlags Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClassFlags"]
dev_langs: ["C++"]
helpviewer_keywords: ["RuntimeClassFlags structure"]
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClassFlags Structure
Contains the type for an instance of a [RuntimeClass](../windows/runtimeclass-class.md).  
  
## Syntax  
  
```cpp  
template <  
   unsigned int flags  
>  
struct RuntimeClassFlags;  
```  
  
### Parameters  
 *flags*  
 A [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md) value.  
  
## Members  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[RuntimeClassFlags::value Constant](../windows/runtimeclassflags-value-constant.md)|Contains a [RuntimeClassType Enumeration](../windows/runtimeclasstype-enumeration.md) value.|  
  
## Inheritance Hierarchy  
 `RuntimeClassFlags`  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Microsoft::WRL Namespace](../windows/microsoft-wrl-namespace.md)