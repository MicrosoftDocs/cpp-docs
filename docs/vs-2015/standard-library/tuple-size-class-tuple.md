---
title: "tuple_size Class &lt;tuple&gt; | Microsoft Docs"
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
  - "tuple_size"
  - "std::tr1::tuple_size"
  - "std.tr1.tuple_size"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "tuple_size Class <tuple> (TR1)"
ms.assetid: 73852fc5-eb68-41f1-8379-465cedc2314a
caps.latest.revision: 27
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
---
# tuple_size Class &lt;tuple&gt;
[!INCLUDE[blank_token](../includes/blank-token.md)]

The latest version of this topic can be found at [tuple_size Class;](https://docs.microsoft.com/cpp/standard-library/tuple-size-class-tuple).  
  
Reports the number of elements that a `tuple` contains.  
  
## Syntax  
  
```  
// TEMPLATE STRUCT tuple_size  
template <class Tuple>  
struct tuple_size;  
 
// size of tuple  
template <class... Types>  
struct tuple_size<tuple<Types...>>  
: integral_constant<size_t, sizeof...(Types)>;  
 
// size of const tuple  
template <class Tuple>  
struct tuple_size<const Tuple>;  
 
// size of volatile tuple  
template <class Tuple>  
struct tuple_size<volatile Tuple>;  
 
// size of const volatile tuple  
template <class Tuple>  
struct tuple_size<const volatile Tuple>;   
```  
  
#### Parameters  
 `Tuple`  
 The type of the tuple.  
  
## Remarks  
 The template class has a member `value` that is an integral constant expression whose value is the extent of the tuple type `Tuple`.  
  
## Example  
  
```  
#include <tuple>   
#include <iostream>  
  
using namespace std;  
  
typedef tuple<int, double, int, double> MyTuple;  
int main()  
{  
    MyTuple c0(0, 1.5, 2, 3.7);  
  
    // display contents " 0 1 2 3"   
    cout << " " << get<0>(c0);  
    cout << " " << get<1>(c0);  
    cout << " " << get<2>(c0);  
    cout << " " << get<3>(c0) << endl;  
  
    // display size " 4"   
    cout << " " << tuple_size<MyTuple>::value << endl;  
}  
  
/*  
Output:  
0 1.5 2 3.7  
4  
*/  
```  
  
## Requirements  
 **Header:** \<tuple>  
  
 **Namespace:** std  
  
## See Also  
 [\<tuple>](../standard-library/tuple.md)   
 [tuple](../standard-library/tuple-class.md)  
 [tuple_element Class](../standard-library/tuple-element-class-tuple.md)




