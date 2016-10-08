---
title: "array_view::reinterpret_as Method"
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
ms.assetid: e57f2045-127d-4bca-9ae5-f38635a857a0
caps.latest.revision: 15
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
# array_view::reinterpret_as Method
Reinterprets the array_view through a one-dimensional array_view, which as an option can have a different value type than the source array_view.  
  
## Syntax  
  
```  
template <  
    typename _Value_type2  
>  
array_view< _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
  
template <  
    typename _Value_type2  
>  
array_view<const _Value_type2, _Rank> reinterpret_as() const restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Value_type2`  
 The data type of the new `array_view` object.  
  
## Return Value  
 An `array_view` object or a const `array_view` object that is based on this `array_view`, with the element type converted from `T` to `_Value_type2`, and the rank reduced from *N* to 1.  
  
## Remarks  
 Sometimes it is convenient to view a multi-dimensional array as a linear, one-dimensional array, which may have a different value type than the source array. You can achieve this on an `array_view` by using this method.  
  
> [!WARNING]
>  Reinterpeting an array_view object by using a different value type is a potentially unsafe operation. This functionality should be used with care.  
  
 Here's an example:  
  
```cpp  
struct RGB { float r; float g; float b; };  
  
array<RGB,3>  a = ...;   
array_view<float,1> v = a.reinterpret_as<float>();   
  
assert(v.extent == 3*a.extent);  
```  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [array_view Class](../VS_visualcpp/array_view-Class.md)