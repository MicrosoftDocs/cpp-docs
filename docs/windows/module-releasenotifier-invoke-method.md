---
title: "Module::ReleaseNotifier::Invoke Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::ReleaseNotifier::Invoke"]
dev_langs: ["C++"]
helpviewer_keywords: ["Invoke method"]
ms.assetid: f62686fe-74bf-482b-a46b-6a3c09b80e7e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::ReleaseNotifier::Invoke Method
When implemented, calls an event handler when the last object in a module is released.  
  
## Syntax  
  
```cpp  
virtual void Invoke() = 0;  
```  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::ReleaseNotifier Class](../windows/module-releasenotifier-class.md)