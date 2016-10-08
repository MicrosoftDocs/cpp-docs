---
title: "&lt;utility&gt;"
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
ms.assetid: c4491103-5da9-47a1-9c2b-ed8bc64b0599
caps.latest.revision: 16
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
# &lt;utility&gt;
Defines Standard Template Library (STL) types, functions, and operators that help to construct and manage pairs of objects, which are useful whenever two objects need to be treated as if they were one.  
  
## Syntax  
  
```  
#include <utility>  
  
```  
  
## Remarks  
 Pairs are widely used in the Standard C++ Library. They are required both as the arguments and return values for various functions and as element types for containers such as [map class](../VS_visualcpp/map-Class.md) and [multimap class](../VS_visualcpp/multimap-Class.md). The <utility\> header is automatically included by <map\> to assist in managing their key/value pair type elements.  
  
### Classes  
  
|||  
|-|-|  
|[tuple_element](../VS_visualcpp/tuple_element-Class--utility-.md)|A class that wraps the type of a `pair` element.|  
|[tuple_size](../VS_visualcpp/tuple_size-Class--utility-.md)|A class that wraps `pair` element count.|  
  
### Functions  
  
|||  
|-|-|  
|[forward](../VS_visualcpp/-utility--functions.md#forward)|Preserves the reference type (either `lvalue` or `rvalue`) of the argument from being obscured by perfect forwarding.|  
|[get](../VS_visualcpp/-utility--functions.md#get_function__lt_utility_gt_)|A function that gets an element from a `pair` object.|  
|[make_pair](../VS_visualcpp/-utility--functions.md#make_pair)|A template helper function used to construct objects of type `pair`, where the component types are based on the data types passed as parameters.|  
|[move](../VS_visualcpp/-utility--functions.md#move)|Returns the passed in argument as an `rvalue` reference.|  
|[swap](../VS_visualcpp/-utility--functions.md#swap)|Exchanges the elements of two `pair` objects.|  
  
### Operators  
  
|||  
|-|-|  
|[operator!=](../VS_visualcpp/-utility--operators.md#operator_neq)|Tests if the pair object on the left side of the operator is not equal to the pair object on the right side.|  
|[operator==](../VS_visualcpp/-utility--operators.md#operator_eq_eq)|Tests if the pair object on the left side of the operator is equal to the pair object on the right side.|  
|[operator<](../VS_visualcpp/-utility--operators.md#operator_lt_)|Tests if the pair object on the left side of the operator is less than the pair object on the right side.|  
|[operator<=](../VS_visualcpp/-utility--operators.md#operator_lt__eq)|Tests if the pair object on the left side of the operator is less than or equal to the pair object on the right side.|  
|[operator>](../VS_visualcpp/-utility--operators.md#operator_gt_)|Tests if the pair object on the left side of the operator is greater than the pair object on the right side.|  
|[operator>=](../VS_visualcpp/-utility--operators.md#operator_gt__eq)|Tests if the pair object on the left side of the operator is greater than or equal to the pair object on the right side.|  
  
### Structs  
  
|||  
|-|-|  
|[identity](../VS_visualcpp/identity-Structure.md)||  
|[pair](../VS_visualcpp/pair-Structure.md)|A type that provides for the ability to treat two objects as a single object.|  
  
## See Also  
 [Header Files Reference](../VS_visualcpp/C---Standard-Library-Header-Files.md)   
 [Thread Safety in the C++ Standard Library](../VS_visualcpp/Thread-Safety-in-the-C---Standard-Library.md)