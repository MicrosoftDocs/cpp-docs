---
title: "IRowsetImpl::m_rgRowHandles | Microsoft Docs"
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
  - "IRowsetImpl::m_rgRowHandles"
  - "IRowsetImpl.m_rgRowHandles"
  - "m_rgRowHandles"
  - "ATL::IRowsetImpl::m_rgRowHandles"
  - "ATL.IRowsetImpl.m_rgRowHandles"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_rgRowHandles"
ms.assetid: d3c2578f-58c4-4301-bf59-cf101a523a95
caps.latest.revision: 10
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# IRowsetImpl::m_rgRowHandles
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [IRowsetImpl::m_rgRowHandles](https://docs.microsoft.com/cpp/data/oledb/irowsetimpl-m-rgrowhandles).  
  
  
A map of row handles currently contained by the provider in response to `GetNextRows`.  
  
## Syntax  
  
```  
  
MapClass  
 m_rgRowHandles;  
  
```  
  
## Remarks  
 Row handles are removed by calling `ReleaseRows`. See the [IRowsetImpl overview](../../data/oledb/irowsetimpl-class.md) for the definition of *MapClass*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetImpl Class](../../data/oledb/irowsetimpl-class.md)

