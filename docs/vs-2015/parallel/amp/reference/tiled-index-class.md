---
title: "tiled_index Class | Microsoft Docs"
ms.custom: ""
ms.date: "2018-06-30"
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
---
# tiled_index Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

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
|[tiled_index::tiled_index Constructor](http://msdn.microsoft.com/library/1f43e0fe-eab7-4e1d-8fd1-bb84c790b01c)|Initializes a new instance of the `tile_index` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::get_tile_extent Method](http://msdn.microsoft.com/library/978ed5bd-51ef-49e4-b88f-794ea694dad2)|Returns an [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that has the values of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::barrier Constant](http://msdn.microsoft.com/library/cb39d964-6b37-4755-bf7f-13a6d47b6038)|Stores a [tile_barrier](../../../parallel/amp/reference/tile-barrier-class.md) object that represents a barrier in the current tile of threads.|  
|||  
|[tiled_index::global Constant](http://msdn.microsoft.com/library/ec271bc0-e6ea-4aef-80f6-6f5e570affbb)|Stores an [index](../../../parallel/amp/reference/index-class.md) object of rank 1, 2, or 3 that represents the global index in a [grid](http://msdn.microsoft.com/en-us/f7d1b6a6-586c-4345-b09a-bfc26c492cb0) object.|  
|[tiled_index::local Constant](http://msdn.microsoft.com/library/d64a029a-a1f9-4944-b9da-2c282b5d7585)|Stores an `index` object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](../../../parallel/amp/reference/tiled-extent-class.md) object.|  
|[tiled_index::rank Constant](http://msdn.microsoft.com/library/35de521b-99db-48d7-a1ac-c39cdd61b3ff)|Stores the rank of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) object.|  
|[tiled_index::tile Constant](http://msdn.microsoft.com/library/49115bad-22d0-4e52-bac4-d075f909a990)|Stores an `index` object of rank 1, 2, or 3 that represents the coordinates of the current tile of a `tiled_extent` object.|  
|[tiled_index::tile_dim0 Constant](http://msdn.microsoft.com/library/3b3f4abf-5176-49a6-81a7-931201a6cb29)|Stores the length of the most significant dimension.|  
|[tiled_index::tile_dim1 Constant](http://msdn.microsoft.com/library/568e7f2b-7506-4909-953f-2c8730a8472c)|Stores the length of the next-to-most significant dimension.|  
|[tiled_index::tile_dim2 Constant](http://msdn.microsoft.com/library/2bcb155b-8169-489e-ad1b-692daa6183bf)|Stores the length of the least significant dimension.|  
|[tiled_index::tile_origin Constant](http://msdn.microsoft.com/library/1cb713c5-1124-445e-8ef7-cc2a7509fa24)|Stores an `index` object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile in a `tiled_extent` object.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::tile_extent Data Member](http://msdn.microsoft.com/library/e37334a4-0926-4a09-be43-137d8d6ef682)|Gets an [extent](../../../parallel/amp/reference/extent-class-cpp-amp.md) object that has the values of the [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments [tiled_index](../../../parallel/amp/reference/tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
## Inheritance Hierarchy  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
