---
title: "ClassFactory::Release Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::ClassFactory::Release"]
dev_langs: ["C++"]
helpviewer_keywords: ["Release method"]
ms.assetid: 49da2002-f9d6-4d7f-8a65-48c20b1bf99f
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ClassFactory::Release Method
Decrements the reference count for the current **ClassFactory** object.  
  
## Syntax  
  
```cpp  
STDMETHOD_(  
   ULONG,  
   Release  
)();  
```  
  
## Return Value  
 S_OK if successful; otherwise, an HRESULT that describes the failure.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ClassFactory Class](../windows/classfactory-class.md)