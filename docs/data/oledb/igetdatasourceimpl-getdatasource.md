---
title: "IGetDataSourceImpl::GetDataSource | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetDataSource", "IGetDataSourceImpl.GetDataSource", "IGetDataSourceImpl::GetDataSource"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetDataSource method"]
ms.assetid: b70995d2-b951-452e-a2d4-fb3eb085886e
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IGetDataSourceImpl::GetDataSource
Returns an interface pointer on the data source object that created the session.  
  
## Syntax  
  
```cpp
      STDMETHOD(GetDataSource)(REFIID riid,   
   IUnknown ** ppDataSource);  
```  
  
#### Parameters  
 See [IGetDataSource::GetDataSource](https://msdn.microsoft.com/en-us/library/ms725443.aspx) in the *OLE DB Programmer's Reference*.  
  
## Remarks  
 Useful if you need to access properties in the data source object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IGetDataSourceImpl Class](../../data/oledb/igetdatasourceimpl-class.md)