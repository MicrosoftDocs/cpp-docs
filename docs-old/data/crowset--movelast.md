---
title: "CRowset::MoveLast"
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
  - "ATL::CRowset<TAccessor>::MoveLast"
  - "CRowset<TAccessor>::MoveLast"
  - "ATL.CRowset.MoveLast"
  - "ATL::CRowset::MoveLast"
  - "CRowset<TAccessor>.MoveLast"
  - "MoveLast"
  - "CRowset::MoveLast"
  - "ATL.CRowset<TAccessor>.MoveLast"
  - "CRowset.MoveLast"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "MoveLast method"
ms.assetid: 81063578-ae9d-467b-8c88-81d8fc66e020
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
# CRowset::MoveLast
Moves the cursor to the last row.  
  
## Syntax  
  
```  
  
HRESULT MoveLast( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 Calls [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx) to reposition the next-fetch location to the last position and retrieves the last row.  
  
 This method requires that you set **DBPROP_CANSCROLLBACKWARDS** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset. (For better performance, you might also set **DBPROP_QUICKRESTART** to `VARIANT_TRUE`.)  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../data/crowset-class.md)   
 [CRowset::MoveNext](../data/crowset--movenext.md)   
 [IRowset::RestartPosition](https://msdn.microsoft.com/en-us/library/ms712877.aspx)   
 [CRowset::MovePrev](../data/crowset--moveprev.md)