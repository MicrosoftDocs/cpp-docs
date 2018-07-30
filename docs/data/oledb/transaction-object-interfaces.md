---
title: "Transaction Object Interfaces | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["interfaces, OLE DB", "transaction object interfaces", "OLE DB, interfaces", "OLE DB providers, transaction support", "OLE DB provider templates, object interfaces", "interfaces, list of"]
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Transaction Object Interfaces
The transaction object defines an atomic unit of work on a data source and determines how those units of work relate to each other. This object is not directly supported by the OLE DB provider templates (that is, you must create your own object).  
  
 The following table shows the mandatory and optional interfaces defined by OLE DB for a transaction object.  
  
|Interface|Required?|Implemented by OLE DB templates?|  
|---------------|---------------|--------------------------------------|  
|[IConnectionPointContainer](http://msdn.microsoft.com/library/windows/desktop/ms683857)|Mandatory|No|  
|[ITransaction](https://msdn.microsoft.com/library/ms723053.aspx)|Mandatory|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/library/ms715816.aspx)|Optional|No|  
  
## See Also  
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)