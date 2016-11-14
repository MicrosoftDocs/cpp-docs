---
title: "Module::GenericReleaseNotifier Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Module::GenericReleaseNotifier"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GenericReleaseNotifier class"
ms.assetid: 244a8fbe-f89b-409b-aa65-db3e37f9b125
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
# Module::GenericReleaseNotifier Class
Invokes an event handler when the last object in the current module is released. The event handler is specified by on a lambda, functor, or pointer-to-function.  
  
## Syntax  
  
```  
template<  
   typename T  
>  
class GenericReleaseNotifier : public ReleaseNotifier;  
```  
  
#### Parameters  
 `T`  
 The type of the data member that contains the location of the event handler.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[Module::GenericReleaseNotifier::GenericReleaseNotifier Constructor](../windows/module-genericreleasenotifier-genericreleasenotifier-constructor.md)|Initializes a new instance of the Module::GenericReleaseNotifier class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[Module::GenericReleaseNotifier::Invoke Method](../windows/module-genericreleasenotifier-invoke-method.md)|Calls the event handler associated with the current Module::GenericReleaseNotifier object.|  
  
### Protected Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[Module::GenericReleaseNotifier::callback_ Data Member](../windows/module-genericreleasenotifier-callback-data-member.md)|Holds the lambda, functor, or pointer-to-function event handler associated with the current Module::GenericReleaseNotifier object.|  
  
## Inheritance Hierarchy  
 `ReleaseNotifier`  
  
 `GenericReleaseNotifier`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL
 
 ## See Also
 [Module Class](../windows/module-class.md)