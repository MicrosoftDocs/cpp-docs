---
title: "ComPtrRef::operator T* Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::operator T*"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator T* operator"]
ms.assetid: b4f83370-0ebc-4d56-87c6-1a8ea2d0079b
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::operator T* Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
operator T*();  
```  
  
## Remarks  
 Returns the value of the [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member of the current **ComPtrRef** object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../windows/comptrref-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)