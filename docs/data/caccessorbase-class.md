---
title: "CAccessorBase Class"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "CAccessorBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessorBase class"
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
caps.latest.revision: 8
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# CAccessorBase Class
All accessors in the OLE DB Templates derive from this class. `CAccessorBase` allows one rowset to manage multiple accessors. It also provides binding for both parameters and output columns.  
  
## Syntax  
  
```  
// Replace with syntax  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[Close](../data/caccessorbase--close.md)|Closes the accessors.|  
|[GetHAccessor](../data/caccessorbase--gethaccessor.md)|Retrieves the accessor handle.|  
|[GetNumAccessors](../data/caccessorbase--getnumaccessors.md)|Retrieves the number of accessors created by the class.|  
|[IsAutoAccessor](../data/caccessorbase--isautoaccessor.md)|Tests whether the specified accessor is an autoaccessor.|  
|[ReleaseAccessors](../data/caccessorbase--releaseaccessors.md)|Releases the accessors.|  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)