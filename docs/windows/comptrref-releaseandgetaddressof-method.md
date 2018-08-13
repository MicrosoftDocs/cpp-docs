---
title: "ComPtrRef::ReleaseAndGetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::ReleaseAndGetAddressOf"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseAndGetAddressOf method"]
ms.assetid: 004aac42-e135-41ce-8d1d-4c5969d55004
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::ReleaseAndGetAddressOf Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
InterfaceType** ReleaseAndGetAddressOf();  
```  
  
## Return Value  
 Pointer to the interface that was represented by the deleted **ComPtrRef** object.  
  
## Remarks  
 Deletes the current **ComPtrRef** object and returns a pointer-to-a-pointer to the interface that was represented by the **ComPtrRef** object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../windows/comptrref-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)