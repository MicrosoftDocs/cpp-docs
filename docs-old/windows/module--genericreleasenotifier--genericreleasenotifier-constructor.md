---
title: "Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GenericReleaseNotifier, constructor"
ms.assetid: feb5b687-a4b0-4809-9022-8f292181b7a1
caps.latest.revision: 3
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
# Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor
Initializes a new instance of the Module::GenericReleaseNotifier class.  
  
## Syntax  
  
```  
  
      GenericReleaseNotifier(  
   T callback,   
   bool release  
) throw() : ReleaseNotifier(release), callback_(callback);  
```  
  
#### Parameters  
 `callback`  
 A lambda, functor, or pointer-to-function event handler that can be invoked with the parentheses function operator (`()`).  
  
 `release`  
 Specify `true` to enable calling the underlying [Module::ReleaseNotifier::Release()](../windows/module--releasenotifier--release.md) method; otherwise, specify `false`.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::GenericReleaseNotifier Class](../windows/module--genericreleasenotifier-class.md)