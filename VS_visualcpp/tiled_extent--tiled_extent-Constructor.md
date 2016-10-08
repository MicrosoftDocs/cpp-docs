---
title: "tiled_extent::tiled_extent Constructor"
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
ms.assetid: d56621ba-1802-4745-8ee4-35a8528e1030
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
# tiled_extent::tiled_extent Constructor
Initializes a new instance of the `tiled_extent` class.  
  
## Syntax  
  
```  
tiled_extent();  
  
tiled_extent(  
    const Concurrency::extent<rank>& _Other );  
  
tiled_extent(  
    const tiled_extent& _Other );  
```  
  
#### Parameters  
 `_Other`  
 The `extent` or `tiled_extent` object to copy.  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tiled_extent Class](../VS_visualcpp/tiled_extent-Class.md)