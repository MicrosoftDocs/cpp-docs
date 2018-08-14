---
title: "ComPtrRef::operator* Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::operator*"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator* operator"]
ms.assetid: 0287ca7a-4ce1-47f7-bab6-714fca3e04bb
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::operator* Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
InterfaceType* operator *();  
```  
  
## Return Value  
 Pointer to the interface represented by the current **ComPtrRef** object.  
  
## Remarks  
 Retrieves the pointer to the interface represented by the current **ComPtrRef** object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../windows/comptrref-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)