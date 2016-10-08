---
title: "tiled_extent::get_tile_extent Method"
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
ms.assetid: e66cb88a-f69f-45e5-9cb3-140a36125ee8
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
# tiled_extent::get_tile_extent Method
Returns an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Syntax  
  
```  
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);  
```  
  
## Return Value  
 An `extent` object that captures the dimensions of this `tiled_extent` instance.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tiled_extent Class](../VS_visualcpp/tiled_extent-Class.md)