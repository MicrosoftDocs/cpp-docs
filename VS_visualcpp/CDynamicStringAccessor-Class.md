---
title: "CDynamicStringAccessor Class"
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
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
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
# CDynamicStringAccessor Class
Allows you to access a data source when you have no knowledge of the database schema (the database's underlying structure).  
  
## Syntax  
  
```  
  
      template< typename BaseType, DBTYPEENUM OleDbType >  
class CDynamicStringAccessorT : public CDynamicAccessor  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetString](../VS_visualcpp/CDynamicStringAccessor--GetString.md)|Retrieves the specified column data as a string.|  
|[SetString](../VS_visualcpp/CDynamicStringAccessor--SetString.md)|Sets the specified column data as a string.|  
  
## Remarks  
 While [CDynamicAccessor](../VS_visualcpp/CDynamicAccessor-Class.md) requests data in the native format reported by the provider, `CDynamicStringAccessor` requests that the provider fetch all data accessed from the data store as string data. This is especially useful for simple tasks that do not require calculation of values in the data store, such as displaying or printing the data store's contents.  
  
 The native type of column data in the data store does not matter; as long as the provider can support the data conversion, it will supply the data in string format. If the provider does not support the conversion from the native data type to a string (which is not common), the requesting call will return the success value **DB_S_ERRORSOCCURED**, and the status for the corresponding column will indicate a conversion problem with **DBSTATUS_E_CANTCONVERTVALUE**.  
  
 Use `CDynamicStringAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer created and managed by this class. Obtain data from the buffer using [GetString](../VS_visualcpp/CDynamicStringAccessor--GetString.md), or store it to the buffer using [SetString](../VS_visualcpp/CDynamicStringAccessor--SetString.md).  
  
 For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../VS_visualcpp/Using-Dynamic-Accessors.md).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)   
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)   
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CDynamicStringAccessorA Class](../VS_visualcpp/CDynamicStringAccessorA-Class.md)   
 [CDynamicStringAccessorW Class](../VS_visualcpp/CDynamicStringAccessorW-Class.md)   
 [CXMLAccessor Class](../VS_visualcpp/CXMLAccessor-Class.md)