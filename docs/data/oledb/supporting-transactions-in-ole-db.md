---
title: "Supporting Transactions in OLE DB | Microsoft Docs"
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
  - "OLE DB consumer templates [C++], transaction support"
  - "transactions [C++], OLE DB support for"
  - "nested transactions [C++]"
  - "OLE DB [C++], transaction support"
  - "databases [C++], transactions"
  - "distributed transactions [C++]"
ms.assetid: 3d72e583-ad38-42ff-8f11-e2166d60a5a7
caps.latest.revision: 10
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
# Supporting Transactions in OLE DB
A [transaction](../../data/transactions-mfc-data-access.md) is a way to group, or batch, a series of updates to a data source so that either all succeed and are committed at once or (if any one of them fails) none are committed and the entire transaction is rolled back. This process ensures the integrity of the result on the data source.  
  
 OLE DB supports transactions with the following three methods:  
  
-   [ITransactionLocal::StartTransaction](https://msdn.microsoft.com/en-us/library/ms709786.aspx)  
  
-   [ITransaction::Commit](https://msdn.microsoft.com/en-us/library/ms713008.aspx)  
  
-   [ITransaction::Abort](https://msdn.microsoft.com/en-us/library/ms709833.aspx)  
  
## Relationship of Sessions and Transactions  
 A single data source object can create one or more session objects, each of which can be inside or outside the scope of a transaction at a given time.  
  
 When a session does not enter a transaction, all work done within that session on the data store is immediately committed on each method call. (This is sometimes referred to as autocommit mode or implicit mode.)  
  
 When a session enters a transaction, all work done within that session on the data store is part of that transaction and is committed or aborted as a single unit. (This is sometimes referred to as manual-commit mode.)  
  
 Transaction support is provider-specific. If the provider you are using supports transactions, a session object that supports **ITransaction** and **ITransactionLocal** can enter a simple (that is, non-nested) transaction. The OLE DB Templates class [CSession](../../data/oledb/csession-class.md) supports these interfaces and is the recommended way to implement transaction support in Visual C++.  
  
## Starting and Ending the Transaction  
 You call the `StartTransaction`, **Commit**, and **Abort** methods in the rowset object in the consumer.  
  
 Calling **ITransactionLocal::StartTransaction** starts a new local transaction. When you start the transaction, any changes mandated by subsequent operations are not actually applied to the data store until you commit the transaction.  
  
 Calling **ITransaction::Commit** or **ITransaction::Abort** ends the transaction. **Commit** causes all changes within the scope of the transaction to be applied to the data store. **Abort** causes all changes within the scope of the transaction to be canceled and the data store is left in the state it had before the transaction started.  
  
## Nested Transactions  
 A [nested transaction](https://msdn.microsoft.com/en-us/library/ms716985.aspx) occurs when you start a new local transaction when an active transaction already exists on the session. The new transaction is started as a nested transaction below the current transaction. If the provider does not support nested transactions, calling `StartTransaction` when there is already an active transaction on the session returns **XACT_E_XTIONEXISTS**.  
  
## Distributed Transactions  
 A distributed transaction is a transaction that updates distributed data; that is, data on more than one networked computer system. If you want to support transactions over a distributed system, you should use the .NET Framework rather than the OLE DB transaction support.  
  
## See Also  
 [Using Accessors](../../data/oledb/using-accessors.md)