---
description: "Learn more about: OLE DB Object Model"
title: "OLE DB Object Model"
ms.date: "10/22/2018"
helpviewer_keywords: ["rowsets, OLE DB object model", "OLE DB, object model"]
ms.assetid: 1a274a25-c310-4430-a1ec-bd2bd8120eff
---
# OLE DB Object Model

The OLE DB object model is made of the following objects or components. The first four objects or components listed (data sources, sessions, commands, and rowsets) allow you to connect to a data source and view it. The rest, starting with accessors, relate to working with the data when it's displayed.

## Data Sources

Data source objects allow you to connect to a data source such as a file or DBMS. A data source object creates and manages the connection and contains permissions and authentications information (such as login name and password). A data source object can create one or more sessions.

## Sessions

A session manages a particular interaction with the data source to query and retrieve data. Each session is a single transaction. A transaction is an indivisible work unit defined by the ACID test. For a definition of ACID, see [Transactions](#vcconoledbcomponents_transactions).

Sessions do important tasks such as opening rowsets and returning the data source object that created it. Sessions can also return metadata, or information about the data source itself (such as table information).

A session can create one or more commands.

## Commands

Commands execute a text command such as a SQL statement. If the text command specifies a rowset, such as a SQL **SELECT** statement, the command creates the rowset.

A command is simply a container for a text command, which is a string (such as a SQL statement) passed from a consumer to a data source object for execution by the provider's underlying data store. Typically, the text command is a SQL **SELECT** statement (in which case, because SQL **SELECT** specifies a rowset, the command automatically creates a rowset).

## Rowsets

Rowsets show data in tabular format. An index is a special case of a rowset. You can create rowsets from the session or the command.

### Schema Rowsets

Schemas have metadata (structural information) about a database. Schema rowsets are rowsets that have schema information. Some OLE DB providers for DBMS support schema rowset objects. For more information about schema rowsets, see [Obtaining Metadata with Schema Rowsets](../../data/oledb/obtaining-metadata-with-schema-rowsets.md) and [Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md).

### View Objects

A view object defines a subset of the rows and columns from a rowset. It has no data of its own. View objects can't combine data from multiple rowsets.

## Accessors

Only OLE DB uses the concept of accessors. An accessor describes how data is stored in a consumer. It has a set of bindings (called a column map) between rowset fields (columns) and data members that you declare in the consumer.

## <a name="vcconoledbcomponents_transactions"></a> Transactions

Transaction objects are used when committing or aborting nested transactions at other than the lowest level. A transaction is an indivisible work unit defined by the ACID test. ACID stands for:

- Atomicity, can't be divided into smaller work units

- Concurrency, more than one transaction can occur at a time

- Isolation, one transaction has limited knowledge about changes made by another

- Durability, the transaction makes persistent changes

## Enumerators

Enumerators search for available data sources and other enumerators. Consumers that aren't customized for a particular data source use enumerators to search for a data source to use.

A root enumerator, shipped in the Microsoft Data Access SDK, traverses the registry looking for data sources and other enumerators. Other enumerators traverse the registry or search in a provider-specific manner.

## Errors

Any interface on any OLE DB object can generate errors. Errors have additional information about an error, including an optional custom error object. This information is stored in an HRESULT.

## Notifications

Notifications are used by groups of cooperating consumers sharing a rowset (where sharing means that the consumers are assumed to be working within the same transaction). Notifications enable cooperating consumers sharing a rowset to be informed about actions on the rowset performed by their peers.

## See also

[OLE DB Programming](../../data/oledb/ole-db-programming.md)<br/>
[OLE DB Programming Overview](../../data/oledb/ole-db-programming-overview.md)
