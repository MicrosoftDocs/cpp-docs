---
title: "CreatorMap Structure | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: 
  - "module/Microsoft::WRL::Details::CreatorMap"
  - "implements/Microsoft::WRL::Details::CreatorMap"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CreatorMap structure"
ms.assetid: 94e40927-90c3-4107-bca3-3ad2dc4beda9
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
# CreatorMap Structure
Supports the [!INCLUDE[cppwrl](../windows/includes/cppwrl_md.md)] infrastructure and is not intended to be used directly from your code.  
  
## Syntax  
  
```  
struct CreatorMap;  
```  
  
## Remarks  
 Contains information about how to initialize, register, and unregister objects.  
  
 CreatorMap contains the following information:  
  
-   How to initialize, register, and unregister objects.  
  
-   How to compare activation data depending on a classic COM or [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] factory.  
  
-   Information about the factory cache and server name for an interface.  
  
## Members  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[CreatorMap::activationId Data Member](../windows/creatormap-activationid-data-member.md)|Represents an object ID that is identified either by a classic COM class ID or a [!INCLUDE[wrt](../atl/reference/includes/wrt_md.md)] name.|  
|[CreatorMap::factoryCache Data Member](../windows/creatormap-factorycache-data-member.md)|Stores the pointer to the factory cache for the CreatorMap.|  
|[CreatorMap::factoryCreator Data Member](../windows/creatormap-factorycreator-data-member.md)|Creates a factory for the specified CreatorMap.|  
|[CreatorMap::serverName Data Member](../windows/creatormap-servername-data-member.md)|Stores the server name for the CreatorMap.|  
  
## Inheritance Hierarchy  
 `CreatorMap`  
  
## Requirements  
 **Header:** module.h  
  
 **Namespace:** Microsoft::WRL::Details  
  
## See Also  
 [Microsoft::WRL::Details Namespace](../windows/microsoft-wrl-details-namespace.md)