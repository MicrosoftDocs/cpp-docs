---
title: "CDataSource::GetProperty"
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
ms.assetid: 6531147c-b164-4ab5-a4a7-509634b85b4d
caps.latest.revision: 8
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
 To get multiple properties, use [GetProperties](../VS_visualcpp/CDataSource--GetProperties.md).  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CDataSource Class](../VS_visualcpp/CDataSource-Class.md)