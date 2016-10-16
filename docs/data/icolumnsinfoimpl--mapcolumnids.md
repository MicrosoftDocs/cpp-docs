---
title: "IColumnsInfoImpl::MapColumnIDs"
ms.custom: na
ms.date: "10/14/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: na
ms.suite: na
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: na
ms.topic: "article"
f1_keywords: 
  - "IColumnsInfoImpl<T>::MapColumnIDs"
  - "MapColumnIDs"
  - "ATL::IColumnsInfoImpl::MapColumnIDs"
  - "IColumnsInfoImpl.MapColumnIDs"
  - "ATL::IColumnsInfoImpl<T>::MapColumnIDs"
  - "IColumnsInfoImpl::MapColumnIDs"
  - "ATL.IColumnsInfoImpl<T>.MapColumnIDs"
  - "ATL.IColumnsInfoImpl.MapColumnIDs"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MapColumnIDs method"
ms.assetid: 7aa2d011-75ba-440a-bafe-ab8fccd16dfb
caps.latest.revision: 8
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
# IColumnsInfoImpl::MapColumnIDs
Returns an array of ordinals of the columns in a rowset that are identified by the specified column IDs.  
  
## Syntax  
  
```  
  
      STDMETHOD (MapColumnIDs)(  
   DBORDINAL cColumnIDs,  
   const DBID rgColumnIDs[],  
   DBORDINAL rgColumns[]   
);  
```  
  
#### Parameters  
 See [IColumnsInfo::MapColumnIDs](https://msdn.microsoft.com/en-us/library/ms714200.aspx) in the *OLE DB Programmer's Reference*.  
  
## Requirements  
 **Header:** atldb.h  
  
## See Also  
 [IColumnsInfoImpl Class](../data/icolumnsinfoimpl-class.md)   
 [IColumnsInfoImpl::GetColumnInfo](../data/icolumnsinfoimpl--getcolumninfo.md)