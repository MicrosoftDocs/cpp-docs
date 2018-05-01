---
title: "CRowsetImpl::m_rgRowData | Microsoft Docs"
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
  - "CRowsetImpl.m_rgRowData"
  - "CRowsetImpl::m_rgRowData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_rgRowData"
ms.assetid: e4e75ca7-12e8-4a0b-94e8-e395c21385b2
caps.latest.revision: 11
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# CRowsetImpl::m_rgRowData
[!INCLUDE[blank_token](../../includes/blank-token.md)]

The latest version of this topic can be found at [CRowsetImpl::m_rgRowData](https://docs.microsoft.com/cpp/data/oledb/crowsetimpl-m-rgrowdata).  
  
  
By default, a `CAtlArray` that templatizes on the user record template argument to `CRowsetImpl`.  
  
## Syntax  
  
```  
  
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

