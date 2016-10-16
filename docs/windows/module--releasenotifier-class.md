---
title: "Module::ReleaseNotifier Class"
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
  - "module/Microsoft::WRL::Module::ReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseNotifier class"
ms.assetid: 17249cd1-4d88-42e3-8146-da9e942d12bd
caps.latest.revision: 4
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
# Module::ReleaseNotifier Class
Invokes an event handler when the last object in a module is released.  
  
## Syntax  
  
```  
class ReleaseNotifier;  
```  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::ReleaseNotifier::~ReleaseNotifier Destructor](../windows/module--releasenotifier--~releasenotifier-destructor.md)|Deinitializes the current instance of the Module::ReleaseNotifier class.|  
|[Module::ReleaseNotifier::ReleaseNotifier Constructor](../windows/module--releasenotifier--releasenotifier-constructor.md)|Initializes a new instance of the Module::ReleaseNotifier class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::ReleaseNotifier::Invoke Method](../windows/module--releasenotifier--invoke-method.md)|When implemented, calls an event handler when the last object in a module is released.|  
|[Module::ReleaseNotifier::Release](../windows/module--releasenotifier--release.md)|Deletes the current Module::ReleaseNotifier object if the object was constructed with a parameter of `true`.|  
  
## Inheritance Hierarchy  
 `ReleaseNotifier`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL