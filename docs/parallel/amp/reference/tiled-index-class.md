---
title: "tiled_index Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/01/2016"
ms.prod: "visual-studio-dev14"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::tiled_index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tiled_index class"
ms.assetid: 0ce2ae26-f1bb-4436-b473-a9e1b619bb38
caps.latest.revision: 19
author: "mikeblome"
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
# tiled_index Class
Provides an index into a [tiled_extent](../../../parallel/amp/reference/tiled-extent-class.md) object. This class has properties to access elements relative to the local tile origin and relative to the global origin. For more information about tiled spaces, see [Using Tiles](../../../parallel/amp/using-tiles.md).  
  
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
class tiled_index<_Dim0, _Dim1, 0> : public _Tiled_index_base<2>;  
 
template <
    int _Dim0  
>  
class tiled_index<_Dim0, 0, 0> : public _Tiled_index_base<1>;  
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
|[tiled_index::tiled_index Constructor](../Topic/tiled_index::tiled_index%20Constructor.md)|Initializes a new instance of the `tile_index` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::get_tile_extent Method](../Topic/tiled_index::get_tile_extent%20Method.md)|Returns an [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that has the values of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::barrier Constant](../Topic/tiled_index::barrier%20Constant.md)|Stores a [tile_barrier](../../../parallel/amp/reference/tile-barrier-class.md) object that represents a barrier in the current tile of threads.|  
|||  
|[tiled_index::global Constant](../Topic/tiled_index::global%20Constant.md)|Stores an [index](../../../parallel/amp/reference/index-class.md) object of rank 1, 2, or 3 that represents the global index in a [grid](http://msdn.microsoft.com/en-us/f7d1b6a6-586c-4345-b09a-bfc26c492cb0) object.|  
|[tiled_index::local Constant](../Topic/tiled_index::local%20Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](../../../parallel/amp/reference/tiled-extent-class.md) object.|  
|[tiled_index::rank Constant](../Topic/tiled_index::rank%20Constant.md)|Stores the rank of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) object.|  
|[tiled_index::tile Constant](../Topic/tiled_index::tile%20Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the coordinates of the current tile of a `tiled_extent` object.|  
|[tiled_index::tile_dim0 Constant](../Topic/tiled_index::tile_dim0%20Constant.md)|Stores the length of the most significant dimension.|  
|[tiled_index::tile_dim1 Constant](../Topic/tiled_index::tile_dim1%20Constant.md)|Stores the length of the next-to-most significant dimension.|  
|[tiled_index::tile_dim2 Constant](../Topic/tiled_index::tile_dim2%20Constant.md)|Stores the length of the least significant dimension.|  
|[tiled_index::tile_origin Constant](../Topic/tiled_index::tile_origin%20Constant.md)|Stores an `index` object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile in a `tiled_extent` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::tile_extent Data Member](../Topic/tiled_index::tile_extent%20Data%20Member.md)|Gets an [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that has the values of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
## Inheritance Hierarchy  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
