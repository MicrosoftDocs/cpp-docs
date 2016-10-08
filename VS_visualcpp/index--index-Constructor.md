---
title: "index::index Constructor"
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
ms.assetid: b8bb7854-eb96-4fe6-8d86-54efba3f56d5
caps.latest.revision: 14
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
# index::index Constructor
Initializes a new instance of the [index](../VS_visualcpp/index-Class.md) class.  
  
## Syntax  
  
```  
index() restrict(amp,cpu);  
  
index(  
    const index<_Rank>& _Other ) restrict(amp,cpu);  
  
explicit index(  
    int _I ) restrict(amp,cpu);  
  
index(  
    int _I0,  
    int _I1 ) restrict(amp,cpu);  
  
index(  
    int _I0,  
    int _I1,  
    int _I2 ) restrict(amp,cpu);  
  
explicit index(  
    const int _Array[_Rank]  
) restrict(amp,cpu);  
```  
  
#### Parameters  
 `_Array`  
 A one-dimensional array with the rank values.  
  
 `_I`  
 The index location in a one-dimensional index.  
  
 `_I0`  
 The length of the most significant dimension.  
  
 `_I1`  
 The length of the next-to-most-significant dimension.  
  
 `_I2`  
 The length of the least significant dimension.  
  
 `_Other`  
 An `index` object on which the new `index` object is based.  
  
## Overloads  
  
|Name|Definition|  
|----------|----------------|  
|`index() restrict(cpu, amp);`|Initializes a new instance of the `index` class, setting the value at each dimension to zero. For example, `index<3> ix;` initializes the variable to the location (0,0,0).|  
|`index(    const index<_Rank>& _Other ) restrict(cpu, amp);`|Initializes a new instance of the `index` class by copying the specified `index` object.|  
|`index(    int _I ) restrict(cpu, amp);`<br /><br /> `index(    int _I0,    int _I1 ) restrict(cpu, amp);`<br /><br /> `index(    int _I0,    int _I1,    int _I2 ) restrict(cpu, amp);`|Initializes a new instance of the `index` class, using the specified coordinate value or values. These constructors are valid only when the rank of the index is 1, 2, or 3. Using an incompatible rank when invoking one of these constructors causes a compilation error.|  
|`explicit index( const int _Array[_Rank] ) restrict(cpu, amp);`|Initializes a new instance of the `index` class, using the coordinate values that are in the specified array. If the length of the array isn't equal to the rank of the index, the behavior is undefined. If the array value is NULL or is not a valid pointer, the behavior is undefined.|  
  
## Requirements  
 **Header:** amp.h  
  
 **Namespace:** Concurrency  
  
## See Also  
 [index Class](../VS_visualcpp/index-Class.md)