---
title: "Module::MethodReleaseNotifier Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::MethodReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MethodReleaseNotifier class"
ms.assetid: 5c2902be-964b-488f-9f1c-adf504995cbc
caps.latest.revision: 5
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
# Module::MethodReleaseNotifier Class
Invokes an event handler when the last object in the current module is released. The event handler is specified by an object and its pointer-to-a-method member.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
class MethodReleaseNotifier : public ReleaseNotifier;  
```  
  
#### Parameters  
 `T`  
 The type of the object whose member function is the event handler.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::MethodReleaseNotifier::MethodReleaseNotifier Constructor](../windows/module-methodreleasenotifier-methodreleasenotifier-constructor.md)|Initializes a new instance of the Module::MethodReleaseNotifier class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::MethodReleaseNotifier::Invoke Method](../windows/module-methodreleasenotifier-invoke-method.md)|Calls the event handler associated with the current Module::MethodReleaseNotifier object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[Module::MethodReleaseNotifier::method_ Data Member](../windows/module-methodreleasenotifier-method-data-member.md)|Holds a pointer to the event handler for the current Module::MethodReleaseNotifier object.|  
|[Module::MethodReleaseNotifier::object_ Data Member](../windows/module-methodreleasenotifier-object-data-member.md)|Holds a pointer to the object whose member function is the event handler for the current Module::MethodReleaseNotifier object.|  
  
## Inheritance Hierarchy  
 `ReleaseNotifier`  
  
 `MethodReleaseNotifier`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)