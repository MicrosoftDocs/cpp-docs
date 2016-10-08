---
title: "CXMLAccessor Class"
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
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
caps.latest.revision: 12
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
# CXMLAccessor Class
Allows you to access data sources as string data when you have no knowledge of the data store's schema (underlying structure).  
  
## Syntax  
  
```  
class CXMLAccessor : public CDynamicStringAccessorW  
```  
  
## Members  
  
### Methods  
  
|||  
|-|-|  
|[GetXMLColumnData](../VS_visualcpp/CXMLAccessor--GetXMLColumnData.md)|Retrieves the column information.|  
|[GetXMLRowData](../VS_visualcpp/CXMLAccessor--GetXMLRowData.md)|Retrieves the entire contents of a table by rows.|  
  
## Remarks  
 However, `CXMLAccessor` differs from `CDynamicStringAccessorW` in that it converts all data accessed from the data store as XML-formatted (tagged) data. This is especially useful for output to XML-aware Web pages. The XML tag names will match the data store's column names as closely as possible.  
  
 Use `CDynamicAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer created and managed by this class. Obtain column information using [GetXMLColumnData](../VS_visualcpp/CXMLAccessor--GetXMLColumnData.md) or obtain column data by rows using [GetXMLRowData](../VS_visualcpp/CXMLAccessor--GetXMLRowData.md).  
  
## Example  
 [!CODE [NVC_OLEDB_Consumer#14](../CodeSnippet/VS_Snippets_Cpp/NVC_OLEDB_Consumer#14)]  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../VS_visualcpp/OLE-DB-Consumer-Templates--C---.md)   
 [OLE DB Consumer Templates Reference](../VS_visualcpp/OLE-DB-Consumer-Templates-Reference.md)   
 [CAccessor Class](../VS_visualcpp/CAccessor-Class.md)   
 [CDynamicAccessor Class](../VS_visualcpp/CDynamicAccessor-Class.md)   
 [CDynamicParameterAccessor Class](../VS_visualcpp/CDynamicParameterAccessor-Class.md)   
 [CDynamicStringAccessor Class](../VS_visualcpp/CDynamicStringAccessor-Class.md)   
 [CDynamicStringAccessorA Class](../VS_visualcpp/CDynamicStringAccessorA-Class.md)   
 [CDynamicStringAccessorW Class](../VS_visualcpp/CDynamicStringAccessorW-Class.md)   
 [CManualAccessor Class](../VS_visualcpp/CManualAccessor-Class.md)