---
title: "CDataSource::GetProperties"
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
ms.assetid: ffaecc17-9fe7-449e-94d6-43d31ad06cfc
caps.latest.revision: 9
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
# CDataSource::GetProperties
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
 See [IDBProperties::GetProperties](https://msdn.microsoft.com/en-us/library/ms714344.aspx) in the *OLE DB Programmer's Reference* in the Windows SDK.  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 To get a single property, use [GetProperty](../VS_visualcpp/CDataSource--GetProperty.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../VS_visualcpp/CDataSource-Class.md)