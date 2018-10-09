---
title: "Enabling and Disabling Services for a Provider | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["OLE DB services [OLE DB], enabling and disabling", "service providers [OLE DB]"]
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Enabling and Disabling Services for a Provider

Individual OLE DB services can be enabled or disabled by default for all applications that access a single provider. This is done by adding an OLEDB_SERVICES registry entry under the provider's CLSID, with a `DWORD` value specifying the services to enable or disable, as shown in the following table.  
  
|Default services enabled|Keyword value|  
|------------------------------|-------------------|  
|All services (default)|0xffffffff|  
|All except Pooling and AutoEnlistment|0xfffffffe|  
|All except Client Cursor|0xfffffffb|  
|All except Pooling, AutoEnlistment, and Client Cursor|0xfffffff0|  
|No services|0x00000000|  
|No aggregation, all services disabled|\<missing key>|  
  
## See Also  

[Enabling and Disabling OLE DB Services](../../data/oledb/enabling-and-disabling-ole-db-services.md)