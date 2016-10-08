---
title: "Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: reference
ms.assetid: 762e2ca4-0a92-49de-9ff5-d3efa0f067c0
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
# Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor
Initializes a new instance of the Module::MethodReleaseNotifier class.  
  
## Syntax  
  
```  
  
MethodReleaseNotifier(  
   _In_ T* object,   
   _In_ void (T::* method)(),   
   bool release) throw() :  
            ReleaseNotifier(release), object_(object),   
            method_(method);  
```  
  
#### Parameters  
 `object`  
 An object whose member function is an event handler.  
  
 `method`  
 The member function of parameter `object` that is the event handler.  
  
 `release`  
 Specify `true` to enable calling the underlying [Module::ReleaseNotifier::Release()](../VS_visualcpp/Module--ReleaseNotifier--Release.md) method; otherwise, specify `false`.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::MethodReleaseNotifier Class](../VS_visualcpp/Module--MethodReleaseNotifier-Class.md)