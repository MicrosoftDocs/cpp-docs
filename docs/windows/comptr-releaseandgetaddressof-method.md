---
title: "ComPtr::ReleaseAndGetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::ReleaseAndGetAddressOf"]
dev_langs: ["C++"]
helpviewer_keywords: ["ReleaseAndGetAddressOf method"]
ms.assetid: 3751dcb4-d50e-432c-89e4-e736be34d434
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::ReleaseAndGetAddressOf Method
Releases the interface associated with this **ComPtr** and then retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface that was released.  
  
## Syntax  
  
```cpp  
T** ReleaseAndGetAddressOf();  
```  
  
## Return Value  
 The address of the [ptr_](../windows/comptr-ptr-data-member.md) data member of this **ComPtr**.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)   
 [ComPtr::ptr_ Data Member](../windows/comptr-ptr-data-member.md)