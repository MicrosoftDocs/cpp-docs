---
title: "tiled_index::tiled_index Constructor"
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
ms.assetid: 1f43e0fe-eab7-4e1d-8fd1-bb84c790b01c
caps.latest.revision: 14
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
# tiled_index::tiled_index Constructor
Initializes a new instance of the [tiled_index](../VS_visualcpp/tiled_index-Class.md) class.  
  
## Syntax  
  
```  
tiled_index(  
    const index<rank>& _Global,  
    const index<rank>& _Local,  
    const index<rank>& _Tile,  
    const index<rank>& _Tile_origin,  
    const tile_barrier& _Barrier ) restrict(amp,cpu);  
  
tiled_index(  
    const tiled_index& _Other ) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Global`  
 The global [index](../VS_visualcpp/index-Class.md) of the constructed `tiled_index`.  
  
 `_Local`  
 The local [index](../VS_visualcpp/index-Class.md) of the constructed `tiled_index`  
  
 `_Tile`  
 The tile [index](../VS_visualcpp/index-Class.md) of the constructed `tiled_index`  
  
 `_Tile_origin`  
 The tile origin [index](../VS_visualcpp/index-Class.md) of the constructed `tiled_index`  
  
 `_Barrier`  
 The [tile_barrier](../VS_visualcpp/tile_barrier-Class.md) object of the constructed `tiled_index`.  
  
 `_Other`  
 The `tile_index` object to be copied to the constructed `tiled_index`.  
  
## Overloads  
  
|||  
|-|-|  
|Name|Description|  
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class from the index of the tile in global coordinates and the relative position in the tile in local coordinates. The `_Global` and `_Tile_origin` parameters are computed.|  
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class by copying the specified `tiled_index` object.|  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [tiled_index Class](../VS_visualcpp/tiled_index-Class.md)