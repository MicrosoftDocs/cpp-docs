---
title: "IGetDataSourceImpl::GetDataSource | Microsoft Docs"
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
  - "GetDataSource"
  - "IGetDataSourceImpl.GetDataSource"
  - "IGetDataSourceImpl::GetDataSource"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetDataSource method"
ms.assetid: b70995d2-b951-452e-a2d4-fb3eb085886e
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IGetDataSourceImpl::GetDataSource
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IGetDataSourceImpl::GetDataSource](https://docs.microsoft.com/cpp/data/oledb/igetdatasourceimpl-getdatasource).  
  
  
Returns an interface pointer on the data source object that created the session.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetDataSource)(   
   REFIID riid,   
   IUnknown ** ppDataSource    
);  
```  
  
#### Parameters  
 See [IGetDataSource::GetDataSource](https://msdn.microsoft.com/library/ms725443.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Useful if you need to access properties in the data source object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IGetDataSourceImpl Class](../../data/oledb/igetdatasourceimpl-class.md)

