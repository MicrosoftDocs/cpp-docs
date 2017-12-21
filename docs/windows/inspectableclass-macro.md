---
title: "InspectableClass Macro | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["implements/Microsoft::WRL::InspectableClass"]
dev_langs: ["C++"]
ms.assetid: ff390b26-58cc-424f-87ac-1fe3cc692b59
caps.latest.revision: 4
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# InspectableClass Macro
Sets the runtime class name and trust level.  
  
## Syntax  
  
```cpp  
InspectableClass(  
   runtimeClassName,   
   trustLevel)  
```  
  
#### Parameters  
 `runtimeClassName`  
 The full textual name of the runtime class.  
  
 `trustLevel`  
 One of the [TrustLevel](http://msdn.microsoft.com/library/br224625.aspx) enumerated values.  
  
## Remarks  
 The `InspectableClass` macro can be used only with Windows Runtime types.  
  
## Requirements  
 **Header:** implements.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [RuntimeClass Class](../windows/runtimeclass-class.md)