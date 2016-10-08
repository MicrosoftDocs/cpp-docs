---
title: "tiled_index Class"
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
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
caps.latest.revision: 17
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
# tiled_index Class
Provides an index into a [tiled_extent](../VS_visualcpp/tiled_extent-Class.md) object. This class has properties to access elements relative to the local tile origin and relative to the global origin. For more information about tiled spaces, see [Using Tiles](../VS_visualcpp/Using-Tiles.md).  
  
## Syntax  
  
```  
template <  
    int _Dim0,  
    int _Dim1 = 0,  
    int _Dim2 = 0  
>  
class tiled_index : public _Tiled_index_base<3>;  
  
template <  
    int _Dim0,  
    int _Dim1  
>  
class tiled_index< _Dim0, _Dim1, 0> : public _Tiled_index_base<2>;  
  
template <  
    int _Dim0  
>  
class tiled_index< _Dim0, 0, 0> : public _Tiled_index_base<1>;  
```  
  
#### Parameters  
 `_Dim0`  
 The length of the most significant dimension.  
  
 `_Dim1`  
 The length of the next-to-most significant dimension.  
  
 `_Dim2`  
 The length of the least significant dimension.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::tiled_index Constructor](../VS_visualcpp/tiled_index--tiled_index-Constructor.md)|Initializes a new instance of the `tile_index` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::get_tile_extent Method](../VS_visualcpp/tiled_index--get_tile_extent-Method.md)|Returns an [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object that has the values of the [tiled_index](../VS_visualcpp/tiled_index-Class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::barrier Constant](../VS_visualcpp/tiled_index--barrier-Constant.md)|Stores a [tile_barrier](../VS_visualcpp/tile_barrier-Class.md) object that represents a barrier in the current tile of threads.|  
|||  
|[tiled_index::global Constant](../VS_visualcpp/tiled_index--global-Constant.md)|Stores an [index](../VS_visualcpp/index-Class.md) object of rank 1, 2, or 3 that represents the global index in a [grid](assetId:///f7d1b6a6-586c-4345-b09a-bfc26c492cb0) object.|  
|[tiled_index::local Constant](../VS_visualcpp/tiled_index--local-Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](../VS_visualcpp/tiled_extent-Class.md) object.|  
|[tiled_index::rank Constant](../VS_visualcpp/tiled_index--rank-Constant.md)|Stores the rank of the [tiled_index](../VS_visualcpp/tiled_index-Class.md) object.|  
|[tiled_index::tile Constant](../VS_visualcpp/tiled_index--tile-Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the coordinates of the current tile of a `tiled_extent` object.|  
|[tiled_index::tile_dim0 Constant](../VS_visualcpp/tiled_index--tile_dim0-Constant.md)|Stores the length of the most significant dimension.|  
|[tiled_index::tile_dim1 Constant](../VS_visualcpp/tiled_index--tile_dim1-Constant.md)|Stores the length of the next-to-most significant dimension.|  
|[tiled_index::tile_dim2 Constant](../VS_visualcpp/tiled_index--tile_dim2-Constant.md)|Stores the length of the least significant dimension.|  
|[tiled_index::tile_origin Constant](../VS_visualcpp/tiled_index--tile_origin-Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile in a `tiled_extent` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::tile_extent Data Member](../VS_visualcpp/tiled_index--tile_extent-Data-Member.md)|Gets an [extent](../VS_visualcpp/extent-Class--C---AMP-.md) object that has the values of the [tiled_index](../VS_visualcpp/tiled_index-Class.md) template arguments [tiled_index](../VS_visualcpp/tiled_index-Class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
## Inheritance Hierarchy  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)