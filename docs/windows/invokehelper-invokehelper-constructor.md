---
title: "InvokeHelper::InvokeHelper Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::InvokeHelper::InvokeHelper"]
dev_langs: ["C++"]
helpviewer_keywords: ["InvokeHelper, constructor"]
ms.assetid: 0223c574-abc3-4fc0-99e6-38626ba79243
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# InvokeHelper::InvokeHelper Constructor
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```cpp  
explicit InvokeHelper(  
   TCallback callback  
);  
```  
  
### Parameters  
 *callback*  
 An event handler.  
  
## Remarks  
 Initializes a new instance of the **InvokeHelper** class.  
  
 The `TCallback` template parameter specifies the type of the event handler.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [InvokeHelper Structure](../windows/invokehelper-structure.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)