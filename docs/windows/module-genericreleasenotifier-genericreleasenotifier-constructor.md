---
title: "Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-windows"]
ms.topic: "reference"
f1_keywords: ["module/Microsoft::WRL::Module::GenericReleaseNotifier::GenericReleaseNotifier"]
dev_langs: ["C++"]
helpviewer_keywords: ["GenericReleaseNotifier, constructor"]
ms.assetid: feb5b687-a4b0-4809-9022-8f292181b7a1
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "uwp"]
---
# Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor
Initializes a new instance of the **Module::GenericReleaseNotifier** class.  
  
## Syntax  
  
```cpp  
GenericReleaseNotifier(  
   T callback,   
   bool release  
) throw() : ReleaseNotifier(release), callback_(callback);  
```  
  
### Parameters  
 *callback*  
 A lambda, functor, or pointer-to-function event handler that can be invoked with the parentheses function operator (`()`).  
  
 *release*  
 Specify **true** to enable calling the underlying [Module::ReleaseNotifier::Release()](../windows/module-releasenotifier-release.md) method; otherwise, specify **false**.  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL  
  
## See Also  
 [Module::GenericReleaseNotifier Class](../windows/module-genericreleasenotifier-class.md)