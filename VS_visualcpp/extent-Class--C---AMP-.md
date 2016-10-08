---
title: "extent Class (C++ AMP)"
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
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
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
# extent Class (C++ AMP)
Represents a vector of *N* integer values that specify the bounds of an *N*-dimensional space that has an origin of 0. The values in the vector are ordered from most significant to least significant.  
  
## Syntax  
  
```  
template <  
    int _Rank>  
class extent;  
```  
  
#### Parameters  
 `_Rank`  
 The rank of the `extent` object.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[extent::extent Constructor](../VS_visualcpp/extent--extent-Constructor.md)|Initializes a new instance of the `extent` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[extent::contains Method](../VS_visualcpp/extent--contains-Method.md)|Verifies that the specified `extent` object has the specified rank.|  
|[extent::size Method](../VS_visualcpp/extent--size-Method.md)|Returns the total linear size of the extent (in units of elements).|  
|[extent::tile Method](../VS_visualcpp/extent--tile-Method.md)|Produces a `tiled_extent` object with the tile extents given by specified dimensions.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[extent::operator- Operator](../VS_visualcpp/extent--operator--Operator.md)|Returns a new `extent` object that's created by subtracting the `index` elements from the corresponding `extent` elements.|  
|[extent::operator-- Operator](../VS_visualcpp/extent--operator---Operator.md)|Decrements each element of the `extent` object.|  
|[extent::operator(mod)= Operator](../VS_visualcpp/extent--operator-mod-=-Operator.md)|Calculates the modulus (remainder) of each element in the `extent` object when that element is divided by a number.|  
|[extent::operator*= Operator](../VS_visualcpp/extent--operator-=-Operator.md)|Multiplies each element of the `extent` object by a number.|  
|[extent::operator/= Operator](../VS_visualcpp/extent--operator-=-Operator1.md)|Divides each element of the `extent` object by a number.|  
|[extent::operatorOperator](../VS_visualcpp/extent--operatorOperator.md)|Returns the element that's at the specified index.|  
|[extent::operator+ Operator](../VS_visualcpp/extent--operator--Operator.md)|Returns a new `extent` object that's created by adding the corresponding `index` and `extent` elements.|  
|[extent::operator++ Operator](../VS_visualcpp/extent--operator---Operator.md)|Increments each element of the `extent` object.|  
|[extent::operator+= Operator](../VS_visualcpp/extent--operator-=-Operator.md)|Adds the specified number to each element of the `extent` object.|  
|[extent::operator= Operator](../VS_visualcpp/extent--operator=-Operator.md)|Copies the contents of another `extent` object into this one.|  
|[extent::operator-= Operator](../VS_visualcpp/extent--operator-=-Operator2.md)|Subtracts the specified number from each element of the `extent` object.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[extent::rank Constant](../VS_visualcpp/extent--rank-Constant.md)|Gets the rank of the `extent` object.|  
  
## Inheritance Hierarchy  
 `extent`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../VS_visualcpp/Concurrency-Namespace--C---AMP-.md)