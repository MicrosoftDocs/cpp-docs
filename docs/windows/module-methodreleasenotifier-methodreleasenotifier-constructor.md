---
title: "Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
 Specify `true` to enable calling the underlying [Module::ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) method; otherwise, specify `false`.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::MethodReleaseNotifier Class](../windows/module-methodreleasenotifier-class.md)