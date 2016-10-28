---
title: "index Class"
ms.custom: ""
ms.date: "10/28/2016"
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
# index Class
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
|[index::index Constructor](../Topic/index::index%20Constructor.md)|Initializes a new instance of the `index` class.|  
  
### Public Operators  
  
|Name|Description|  
|----------|-----------------|  
|[index::operator-- Operator](../Topic/index::operator--%20Operator.md)|Decrements each element of the `index` object.|  
|[index::operator(mod)= Operator](../Topic/index::operator\(mod\)=%20Operator.md)|Calculates the modulus (remainder) of each element in the `index` object when that element is divided by a number.|  
|[index::operator*= Operator](../Topic/index::operator*=%20Operator.md)|Multiplies each element of the `index` object by a number.|  
|[index::operator/= Operator](../Topic/index::operator-=%20Operator2.md)|Divides each element of the `index` object by a number.|  
|[index::operatorOperator](../Topic/index::operatorOperator.md)|Returns the element that's at the specified index.|  
|[index::operator++ Operator](../Topic/index::operator++%20Operator.md)|Increments each element of the `index` object.|  
|[index::operator+= Operator](../Topic/index::operator+=%20Operator.md)|Adds the specified number to each element of the `index` object.|  
|[index::operator= Operator](../Topic/index::operator=%20Operator.md)|Copies the contents of the specified `index` object into this one.|  
|[index::operator-= Operator](../Topic/index::operator-=%20Operator1.md)|Subtracts the specified number from each element of the `index` object.|  
  
### Public Constants  
  
|Name|Description|  
|----------|-----------------|  
|[index::rank Constant](../Topic/index::rank%20Constant.md)|Stores the rank of the `index` object.|  
  
## Inheritance Hierarchy  
 `index`  
  
## Remarks  
 The `index` structure represents a coordinate vector of *N* integers that specifies a unique position in an *N*-dimensional space. The values in the vector are ordered from most significant to least significant. You can retrieve the values of the components using [index::operator= Operator](../Topic/index::operator=%20Operator.md).  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [Concurrency Namespace (C++ AMP)](../../../parallel/amp/reference/concurrency-namespace-cpp-amp.md)
