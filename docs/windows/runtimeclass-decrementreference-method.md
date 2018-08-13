---
title: "RuntimeClass::DecrementReference Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::RuntimeClass::DecrementReference"]
dev_langs: ["C++"]
ms.assetid: f5ecfeaa-2865-455b-9208-94a0685fd2c6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# RuntimeClass::DecrementReference Method
Decrements the reference count for the current **RuntimeClass** object.  
  
## Syntax  
  
```cpp  
ULONG DecrementReference();  
```  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that indicates the error.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../windows/runtimeclass-class.md)