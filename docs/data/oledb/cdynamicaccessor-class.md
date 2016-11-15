---
title: "CDynamicAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
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
|[AddBindEntry](../../data/oledb/cdynamicaccessor-addbindentry.md)|Adds a bind entry to the output columns when overriding the default accessor.|  
|[CDynamicAccessor](../../data/oledb/cdynamicaccessor-class.md)|Instantiates and initializes the `CDynamicAccessor` object.|  
|[Close](../../data/oledb/cdynamicaccessor-close.md)|Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface pointer in the class.|  
|[GetBookmark](../../data/oledb/cdynamicaccessor-getbookmark.md)|Retrieves the bookmark for the current row.|  
|[GetBlobHandling](../../data/oledb/cdynamicaccessor-getblobhandling.md)|Retrieves the BLOB handling value for the current row.|  
|[GetBlobSizeLimit](../../data/oledb/cdynamicaccessor-getblobsizelimit.md)|Retrieves the maximum BLOB size in bytes.|  
|[GetColumnCount](../../data/oledb/cdynamicaccessor-getcolumncount.md)|Retrieves the number of columns in the rowset.|  
|[GetColumnFlags](../../data/oledb/cdynamicaccessor-getcolumnflags.md)|Retrieves the column characteristics.|  
|[GetColumnInfo](../../data/oledb/cdynamicaccessor-getcolumninfo.md)|Retrieves the column metadata.|  
|[GetColumnName](../../data/oledb/cdynamicaccessor-getcolumnname.md)|Retrieves the name of a specified column.|  
|[GetColumnType](../../data/oledb/cdynamicaccessor-getcolumntype.md)|Retrieves the data type of a specified column.|  
|[GetLength](../../data/oledb/cdynamicaccessor-getlength.md)|Retrieves the maximum possible length of a column in bytes.|  
|[GetOrdinal](../../data/oledb/cdynamicaccessor-getordinal.md)|Retrieves the column index given a column name.|  
|[GetStatus](../../data/oledb/cdynamicaccessor-getstatus.md)|Retrieves the status of a specified column.|  
|[GetValue](../../data/oledb/cdynamicaccessor-getvalue.md)|Retrieves the data from the buffer.|  
|[SetBlobHandling](../../data/oledb/cdynamicaccessor-setblobhandling.md)|Sets the BLOB handling value for the current row.|  
|[SetBlobSizeLimit](../../data/oledb/cdynamicaccessor-setblobsizelimit.md)|Sets the maximum BLOB size in bytes.|  
|[SetLength](../../data/oledb/cdynamicaccessor-setlength.md)|Sets the length of the column in bytes.|  
|[SetStatus](../../data/oledb/cdynamicaccessor-setstatus.md)|Sets the status of a specified column.|  
|[SetValue](../../data/oledb/cdynamicaccessor-setvalue.md)|Stores the data to the buffer.|  
  
## Remarks  
 Use `CDynamicAccessor` methods to obtain column information such as column names, column count, data type, and so on. You then use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer that is created and managed by this class. Obtain data from the buffer using [GetValue](../../data/oledb/cdynamicaccessor-getvalue.md).  
  
 For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../../data/oledb/using-dynamic-accessors.md).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../../data/oledb/caccessor-class.md)   
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)