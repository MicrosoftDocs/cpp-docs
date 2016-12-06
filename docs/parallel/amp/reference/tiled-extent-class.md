---
title: "tiled_extent Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "amp/Concurrency::tiled_extent"
dev_langs: 
  - "C++"
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
caps.latest.revision: 9
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
# tiled_extent Class
A `tiled_extent` object is an `extent` object of one to three dimensions that subdivides the extent space into one-, two-, or three-dimensional tiles.  
  
### Syntax  
  
```  
template <
    int _Dim0,  
    int _Dim1,  
    int _Dim2  
>  
class tiled_extent : public Concurrency::extent<3>;  
 
template <
    int _Dim0,  
    int _Dim1  
>  
class tiled_extent<_Dim0, _Dim1, 0> : public Concurrency::extent<2>;  
 
template <
    int _Dim0  
>  
class tiled_extent<_Dim0, 0, 0> : public Concurrency::extent<1>;  
```  
  
### Parameters  
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
|[tiled_extent::tiled_extent Constructor](#ctor)|Initializes a new instance of the `tiled_extent` class.|  

  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::get_tile_extent Method](#tiled_extent__get_tile_extent)|Returns an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
|[tiled_extent::pad Method](#tiled_extent__pad)|Returns a new `tiled_extent` object with extents adjusted up to be evenly divisible by the tile dimensions.|  
|[tiled_extent::truncate Method](#tiled_extent__truncate)|Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::operator= Operator](#tiled_extent__operator_eq)|Copies the contents of the specified `tiled_index` object into this one.|  

  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::tile_dim0 Constant](#tiled_extent__tile_dim0)|Stores the length of the most significant dimension.|  
|[tiled_extent::tile_dim1 Constant](#tiled_extent__tile_dim1)|Stores the length of the next-to-most significant dimension.|  
|[tiled_extent::tile_dim2 Constant](#tiled_extent__tile_dim2)|Stores the length of the least significant dimension.|  

  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::tile_extent Data Member](#tiled_extent__tile_extent)|Gets an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
## Inheritance Hierarchy  
 `extent`  
  
 `tiled_extent`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  

## <a name="tiled_extent__ctor"> </a>  tiled_extent Constructor  
Initializes a new instance of the `tiled_extent` class.  
  
### Syntax  
  
```  
tiled_extent();  
  
tiled_extent(  
    const Concurrency::extent<rank>& _Other );  
  
tiled_extent(  
    const tiled_extent& _Other );  
```  
  
### Parameters  
 `_Other`  
 The `extent` or `tiled_extent` object to copy.  
  

  

## <a name="tiled_extent__get_tile_extent"> </a>  get_tile_extent   
Returns an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
### Syntax  
  
```  
Concurrency::extent<rank> get_tile_extent() const restrict(amp,cpu);  
```  
  
### Return Value  
 An `extent` object that captures the dimensions of this `tiled_extent` instance.  
  

## <a name="tiled_extent__pad"> </a>  pad   
Returns a new `tiled_extent` object with extents adjusted up to be evenly divisible by the tile dimensions.  
  
### Syntax  
  
```  
tiled_extent pad() const;  
```  
  
### Return Value  
 The new `tiled_extent` object, by value. 
## <a name="tiled_extent__truncate"> </a>  truncate   
Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.  
  
### Syntax  
  
```  
tiled_extent truncate() const;  
```  
  
### Return Value  
 Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.  

## <a name="tiled_extent__operator_eq"> </a>  operator=   
Copies the contents of the specified `tiled_index` object into this one.  
  
### Syntax  
  
```  
tiled_extent&  operator= (  
    const tiled_extent& _Other ) restrict (amp, cpu);  
```  
  
### Parameters  
 `_Other`  
 The `tiled_index` object to copy from.  
  
### Return Value  
 A reference to this `tiled_index` instance.  

## <a name="tiled_extent__tile_dim0"> </a>  tile_dim0   
Stores the length of the most significant dimension.  
  
### Syntax  
  
```  
static const int tile_dim0 = _Dim0;  
```  
  
## <a name="tiled_extent__tile_dim1"> </a>  tile_dim1   
Stores the length of the next-to-most significant dimension.  
  
### Syntax  
  
```  
static const int tile_dim1 = _Dim1;  
```  
## <a name="tiled_extent__tile_dim2"> </a>  tile_dim2   
Stores the length of the least significant dimension.  
  
### Syntax  
  
```  
static const int tile_dim2 = _Dim2;  
```  
## <a name="tiled_extent__tile_extent"> </a>  tile_extent   
  Gets an `extent` object that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.  
  
### Syntax  
  
```  
__declspec(property(get= get_tile_extent)) Concurrency::extent<rank> tile_extent;  
```  
  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](concurrency-namespace-cpp-amp.md)
