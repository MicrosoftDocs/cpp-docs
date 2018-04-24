---
title: "extent Class (C++ AMP) | Microsoft Docs"
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
  - "amp/Concurrency::extent"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "extent structure"
ms.assetid: edb5de3d-3935-4dbb-8365-4cc6c4fb0269
caps.latest.revision: 19
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# extent Class (C++ AMP)
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

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
|[extent::extent Constructor](http://msdn.microsoft.com/library/4b10b446-6f7b-405f-989d-71144b0cc91d)|Initializes a new instance of the `extent` class.|  
  
### Public Methods  
  
|Name|Description|  
|----------|-----------------|  
|[extent::contains Method](http://msdn.microsoft.com/library/28b6094f-ffcf-4c7f-b968-40e5c8c77961)|Verifies that the specified `extent` object has the specified rank.|  
|[extent::size Method](http://msdn.microsoft.com/library/bff87e43-2fe1-4d89-83c4-f737607ced3b)|Returns the total linear size of the extent (in units of elements).|  
|[extent::tile Method](http://msdn.microsoft.com/library/208390e6-dfe8-4abf-9d4c-54f2405d8b35)|Produces a `tiled_extent` object with the tile extents given by specified dimensions.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[extent::operator- Operator](http://msdn.microsoft.com/library/0dc56971-8639-410f-a9c2-aaaffb8302f3)|Returns a new `extent` object that's created by subtracting the `index` elements from the corresponding `extent` elements.|  
|[extent::operator-- Operator](http://msdn.microsoft.com/library/361faf73-e13f-4abd-8eea-7fa1b06902e0)|Decrements each element of the `extent` object.|  
|[extent::operator(mod)= Operator](http://msdn.microsoft.com/library/c0a79fb9-d464-4cd6-9d86-85b8fc9198d1)|Calculates the modulus (remainder) of each element in the `extent` object when that element is divided by a number.|  
|[extent::operator*= Operator](http://msdn.microsoft.com/library/1d6c9274-c384-4bbb-ac3c-a68187dcff60)|Multiplies each element of the `extent` object by a number.|  
|[extent::operator/= Operator](http://msdn.microsoft.com/library/e044be0b-3ccd-4234-b299-308c69de6420)|Divides each element of the `extent` object by a number.|  
|[extent::operatorOperator](http://msdn.microsoft.com/library/b1aca19c-4add-4179-b3e1-6de26539a114)|Returns the element that's at the specified index.|  
|[extent::operator+ Operator](http://msdn.microsoft.com/library/4eecaec9-4aa8-41ce-97ea-0fd9504d61a1)|Returns a new `extent` object that's created by adding the corresponding `index` and `extent` elements.|  
|[extent::operator++ Operator](http://msdn.microsoft.com/library/1abab27d-c57a-4a8e-b6ba-f624a9eb6512)|Increments each element of the `extent` object.|  
|[extent::operator+= Operator](http://msdn.microsoft.com/library/e6e0d1f0-d1cf-4c77-b784-81450e0675ce)|Adds the specified number to each element of the `extent` object.|  
|[extent::operator= Operator](http://msdn.microsoft.com/library/b0c8f537-3606-4781-8788-3b0d08cbd62e)|Copies the contents of another `extent` object into this one.|  
|[extent::operator-= Operator](http://msdn.microsoft.com/library/c5fe649b-fdbc-41a0-9c6f-7834fb28b4cf)|Subtracts the specified number from each element of the `extent` object.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[extent::rank Constant](http://msdn.microsoft.com/library/38f02957-1e63-43d4-80b7-d2da91f0867a)|Gets the rank of the `extent` object.|  
  
## Inheritance Hierarchy  
 `extent`  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
