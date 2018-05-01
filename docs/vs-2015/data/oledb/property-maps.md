---
title: "Property Maps | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB providers, properties"
  - "maps, property"
  - "property maps"
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Property Maps
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Property Maps](https://docs.microsoft.com/cpp/data/oledb/property-maps).  
  
  
In addition to the session, rowset, and optional command object, each provider supports one or more properties. These properties are defined in property maps contained in the header files created by the OLE DB Provider Wizard. Each header file contains a map for the properties in the OLE DB property group defined for the object or objects defined in that file. The header file that contains the data source object also contains the property map for the [DataSource properties](https://msdn.microsoft.com/library/ms724188\(v=vs.140\).aspx). Session.h contains the property map for the [Session properties](https://msdn.microsoft.com/library/ms714221.aspx). The rowset and command objects reside in a single header file, called *projectname*RS.h. These properties are members of the [Rowset properties](https://msdn.microsoft.com/library/ms711252.aspx) group.  
  
## See Also  
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)

