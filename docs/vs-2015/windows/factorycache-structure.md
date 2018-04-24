---
title: "FactoryCache Structure | Microsoft Docs"
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
  - "module/Microsoft::WRL::Details::FactoryCache"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "FactoryCache structure"
ms.assetid: 624544e6-0989-47f6-a3e9-edb60e1ee6d4
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# FactoryCache Structure
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [FactoryCache Structure](https://docs.microsoft.com/cpp/windows/factorycache-structure).  
  
  
Supports the [!INCLUDE[cppwrl](../includes/cppwrl-md.md)] infrastructure and is not intended to be used directly from your code.  
  
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
|[FactoryCache::cookie Data Member](../windows/factorycache-cookie-data-member.md)|Contains a value that identifies a registered [!INCLUDE[wrt](../includes/wrt-md.md)] or COM class object, and is later used to unregister the object.|  
|[FactoryCache::factory Data Member](../windows/factorycache-factory-data-member.md)|Points to a [!INCLUDE[wrt](../includes/wrt-md.md)] or COM class factory.|  
  
## Inheritance Hierarchy  
 `FactoryCache`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)

