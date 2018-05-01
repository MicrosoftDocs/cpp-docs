---
title: "Module::ReleaseNotifier Class | Microsoft Docs"
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
  - "module/Microsoft::WRL::Module::ReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseNotifier class"
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
caps.latest.revision: 7
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Module::ReleaseNotifier Class
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [Module::ReleaseNotifier Class](https://docs.microsoft.com/cpp/windows/module-releasenotifier-class).  
  
  
Invokes an event handler when the last object in a module is released.  
  
## Syntax  
  
```  
class ReleaseNotifier;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::ReleaseNotifier::~ReleaseNotifier Destructor](../windows/module-releasenotifier-tilde-releasenotifier-destructor.md)|Deinitializes the current instance of the Module::ReleaseNotifier class.|  
|[Module::ReleaseNotifier::ReleaseNotifier Constructor](../windows/module-releasenotifier-releasenotifier-constructor.md)|Initializes a new instance of the Module::ReleaseNotifier class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::ReleaseNotifier::Invoke Method](../windows/module-releasenotifier-invoke-method.md)|When implemented, calls an event handler when the last object in a module is released.|  
|[Module::ReleaseNotifier::Release](../windows/module-releasenotifier-release.md)|Deletes the current Module::ReleaseNotifier object if the object was constructed with a parameter of `true`.|  
  
## Inheritance Hierarchy  
 `ReleaseNotifier`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)

