---
title: "Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::MethodReleaseNotifier::MethodReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MethodReleaseNotifier, constructor"
ms.assetid: 762e2ca4-0a92-49de-9ff5-d3efa0f067c0
caps.latest.revision: 6
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor](https://docs.microsoft.com/cpp/windows/module-methodreleasenotifier-methodreleasenotifier-constructor).  
  
  
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
 Specify `true` to enable calling the underlying [Module::ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) method; otherwise, specify `false`.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::MethodReleaseNotifier Class](../windows/module-methodreleasenotifier-class.md)

