---
title: "IRowsetImpl::m_bCanFetchBack | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["ATL.IRowsetImpl.m_bCanFetchBack", "ATL::IRowsetImpl::m_bCanFetchBack", "IRowsetImpl.m_bCanFetchBack", "IRowsetImpl::m_bCanFetchBack", "m_bCanFetchBack"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_bCanFetchBack"]
ms.assetid: cfa007b0-7ba5-48a3-9d05-9f1916305fb7
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetImpl::m_bCanFetchBack
Indicates whether a provider supports backward fetching.  
  
## Syntax  
  
```cpp
unsigned m_bCanFetchBack:1;  
  
```  
  
## Remarks  
 Linked to the **DBPROP_CANFETCHBACKWARDS** property in the **DBPROPSET_ROWSET** group. The provider must support **DBPROP_CANFETCHBACKWARDS** for **m_bCanFetchBackwards** to be true.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)   
 [IRowsetImpl::m_bCanScrollBack](../../data/oledb/irowsetimpl-m-bcanscrollback.md)