---
title: "IDBPropertiesImpl::GetPropertyInfo | Microsoft Docs"
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
  - "IDBPropertiesImpl::GetPropertyInfo"
  - "IDBPropertiesImpl.GetPropertyInfo"
  - "GetPropertyInfo"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "GetPropertyInfo method"
ms.assetid: 170e9640-5010-4e0d-8a54-f50b23af08ad
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IDBPropertiesImpl::GetPropertyInfo
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IDBPropertiesImpl::GetPropertyInfo](https://docs.microsoft.com/cpp/data/oledb/idbpropertiesimpl-getpropertyinfo).  
  
  
Returns property information supported by the data source.  
  
## Syntax  
  
```  
  
      STDMETHOD(GetPropertyInfo)(   
   ULONG cPropertySets,   
   const DBPROPIDSET rgPropertySets[],   
   ULONG * pcPropertyInfoSets,   
   DBPROPINFOSET ** prgPropertyInfoSets,   
   OLECHAR ** ppDescBuffer    
);  
```  
  
#### Parameters  
 See [IDBProperties::GetPropertyInfo](https://msdn.microsoft.com/library/ms718175.aspx) in the *OLE DB Programmer's Reference*.  
  
 Some parameters correspond to *OLE DB Programmer's Reference* parameters of different names, which are described in **IDBProperties::GetPropertyInfo**:  
  
|OLE DB Template parameters|*OLE DB Programmer's Reference* parameters|  
|--------------------------------|------------------------------------------------|  
|`cPropertySets`|`cPropertyIDSets`|  
|`rgPropertySets`|`rgPropertyIDSets`|  
  
## Remarks  
 Uses [IDBInitializeImpl::m_pCUtlPropInfo](../../data/oledb/idbinitializeimpl-m-pcutlpropinfo.md) to implement this functionality.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IDBPropertiesImpl Class](../../data/oledb/idbpropertiesimpl-class.md)   
 [IDBPropertiesImpl::GetProperties](../../data/oledb/idbpropertiesimpl-getproperties.md)   
 [IDBPropertiesImpl::SetProperties](../../data/oledb/idbpropertiesimpl-setproperties.md)

