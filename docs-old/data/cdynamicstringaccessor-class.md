---
title: "CDynamicStringAccessor Class"
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
  - "CDynamicStringAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CDynamicStringAccessor class"
ms.assetid: 138dc4de-c7c3-478c-863e-431e48249027
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
|[GetString](../data/cdynamicstringaccessor--getstring.md)|Retrieves the specified column data as a string.|  
|[SetString](../data/cdynamicstringaccessor--setstring.md)|Sets the specified column data as a string.|  
  
## Remarks  
 While [CDynamicAccessor](../data/cdynamicaccessor-class.md) requests data in the native format reported by the provider, `CDynamicStringAccessor` requests that the provider fetch all data accessed from the data store as string data. This is especially useful for simple tasks that do not require calculation of values in the data store, such as displaying or printing the data store's contents.  
  
 The native type of column data in the data store does not matter; as long as the provider can support the data conversion, it will supply the data in string format. If the provider does not support the conversion from the native data type to a string (which is not common), the requesting call will return the success value **DB_S_ERRORSOCCURED**, and the status for the corresponding column will indicate a conversion problem with **DBSTATUS_E_CANTCONVERTVALUE**.  
  
 Use `CDynamicStringAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer created and managed by this class. Obtain data from the buffer using [GetString](../data/cdynamicstringaccessor--getstring.md), or store it to the buffer using [SetString](../data/cdynamicstringaccessor--setstring.md).  
  
 For a discussion and examples of using the dynamic accessor classes, see [Using Dynamic Accessors](../data/using-dynamic-accessors.md).  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../data/ole-db-consumer-templates--c---.md)   
 [OLE DB Consumer Templates Reference](../data/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../data/caccessor-class.md)   
 [CDynamicParameterAccessor Class](../data/cdynamicparameteraccessor-class.md)   
 [CManualAccessor Class](../data/cmanualaccessor-class.md)   
 [CDynamicAccessor Class](../data/cdynamicaccessor-class.md)   
 [CDynamicStringAccessorA Class](../data/cdynamicstringaccessora-class.md)   
 [CDynamicStringAccessorW Class](../data/cdynamicstringaccessorw-class.md)   
 [CXMLAccessor Class](../data/cxmlaccessor-class.md)