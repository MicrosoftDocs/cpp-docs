---
title: "Module::ReleaseNotifier::Invoke Method"
ms.custom: na
ms.date: 10/07/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: f62686fe-74bf-482b-a46b-6a3c09b80e7e
caps.latest.revision: 3
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
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
 [Module::ReleaseNotifier Class](../VS_visualcpp/Module--ReleaseNotifier-Class.md)