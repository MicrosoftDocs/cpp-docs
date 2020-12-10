---
description: "Learn more about: OLE DB Provider Template Architecture"
title: "OLE DB Provider Template Architecture"
ms.date: "11/19/2018"
helpviewer_keywords: ["OLE DB [C++], object model", "architecture [C++], OLE DB Provider", "OLE DB provider templates, object model"]
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
---
# OLE DB Provider Template Architecture

## Data Sources and Sessions

The OLE DB provider architecture includes a data source object and one or more sessions. The data source object is the initial object that every provider must instantiate. When a consumer application needs data, it co-creates the data source object to start the provider. The data source object creates a session object (using the `IDBCreateSession` interface) through which the consumer connects to the data source object. ODBC programmers can think of the data source object as being equivalent to the `HENV` and the session object as equivalent to the `HDBC`.

![Provider architecture](../../data/oledb/media/vc4twb1.gif "Provider architecture")

Together with the source files created by the **OLE DB Provider Wizard**, the OLE DB templates implement a data source object. A session is an object that corresponds to the OLE DB `TSession`.

## Mandatory and Optional Interfaces

The OLE DB provider templates give you prepackaged implementations for all the required interfaces. Mandatory and optional interfaces are defined by OLE DB for several types of objects:

- [Data source](../../data/oledb/data-source-object-interfaces.md)

- [Session](../../data/oledb/session-object-interfaces.md)

- [Rowset](../../data/oledb/rowset-object-interfaces.md)

- [Command](../../data/oledb/command-object-interfaces.md)

- [Transaction](../../data/oledb/transaction-object-interfaces.md)

The OLE DB provider templates do not implement the row and storage objects.

The following table lists mandatory and optional interfaces for the objects listed above, according to the [OLE DB 2.6 SDK Documentation](/previous-versions/windows/desktop/ms722784(v=vs.85)).

|Component|Interface|Comment|
|---------------|---------------|-------------|
|[Data source](../../data/oledb/data-source-object-interfaces.md) ([CDataSource](../../data/oledb/cdatasource-class.md))|[mandatory] `IDBCreateSession`<br /><br /> [mandatory] `IDBInitialize`<br /><br /> [mandatory] `IDBProperties`<br /><br /> [mandatory] `IPersist`<br /><br /> [optional] `IConnectionPointContainer`<br /><br /> [optional] `IDBAsynchStatus`<br /><br /> [optional] `IDBDataSourceAdmin`<br /><br /> [optional] `IDBInfo`<br /><br /> [optional] `IPersistFile`<br /><br /> [optional] `ISupportErrorInfo`|Connection from the consumer to the provider. The object is used to specify properties on the connection such as user ID, password, and data source name. The object can also be used to administer a data source (create, update, delete, tables, and so on).|
|[Session](../../data/oledb/session-object-interfaces.md) ([CSession](./cdataconnection-class.md#op_csession_amp))|[mandatory] `IGetDataSource`<br /><br /> [mandatory] `IOpenRowset`<br /><br /> [mandatory] `ISessionProperties`<br /><br /> [optional] `IAlterIndex`<br /><br /> [optional] `IAlterTable`<br /><br /> [optional] `IBindResource`<br /><br /> [optional] `ICreateRow`<br /><br /> [optional] `IDBCreateCommand`<br /><br /> [optional] `IDBSchemaRowset`<br /><br /> [optional] `IIndexDefinition`<br /><br /> [optional] `ISupportErrorInfo`<br /><br /> [optional] `ITableCreation`<br /><br /> [optional] `ITableDefinition`<br /><br /> [optional] `ITableDefinitionWithConstraints`<br /><br /> [optional] `ITransaction`<br /><br /> [optional] `ITransactionJoin`<br /><br /> [optional] `ITransactionLocal`<br /><br /> [optional] `ITransactionObject`|The session object is a single conversation between a consumer and provider. It's similar to the ODBC `HSTMT` in that there can be many simultaneous sessions active.<br /><br /> The session object is the primary link to get to OLE DB functionality. To get to a command, transaction, or rowset object, you go through the session object.|
|[Rowset](../../data/oledb/rowset-object-interfaces.md) ([CRowset](../../data/oledb/crowset-class.md))|[mandatory] `IAccessor`<br /><br /> [mandatory] `IColumnsInfo`<br /><br /> [mandatory] `IConvertType`<br /><br /> [mandatory] `IRowset`<br /><br /> [mandatory] `IRowsetInfo`<br /><br /> [optional] `IChapteredRowset`<br /><br /> [optional] `IColumnsInfo2`<br /><br /> [optional] `IColumnsRowset`<br /><br /> [optional] `IConnectionPointContainer`<br /><br /> [optional] `IDBAsynchStatus`<br /><br /> [optional] `IGetRow`<br /><br /> [optional] `IRowsetChange`<br /><br /> [optional] `IRowsetChapterMember`<br /><br /> [optional] `IRowsetCurrentIndex`<br /><br /> [optional] `IRowsetFind`<br /><br /> [optional] `IRowsetIdentity`<br /><br /> [optional] `IRowsetIndex`<br /><br /> [optional] `IRowsetLocate`<br /><br /> [optional] `IRowsetRefresh`<br /><br /> [optional] `IRowsetScroll`<br /><br /> [optional] `IRowsetUpdate`<br /><br /> [optional] `IRowsetView`<br /><br /> [optional] `ISupportErrorInfo`<br /><br /> [optional] `IRowsetBookmark`|The rowset object is the data from the data source. The object is used for the bindings of that data and any basic operations (update, fetch, movement, and others) on the data. You always have a rowset object to keep and manipulate data.|
|[Command](../../data/oledb/command-object-interfaces.md) ([CCommand](ccommand-class.md))|[mandatory] `IAccessor`<br /><br /> [mandatory] `IColumnsInfo`<br /><br /> [mandatory] `ICommand`<br /><br /> [mandatory] `ICommandProperties`<br /><br /> [mandatory] `ICommandText`<br /><br /> [mandatory] `IConvertType`<br /><br /> [optional] `IColumnsRowset`<br /><br /> [optional] `ICommandPersist`<br /><br /> [optional] `ICommandPrepare`<br /><br /> [optional] `ICommandWithParameters`<br /><br /> [optional] `ISupportErrorInfo`<br /><br /> [optional] `ICommandStream`|The command object handles operations on data such as queries. It can handle parameterized or non-parameterized statements.<br /><br /> The command object is also responsible for handling bindings for parameters and output columns. A binding is a structure that contains information about how a column, in a rowset, should be retrieved. It contains information such as ordinal, data type, length, and status.|
|[Transaction](../../data/oledb/transaction-object-interfaces.md) (optional)|[mandatory] `IConnectionPointContainer`<br /><br /> [mandatory] `ITransaction`<br /><br /> [optional] `ISupportErrorInfo`|The transaction object defines an atomic unit of work on a data source and determines how those units of work relate to each other. This object is not directly supported by the OLE DB provider templates (that is, you create your own object).|

For more information, see the following topics:

- [Property Maps](../../data/oledb/property-maps.md)

- [The User Record](../../data/oledb/user-record.md)

## See also

[OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)<br/>
[OLE DB Interfaces](/previous-versions/windows/desktop/ms709709(v=vs.85))<br/>
