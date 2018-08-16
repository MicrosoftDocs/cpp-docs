---
title: "HandleT::HandleT Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::HandleT::HandleT"]
dev_langs: ["C++"]
helpviewer_keywords: ["HandleT, constructor"]
ms.assetid: 4def6891-7e53-46f1-a197-a80e10744dd5
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# HandleT::HandleT Constructor
Initializes a new instance of the **HandleT** class.  
  
## Syntax  
  
```cpp  
explicit HandleT(  
   typename HandleTraits::Type h =   
      HandleTraits::GetInvalidValue()  
);  
  
HandleT(  
   _Inout_ HandleT&& h  
);  
```  
  
### Parameters  
 *h*  
 A handle.  
  
## Remarks  
 The first constructor initializes a **HandleT** object that is not a valid handle to an object. The second constructor creates a new **HandleT** object from parameter *h*.  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)