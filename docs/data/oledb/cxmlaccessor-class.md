---
title: "CXMLAccessor Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CXMLAccessor"
  - "CXMLAccessor"
  - "ATL.CXMLAccessor"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "CXMLAccessor class"
ms.assetid: c88c082c-ec2f-4351-8947-a330b15e448a
caps.latest.revision: 12
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
|[GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md)|Retrieves the column information.|  
|[GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md)|Retrieves the entire contents of a table by rows.|  
  
## Remarks  
 However, `CXMLAccessor` differs from `CDynamicStringAccessorW` in that it converts all data accessed from the data store as XML-formatted (tagged) data. This is especially useful for output to XML-aware Web pages. The XML tag names will match the data store's column names as closely as possible.  
  
 Use `CDynamicAccessor` methods to obtain column information. You use this column information to create an accessor dynamically at run time.  
  
 The column information is stored in a buffer created and managed by this class. Obtain column information using [GetXMLColumnData](../../data/oledb/cxmlaccessor-getxmlcolumndata.md) or obtain column data by rows using [GetXMLRowData](../../data/oledb/cxmlaccessor-getxmlrowdata.md).  
  
## Example  
 [!code-cpp[NVC_OLEDB_Consumer#14](../../data/oledb/codesnippet/cpp/cxmlaccessor-class_1.cpp)]  
  
## Requirements  
 **Header**: atldbcli.h  
  
## See Also  
 [OLE DB Consumer Templates](../../data/oledb/ole-db-consumer-templates-cpp.md)   
 [OLE DB Consumer Templates Reference](../../data/oledb/ole-db-consumer-templates-reference.md)   
 [CAccessor Class](../../data/oledb/caccessor-class.md)   
 [CDynamicAccessor Class](../../data/oledb/cdynamicaccessor-class.md)   
 [CDynamicParameterAccessor Class](../../data/oledb/cdynamicparameteraccessor-class.md)   
 [CDynamicStringAccessor Class](../../data/oledb/cdynamicstringaccessor-class.md)   
 [CDynamicStringAccessorA Class](../../data/oledb/cdynamicstringaccessora-class.md)   
 [CDynamicStringAccessorW Class](../../data/oledb/cdynamicstringaccessorw-class.md)   
 [CManualAccessor Class](../../data/oledb/cmanualaccessor-class.md)