---
title: "IRowsetInfoImpl::GetSpecification"
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
ms.assetid: 8e14289d-9cca-4df7-a9e0-f4ef03c61e30
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
# IRowsetInfoImpl::GetSpecification
Returns an interface pointer on the object (command or session) that created this rowset.  
  
## Syntax  
  
```  
  
      STDMETHOD ( GetSpecification )(  
   REFIID riid,  
   IUnknown** ppSpecification   
);  
```  
  
#### Parameters  
 See [IRowsetInfo::GetSpecification](https://msdn.microsoft.com/en-us/library/ms716746.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Use this method with [IGetDataSourceImpl](../VS_visualcpp/IGetDataSourceImpl-Class.md) to retrieve properties from the data source object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetInfoImpl Class](../VS_visualcpp/IRowsetInfoImpl-Class.md)   
 [IRowsetInfoImpl::GetReferencedRowset](../VS_visualcpp/IRowsetInfoImpl--GetReferencedRowset.md)   
 [IRowsetInfoImpl::GetProperties](../VS_visualcpp/IRowsetInfoImpl--GetProperties.md)