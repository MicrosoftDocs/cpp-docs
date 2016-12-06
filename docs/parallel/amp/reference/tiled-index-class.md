---
title: "tiled_index Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
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
Provides an index into a [tiled_extent](tiled-extent-class.md) object. This class has properties to access elements relative to the local tile origin and relative to the global origin. For more information about tiled spaces, see [Using Tiles](../../../parallel/amp/using-tiles.md).  
  
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
|[tiled_index::tiled_index Constructor](#ctor)|Initializes a new instance of the `tile_index` class.|  

  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::get_tile_extent Method](#tiled_index__get_tile_extent)|Returns an [extent](extent-class.md) object that has the values of the [tiled_index](tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  


  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::barrier Constant](#tiled_index__barrier)|Stores a [tile_barrier](tile-barrier-class.md) object that represents a barrier in the current tile of threads.|  
|||  
|[tiled_index::global Constant](#tiled_index__global)|Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global index in a [grid](http://msdn.microsoft.com/en-us/f7d1b6a6-586c-4345-b09a-bfc26c492cb0) object.|  
|[tiled_index::local Constant](#tiled_index__local)|Stores an `index` object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](tiled-extent-class.md) object.|  
|[tiled_index::rank Constant](#tiled_index__rank)|Stores the rank of the [tiled_index](tiled-index-class.md) object.|  
|[tiled_index::tile Constant](#tiled_index__tile)|Stores an `index` object of rank 1, 2, or 3 that represents the coordinates of the current tile of a `tiled_extent` object.|  
|[tiled_index::tile_dim0 Constant](#tiled_index__tile_dim0)|Stores the length of the most significant dimension.|  
|[tiled_index::tile_dim1 Constant](#tiled_index__tile_dim1)|Stores the length of the next-to-most significant dimension.|  
|[tiled_index::tile_dim2 Constant](#tiled_index__tile_dim2)|Stores the length of the least significant dimension.|  
|[tiled_index::tile_origin Constant](#tiled_index__tile_origin)|Stores an `index` object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile in a `tiled_extent` object.|  

  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_index::tile_extent Data Member](#tile_extent)|Gets an [extent](extent-class.md) object that has the values of the [tiled_index](tiled-index-class.md) template arguments [tiled_index](tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  

  
## Inheritance Hierarchy  
 `_Tiled_index_base`  
  
 `tiled_index`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  


## <a name="tiled_index__ctor"></a>  tiled_index Constructor  
Initializes a new instance of the [tiled_index](tiled-index-class.md) class.  
  
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
 The global [index](index-class.md) of the constructed `tiled_index`.  
  
 `_Local`  
 The local [index](index-class.md) of the constructed `tiled_index`  
  
 `_Tile`  
 The tile [index](index-class.md) of the constructed `tiled_index`  
  
 `_Tile_origin`  
 The tile origin [index](index-class.md) of the constructed `tiled_index`  
  
 `_Barrier`  
 The [tile_barrier](tile-barrier-class.md) object of the constructed `tiled_index`.  
  
 `_Other`  
 The `tile_index` object to be copied to the constructed `tiled_index`.  
  
## Overloads  
  
|||  
|-|-|  
|Name|Description|  
|`tiled_index(const index<rank>& _Global, const index<rank>& _Local, const index<rank>& _Tile, const index<rank>& _Tile_origin, const tile_barrier& _Barrier restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class from the index of the tile in global coordinates and the relative position in the tile in local coordinates. The `_Global` and `_Tile_origin` parameters are computed.|  
|`tiled_index(    const tiled_index& _Other) restrict(amp,cpu);`|Initializes a new instance of the `tile_index` class by copying the specified `tiled_index` object.|  


## <a name="tiled_index__get_tile_extent"></a>  get_tile_extent
Returns an [extent](extent-class.md) object that has the values of the [tiled_index](tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Syntax  
  
```  
extent<rank> get_tile_extent()restrict(amp,cpu);  
```  
  
## Return Value  
 An `extent` object that has the values of the `tiled_index` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  

## <a name="tiled_index__barrier"></a>  barrier   
Stores a [tile_barrier](tile-barrier-class.md) object that represents a barrier in the current tile of threads.  
  
## Syntax  
  
```  
const tile_barrier barrier;  
```  

## <a name="tiled_index__global"></a>  global   
Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global index of an object.  
  
## Syntax  
  
```  
const index<rank> global;  
```  
  
## <a name="tiled_index__local"></a>  local   
Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the relative index in the current tile of a [tiled_extent](tiled-extent-class.md) object.  
  
## Syntax  
  
```  
const index<rank> local;  
```  
  
## <a name="tiled_index__rank"></a>  rank   
Stores the rank of the [tiled_index](tiled-index-class.md) object.  
  
## Syntax  
  
```  
static const int rank = _Rank;  
```  

## <a name="tiled_index__tile"></a>  tile   
Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the coordinates of the current tile of a [tiled_extent](tiled-extent-class.md) object.  
  
## Syntax  
  
```  
const index<rank> tile;  
```  
  
## <a name="tiled_index__tile_dim0"></a>  tile_dim0  
Stores the length of the most significant dimension.  
  
## Syntax  
  
```  
static const int tile_dim0 = _Dim0;  
```  
   
## <a name="tiled_index__tile_dim1"></a>  tile_dim1   
Stores the length of the next-to-most significant dimension.  
  
## Syntax  
  
```  
static const int tile_dim1 = _Dim1;  
```  
## <a name="tiled_index__tile_dim2"></a>  tile_dim2   
Stores the length of the least significant dimension.  
  
## Syntax  
  
```  
static const int tile_dim2 = _Dim2;  
```  
## <a name="tiled_index__tile_origin"></a>  tile_origin   
Stores an [index](index-class.md) object of rank 1, 2, or 3 that represents the global coordinates of the origin of the current tile within a [tiled_extent](tiled-extent-class.md) object.  
  
## Syntax  
  
```  
const index<rank> tile_origin  
```  
## <a name="tile_extent"></a>  tile_extent
  Gets an [extent](extent-class.md) object that has the values of the [tiled_index](tiled-index-class.md) template arguments [tiled_index](tiled-index-class.md) template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
## Syntax  
  
```  
__declspec(property(get= get_tile_extent)) extent<rank> tile_extent;  
```  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
