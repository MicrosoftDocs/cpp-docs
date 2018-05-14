---
title: "EventTargetArray::End Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["event/Microsoft::WRL::Details::EventTargetArray::End"]
dev_langs: ["C++"]
helpviewer_keywords: ["End method"]
ms.assetid: 20c491b8-f355-4d8f-ad14-8f46121d9af6
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# EventTargetArray::End Method
Supports the WRL infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
ComPtr<IUnknown>* End();  
```  
  
## Return Value  
 The address of the last element in the internal array of event handlers.  
  
## Remarks  
 Gets the address of the last element in the internal array of event handlers.  
  
## Requirements  
 **Header:** event.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [EventTargetArray Class](../windows/eventtargetarray-class.md)   
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)