---
title: "CAccessorBase Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CAccessorBase"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CAccessorBase class"
ms.assetid: 389b65be-11ca-4ae0-9290-60c621c4982b
caps.latest.revision: 8
author: "mikeblome"
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
|[Close](../../data/oledb/caccessorbase-close.md)|Closes the accessors.|  
|[GetHAccessor](../../data/oledb/caccessorbase-gethaccessor.md)|Retrieves the accessor handle.|  
|[GetNumAccessors](../../data/oledb/caccessorbase-getnumaccessors.md)|Retrieves the number of accessors created by the class.|  
|[IsAutoAccessor](../../data/oledb/caccessorbase-isautoaccessor.md)|Tests whether the specified accessor is an autoaccessor.|  
|[ReleaseAccessors](../../data/oledb/caccessorbase-releaseaccessors.md)|Releases the accessors.|  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)