---
title: "Enabling and Disabling Services for a Provider | Microsoft Docs"
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
  - "OLE DB services [OLE DB], enabling and disabling"
  - "service providers [OLE DB]"
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# Enabling and Disabling Services for a Provider
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [Enabling and Disabling Services for a Provider](https://docs.microsoft.com/cpp/data/oledb/enabling-and-disabling-services-for-a-provider).  
  
  
Individual OLE DB services can be enabled or disabled by default for all applications that access a single provider. This is done by adding an **OLEDB_SERVICES** registry entry under the provider's CLSID, with a `DWORD` value specifying the services to enable or disable, as shown in the following table.  
  
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

