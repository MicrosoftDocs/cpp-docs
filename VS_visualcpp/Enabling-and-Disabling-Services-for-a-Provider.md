---
title: "Enabling and Disabling Services for a Provider"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 3deac1bb-f660-407a-92ef-95e139e280c0
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# Enabling and Disabling Services for a Provider
Individual OLE DB services can be enabled or disabled by default for all applications that access a single provider. This is done by adding an **OLEDB_SERVICES** registry entry under the provider's CLSID, with a `DWORD` value specifying the services to enable or disable, as shown in the following table.  
  
|Default services enabled|Keyword value|  
|------------------------------|-------------------|  
|All services (default)|0xffffffff|  
|All except Pooling and AutoEnlistment|0xfffffffe|  
|All except Client Cursor|0xfffffffb|  
|All except Pooling, AutoEnlistment, and Client Cursor|0xfffffff0|  
|No services|0x00000000|  
|No aggregation, all services disabled|<missing key\>|  
  
## See Also  
 [Enabling and Disabling OLE DB Services](../VS_visualcpp/Enabling-and-Disabling-OLE-DB-Services.md)