---
title: "CRowsetImpl::m_rgRowData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: ["cpp-windows"]
ms.tgt_pltfrm: ""
ms.topic: "reference"
f1_keywords: ["CRowsetImpl.m_rgRowData", "CRowsetImpl::m_rgRowData"]
dev_langs: ["C++"]
helpviewer_keywords: ["m_rgRowData"]
ms.assetid: e4e75ca7-12e8-4a0b-94e8-e395c21385b2
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
ms.workload: ["cplusplus", "data-storage"]
---
# CRowsetImpl::m_rgRowData
By default, a `CAtlArray` that templatizes on the user record template argument to `CRowsetImpl`.  
  
## Syntax  
  
```cpp
ArrayType CRowsetBaseImpl::m_rgRowData;  
  
```  
  
## Remarks  
 **ArrayType** is a template parameter to `CRowsetImpl`.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [CRowsetImpl Class](../../data/oledb/crowsetimpl-class.md)   
 [CRowsetImpl::m_strCommandText](../../data/oledb/crowsetimpl-m-strcommandtext.md)   
 [CRowsetImpl::m_strIndexText](../../data/oledb/crowsetimpl-m-strindextext.md)