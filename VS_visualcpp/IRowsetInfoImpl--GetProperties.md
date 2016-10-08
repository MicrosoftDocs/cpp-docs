---
title: "IRowsetInfoImpl::GetProperties"
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
ms.assetid: 62c12063-28e0-4a06-ad4d-21c5c1e9ccea
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
# IRowsetInfoImpl::GetProperties
Returns the current settings for properties in the **DBPROPSET_ROWSET** group.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetProperties )(  
   const ULONG cPropertyIDSets,  
   const DBPROPIDSET rgPropertyIDSets[],  
   ULONG* pcPropertySets,  
   DBPROPSET** prgPropertySets   
);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetProperties](https://msdn.microsoft.com/en-us/library/ms719611.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetInfoImpl Class](../VS_visualcpp/IRowsetInfoImpl-Class.md)   
 [IRowsetInfoImpl::GetReferencedRowset](../VS_visualcpp/IRowsetInfoImpl--GetReferencedRowset.md)   
 [IRowsetInfoImpl::GetSpecification](../VS_visualcpp/IRowsetInfoImpl--GetSpecification.md)