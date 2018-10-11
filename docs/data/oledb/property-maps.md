---
title: "Property Maps | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB providers, properties", "maps, property", "property maps"]
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Property Maps

In addition to the session, rowset, and optional command object, each provider supports one or more properties. These properties are defined in property maps contained in the header files created by the OLE DB Provider Wizard. Each header file contains a map for the properties in the OLE DB property group defined for the object or objects defined in that file. The header file that contains the data source object also contains the property map for the [DataSource properties](https://msdn.microsoft.com/library/ms724188). Session.h contains the property map for the [Session properties](/previous-versions/windows/desktop/ms714221). The rowset and command objects reside in a single header file, called *projectname*RS.h. These properties are members of the [Rowset properties](/previous-versions/windows/desktop/ms711252) group.  
  
## See Also  

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)