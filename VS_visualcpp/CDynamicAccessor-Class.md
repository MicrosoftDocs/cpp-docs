---
title: "CDynamicAccessor Class"
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
ms.assetid: 374b13b7-1f09-457d-9e6b-df260ff4d178
caps.latest.revision: 10
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
|[AddBindEntry](../VS_visualcpp/CDynamicAccessor--AddBindEntry.md)|Adds a bind entry to the output columns when overriding the default accessor.|  
|[CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md)|Instantiates and initializes the `CDynamicAccessor` object.|  
|[Close](../VS_visualcpp/CDynamicAccessor--Close.md)|Unbinds all the columns, releases the allocated memory, and releases the [IAccessor](https://msdn.microsoft.com/en-us/library/ms719672.aspx) interface pointer in the class.|  
|[GetBookmark](../VS_visualcpp/CDynamicAccessor--GetBookmark.md)|Retrieves the bookmark for the current row.|  
|[GetBlobHandling](../VS_visualcpp/CDynamicAccessor--GetBlobHandling.md)|Retrieves the BLOB handling value for the current row.|  
|[GetBlobSizeLimit](../VS_visualcpp/CDynamicAccessor--GetBlobSizeLimit.md)|Retrieves the maximum BLOB size in bytes.|  
|[GetColumnCount](../VS_visualcpp/CDynamicAccessor--GetColumnCount.md)|Retrieves the number of columns in the rowset.|  
|[GetColumnFlags](../VS_visualcpp/CDynamicAccessor--GetColumnFlags.md)|Retrieves the column characteristics.|  
|[GetColumnInfo](../VS_visualcpp/CDynamicAccessor--GetColumnInfo.md)|Retrieves the column metadata.|  
|[GetColumnName](../VS_visualcpp/CDynamicAccessor--GetColumnName.md)|Retrieves the name of a specified column.|  
|[GetColumnType](../VS_visualcpp/CDynamicAccessor--GetColumnType.md)|Retrieves the data type of a specified column.|  
|[GetLength](../VS_visualcpp/CDynamicAccessor--GetLength.md)|Retrieves the maximum possible length of a column in bytes.|  
|[GetOrdinal](../VS_visualcpp/CDynamicAccessor--GetOrdinal.md)|Retrieves the column index given a column name.|  
|[GetStatus](../VS_visualcpp/CDynamicAccessor--GetStatus.md)|Retrieves the status of a specified column.|  
|[GetValue](../VS_visualcpp/CDynamicAccessor--GetValue.md)|Retrieves the data from the buffer.|  
|[SetBlobHandling](../VS_visualcpp/CDynamicAccessor--SetBlobHandling.md)|Sets the BLOB handling value for the current row.|  
|[SetBlobSizeLimit](../VS_visualcpp/CDynamicAccessor--SetBlobSizeLimit.md)|Sets the maximum BLOB size in bytes.|  
|[SetLength](../VS_visualcpp/CDynamicAccessor--SetLength.md)|Sets the length of the column in bytes.|  
|[SetStatus](../VS_visualcpp/CDynamicAccessor--SetStatus.md)|Sets the status of a specified column.|  
|[SetValue](../VS_visualcpp/CDynamicAccessor--SetValue.md)|Stores the data to the buffer.|  
  
## Remarks  
 Use `CDynamicAccessor` methods to obtain column information such as column names, column count, data type, and so on. You then use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer that is created and managed by this class. Obtain data from the buffer using [GetValue](../VS_visualcpp/CDynamicAccessor--GetValue.md).  
  
 For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../VS_visualcpp/Using-Dynamic-Accessors.md).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)   
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)