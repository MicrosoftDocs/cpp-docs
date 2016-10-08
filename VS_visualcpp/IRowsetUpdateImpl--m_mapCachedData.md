---
title: "IRowsetUpdateImpl::m_mapCachedData"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 65131743-8580-48c8-bb22-68f17c9dfa13
caps.latest.revision: 8
manager: ghogen
translation.priority.ht: 
  - cs-cz
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - pl-pl
  - pt-br
  - ru-ru
  - tr-tr
  - zh-cn
  - zh-tw
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
 A pointer to the data to be cached. The data is of type *Storage* (the user record class). See the *Storage* template argument in [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md).  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IRowsetUpdateImpl Class](../VS_visualcpp/IRowsetUpdateImpl-Class.md)