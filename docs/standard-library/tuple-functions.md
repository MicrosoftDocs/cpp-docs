---
title: "&lt;tuple&gt; functions | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.tgt_pltfrm: ""
ms.topic: "article"
ms.assetid: bc6be38f-5258-4c14-b81b-63caa335fd44
caps.latest.revision: 13
manager: "ghogen"
---
# &lt;tuple&gt; functions
||||  
|-|-|-|  
|[get Function](#get_function)|[make_tuple Function](#make_tuple_function)|[tie Function](#tie_function)|  
  
##  <a name="get_function"></a>  get Function  
 Gets an element from a `tuple` object, by index or (in C++14) by type.  
  
```  
 
// by index:
// get reference to Index element of tuple
template <size_t Index, class... Types>  
constexpr tuple_element_t<Index, tuple<Types...>>& get(tuple<Types...>& Tuple) noexcept;

// get const reference to Index element of tuple
template <size_t Index, class... Types>  
constexpr const tuple_element_t<Index, tuple<Types...>>& get(const tuple<Types...>& Tuple) noexcept;

// get rvalue reference to Index element of tuple
template <size_t Index, class... Types>  
constexpr tuple_element_t<Index, tuple<Types...>>&& get(tuple<Types...>&& Tuple) noexcept;

// (C++14) by type:
// get reference to T element of tuple
template <class T, class... Types>  
constexpr T& get(tuple<Types...>& Tuple) noexcept;

// get const reference to T element of tuple
template <class T, class... Types>  
constexpr const T& get(const tuple<Types...>& Tuple) noexcept;

// get rvalue reference to T element of tuple
template <class T, class... Types>  
constexpr T&& get(tuple<Types...>&& Tuple) noexcept;  
```  
  
### Parameters  
 `Index`  
 The index of the element to get.  
  
 `Types`  
 The sequence of types declared in the tuple, in declaration order.  
  
 `T`  
 The type of the element to get.  
  
 `Tuple`  
 A std::tuple that contains any number of elements.  
  
### Remarks  
 The template functions return a reference to the value at index `Index`, or of type `T` in the `tuple` object.  
  
 Calling `get<T>(Tuple)` will produce a compiler error if Tuple contains more or less than one element of type T.  
  
### Example  
  
```cpp  
#include <tuple>   
#include <iostream>   
#include <string>  
  
using namespace std;  
  
int main()  
{  
    tuple<int, double, string> tup(0, 1.42, "Call me Tuple");  
  
    // get elements by index  
    cout << " " << get<0>(tup);  
    cout << " " << get<1>(tup);  
    cout << " " << get<2>(tup) << endl;  
  
    // get elements by type  
    cout << " " << get<int>(tup);  
    cout << " " << get<double>(tup);  
    cout << " " << get<string>(tup) << endl;    
}  
  
/*  
Output:  
0 1.42 Call me Tuple  
0 1.42 Call me Tuple  
*/  
  
```  
  
##  <a name="make_tuple_function"></a>  make_tuple Function  
 Makes a `tuple` from element values.  
  
```  
template <class T1, class T2, ..., class TN>  
tuple<V1, V2, ..., VN> make_tuple(const T1& t1, const T2& t2, ..., const TN& tN);
```  
  
### Parameters  
 `TN`  
 The type of the Nth function parameter.  
  
 `tN`  
 The value of the Nth function parameter.  
  
### Remarks  
 The template function returns `tuple<V1, V2, ..., VN>(t1, t2, ..., tN)`, where each type `Vi` is `X&` when the corresponding type `Ti` is `cv` `reference_wrapper<X>`; otherwise, it is `Ti`.  
  
 One advantage of `make_tuple` is that the types of objects that are being stored are determined automatically by the compiler and do not have to be explicitly specified. Don't use explicit template arguments such as `make_tuple<int, int>(1, 2)` when you use `make_tuple` because it is unnecessarily verbose and adds complex rvalue reference problems that might cause compilation failure.  
  
### Example  
  
```cpp  
  
// std_tr1__tuple__make_tuple.cpp   
// compile by using: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main()   
    {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    c0 = std::make_tuple(4, 5, 6, 7);   
  
// display contents " 4 5 6 7"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    return (0);   
    }  
  
```  
  
 `0 1 2 3  4 5 6 7`  
  
##  <a name="tie_function"></a>  tie Function  
 Makes a `tuple` from element references.  
  
```  
template <class T1, class T2, ..., class TN>  
tuple<T1&, T2&, ..., TN&> tie(T1& t1, T2& t2, ..., TN& tN);
```  
  
### Parameters  
 `TN`  
 The base type of the Nth tuple element.  
  
### Remarks  
 The template function returns `tuple<T1&, T2&, ..., TN&>(t1, t2, ..., tN)`.  
  
### Example  
  
```cpp  
// std_tr1__tuple__tie.cpp   
// compile with: /EHsc   
#include <tuple>   
#include <iostream>   
  
typedef std::tuple<int, double, int, double> Mytuple;   
int main()   
    {   
    Mytuple c0(0, 1, 2, 3);   
  
// display contents " 0 1 2 3"   
    std::cout << " " << std::get<0>(c0);   
    std::cout << " " << std::get<1>(c0);   
    std::cout << " " << std::get<2>(c0);   
    std::cout << " " << std::get<3>(c0);   
    std::cout << std::endl;   
  
    int v4 = 4;   
    double v5 = 5;   
    int v6 = 6;   
    double v7 = 7;   
    std::tie(v4, v5, v6, v7) = c0;   
  
// display contents " 0 1 2 3"   
    std::cout << " " << v4;   
    std::cout << " " << v5;   
    std::cout << " " << v6;   
    std::cout << " " << v7;   
    std::cout << std::endl;   
  
    return (0);   
    }    
```  
  
```Output  
0 1 2 3  
0 1 2 3  
```  
  
## See Also  
 [\<tuple>](../standard-library/tuple.md)

