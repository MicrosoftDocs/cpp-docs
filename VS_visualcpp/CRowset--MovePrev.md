---
title: "CRowset::MovePrev"
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
ms.assetid: 7ced2bfb-f556-40fc-97ea-0d4e7213e114
caps.latest.revision: 9
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# CRowset::MovePrev
Moves the cursor to the previous record.  
  
## Syntax  
  
```  
  
HRESULT MovePrev( ) throw( );  
  
```  
  
## Return Value  
 A standard `HRESULT`.  
  
## Remarks  
 This method requires that you set either **DBPROP_CANFETCHBACKWARDS** or **DBPROP_CANSCROLLBACKWARDS** to `VARIANT_TRUE` before calling **Open** on the table or command containing the rowset.  
  
## Requirements  
 **Header:** atldbcli.h  
  
## See Also  
 [CRowset Class](../VS_visualcpp/CRowset-Class.md)   
 [CRowset::MoveNext](../VS_visualcpp/CRowset--MoveNext.md)   
 [CRowset::MoveToBookmark](../VS_visualcpp/CRowset--MoveToBookmark.md)   
 [CRowset::MoveLast](../VS_visualcpp/CRowset--MoveLast.md)