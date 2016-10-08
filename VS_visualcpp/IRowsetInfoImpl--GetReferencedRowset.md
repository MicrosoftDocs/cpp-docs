---
title: "IRowsetInfoImpl::GetReferencedRowset"
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
ms.assetid: 94d2155c-9da0-4c19-a37c-bc35716359fd
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
# IRowsetInfoImpl::GetReferencedRowset
Returns an interface pointer to the rowset to which a bookmark applies.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetReferencedRowset )(  
   DBORDINAL iOrdinal,  
   REFIID riid,  
   IUnknown** ppReferencedRowset   
);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetReferencedRowset](https://msdn.microsoft.com/en-us/library/ms721145.aspx) in the *OLE DB Programmer's Reference*. The *iOrdinal* parameter must be a bookmark column.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetInfoImpl Class](../VS_visualcpp/IRowsetInfoImpl-Class.md)   
 [IRowsetInfoImpl::GetSpecification](../VS_visualcpp/IRowsetInfoImpl--GetSpecification.md)   
 [IRowsetInfoImpl::GetProperties](../VS_visualcpp/IRowsetInfoImpl--GetProperties.md)