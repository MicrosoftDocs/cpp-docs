---
description: "Learn more about: OLE DB Consumer Templates Reference"
title: "OLE DB Consumer Templates Reference"
ms.date: "11/04/2016"
helpviewer_keywords: ["OLE DB consumer templates, classes"]
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
---
# OLE DB Consumer Templates Reference

The OLE DB Consumer Templates contain the following classes. The reference material also includes topics on the [macros for OLE DB Consumer Templates](../../data/oledb/macros-and-global-functions-for-ole-db-consumer-templates.md).

## Session Classes

[CDataConnection](../../data/oledb/cdataconnection-class.md)<br/>
Manages the connection with the data source. This is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source.

[CDataSource](../../data/oledb/cdatasource-class.md)<br/>
Corresponds to an OLE DB data source object, representing a connection through a provider to a data source. One or more database sessions, each represented by a `CSession` object, can take place on a single connection.

[CEnumerator](../../data/oledb/cenumerator-class.md)<br/>
Corresponds to an OLE DB enumerator object, which retrieves rowset information about available data sources.

[CEnumeratorAccessor](../../data/oledb/cenumeratoraccessor-class.md)<br/>
Used by `CEnumerator` to access the data from the enumerator rowset. This rowset consists of the data sources and enumerators visible from the current enumerator.

[CSession](../../data/oledb/csession-class.md)<br/>
Represents a single database access session. One or more sessions can be associated with each `CDataSource` object.

## Accessor Classes

[CAccessor](../../data/oledb/caccessor-class.md)<br/>
Used for records that are statically bound to a data source. Use this accessor class when you know the structure of the data source.

[CAccessorBase](../../data/oledb/caccessorbase-class.md)<br/>
Base class for all accessor classes.

[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)<br/>
An accessor that can be created at run time, based on the column information of the rowset. Use this class to retrieve data if you do not know the structure of the data source.

[CDynamicParameterAccessor](../../data/oledb/cdynamicparameteraccessor-class.md)<br/>
An accessor that can be used when command types are unknown. Obtains the parameter information by calling the `ICommandWithParameters` interface, if the provider supports the interface.

[CDynamicStringAccessor](../../data/oledb/cdynamicstringaccessor-class.md)<br/>
Allows you to access a data source when you have no knowledge of the database's underlying structure.

[CDynamicStringAccessorA](../../data/oledb/cdynamicstringaccessora-class.md)<br/>
Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as ANSI string data.

[CDynamicStringAccessorW](../../data/oledb/cdynamicstringaccessorw-class.md)<br/>
Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as UNICODE string data.

[CManualAccessor](../../data/oledb/cmanualaccessor-class.md)<br/>
An accessor with methods to handle both columns and command parameters. With this class, you can use any data types as long as the provider can convert the type.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Can be used as a template argument when you do not want the class to support parameters or output columns.

[CXMLAccessor](../../data/oledb/cxmlaccessor-class.md)<br/>
Similar to `CDynamicStringAccessor` except that this class converts all data accessed from the data store as XML-formatted (tagged) data.

## Rowset Classes

[CAccessorRowset](../../data/oledb/caccessorrowset-class.md)<br/>
Encapsulates a rowset and its associated accessors.

[CArrayRowset](../../data/oledb/carrayrowset-class.md)<br/>
Used to access elements of a rowset using array syntax.

[CBulkRowset](../../data/oledb/cbulkrowset-class.md)<br/>
Used to fetch and manipulate rows in bulk by retrieving multiple row handles with a single call.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Can be used as a template argument if the command does not return a rowset.

[CRestrictions](../../data/oledb/crestrictions-class.md)<br/>
Used to specify restrictions for schema rowsets.

[CRowset](../../data/oledb/crowset-class.md)<br/>
Used to manipulate, set, and retrieve rowset data.

[CStreamRowset](../../data/oledb/cstreamrowset-class.md)<br/>
Returns an `ISequentialStream` object rather than a rowset; you then use the `Read` method to retrieve data in XML format. (SQL Server 2000 does the formatting; note that this feature works with SQL Server 2000 only.)

[IRowsetNotifyImpl](../../data/oledb/irowsetnotifyimpl-class.md)<br/>
Provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods `OnFieldChange`, `OnRowChange`, and `OnRowsetChange`.

[Schema Rowset Classes and Typedef Classes](../../data/oledb/schema-rowset-classes-and-typedef-classes.md)

The OLE DB Templates provide you with a set of classes that correspond to the OLE DB schema rowsets.

## Command Classes

[CCommand](../../data/oledb/ccommand-class.md)<br/>
Used to set and execute a parameter-based OLE DB command. To merely open a simple rowset, use `CTable` instead.

[CMultipleResults](../../data/oledb/cmultipleresults-class.md)<br/>
Used as a template argument for the `CCommand` template when you want the command to handle multiple result sets.

[CNoAccessor](../../data/oledb/cnoaccessor-class.md)<br/>
Used as a template argument for template classes, such as `CCommand` and `CTable`, that take an accessor class argument. Use `CNoAccessor` if you do not want the class to support parameters or output columns.

[CNoMultipleResults](../../data/oledb/cnomultipleresults-class.md)<br/>
Used as a template argument for the `CCommand` template when you want the command to handle a single rowset. `CNoMultipleResults` is the default value for the template argument.

[CNoRowset](../../data/oledb/cnorowset-class.md)<br/>
Used as a template argument for `CCommand` or `CTable` if the command or table does not return a rowset.

[CTable](../../data/oledb/ctable-class.md)<br/>
Used to access a simple rowset with no parameters.

## Property Classes

[CDBPropIDSet](../../data/oledb/cdbpropidset-class.md)<br/>
Used to pass an array of property IDs for which the consumer wants property information. The properties belong to one property set.

[CDBPropSet](../../data/oledb/cdbpropset-class.md)<br/>
Used to set properties on a provider.

## Bookmark Class

[CBookmark](../../data/oledb/cbookmark-class.md)<br/>
Used as an index for accessing data in a rowset.

## Error Class

[CDBErrorInfo](../../data/oledb/cdberrorinfo-class.md)<br/>
Used to retrieve OLE DB error information.

## See also

[OLE DB Provider Templates Reference](../../data/oledb/ole-db-provider-templates-reference.md)<br/>
[OLE DB Templates](../../data/oledb/ole-db-templates.md)
