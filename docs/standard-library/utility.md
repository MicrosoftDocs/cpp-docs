---
title: "&lt;utility&gt; | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "<utility>"
  - "utility/std::<utility>"
  - "std.<utility>"
  - "std::<utility>"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "utility header"
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
caps.latest.revision: 18
author: "corob-msft"
ms.author: "corob"
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
# &lt;utility&gt;
Defines Standard Template Library (STL) types, functions, and operators that help to construct and manage pairs of objects, which are useful whenever two objects need to be treated as if they were one.  
  
## Syntax  
  
```  
#include <utility>  
  
```  
  
## Remarks  
 Pairs are widely used in the Standard C++ Library. They are required both as the arguments and return values for various functions and as element types for containers such as [map class](../standard-library/map-class.md) and [multimap class](../standard-library/multimap-class.md). The \<utility> header is automatically included by \<map> to assist in managing their key/value pair type elements.  
  
### Classes  
  
|||  
|-|-|  
|[tuple_element](../standard-library/tuple-element-class-utility.md)|A class that wraps the type of a `pair` element.|  
|[tuple_size](../standard-library/tuple-size-class-utility.md)|A class that wraps `pair` element count.|  
  
### Functions  
  
|||  
|-|-|  
|[forward](../standard-library/utility-functions.md#forward)|Preserves the reference type (either `lvalue` or `rvalue`) of the argument from being obscured by perfect forwarding.|  
|[get](../standard-library/utility-functions.md#get)|A function that gets an element from a `pair` object.|  
|[make_pair](../standard-library/utility-functions.md#make_pair)|A template helper function used to construct objects of type `pair`, where the component types are based on the data types passed as parameters.|  
|[move](../standard-library/utility-functions.md#move)|Returns the passed in argument as an `rvalue` reference.|  
|[swap](../standard-library/utility-functions.md#swap)|Exchanges the elements of two `pair` objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](../standard-library/utility-operators.md#operator_neq)|Tests if the pair object on the left side of the operator is not equal to the pair object on the right side.|  
|[operator==](../standard-library/utility-operators.md#operator_eq_eq)|Tests if the pair object on the left side of the operator is equal to the pair object on the right side.|  
|[operator<](../standard-library/utility-operators.md#operator_lt_)|Tests if the pair object on the left side of the operator is less than the pair object on the right side.|  
|[operator\<=](../standard-library/utility-operators.md#operator_lt__eq)|Tests if the pair object on the left side of the operator is less than or equal to the pair object on the right side.|  
|[operator>](../standard-library/utility-operators.md#operator_gt_)|Tests if the pair object on the left side of the operator is greater than the pair object on the right side.|  
|[operator>=](../standard-library/utility-operators.md#operator_gt__eq)|Tests if the pair object on the left side of the operator is greater than or equal to the pair object on the right side.|  
  
### Structs  
  
|||  
|-|-|  
|[identity](../standard-library/identity-structure.md)||  
|[pair](../standard-library/pair-structure.md)|A type that provides for the ability to treat two objects as a single object.|  
  
## See Also  
 [Header Files Reference](../standard-library/cpp-standard-library-header-files.md)   
 [Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)



