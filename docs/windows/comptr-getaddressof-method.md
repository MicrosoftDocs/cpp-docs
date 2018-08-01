---
title: "ComPtr::GetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::ComPtr::GetAddressOf"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetAddressOf method"]
ms.assetid: 972a41d0-c2ef-4ae3-b2cd-77cc45156ac9
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtr::GetAddressOf Method
Retrieves the address of the [ptr_](../windows/comptr-ptr-data-member.md) data member, which contains a pointer to the interface represented by this **ComPtr**.  
  
## Syntax  
  
```  
T* const* GetAddressOf() const;  
T** GetAddressOf();  
```  
  
## Return Value  
 The address of a variable.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [ComPtr Class](../windows/comptr-class.md)