---
title: "CBulkRowset::SetRows"
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
ms.assetid: 7e92312a-bfd0-4c24-a799-62bef663f28e
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
# CBulkRowset::SetRows
Sets the number of row handles retrieved by each call.  
  
## Syntax  
  
```  
  
      void SetRows(  
   DBROWCOUNT nRows   
) throw( );  
```  
  
#### Parameters  
 `nRows`  
 [in] The new size of the rowset (number of rows).  
  
## Remarks  
 If you call this function, it must be before the rowset is opened.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CBulkRowset Class](../VS_visualcpp/CBulkRowset-Class.md)