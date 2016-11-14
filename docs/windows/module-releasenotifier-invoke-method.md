---
title: "Module::ReleaseNotifier::Invoke Method | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::ReleaseNotifier::Invoke"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "Invoke method"
ms.assetid: f62686fe-74bf-482b-a46b-6a3c09b80e7e
caps.latest.revision: 3
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "ru-ru"
  - "zh-cn"
  - "zh-tw"
translation.priority.mt: 
  - "cs-cz"
  - "pl-pl"
  - "pt-br"
  - "tr-tr"
---
# Module::ReleaseNotifier::Invoke Method
When implemented, calls an event handler when the last object in a module is released.  
  
## Syntax  
  
```  
virtual void Invoke() = 0;  
```  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::ReleaseNotifier Class](../windows/module-releasenotifier-class.md)