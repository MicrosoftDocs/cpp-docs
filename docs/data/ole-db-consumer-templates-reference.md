---
title: "OLE DB Consumer Templates Reference"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "vc-attr.db_param"
  - "vc-attr.db_column"
  - "vc-attr.db_accessor"
  - "vc-attr.db_command"
  - "vc-attr.db_table"
  - "vc.templates.ole"
  - "vc-attr.db_source"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "OLE DB consumer templates, classes"
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
caps.latest.revision: 7
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
# OLE DB Consumer Templates Reference
The OLE DB Consumer Templates contain the following classes. The reference material also includes topics on the [macros for OLE DB Consumer Templates](../data/macros-and-global-functions-for-ole-db-consumer-templates.md).  
  
## Session Classes  
 [CDataConnection](../data/cdataconnection-class.md)  
 Manages the connection with the data source. This is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source.  
  
 [CDataSource](../data/cdatasource-class.md)  
 Corresponds to an OLE DB data source object, representing a connection through a provider to a data source. One or more database sessions, each represented by a `CSession` object, can take place on a single connection.  
  
 [CEnumerator](../data/cenumerator-class.md)  
 Corresponds to an OLE DB enumerator object, which retrieves rowset information about available data sources.  
  
 [CEnumeratorAccessor](../data/cenumeratoraccessor-class.md)  
 Used by `CEnumerator` to access the data from the enumerator rowset. This rowset consists of the data sources and enumerators visible from the current enumerator.  
  
 [CSession](../data/csession-class.md)  
 Represents a single database access session. One or more sessions can be associated with each `CDataSource` object.  
  
## Accessor Classes  
 [CAccessor](../data/caccessor-class.md)  
 Used for records that are statically bound to a data source. Use this accessor class when you know the structure of the data source.  
  
 [CAccessorBase](../data/caccessorbase-class.md)  
 Base class for all accessor classes.  
  
 [CDynamicAccessor](../data/cdynamicaccessor-class.md)  
 An accessor that can be created at run time, based on the column information of the rowset. Use this class to retrieve data if you do not know the structure of the data source.  
  
 [CDynamicParameterAccessor](../data/cdynamicparameteraccessor-class.md)  
 An accessor that can be used when command types are unknown. Obtains the parameter information by calling the `ICommandWithParameters` interface, if the provider supports the interface.  
  
 [CDynamicStringAccessor](../data/cdynamicstringaccessor-class.md)  
 Allows you to access a data source when you have no knowledge of the database's underlying structure.  
  
 [CDynamicStringAccessorA](../data/cdynamicstringaccessora-class.md)  
 Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as ANSI string data.  
  
 [CDynamicStringAccessorW](../data/cdynamicstringaccessorw-class.md)  
 Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as UNICODE string data.  
  
 [CManualAccessor](../data/cmanualaccessor-class.md)  
 An accessor with methods to handle both columns and command parameters. With this class, you can use any data types as long as the provider can convert the type.  
  
 [CNoAccessor](../data/cnoaccessor-class.md)  
 Can be used as a template argument when you do not want the class to support parameters or output columns.  
  
 [CXMLAccessor](../data/cxmlaccessor-class.md)  
 Similar to `CDynamicStringAccessor` except that this class converts all data accessed from the data store as XML-formatted (tagged) data.  
  
## Rowset Classes  
 [CAccessorRowset](../data/caccessorrowset-class.md)  
 Encapsulates a rowset and its associated accessors.  
  
 [CArrayRowset](../data/carrayrowset-class.md)  
 Used to access elements of a rowset using array syntax.  
  
 [CBulkRowset](../data/cbulkrowset-class.md)  
 Used to fetch and manipulate rows in bulk by retrieving multiple row handles with a single call.  
  
 [CNoRowset](../data/cnorowset-class.md)  
 Can be used as a template argument if the command does not return a rowset.  
  
 [CRestrictions](../data/crestrictions-class.md)  
 Used to specify restrictions for schema rowsets.  
  
 [CRowset](../data/crowset-class.md)  
 Used to manipulate, set, and retrieve rowset data.  
  
 [CStreamRowset](../data/cstreamrowset-class.md)  
 Returns an `ISequentialStream` object rather than a rowset; you then use the **Read** method to retrieve data in XML format. (SQL Server 2000 does the formatting; note that this feature works with SQL Server 2000 only.)  
  
 [IRowsetNotifyImpl](../data/irowsetnotifyimpl-class.md)  
 Provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods `OnFieldChange`, `OnRowChange`, and `OnRowsetChange`.  
  
 [Schema Rowset Classes and Typedef Classes](../data/schema-rowset-classes-and-typedef-classes.md)  
  
 The OLE DB Templates provide you with a set of classes that correspond to the OLE DB schema rowsets.  
  
## Command Classes  
 [CCommand](../data/ccommand-class.md)  
 Used to set and execute a parameter-based OLE DB command. To merely open a simple rowset, use `CTable` instead.  
  
 [CMultipleResults](../data/cmultipleresults-class.md)  
 Used as a template argument for the `CCommand` template when you want the command to handle multiple result sets.  
  
 [CNoAccessor](../data/cnoaccessor-class.md)  
 Used as a template argument for template classes, such as `CCommand` and `CTable`, that take an accessor class argument. Use `CNoAccessor` if you do not want the class to support parameters or output columns.  
  
 [CNoMultipleResults](../data/cnomultipleresults-class.md)  
 Used as a template argument for the `CCommand` template when you want the command to handle a single rowset. `CNoMultipleResults` is the default value for the template argument.  
  
 [CNoRowset](../data/cnorowset-class.md)  
 Used as a template argument for `CCommand` or `CTable` if the command or table does not return a rowset.  
  
 [CTable](../data/ctable-class.md)  
 Used to access a simple rowset with no parameters.  
  
## Property Classes  
 [CDBPropIDSet](../data/cdbpropidset-class.md)  
 Used to pass an array of property IDs for which the consumer wants property information. The properties belong to one property set.  
  
 [CDBPropSet](../data/cdbpropset-class.md)  
 Used to set properties on a provider.  
  
## Bookmark Class  
 [CBookmark](../data/cbookmark-class.md)  
 Used as an index for accessing data in a rowset.  
  
## Error Class  
 [CDBErrorInfo](../data/cdberrorinfo-class.md)  
 Used to retrieve OLE DB error information.  
  
## See Also  
 [OLE DB Provider Templates Reference](../data/ole-db-provider-templates-reference.md)   
 [OLE DB Templates](../data/ole-db-templates.md)