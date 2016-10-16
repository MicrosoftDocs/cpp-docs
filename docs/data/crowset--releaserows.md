---
title: "CRowset::ReleaseRows"
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
  - "ReleaseRows"
  - "CRowset::ReleaseRows"
  - "ATL::CRowset<TAccessor>::ReleaseRows"
  - "CRowset<TAccessor>.ReleaseRows"
  - "CRowset.ReleaseRows"
  - "ATL.CRowset.ReleaseRows"
  - "ATL.CRowset<TAccessor>.ReleaseRows"
  - "CRowset<TAccessor>::ReleaseRows"
  - "ATL::CRowset::ReleaseRows"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "ReleaseRows method"
ms.assetid: fa7254f5-566f-4754-bdf7-d0874256926f
caps.latest.revision: 9
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
# CRowset::ReleaseRows
Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) to release the current row handle.  
  
## Syntax  
  
```  
  
HRESULT ReleaseRows( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../data/crowset-class.md)