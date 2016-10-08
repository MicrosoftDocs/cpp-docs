---
title: "short_vector Structure"
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
ms.assetid: e4f50b8f-1150-437d-b58c-79c5fb883708
caps.latest.revision: 5
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# short_vector Structure
short_vector provides metaprogramming definitions which are useful for programming short vectors generically.  
  
## Syntax  
  
```  
template<  
    typename _Scalar_type,  
    int _Size  
>  
struct short_vector;  
template<>  
struct short_vector<unsigned int, 1>;  
template<>  
struct short_vector<unsigned int, 2>;  
template<>  
struct short_vector<unsigned int, 3>;  
template<>  
struct short_vector<unsigned int, 4>;  
template<>  
struct short_vector<int, 1>;  
template<>  
struct short_vector<int, 2>;  
template<>  
struct short_vector<int, 3>;  
template<>  
struct short_vector<int, 4>;  
template<>  
struct short_vector<float, 1>;  
template<>  
struct short_vector<float, 2>;  
template<>  
struct short_vector<float, 3>;  
template<>  
struct short_vector<float, 4>;  
template<>  
struct short_vector<unorm, 1>;  
template<>  
struct short_vector<unorm, 2>;  
template<>  
struct short_vector<unorm, 3>;  
template<>  
struct short_vector<unorm, 4>;  
template<>  
struct short_vector<norm, 1>;  
template<>  
struct short_vector<norm, 2>;  
template<>  
struct short_vector<norm, 3>;  
template<>  
struct short_vector<norm, 4>;  
template<>  
struct short_vector<double, 1>;  
template<>  
struct short_vector<double, 2>;  
template<>  
struct short_vector<double, 3>;  
template<>  
struct short_vector<double, 4>;  
```  
  
#### Parameters  
 `_Scalar_type`  
 `_Size`  
  
## Members  
  
### Public Typedefs  
  
|Name|Description|  
|----------|-----------------|  
|`type`||  
  
### Public Constructors  
  
|Name|Description|  
|----------|-----------------|  
|[short_vector::short_vector Constructor](#short_vector__short_vector_constructor)||  
  
## Inheritance Hierarchy  
 `short_vector`  
  
## Requirements  
 **Header:** amp_short_vectors.h  
  
 **Namespace:** Concurrency::graphics  
  
##  <a name="short_vector__short_vector_constructor"></a>  short_vector::short_vector Constructor  
  
```  
short_vector();  
```  
  
## See Also  
 [Concurrency::graphics Namespace](../VS_visualcpp/Concurrency--graphics-Namespace.md)