---
description: "Learn more about: Transactions  (MFC Data Access)"
title: "Transactions  (MFC Data Access)"
ms.date: "11/04/2016"
helpviewer_keywords: ["transactions [C++], support for", "transactions [C++]", "databases [C++], transactions"]
ms.assetid: f80afbfe-1517-4fec-8870-9ffc70a58b05
---
# Transactions  (MFC Data Access)

The concept of a transaction was developed to handle cases in which the resulting state of the database depends on the total success of a series of operations. This could come about because successive operations might modify the results of previous operations. In such cases, if any one operation fails, the resulting state could be indeterminate.

To solve this problem, transactions group a series of operations in such a way that the integrity of the final result can be assured. Either all the operations must succeed and then be committed (written to the database) or the entire transaction fails. The cancellation of the transaction is called a rollback. Rollback allows a recovery from the changes and returns the database to the pretransaction state.

For example, in an automated banking transaction, if you transfer money from account A to account B, both the withdrawal from A and the deposit to B must succeed to process the funds correctly, or the whole transaction must fail.

A transaction must have ACID properties, which stand for the following:

- **Atomicity** A transaction is an atomic unit of work and executes exactly once; either all the work is done or none of it is.

- **Consistency** A transaction preserves the consistency of data, transforming one consistent state of data into another consistent state of data. Data bound by a transaction must be semantically preserved.

- **Isolation** A transaction is a unit of isolation and each occurs separately and independently of concurrent transactions. A transaction should never see the intermediate stages of another transaction.

- **Durability** A transaction is a unit of recovery. If a transaction succeeds, its updates persist, even if the system crashes or is shut down. If a transaction fails, the system remains in the state previous to committing the transaction.

You can support transactions in OLE DB (see [Supporting Transactions in OLE DB](../data/oledb/supporting-transactions-in-ole-db.md)) or ODBC (see [Transaction (ODBC)](../data/odbc/transaction-odbc.md)).

A distributed transaction is a transaction that updates distributed data, that is, data on more than one networked computer system. If you want to support transactions over a distributed system, you should use ADO.NET rather than the OLE DB transaction support.

## See also

[Data Access Programming (MFC/ATL)](../data/data-access-programming-mfc-atl.md)
