---
title: "ComPtr::Detach Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::Detach"]
dev_langs: ["C++"]
helpviewer_keywords: ["Detach method"]
ms.assetid: b9016775-1ade-4581-be1f-0d6f9c2ca658
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::Detach Method
Disassociates this `ComPtr` object from the interface that it represents.  
  
## Syntax  
  
```  
T* Detach();  
```  
  
## Return Value  
 A pointer to the interface that was represented by this `ComPtr` object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)