---
description: "Learn more about: Property Maps"
title: "Property Maps"
ms.date: "10/24/2018"
helpviewer_keywords: ["OLE DB providers, properties", "maps, property", "property maps"]
ms.assetid: 44abde56-90ad-4612-854e-d2fa5426fa80
---
# Property Maps

With the session, rowset, and optional command object, each provider supports one or more properties. These properties are defined in property maps stored in the header files created by the **OLE DB Provider Wizard**. Each header file contains a map for the properties in the OLE DB property group defined for the object or objects defined in that file. The header file that contains the data source object also contains the property map for the [DataSource properties](/previous-versions/windows/desktop/ms724188(v=vs.85)). `Session.h` contains the property map for the [Session properties](/previous-versions/windows/desktop/ms714221(v=vs.85)). The rowset and command objects are in a single header file, called *projectname*RS.h. These properties are members of the [Rowset properties](/previous-versions/windows/desktop/ms711252(v=vs.85)) group.

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
