---
title: "IRowsetUpdateImpl::m_mapCachedData | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "IRowsetUpdateImpl.m_mapCachedData"
  - "IRowsetUpdateImpl::m_mapCachedData"
  - "m_mapCachedData"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "m_mapCachedData"
ms.assetid: 65131743-8580-48c8-bb22-68f17c9dfa13
caps.latest.revision: 8
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
# IRowsetUpdateImpl::m_mapCachedData
A map containing the original data for the deferred operation.  
  
## Syntax  
  
```  
  
      CAtlMap<   
   HROW hRow,    
   Storage* pData   
>   
m_mapCachedData;  
```  
  
#### Parameters  
 `hRow`  
 Handle to the rows for the data.  
  
 `pData`  
 A pointer to the data to be cached. The data is of type *Storage* (the user record class). See the *Storage* template argument in [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../../data/oledb/irowsetupdateimpl-class.md)