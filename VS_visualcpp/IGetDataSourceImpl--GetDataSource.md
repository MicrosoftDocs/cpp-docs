---
title: "IGetDataSourceImpl::GetDataSource"
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
ms.assetid: b70995d2-b951-452e-a2d4-fb3eb085886e
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
# IGetDataSourceImpl::GetDataSource
Returns an interface pointer on the data source object that created the session.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetDataSource)(   
   REFIID riid,   
   IUnknown ** ppDataSource    
);  
```  
  
#### Parameters  
 See [IGetDataSource::GetDataSource](https://msdn.microsoft.com/en-us/library/ms725443.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Useful if you need to access properties in the data source object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IGetDataSourceImpl Class](../VS_visualcpp/IGetDataSourceImpl-Class.md)