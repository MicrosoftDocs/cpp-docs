---
title: "CXMLAccessor::GetXMLRowData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CXMLAccessor::GetXMLRowData"
  - "ATL.CXMLAccessor.GetXMLRowData"
  - "CXMLAccessor::GetXMLRowData"
  - "CXMLAccessor.GetXMLRowData"
  - "GetXMLRowData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetXMLRowData method"
ms.assetid: 156b66e3-42fd-491c-8943-38cf5e36f687
caps.latest.revision: 9
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
# CXMLAccessor::GetXMLRowData
Retrieves the entire contents of a table as XML-formatted string data, by row.  
  
## Syntax  
  
```  
  
      HRESULT GetXMLRowData(   
   CSimpleStringW& strOutput,   
   bool bAppend = false    
) throw( );  
```  
  
#### Parameters  
 `strOutput`  
 [out] A reference to a buffer containing the table data to be retrieved. The data is formatted as string data with XML tag names that match the data store's column names.  
  
 *bAppend*  
 [in] A Boolean value specifying whether to append a string to the end of the output data.  
  
## Return Value  
 One of the standard `HRESULT` values.  
  
## Remarks  
 The following shows how the row data is formatted in XML. `DATA` below represents the row data. Use move methods to move to the desired row.  
  
 `<row>`  
  
 `<column name>DATA</column name>`  
  
 `</row>`  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CXMLAccessor Class](../../data/oledb/cxmlaccessor-class.md)