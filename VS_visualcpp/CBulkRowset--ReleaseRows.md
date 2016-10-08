---
title: "CBulkRowset::ReleaseRows"
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
ms.assetid: ba48aff3-0887-47ba-aed7-7ff28fa1c4a8
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
# CBulkRowset::ReleaseRows
Calls [IRowset::ReleaseRows](https://msdn.microsoft.com/en-us/library/ms719771.aspx) to decrement the reference count for all rows currently retrieved from the bulk rowset.  
  
## Syntax  
  
```  
  
HRESULT ReleaseRows( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBulkRowset Class](../VS_visualcpp/CBulkRowset-Class.md)   
 [CBulkRowset::AddRefRows](../VS_visualcpp/CBulkRowset--AddRefRows.md)