---
title: "OLE DB Consumer Templates Reference"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: cfc7f698-1a0e-4a09-a4d3-ccb99e6654fe
caps.latest.revision: 7
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
---
# OLE DB Consumer Templates Reference
The OLE DB Consumer Templates contain the following classes. The reference material also includes topics on the [macros for OLE DB Consumer Templates](../VS_visualcpp/Macros-and-Global-Functions-for-OLE-DB-Consumer-Templates.md).  
  
## Session Classes  
 [CDataConnection](../VS_visualcpp/CDataConnection-Class.md)  
 Manages the connection with the data source. This is a useful class for creating clients because it encapsulates necessary objects (data source and session) and some of the work you need to do when connecting to a data source.  
  
 [CDataSource](../VS_visualcpp/CDataSource-Class.md)  
 Corresponds to an OLE DB data source object, representing a connection through a provider to a data source. One or more database sessions, each represented by a `CSession` object, can take place on a single connection.  
  
 [CEnumerator](../VS_visualcpp/CEnumerator-Class.md)  
 Corresponds to an OLE DB enumerator object, which retrieves rowset information about available data sources.  
  
 [CEnumeratorAccessor](../VS_visualcpp/CEnumeratorAccessor-Class.md)  
 Used by `CEnumerator` to access the data from the enumerator rowset. This rowset consists of the data sources and enumerators visible from the current enumerator.  
  
 [CSession](../VS_visualcpp/CSession-Class.md)  
 Represents a single database access session. One or more sessions can be associated with each `CDataSource` object.  
  
## Accessor Classes  
 [CAccessor](../VS_visualcpp/CAccessor-Class.md)  
 Used for records that are statically bound to a data source. Use this accessor class when you know the structure of the data source.  
  
 [CAccessorBase](../VS_visualcpp/CAccessorBase-Class.md)  
 Base class for all accessor classes.  
  
 [CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md)  
 An accessor that can be created at run time, based on the column information of the rowset. Use this class to retrieve data if you do not know the structure of the data source.  
  
 [CDynamicParameterAccessor](../VS_visualcpp/CDynamicParameterAccessor-Class.md)  
 An accessor that can be used when command types are unknown. Obtains the parameter information by calling the `ICommandWithParameters` interface, if the provider supports the interface.  
  
 [CDynamicStringAccessor](../VS_visualcpp/CDynamicStringAccessor-Class.md)  
 Allows you to access a data source when you have no knowledge of the database's underlying structure.  
  
 [CDynamicStringAccessorA](../VS_visualcpp/CDynamicStringAccessorA-Class.md)  
 Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as ANSI string data.  
  
 [CDynamicStringAccessorW](../VS_visualcpp/CDynamicStringAccessorW-Class.md)  
 Similar to `CDynamicStringAccessor` except that this class requests data accessed from the data store as UNICODE string data.  
  
 [CManualAccessor](../VS_visualcpp/CManualAccessor-Class.md)  
 An accessor with methods to handle both columns and command parameters. With this class, you can use any data types as long as the provider can convert the type.  
  
 [CNoAccessor](../VS_visualcpp/CNoAccessor-Class.md)  
 Can be used as a template argument when you do not want the class to support parameters or output columns.  
  
 [CXMLAccessor](../VS_visualcpp/CXMLAccessor-Class.md)  
 Similar to `CDynamicStringAccessor` except that this class converts all data accessed from the data store as XML-formatted (tagged) data.  
  
## Rowset Classes  
 [CAccessorRowset](../VS_visualcpp/CAccessorRowset-Class.md)  
 Encapsulates a rowset and its associated accessors.  
  
 [CArrayRowset](../VS_visualcpp/CArrayRowset-Class.md)  
 Used to access elements of a rowset using array syntax.  
  
 [CBulkRowset](../VS_visualcpp/CBulkRowset-Class.md)  
 Used to fetch and manipulate rows in bulk by retrieving multiple row handles with a single call.  
  
 [CNoRowset](../VS_visualcpp/CNoRowset-Class.md)  
 Can be used as a template argument if the command does not return a rowset.  
  
 [CRestrictions](../VS_visualcpp/CRestrictions-Class.md)  
 Used to specify restrictions for schema rowsets.  
  
 [CRowset](../VS_visualcpp/CRowset-Class.md)  
 Used to manipulate, set, and retrieve rowset data.  
  
 [CStreamRowset](../VS_visualcpp/CStreamRowset-Class.md)  
 Returns an `ISequentialStream` object rather than a rowset; you then use the **Read** method to retrieve data in XML format. (SQL Server 2000 does the formatting; note that this feature works with SQL Server 2000 only.)  
  
 [IRowsetNotifyImpl](../VS_visualcpp/IRowsetNotifyImpl-Class.md)  
 Provides a dummy implementation for `IRowsetNotify`, with empty functions for the `IRowsetNotify` methods `OnFieldChange`, `OnRowChange`, and `OnRowsetChange`.  
  
 [Schema Rowset Classes and Typedef Classes](../VS_visualcpp/Schema-Rowset-Classes-and-Typedef-Classes.md)  
  
 The OLE DB Templates provide you with a set of classes that correspond to the OLE DB schema rowsets.  
  
## Command Classes  
 [CCommand](../VS_visualcpp/CCommand-Class.md)  
 Used to set and execute a parameter-based OLE DB command. To merely open a simple rowset, use `CTable` instead.  
  
 [CMultipleResults](../VS_visualcpp/CMultipleResults-Class.md)  
 Used as a template argument for the `CCommand` template when you want the command to handle multiple result sets.  
  
 [CNoAccessor](../VS_visualcpp/CNoAccessor-Class.md)  
 Used as a template argument for template classes, such as `CCommand` and `CTable`, that take an accessor class argument. Use `CNoAccessor` if you do not want the class to support parameters or output columns.  
  
 [CNoMultipleResults](../VS_visualcpp/CNoMultipleResults-Class.md)  
 Used as a template argument for the `CCommand` template when you want the command to handle a single rowset. `CNoMultipleResults` is the default value for the template argument.  
  
 [CNoRowset](../VS_visualcpp/CNoRowset-Class.md)  
 Used as a template argument for `CCommand` or `CTable` if the command or table does not return a rowset.  
  
 [CTable](../VS_visualcpp/CTable-Class.md)  
 Used to access a simple rowset with no parameters.  
  
## Property Classes  
 [CDBPropIDSet](../VS_visualcpp/CDBPropIDSet-Class.md)  
 Used to pass an array of property IDs for which the consumer wants property information. The properties belong to one property set.  
  
 [CDBPropSet](../VS_visualcpp/CDBPropSet-Class.md)  
 Used to set properties on a provider.  
  
## Bookmark Class  
 [CBookmark](../VS_visualcpp/CBookmark-Class.md)  
 Used as an index for accessing data in a rowset.  
  
## Error Class  
 [CDBErrorInfo](../VS_visualcpp/CDBErrorInfo-Class.md)  
 Used to retrieve OLE DB error information.  
  
## See Also  
 [OLE DB Provider Templates Reference](../VS_visualcpp/OLE-DB-Provider-Templates-Reference.md)   
 [OLE DB Templates](../VS_visualcpp/OLE-DB-Templates.md)