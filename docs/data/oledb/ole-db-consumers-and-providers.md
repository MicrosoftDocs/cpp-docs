---
title: "OLE DB Consumers and Providers | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB providers, OLE DB data architecture"
  - "OLE DB providers"
  - "OLE DB consumers, OLE DB data architecture"
  - "OLE DB consumers"
  - "OLE DB, data model"
ms.assetid: 886cb39d-652b-4557-93f0-4b1b0754d8bc
caps.latest.revision: 7
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
# OLE DB Consumers and Providers
The OLE DB architecture uses the model of consumers and providers. A consumer makes requests for data. A provider responds to these requests by placing data in a tabular format and returning it to the consumer. Any call that the consumer can make must be implemented in the provider.  
  
 Technically defined, a consumer is any system or application code (not necessarily an OLE DB component) that accesses data through OLE DB interfaces. The interfaces are implemented in a provider. Thus, a provider is any software component that implements OLE DB interfaces to encapsulate access to data and expose it to other objects (that is, consumers).  
  
 In terms of roles, a consumer calls methods on OLE DB interfaces; an OLE DB provider implements the needed OLE DB interfaces.  
  
 OLE DB avoids the terms client and server because these roles do not always make sense, especially in an n-tier situation. Because a consumer could be a component on a tier that serves another component, to call it a client component would be confusing. Also, a provider sometimes acts more like a database driver than a server.  
  
## See Also  
 [OLE DB Programming](../../data/oledb/ole-db-programming.md)   
 [OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)