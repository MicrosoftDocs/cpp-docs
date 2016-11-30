---
title: "Session Object Interfaces | Microsoft Docs"
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
  - "session objects [OLE DB]"
  - "session objects [OLE DB], interfaces"
  - "OLE DB provider templates, object interfaces"
  - "interfaces, session object"
  - "interfaces, list of"
ms.assetid: ac01a958-6dde-4bd7-8b63-94459e488335
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
# Session Object Interfaces
The following table shows the mandatory and optional interfaces defined by OLE DB for a session object.  
  
|Interface|Required?|Implemented by OLE DB templates?|  
|---------------|---------------|--------------------------------------|  
|[IGetDataSource](https://msdn.microsoft.com/en-us/library/ms709721.aspx)|Mandatory|Yes|  
|[IOpenRowset](https://msdn.microsoft.com/en-us/library/ms716946.aspx)|Mandatory|Yes|  
|[ISessionProperties](https://msdn.microsoft.com/en-us/library/ms713721.aspx)|Mandatory|Yes|  
|[IAlterIndex](https://msdn.microsoft.com/en-us/library/ms714943.aspx)|Optional|No|  
|[IAlterTable](https://msdn.microsoft.com/en-us/library/ms719764.aspx)|Optional|No|  
|[IBindResource](https://msdn.microsoft.com/en-us/library/ms714936.aspx)|Optional|No|  
|[ICreateRow](https://msdn.microsoft.com/en-us/library/ms716832.aspx)|Optional|No|  
|[IDBCreateCommand](https://msdn.microsoft.com/en-us/library/ms711625.aspx)|Optional|Yes|  
|[IDBSchemaRowset](https://msdn.microsoft.com/en-us/library/ms713686.aspx)|Optional|Yes|  
|[IIndexDefinition](https://msdn.microsoft.com/en-us/library/ms711593.aspx)|Optional|No|  
|[ISupportErrorInfo](https://msdn.microsoft.com/en-us/library/ms715816.aspx)|Optional|Yes|  
|[ITableCreation](https://msdn.microsoft.com/en-us/library/ms713639.aspx)|Optional|No|  
|[ITableDefinition](https://msdn.microsoft.com/en-us/library/ms714277.aspx)|Optional|No|  
|[ITableDefinitionWithConstraints](https://msdn.microsoft.com/en-us/library/ms720947.aspx)|Optional|No|  
|[ITransaction](https://msdn.microsoft.com/en-us/library/ms723053.aspx)|Optional|No|  
|[ITransactionJoin](https://msdn.microsoft.com/en-us/library/ms718071.aspx)|Optional|No|  
|[ITransactionLocal](https://msdn.microsoft.com/en-us/library/ms714893.aspx)|Optional|No|  
|[ITransactionObject](https://msdn.microsoft.com/en-us/library/ms713659.aspx)|Optional|No|  
  
 The session object creates a rowset object. If the provider supports commands, the session also creates a command object (`CCommand`, implementing the OLE DB **TCommand**). The command object implements the `ICommand` interface and uses the `ICommand::Execute` method to execute commands on the rowset, as shown in the following figure.  
  
 ![Provider conceptual diagram](../../data/oledb/media/vc4u551.gif "vc4u551")  
  
## See Also  
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)