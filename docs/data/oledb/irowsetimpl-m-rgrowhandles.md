---
title: "IRowsetImpl::m_rgRowHandles | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["IRowsetImpl::m_rgRowHandles", "IRowsetImpl.m_rgRowHandles", "m_rgRowHandles", "ATL::IRowsetImpl::m_rgRowHandles", "ATL.IRowsetImpl.m_rgRowHandles"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_rgRowHandles"]
ms.assetid: d3c2578f-58c4-4301-bf59-cf101a523a95
caps.latest.revision: 8
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# IRowsetImpl::m_rgRowHandles
A map of row handles currently contained by the provider in response to `GetNextRows`.  
  
## Syntax  
  
```cpp
MapClass  
 m_rgRowHandles;  
  
```  
  
## Remarks  
 Row handles are removed by calling `ReleaseRows`. See the [IRowsetImpl overview](../../data/oledb/irowsetimpl-class.md) for the definition of *MapClass*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)