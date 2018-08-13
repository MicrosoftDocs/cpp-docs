---
title: "IGetDataSourceImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["IGetDataSourceImpl", "ATL.IGetDataSourceImpl<T>", "ATL.IGetDataSourceImpl", "ATL::IGetDataSourceImpl", "ATL::IGetDataSourceImpl<T>", "GetDataSource", "IGetDataSourceImpl.GetDataSource", "IGetDataSourceImpl::GetDataSource"]
dev_langs: ["C++"]
helpviewer_keywords: ["IGetDataSourceImpl class", "GetDataSource method"]
ms.assetid: d63f3178-d663-4f01-8c09-8aab2dd6805a
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IGetDataSourceImpl Class
Provides an implementation of the [IGetDataSource](https://msdn.microsoft.com/library/ms709721.aspx) object.  
  
## Syntax

```cpp
template <class T>  
class ATL_NO_VTABLE IGetDataSourceImpl : public IGetDataSource  
```  
  
### Parameters  
 *T*  
 Your class, derived from `IGetDataSourceImpl`.  

## Requirements  
 **Header:** atldb.h  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetDataSource](#getdatasource)|Returns an interface pointer on the data source object that created the session.|  
  
## Remarks  
 This is a mandatory interface on the session for obtaining an interface pointer to the data source object.  

## <a name="getdatasource"></a> IGetDataSourceImpl::GetDataSource
Returns an interface pointer on the data source object that created the session.  
  
### Syntax  
  
```cpp
STDMETHOD(GetDataSource)(REFIID riid,   
   IUnknown ** ppDataSource);  
```  
  
#### Parameters  
 See [IGetDataSource::GetDataSource](https://msdn.microsoft.com/library/ms725443.aspx) in the *OLE DB Programmer's Reference*.  
  
### Remarks  
 Useful if you need to access properties in the data source object.  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)