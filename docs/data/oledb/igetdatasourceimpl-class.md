---
title: "IGetDataSourceImpl Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IGetDataSourceImpl"
  - "ATL.IGetDataSourceImpl<T>"
  - "ATL.IGetDataSourceImpl"
  - "ATL::IGetDataSourceImpl"
  - "ATL::IGetDataSourceImpl<T>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "IGetDataSourceImpl class"
ms.assetid: d63f3178-d663-4f01-8c09-8aab2dd6805a
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
translation.priority.ht: 
  - "cs-cz"
  - "de-de"
  - "es-es"
  - "fr-fr"
  - "it-it"
  - "ja-jp"
  - "ko-kr"
  - "pl-pl"
  - "pt-br"
  - "ru-ru"
  - "tr-tr"
  - "zh-cn"
  - "zh-tw"
---
# IGetDataSourceImpl Class
Provides an implementation of the [IGetDataSource](https://msdn.microsoft.com/en-us/library/ms709721.aspx) object.  
  
## Syntax  
  
```  
template <class T>  
class ATL_NO_VTABLE IGetDataSourceImpl : public IGetDataSource  
```  
  
#### Parameters  
 `T`  
 Your class, derived from `IGetDataSourceImpl`.  
  
## Members  
  
### Interface Methods  
  
|||  
|-|-|  
|[GetDataSource](../../data/oledb/igetdatasourceimpl-getdatasource.md)|Returns an interface pointer on the data source object that created the session.|  
  
## Remarks  
 This is a mandatory interface on the session for obtaining an interface pointer to the data source object.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [OLE DB Provider Templates](../../data/oledb/ole-db-provider-templates-cpp.md)   
 [OLE DB Provider Template Architecture](../../data/oledb/ole-db-provider-template-architecture.md)