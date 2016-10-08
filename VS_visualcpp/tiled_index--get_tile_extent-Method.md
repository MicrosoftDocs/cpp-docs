---
title: "tiled_index::get_tile_extent Method"
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
ms.assetid: 978ed5bd-51ef-49e4-b88f-794ea694dad2
caps.latest.revision: 12
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
# tiled_index::get_tile_extent Method
Returns an [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object that has the values of the [tiled_index](../VS_visualcpp/tiled_index-Class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Syntax  
  
```  
extent<rank> get_tile_extent()restrict(amp,cpu);  
```  
  
## Return Value  
 An `extent` object that has the values of the `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tiled_index Class](../VS_visualcpp/tiled_index-Class.md)