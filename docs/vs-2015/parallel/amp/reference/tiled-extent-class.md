---
title: "tiled_extent Class | Microsoft Docs"
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
  - "amp/Concurrency::tiled_extent"
dev_langs: 
  - "C++"
ms.assetid: 671ecaf8-c7b0-4ac8-bbdc-e30bd92da7c0
caps.latest.revision: 9
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# tiled_extent Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

A `tiled_extent` object is an `extent` object of one to three dimensions that subdivides the extent space into one-, two-, or three-dimensional tiles.  
  
## Syntax  
  
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
|[tiled_extent::tiled_extent Constructor](http://msdn.microsoft.com/library/d56621ba-1802-4745-8ee4-35a8528e1030)|Initializes a new instance of the `tiled_extent` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::get_tile_extent Method](http://msdn.microsoft.com/library/e66cb88a-f69f-45e5-9cb3-140a36125ee8)|Returns an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
|[tiled_extent::pad Method](http://msdn.microsoft.com/library/a6a777db-66db-420f-92eb-ae42b235941d)|Returns a new `tiled_extent` object with extents adjusted up to be evenly divisible by the tile dimensions.|  
|[tiled_extent::truncate Method](http://msdn.microsoft.com/library/9ca7ae6a-e0ed-483b-b890-070d4ccd73eb)|Returns a new `tiled_extent` object with extents adjusted down to be evenly divisible by the tile dimensions.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::operator= Operator](http://msdn.microsoft.com/library/76b0c5aa-1f75-48d5-b496-f6040ea6263f)|Copies the contents of the specified `tiled_index` object into this one.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::tile_dim0 Constant](http://msdn.microsoft.com/library/e486564d-df46-44f5-af5c-6741ed8e890f)|Stores the length of the most significant dimension.|  
|[tiled_extent::tile_dim1 Constant](http://msdn.microsoft.com/library/438cfcfc-b723-4ab5-9baf-119834680bd3)|Stores the length of the next-to-most significant dimension.|  
|[tiled_extent::tile_dim2 Constant](http://msdn.microsoft.com/library/ea21bd29-d1b1-4f65-8f01-1efdae94ccfa)|Stores the length of the least significant dimension.|  
  
### Public Data Members  
  
|Name|Description|  
|----------|-----------------|  
|[tiled_extent::tile_extent Data Member](http://msdn.microsoft.com/library/8dfc2b9d-94e7-4aa5-8085-b49213448b73)|Gets an `extent` object  that captures the values of the `tiled_extent` template arguments `_Dim0`, `_Dim1`, and `_Dim2`.|  
  
## Inheritance Hierarchy  
 `extent`  
  
 `tiled_extent`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
