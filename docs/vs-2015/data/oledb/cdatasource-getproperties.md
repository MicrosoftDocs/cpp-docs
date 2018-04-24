---
title: "CDataSource::GetProperties | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CDataSource::GetProperties"
  - "ATL.CDataSource.GetProperties"
  - "CDataSource.GetProperties"
  - "ATL::CDataSource::GetProperties"
  - "GetProperties"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetProperties method"
ms.assetid: ffaecc17-9fe7-449e-94d6-43d31ad06cfc
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CDataSource::GetProperties
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CDataSource::GetProperties](https://docs.microsoft.com/cpp/data/oledb/cdatasource-getproperties).  
  
  
Returns the property information requested for the connected data source object.  
  
## Syntax  
  
```  
  
      HRESULT GetProperties(   
   ULONG ulPropIDSets,   
   const DBPROPIDSET* pPropIDSet,   
   ULONG* pulPropertySets,   
   DBPROPSET** ppPropsets    
) const throw( );  
```  
  
#### Parameters  
 See [IDBProperties::GetProperties](https://msdn.microsoft.com/library/ms714344.aspx) in the *OLE DB Programmer's Reference* in the [!INCLUDE[winSDK](../../includes/winsdk-md.md)].  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 To get a single property, use [GetProperty](../../data/oledb/cdatasource-getproperty.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../../data/oledb/cdatasource-class.md)

