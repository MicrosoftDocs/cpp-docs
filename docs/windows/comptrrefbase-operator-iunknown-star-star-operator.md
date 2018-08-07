---
title: "ComPtrRefBase::operator IUnknown** Operator | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRefBase::operator IUnknown**"]
dev_langs: ["C++"]
helpviewer_keywords: ["operator IUnknown** operator"]
ms.assetid: c2950abf-a7aa-480a-ba41-615703e7f931
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRefBase::operator IUnknown** Operator
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
operator IUnknown**() const;  
```  
  
## Remarks  
 Casts the current [ptr_](../windows/comptrrefbase-ptr-data-member.md) data member to a pointer-to-a-pointer-to the `IUnknown` interface.  
  
 An error is emitted if the current **ComPtrRefBase** doesn't derive from `IUnknown`.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRefBase Class](../windows/comptrrefbase-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)