---
title: "IColumnsInfoImpl::GetColumnInfo | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.technology: ["cpp-data"]
ms.topic: "reference"
f1_keywords: ["GetColumnInfo", "ATL::IColumnsInfoImpl::GetColumnInfo", "ATL.IColumnsInfoImpl.GetColumnInfo", "ATL::IColumnsInfoImpl<T>::GetColumnInfo", "IColumnsInfoImpl::GetColumnInfo", "IColumnsInfoImpl<T>::GetColumnInfo", "IColumnsInfoImpl.GetColumnInfo"]
dev_langs: ["C++"]
helpviewer_keywords: ["GetColumnInfo method"]
ms.assetid: a6739a39-7402-496a-b544-a5b1ed05fadf
author: "mikeblome"
ms.author: "mblome"
ms.workload: ["cplusplus", "data-storage"]
---
# IColumnsInfoImpl::GetColumnInfo
Returns the column metadata needed by most consumers.  
  
## Syntax  
  
```cpp
      STDMETHOD (GetColumnInfo)(DBORDINAL* pcColumns,  
   DBCOLUMNINFO** prgInfo,  
   OLECHAR** ppStringsBuffer);  
```  
  
#### Parameters  
 See [IColumnsInfo::GetColumnInfo](https://msdn.microsoft.com/en-us/library/ms722704.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IColumnsInfoImpl Class](../../data/oledb/icolumnsinfoimpl-class.md)   
 [IColumnsInfoImpl::MapColumnIDs](../../data/oledb/icolumnsinfoimpl-mapcolumnids.md)