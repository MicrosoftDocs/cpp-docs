---
title: "Property Maps"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB providers, properties"
  - "maps, property"
  - "property maps"
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
caps.latest.revision: 7
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
# Property Maps
In addition to the session, rowset, and optional command object, each provider supports one or more properties. These properties are defined in property maps contained in the header files created by the OLE DB Provider Wizard. Each header file contains a map for the properties in the OLE DB property group defined for the object or objects defined in that file. The header file that contains the data source object also contains the property map for the [DataSource properties](https://msdn.microsoft.com/en-us/library/ms724188\(v=vs.140\).aspx). Session.h contains the property map for the [Session properties](https://msdn.microsoft.com/en-us/library/ms714221.aspx). The rowset and command objects reside in a single header file, called *projectname*RS.h. These properties are members of the [Rowset properties](https://msdn.microsoft.com/en-us/library/ms711252.aspx) group.  
  
## See Also  
 [OLE DB Provider Template Architecture](../data/ole-db-provider-template-architecture.md)