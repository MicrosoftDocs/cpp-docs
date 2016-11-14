---
title: "CRowset::MoveFirst | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "CRowset<TAccessor>::MoveFirst"
  - "ATL::CRowset::MoveFirst"
  - "CRowset<TAccessor>.MoveFirst"
  - "CRowset::MoveFirst"
  - "CRowset.MoveFirst"
  - "ATL.CRowset.MoveFirst"
  - "ATL.CRowset<TAccessor>.MoveFirst"
  - "ATL::CRowset<TAccessor>::MoveFirst"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveFirst method"
ms.assetid: a17c0799-ead9-4d85-9a1d-8b17188d01e3
caps.latest.revision: 10
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
# CRowset::MoveFirst
Moves the cursor to the initial position and retrieves the initial row.  
  
## Syntax  
  
```  
  
HRESULT MoveFirst( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Calls [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) to reposition the next-fetch location to the initial position (the position that was the next-fetch location when the rowset was created) and retrieves the initial row.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../../data/oledb/crowset-class.md)   
 [CRowset::MoveNext](../../data/oledb/crowset-movenext.md)   
 [CRowset::MoveToBookmark](../../data/oledb/crowset-movetobookmark.md)   
 [CRowset::MovePrev](../../data/oledb/crowset-moveprev.md)   
 [CRowset::MoveLast](../../data/oledb/crowset-movelast.md)   
 [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx)