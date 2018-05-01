---
title: "index Class | Microsoft Docs"
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
  - "amp/Concurrency::index"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "index structure"
ms.assetid: cbe79b08-0ba7-474c-9828-f1a71da39eb3
caps.latest.revision: 20
author: "mikeblome"
ms.author: "mblome"
manager: "ghogen"
---
# index Class
[!INCLUDE[blank_token](../../../includes/blank-token.md)]

Defines an *N*-dimensional index point.  
  
## Syntax  
  
```  
template <
    int _Rank  
>  
class index;  
```  
  
#### Parameters  
 `_Rank`  
 The rank, or number of dimensions.  
  
## Members  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[index::index Constructor](http://msdn.microsoft.com/library/b8bb7854-eb96-4fe6-8d86-54efba3f56d5)|Initializes a new instance of the `index` class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[index::operator-- Operator](http://msdn.microsoft.com/library/b859aab2-6b4d-450f-9f0b-4d15da29a61f)|Decrements each element of the `index` object.|  
|[index::operator(mod)= Operator](http://msdn.microsoft.com/library/f36dd4b7-0815-4e70-b5a9-7f8d81995b8a)|Calculates the modulus (remainder) of each element in the `index` object when that element is divided by a number.|  
|[index::operator*= Operator](http://msdn.microsoft.com/library/a4290f9a-e3d8-4c68-bfe2-ff38e905b57d)|Multiplies each element of the `index` object by a number.|  
|[index::operator/= Operator](http://msdn.microsoft.com/library/48191629-07ee-45cc-b4de-ba48acacbe9a)|Divides each element of the `index` object by a number.|  
|[index::operatorOperator](http://msdn.microsoft.com/library/cfcc905c-e573-4607-b7de-8ed7661410ae)|Returns the element that's at the specified index.|  
|[index::operator++ Operator](http://msdn.microsoft.com/library/6ea31225-fecc-4bcf-a497-aad2a4a861f9)|Increments each element of the `index` object.|  
|[index::operator+= Operator](http://msdn.microsoft.com/library/08c6c3a4-7d65-4870-8213-4cda9132895c)|Adds the specified number to each element of the `index` object.|  
|[index::operator= Operator](http://msdn.microsoft.com/library/26b659c5-a288-4045-8185-3204ed05e830)|Copies the contents of the specified `index` object into this one.|  
|[index::operator-= Operator](http://msdn.microsoft.com/library/ee9f8b24-7309-4f1c-b845-4436d0d4f0ca)|Subtracts the specified number from each element of the `index` object.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[index::rank Constant](http://msdn.microsoft.com/library/2decd0b3-b903-4745-ba76-205e0a2b3ef4)|Stores the rank of the `index` object.|  
  
## Inheritance Hierarchy  
 `index`  
  
## Remarks  
 The `index` structure represents a coordinate vector of *N* integers that specifies a unique position in an *N*-dimensional space. The values in the vector are ordered from most significant to least significant. You can retrieve the values of the components using [index::operator= Operator](http://msdn.microsoft.com/library/26b659c5-a288-4045-8185-3204ed05e830).  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
