---
description: "Learn more about: Enabling and Disabling Services for a Provider"
title: "Enabling and Disabling Services for a Provider"
ms.date: "07/30/2019"
helpviewer_keywords: ["OLE DB services [OLE DB], enabling and disabling", "service providers [OLE DB]"]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
---
# Enabling and Disabling Services for a Provider

Individual OLE DB services can be enabled or disabled by default for all applications that access a single provider. This is done by adding an OLEDB_SERVICES registry entry under the provider's CLSID, with a DWORD value specifying the services to enable or disable, as shown in the following table.

|Default services enabled|DWORD value|
|------------------------------|-------------------|
|All services except client cursor and pooling|0xfffffffa|
|All services except client cursor|0xfffffffb|
|All services except pooling and auto enlistment|0xfffffffc|
|All services except pooling|0xfffffffe|
|All services (default)|0xffffffff|
|No services|0x00000000|
|No aggregation, all services disabled|No OLEDB_Services registry entry|

## See also

[Enabling and Disabling OLE DB Services](../../data/oledb/enabling-and-disabling-ole-db-services.md)
