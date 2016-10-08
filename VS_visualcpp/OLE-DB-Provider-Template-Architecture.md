---
title: "OLE DB Provider Template Architecture"
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
ms.assetid: 639304a3-f9e0-44dc-8d0c-0ebd2455b363
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
# OLE DB Provider Template Architecture
## Data Sources and Sessions  
 The OLE DB provider architecture includes a data source object and one or more sessions. The data source object is the initial object that every provider must instantiate. When a consumer application needs data, it co-creates the data source object to start the provider. The data source object creates a session object (using the **IDBCreateSession** interface) through which the consumer connects to the data source object. ODBC programmers can think of the data source object as being equivalent to the **HENV** and the session object as equivalent to the **HDBC**.  
  
 ![Provider architecture](../VS_visualcpp/media/vc4TWB1.gif "vc4TWB1")  
  
 Together with the source files created by the OLE DB Provider Wizard, the OLE DB templates implement a data source object. A session is an object that corresponds to the OLE DB **TSession**.  
  
## Mandatory and Optional Interfaces  
 The OLE DB provider templates give you prepackaged implementations for all the required interfaces. Mandatory and optional interfaces are defined by OLE DB for several types of objects:  
  
-   [Data source](../VS_visualcpp/Data-Source-Object-Interfaces.md)  
  
-   [Session](../VS_visualcpp/Session-Object-Interfaces.md)  
  
-   [Rowset](../VS_visualcpp/Rowset-Object-Interfaces.md)  
  
-   [Command](../VS_visualcpp/Command-Object-Interfaces.md)  
  
-   [Transaction](../VS_visualcpp/Transaction-Object-Interfaces.md)  
  
 Note that the OLE DB provider templates do not implement the row and storage objects.  
  
 The following table lists mandatory and optional interfaces for the objects listed above, according to the [OLE DB 2.6 SDK Documentation](https://msdn.microsoft.com/en-us/library/ms722784.aspx).  
  
|Component|Interface|Comment|  
|---------------|---------------|-------------|  
|[Data source](../VS_visualcpp/Data-Source-Object-Interfaces.md) ([CDataSource](../VS_visualcpp/CDataSource-Class.md))|[mandatory] **IDBCreateSession**<br /><br /> [mandatory] **IDBInitialize**<br /><br /> [mandatory] `IDBProperties`<br /><br /> [mandatory] `IPersist`<br /><br /> [optional] **IConnectionPointContainer**<br /><br /> [optional] **IDBAsynchStatus**<br /><br /> [optional] **IDBDataSourceAdmin**<br /><br /> [optional] **IDBInfo**<br /><br /> [optional] `IPersistFile`<br /><br /> [optional] **ISupportErrorInfo**|Connection from the consumer to the provider. The object is used to specify properties on the connection such as user ID, password, and data source name. The object can also be used to administer a data source (create, update, delete, tables, and so on).|  
|[Session](../VS_visualcpp/Session-Object-Interfaces.md) ([CSession](../VS_visualcpp/CDataConnection--operator-CSession-.md))|[mandatory] **IGetDataSource**<br /><br /> [mandatory] `IOpenRowset`<br /><br /> [mandatory] **ISessionProperties**<br /><br /> [optional] **IAlterIndex**<br /><br /> [optional] **IAlterTable**<br /><br /> [optional] **IBindResource**<br /><br /> [optional] **ICreateRow**<br /><br /> [optional] **IDBCreateCommand**<br /><br /> [optional] **IDBSchemaRowset**<br /><br /> [optional] **IIndexDefinition**<br /><br /> [optional] **ISupportErrorInfo**<br /><br /> [optional] **ITableCreation**<br /><br /> [optional] **ITableDefinition**<br /><br /> [optional] **ITableDefinitionWithConstraints**<br /><br /> [optional] **ITransaction**<br /><br /> [optional] **ITransactionJoin**<br /><br /> [optional] **ITransactionLocal**<br /><br /> [optional] **ITransactionObject**|The session object represents a single conversation between a consumer and provider. It is somewhat similar to the ODBC **HSTMT** in that there can be many simultaneous sessions active.<br /><br /> The session object is the primary link to get to OLE DB functionality. To get to a command, transaction, or rowset object, you go through the session object.|  
|[Rowset](../VS_visualcpp/Rowset-Object-Interfaces.md) ([CRowset](../VS_visualcpp/CRowset-Class.md))|[mandatory] `IAccessor`<br /><br /> [mandatory] `IColumnsInfo`<br /><br /> [mandatory] **IConvertType**<br /><br /> [mandatory] `IRowset`<br /><br /> [mandatory] `IRowsetInfo`<br /><br /> [optional] **IChapteredRowset**<br /><br /> [optional] **IColumnsInfo2**<br /><br /> [optional] **IColumnsRowset**<br /><br /> [optional] **IConnectionPointContainer**<br /><br /> [optional] **IDBAsynchStatus**<br /><br /> [optional] **IGetRow**<br /><br /> [optional] `IRowsetChange`<br /><br /> [optional] **IRowsetChapterMember**<br /><br /> [optional] **IRowsetCurrentIndex**<br /><br /> [optional] **IRowsetFind**<br /><br /> [optional] **IRowsetIdentity**<br /><br /> [optional] **IRowsetIndex**<br /><br /> [optional] `IRowsetLocate`<br /><br /> [optional] **IRowsetRefresh**<br /><br /> [optional] `IRowsetScroll`<br /><br /> [optional] `IRowsetUpdate`<br /><br /> [optional] **IRowsetView**<br /><br /> [optional] **ISupportErrorInfo**<br /><br /> [optional] **IRowsetBookmark**|The rowset object represents the data from the data source. The object is responsible for the bindings of that data and any basic operations (update, fetch, movement, and others) on the data. You always have a rowset object to contain and manipulate data.|  
|[Command](../VS_visualcpp/Command-Object-Interfaces.md) ([CCommand](assetId:///52bef5da-c1a0-4223-b4e6-9e464b6db409))|[mandatory] `IAccessor`<br /><br /> [mandatory] `IColumnsInfo`<br /><br /> [mandatory] `ICommand`<br /><br /> [mandatory] **ICommandProperties**<br /><br /> [mandatory] `ICommandText`<br /><br /> [mandatory] **IConvertType**<br /><br /> [optional] **IColumnsRowset**<br /><br /> [optional] **ICommandPersist**<br /><br /> [optional] **ICommandPrepare**<br /><br /> [optional] `ICommandWithParameters`<br /><br /> [optional] **ISupportErrorInfo**<br /><br /> [optional] **ICommandStream**|The command object handles operations on data such as queries. It can handle parameterized or non-parameterized statements.<br /><br /> The command object is also responsible for handling bindings for parameters and output columns. A binding is a structure that contains information about how a column, in a rowset, should be retrieved. It contains information such as ordinal, data type, length, and status.|  
|[Transaction](../VS_visualcpp/Transaction-Object-Interfaces.md) (optional)|[mandatory] **IConnectionPointContainer**<br /><br /> [mandatory] **ITransaction**<br /><br /> [optional] **ISupportErrorInfo**|The transaction object defines an atomic unit of work on a data source and determines how those units of work relate to each other. This object is not directly supported by the OLE DB provider templates (that is, you create your own object).|  
  
 For more information, see the following topics:  
  
-   [Property Maps](../VS_visualcpp/Property-Maps.md)  
  
-   [The User Record](../VS_visualcpp/User-Record.md)  
  
## See Also  
 [OLE DB Provider Templates](../VS_visualcpp/OLE-DB-Provider-Templates--C---.md)   
 [OLE DB Interfaces](https://msdn.microsoft.com/en-us/library/ms709709.aspx)