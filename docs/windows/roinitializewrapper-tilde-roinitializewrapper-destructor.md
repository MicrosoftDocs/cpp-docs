---
title: "RoInitializeWrapper::~RoInitializeWrapper Destructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["corewrappers/Microsoft::WRL::Wrappers::RoInitializeWrapper::~RoInitializeWrapper"]
dev_langs: ["C++"]
ms.assetid: afef4c1f-ffde-4cd2-8654-8de4182eb5f4
caps.latest.revision: 2
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "uwp"]
---
# RoInitializeWrapper::~RoInitializeWrapper Destructor
Uninitializes the Windows Runtime.  
  
## Syntax  
  
```cpp  
~RoInitializeWrapper()  
```  
  
## Remarks  
 The RoInitializeWrapper class invokes Windows::Foundation::Uninitialize().  
  
## Requirements  
 **Header:** corewrappers.h  
  
 **Namespace:** Microsoft::WRL::Wrappers  
  
## See Also  
 [HandleT Class](../windows/handlet-class.md)