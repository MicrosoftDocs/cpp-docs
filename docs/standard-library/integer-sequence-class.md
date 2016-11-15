---
title: "integer_sequence Class | Microsoft Docs"
ms.custom: ""
ms.date: "11/04/2016"
ms.reviewer: ""
ms.suite: ""
ms.technology: 
  - "devlang-cpp"
ms.tgt_pltfrm: ""
ms.topic: "article"
f1_keywords: 
  - "type_traits/std::index_sequence"
  - "type_traits/std::make_index_sequence"
  - "type_traits/std::integer_sequence"
  - "type_traits/std::make_integer_sequence"
  - "type_traits/std::index_sequence_for"
  - "integer_sequence"
  - "std.integer_sequence"
  - "std::integer_sequence"
dev_langs: 
  - "C++"
helpviewer_keywords: 
  - "integer_sequence"
ms.assetid: 2cfdddee-819d-478e-bb78-c8a9c2696803
caps.latest.revision: 9
author: "corob-msft"
ms.author: "corob"
manager: "ghogen"
translation.priority.mt: 
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
# integer_sequence Class
Represents an integer sequence. Can be used to deduce and expand parameter packs in variadic types such as std::tuple\<T...> that are passed as arguments to a function.  
  
## Syntax  
  
```cpp  
template <class T, T... Vals>  
struct integer_sequence  
```  
  
#### Parameters  
 T  
 The type of the values; must be an integral type: bool, char, char16_t, char32_t, wchar_t, or signed or unsigned integer types.  
  
 Vals  
 A non-type parameter pack that represents a sequence of values of integral type T.  
  
## Members  
  
|||  
|-|-|  
|`static size_t size() noexcept`|The number of elements in the sequence.|  
|typedef T value_type|The type of each element in the sequence. Must be an integral type.|  
  
## Remarks  
 A parameter pack that is passed directly to a function can be unpacked without any special library helpers. When a parameter pack is part of a type that is passed to a function, and you need indices to access the elements, then the easiest way to unpack it is to use `integer_sequence` and its related type aliases `make_integer_sequence`, `index_sequence`, `make_index_sequence`, and `index_sequence_for`.  
  
## Example  
 The following example is based on the original proposal [N3658](http://open-std.org/jtc1/sc22/wg21/docs/papers/2013/n3658.html). It shows how to use an `integer_sequence` to create a `std::tuple` from a `std::array<T,N>`, and how to use an `integer_sequence` to get at the tuple members.  
  
 In the `a2t` function, an `index_sequence` is an alias of `integer_sequence` based on the `size_t` integral type. `make_index_sequence` is an alias that at compile time creates a zero-based `index_sequence` with the same number of elements as the array that is passed in by the caller. `a2t` passes the `index_sequence` by value to `a2t_` , where the expression `a[I]...` unpacks `I`, and then the elements are being fed to `make_tuple` which consumes them as individual arguments. For example, if the sequence contains three elements, then `make_tuple` is called as make_tuple(a[0], a[1], a[2]). The array elements themselves can of course be any type.  
  
 The apply function accepts a [std::tuple](../standard-library/tuple-class.md), and produces an integer_sequence by using the `tuple_size` helper class. Note that [std::decay_t](../standard-library/decay-class.md)_is necessary because [tuple_size](../standard-library/tuple-size-class-tuple.md) does not work with reference types. The `apply_` function unpacks the tuple members and forwards them as separate arguments to a function call. In this example the function is a simple lambda expression that prints out the values.  
  
```  
  
#include <stddef.h>  
#include <iostream>  
#include <tuple>  
#include <utility>  
#include <array>  
#include <string>  
  
using namespace std;  
  
// Create a tuple from the array and the index_sequence  
template<typename Array, size_t... I>  
auto a2t_(const Array& a, index_sequence<I...>)  
{  
    return make_tuple(a[I]...);  
}  
  
// Create an index sequence for the array, and pass it to the  
// implementation function a2t_  
template<typename T, size_t N>  
auto a2t(const array<T, N>& a)  
{  
    return a2t_(a, make_index_sequence<N>());  
}  
  
// Call function F with the tuple members as separate arguments.   
template<typename F, typename Tuple = tuple<T...>, size_t... I>  
decltype(auto) apply_(F&& f, Tuple&& args, index_sequence<I...>)   
{  
    return forward<F>(f)(get<I>(forward<Tuple>(args))...);  
}  
  
// Create an index_sequence for the tuple, and pass it with the   
// function object and the tuple to the implementation function apply_  
template<typename F, typename Tuple = tuple<T...>>  
decltype(auto) apply(F&& f, Tuple&& args)  
{  
    using Indices = make_index_sequence<tuple_size<decay_t<Tuple>>::value >;  
    return apply_(forward<F>(f), forward<Tuple>(args), Indices());  
}  
  
int main()  
{   
    const array<string, 3> arr { "Hello", "from", "C++14" };  
  
    //Create a tuple given a array  
    auto tup = a2t(arr);   
  
    // Extract the tuple elements  
    apply([](const string& a, const string& b, const string& c) {cout << a << " " << b << " " << c << endl; }, tup);  
  
    char c;  
    cin >> c;  
}  
  
```  
  
  To make an `index_sequence` for a parameter pack, use `index_sequence_for`\<T...> which is an alias for `make_index_sequence`\<sizeof...(T)>  
  
## Requirements  
 Header: <type_traits>  
  
 Namepace: std  
  
## See Also  
 [Ellipses and Variadic Templates](../cpp/ellipses-and-variadic-templates.md)

