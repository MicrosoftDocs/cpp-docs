---
title: "FactoryCache Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::FactoryCache"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FactoryCache structure"
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
caps.latest.revision: 7
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
# FactoryCache Structure
Supports the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
struct FactoryCache;  
```  
  
## Remarks  
 Contains the location of a class factory and a value that identifies a registered wrt or COM class object.  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[FactoryCache::cookie Data Member](../windows/factorycache-cookie-data-member.md)|Contains a value that identifies a registered [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] or COM class object, and is later used to unregister the object.|  
|[FactoryCache::factory Data Member](../windows/factorycache-factory-data-member.md)|Points to a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] or COM class factory.|  
  
## Inheritance Hierarchy  
 `FactoryCache`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)