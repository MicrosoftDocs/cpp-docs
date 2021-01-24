---
description: "Learn more about: Transaction Object Interfaces"
title: "Transaction Object Interfaces"
ms.date: "10/24/2018"
helpviewer_keywords: ["interfaces, OLE DB", "transaction object interfaces", "OLE DB, interfaces", "OLE DB providers, transaction support", "OLE DB provider templates, object interfaces", "interfaces, list of"]
ms.assetid: d2ce99ce-6f7a-4ff9-bc6e-acda3633d5c8
---
# Transaction Object Interfaces

The transaction object defines an atomic unit of work on a data source and determines how those units of work relate to each other. This object is not directly supported by the OLE DB provider templates (that is, you must create your own object).

The following table shows the mandatory and optional interfaces defined by OLE DB for a transaction object.

|Interface|Required?|Implemented by OLE DB templates?|
|---------------|---------------|--------------------------------------|
|[IConnectionPointContainer](/windows/win32/api/ocidl/nn-ocidl-iconnectionpointcontainer)|Mandatory|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053(v=vs.85))|Mandatory|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Optional|No|

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
