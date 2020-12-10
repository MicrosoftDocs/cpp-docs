---
description: "Learn more about: Session Object Interfaces"
title: "Session Object Interfaces"
ms.date: "11/19/2018"
helpviewer_keywords: ["session objects [OLE DB]", "session objects [OLE DB], interfaces", "OLE DB provider templates, object interfaces", "interfaces, session object", "interfaces, list of"]
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
---
# Session Object Interfaces

The following table shows the mandatory and optional interfaces defined by OLE DB for a session object.

|Interface|Required?|Implemented by OLE DB templates?|
|---------------|---------------|--------------------------------------|
|[IGetDataSource](/previous-versions/windows/desktop/ms709721(v=vs.85))|Mandatory|Yes|
|[IOpenRowset](/previous-versions/windows/desktop/ms716946(v=vs.85))|Mandatory|Yes|
|[ISessionProperties](/previous-versions/windows/desktop/ms713721(v=vs.85))|Mandatory|Yes|
|[IAlterIndex](/previous-versions/windows/desktop/ms714943(v=vs.85))|Optional|No|
|[IAlterTable](/previous-versions/windows/desktop/ms719764(v=vs.85))|Optional|No|
|[IBindResource](/previous-versions/windows/desktop/ms714936(v=vs.85))|Optional|No|
|[ICreateRow](/previous-versions/windows/desktop/ms716832(v=vs.85))|Optional|No|
|[IDBCreateCommand](/previous-versions/windows/desktop/ms711625(v=vs.85))|Optional|Yes|
|[IDBSchemaRowset](/previous-versions/windows/desktop/ms713686(v=vs.85))|Optional|Yes|
|[IIndexDefinition](/previous-versions/windows/desktop/ms711593(v=vs.85))|Optional|No|
|[ISupportErrorInfo](/previous-versions/windows/desktop/ms715816(v=vs.85))|Optional|Yes|
|[ITableCreation](/previous-versions/windows/desktop/ms713639(v=vs.85))|Optional|No|
|[ITableDefinition](/previous-versions/windows/desktop/ms714277(v=vs.85))|Optional|No|
|[ITableDefinitionWithConstraints](/previous-versions/windows/desktop/ms720947(v=vs.85))|Optional|No|
|[ITransaction](/previous-versions/windows/desktop/ms723053(v=vs.85))|Optional|No|
|[ITransactionJoin](/previous-versions/windows/desktop/ms718071(v=vs.85))|Optional|No|
|[ITransactionLocal](/previous-versions/windows/desktop/ms714893(v=vs.85))|Optional|No|
|[ITransactionObject](/previous-versions/windows/desktop/ms713659(v=vs.85))|Optional|No|

The session object creates a rowset object. If the provider supports commands, the session also creates a command object (`CCommand`, implementing the OLE DB `TCommand`). The command object implements the `ICommand` interface and uses the `ICommand::Execute` method to execute commands on the rowset, as shown in the following figure.

![Provider conceptual diagram](../../data/oledb/media/vc4u551.gif "Provider conceptual diagram")

## See also

[OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)<br/>
