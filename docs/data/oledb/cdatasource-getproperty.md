---
title: "CDataSource::GetProperty | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "ATL::CDataSource::GetProperty"
  - "ATL.CDataSource.GetProperty"
  - "CDataSource.GetProperty"
  - "CDataSource::GetProperty"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProperty method"
ms.assetid: 6531147c-b164-4ab5-a4a7-509634b85b4d
caps.latest.revision: 8
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
# CDataSource::GetProperty
Returns the value of a specified property for the connected data source object.  
  
## Syntax  
  
```  
  
      HRESULT GetProperty(   
   const GUID& guid,   
   DBPROPID propid,   
   VARIANT* pVariant    
) const throw( );  
```  
  
#### Parameters  
 `guid`  
 [in] A GUID identifying the property set for which to return the property.  
  
 `propid`  
 [in] Property ID for the property to return.  
  
 *pVariant*  
 [out] A pointer to the variant where **GetProperty** returns the value of the property.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 To get multiple properties, use [GetProperties](../../data/oledb/cdatasource-getproperties.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)