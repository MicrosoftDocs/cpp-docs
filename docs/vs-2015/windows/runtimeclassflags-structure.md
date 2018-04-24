---
title: "RuntimeClassFlags Structure | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "implements/Microsoft::WRL::RuntimeClassFlags"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "RuntimeClassFlags structure"
ms.assetid: 7098d605-bd14-4d51-82f4-3def8296a938
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# RuntimeClassFlags Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [RuntimeClassFlags Structure](https://docs.microsoft.com/cpp/windows/runtimeclassflags-structure).  
  
  
Contains the type for an instance of a [RuntimeClass](../windows/runtimeclass-class.md).  
  
## Syntax  
  
```  
template <  
   unsigned int flags  
>  
struct RuntimeClassFlags;  
```  
  
#### Parameters  
 `flags`  
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

