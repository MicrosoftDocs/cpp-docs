---
title: "HString::GetAddressOf Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HString::GetAddressOf"]
dev_langs: ["C++"]
ms.assetid: 6050decf-5f99-49f0-9497-1c8192c485ae
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HString::GetAddressOf Method
Retrieves a pointer to the underlying HSTRING handle.  
  
## Syntax  
  
```cpp  
HSTRING* GetAddressOf() throw()  
```  
  
## Return Value  
 A pointer to the underlying HSTRING handle.  
  
## Remarks  
 After this operation, the string value of the underlying HSTRING handle is destroyed.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HString Class](../windows/hstring-class.md)