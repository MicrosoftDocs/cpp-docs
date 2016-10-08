---
title: "Module::ReleaseNotifier::ReleaseNotifier Constructor"
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
ms.assetid: 889a3c9a-2366-44a1-ba7d-a59c1885e7f3
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
# Module::ReleaseNotifier::ReleaseNotifier Constructor
Initializes a new instance of the Module::ReleaseNotifier class.  
  
## Syntax  
  
```cpp  
ReleaseNotifier(bool release) throw();  
```  
  
#### Parameters  
 `release`  
 `true` to delete this instance when the Release method is called; `false` to not delete this instance.  
  
## Exceptions  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::ReleaseNotifier Class](../VS_visualcpp/Module--ReleaseNotifier-Class.md)