---
title: "Session Object Interfaces | Microsoft Docs"
ms.custom: ""
ms.date: "10/24/2018"
ms.technology: ["cpp-data"]
ms.topic: "reference"
dev_langs: ["C++"]
helpviewer_keywords: ["session objects [OLE DB]", "session objects [OLE DB], interfaces", "OLE DB provider templates, object interfaces", "interfaces, session object", "interfaces, list of"]
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# Session Object Interfaces

The following table shows the mandatory and optional interfaces defined by OLE DB for a session object.  
  
|Interface|Required?|Implemented by OLE DB templates?|  
|---------------|---------------|--------------------------------------|  
|[IGetDataSource](/previous-versions/windows/desktop/ms709721)|Mandatory|Yes|  
|[IOpenRowset](/previous-versions/windows/desktop/ms716946)|Mandatory|Yes|  
|[ISessionProperties](/previous-versions/windows/desktop/ms713721)|Mandatory|Yes|  
|[IAlterIndex](/previous-versions/windows/desktop/ms714943)|Optional|No|  
|[IAlterTable](/previous-versions/windows/desktop/ms719764)|Optional|No|  
|[IBindResource](/previous-versions/windows/desktop/ms714936)|Optional|No|  
|[ICreateRow](/previous-versions/windows/desktop/ms716832)|Optional|No|  
|[IDBCreateCommand](/previous-versions/windows/desktop/ms711625)|Optional|Yes|  
|[IDBSchemaRowset](/previous-versions/windows/desktop/ms713686)|Optional|Yes|  
|[IIndexDefinition](/previous-versions/windows/desktop/ms711593)|Optional|No|  
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816)|Optional|Yes|  
|[ITableCreation](/previous-versions/windows/desktop/ms713639)|Optional|No|  
|[ITableDefinition](/previous-versions/windows/desktop/ms714277)|Optional|No|  
|[ITableDefinitionWithConstraints](/previous-versions/windows/desktop/ms720947)|Optional|No|  
|[ITransaction](/previous-versions/windows/desktop/ms723053)|Optional|No|  
|[ITransactionJoin](/previous-versions/windows/desktop/ms718071)|Optional|No|  
|[ITransactionLocal](/previous-versions/windows/desktop/ms714893)|Optional|No|  
|[ITransactionObject](/previous-versions/windows/desktop/ms713659)|Optional|No|  
  
The session object creates a rowset object. If the provider supports commands, the session also creates a command object (`CCommand`, implementing the OLE DB `TCommand`). The command object implements the `ICommand` interface and uses the `ICommand::Execute` method to execute commands on the rowset, as shown in the following figure.  
  
![Provider conceptual diagram](../../data/oledb/media/vc4u551.gif "vc4u551")  
  
## See Also  

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
