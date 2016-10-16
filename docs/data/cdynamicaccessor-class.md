---
title: "CDynamicAccessor Class"
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
  - "ATL.CDynamicAccessor"
  - "ATL::CDynamicAccessor"
  - "CDynamicAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicAccessor class"
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
caps.latest.revision: 10
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
# CDynamicAccessor Class
Allows you to access a data source when you have no knowledge of the database schema (the database's underlying structure).  
  
## Syntax  
  
```  
class CDynamicAccessor : public CAccessorBase  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[AddBindEntry](../data/cdynamicaccessor--addbindentry.md)|Adds a bind entry to the output columns when overriding the default accessor.|  
|[CDynamicAccessor](../data/cdynamicaccessor-class.md)|Instantiates and initializes the `CDynamicAccessor` object.|  
|[Close](../data/cdynamicaccessor--close.md)|Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface pointer in the class.|  
|[GetBookmark](../data/cdynamicaccessor--getbookmark.md)|Retrieves the bookmark for the current row.|  
|[GetBlobHandling](../data/cdynamicaccessor--getblobhandling.md)|Retrieves the BLOB handling value for the current row.|  
|[GetBlobSizeLimit](../data/cdynamicaccessor--getblobsizelimit.md)|Retrieves the maximum BLOB size in bytes.|  
|[GetColumnCount](../data/cdynamicaccessor--getcolumncount.md)|Retrieves the number of columns in the rowset.|  
|[GetColumnFlags](../data/cdynamicaccessor--getcolumnflags.md)|Retrieves the column characteristics.|  
|[GetColumnInfo](../data/cdynamicaccessor--getcolumninfo.md)|Retrieves the column metadata.|  
|[GetColumnName](../data/cdynamicaccessor--getcolumnname.md)|Retrieves the name of a specified column.|  
|[GetColumnType](../data/cdynamicaccessor--getcolumntype.md)|Retrieves the data type of a specified column.|  
|[GetLength](../data/cdynamicaccessor--getlength.md)|Retrieves the maximum possible length of a column in bytes.|  
|[GetOrdinal](../data/cdynamicaccessor--getordinal.md)|Retrieves the column index given a column name.|  
|[GetStatus](../data/cdynamicaccessor--getstatus.md)|Retrieves the status of a specified column.|  
|[GetValue](../data/cdynamicaccessor--getvalue.md)|Retrieves the data from the buffer.|  
|[SetBlobHandling](../data/cdynamicaccessor--setblobhandling.md)|Sets the BLOB handling value for the current row.|  
|[SetBlobSizeLimit](../data/cdynamicaccessor--setblobsizelimit.md)|Sets the maximum BLOB size in bytes.|  
|[SetLength](../data/cdynamicaccessor--setlength.md)|Sets the length of the column in bytes.|  
|[SetStatus](../data/cdynamicaccessor--setstatus.md)|Sets the status of a specified column.|  
|[SetValue](../data/cdynamicaccessor--setvalue.md)|Stores the data to the buffer.|  
  
## Remarks  
 Use `CDynamicAccessor` methods to obtain column information such as column names, column count, data type, and so on. You then use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer that is created and managed by this class. Obtain data from the buffer using [GetValue](../data/cdynamicaccessor--getvalue.md).  
  
 For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../data/using-dynamic-accessors.md).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../data/caccessor-class.md)   
 [CDynamicParameterAccessor Class](../data/cdynamicparameteraccessor-class.md)   
 [CManualAccessor Class](../data/cmanualaccessor-class.md)