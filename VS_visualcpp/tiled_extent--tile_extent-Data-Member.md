---
title: "tiled_extent::tile_extent Data Member"
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
ms.assetid: 8dfc2b9d-94e7-4aa5-8085-b49213448b73
caps.latest.revision: 7
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
# tiled_extent::tile_extent Data Member
Gets an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Syntax  
  
```  
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tiled_extent Class](../VS_visualcpp/tiled_extent-Class.md)