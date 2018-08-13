---
title: "ComPtrRef::ComPtrRef Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["client/Microsoft::WRL::Details::ComPtrRef::ComPtrRef"]
dev_langs: ["C++"]
helpviewer_keywords: ["ComPtrRef, constructor"]
ms.assetid: ce2d2533-fef6-4b2d-b088-6f3db01df5a5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# ComPtrRef::ComPtrRef Constructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
ComPtrRef(  
   _In_opt_ T* ptr  
);  
```  
  
### Parameters  
 *ptr*  
 The underlying value of another **ComPtrRef** object.  
  
## Remarks  
 Initializes a new instance of the **ComPtrRef** class from the specified pointer to another **ComPtrRef** object.  
  
## Requirements  
 **Header:** client.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [ComPtrRef Class](../windows/comptrref-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)