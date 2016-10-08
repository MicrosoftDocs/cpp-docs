---
title: "tuple_size Class &lt;utility&gt;"
ms.custom: na
ms.date: 10/06/2016
ms.devlang: 
  - C++
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: 36d04207-ed87-4c11-9875-150c59833b79
caps.latest.revision: 19
manager: ghogen
translation.priority.mt: 
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
# tuple_size Class &lt;utility&gt;
Wraps `pair` element count.  
  
## Syntax  
  
```  
template<class Tuple>  
struct tuple_size;  
  
template<class T1, class T2>  
struct tuple_size<pair<T1, T2>>   : integral_constant<size_t, 2>  
  
// size of const tuple  
template<class Tuple>  
struct tuple_size<const Tuple>;  
  
// size of volatile tuple  
template<class Tuple>  
struct tuple_size<volatile Tuple>;  
  
// size of const volatile tuple  
template<class Tuple>  
struct tuple_size<const volatile Tuple>;  
```  
  
#### Parameters  
 `T1`  
 The type of the first pair element.  
  
 `T2`  
 The type of the second pair element.  
  
## Remarks  
 The template is a specialization of the template class [tuple_size Class](../VS_visualcpp/tuple_size-Class--tuple-.md). It has a member `value` that is an integral constant expression whose value is 2.  
  
## Example  
  
```  
#include <utility>   
#include <iostream>   
  
using namespace std;  
  
typedef pair<int, double> MyPair;  
  
int main()  
{  
    MyPair c0(0, 1.1);  
  
    // display contents " 0 1.1"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0) << endl;  
  
    // display size " 2"   
    cout << " " << tuple_size<MyPair>::value << endl;  
  
}  
  
/*  
Output:  
0 1.1  
2  
*/  
```  
  
## Requirements  
 **Header:** <utility\>  
  
 **Namespace:** std  
  
## See Also  
 [<utility\>](../VS_visualcpp/-utility-.md)   
 [get](../VS_visualcpp/-utility--functions.md#get_function__lt_utility_gt_)   
 [tuple_element Class](../VS_visualcpp/tuple_element-Class--utility-.md)