---
description: "Learn more about: modulus Struct"
title: "modulus Struct"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::modulus"]
helpviewer_keywords: ["modulus class", "modulus struct"]
ms.assetid: 86d342f7-b7b1-46a4-b0bb-6b7ae827369b
---
# modulus Struct

A predefined function object that performs the modulus division operation (`operator%`) on its arguments.

## Syntax

```
template <class Type = void>
struct modulus : public binary_function <Type, Type, Type>
{
    Type operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator%
template <>
struct modulus<void>
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const`
    -> decltype(std::forward<T>(Left) % std::forward<U>(Right));
};
```

### Parameters

*Type*, *T*, *U*\
Any type that supports an `operator%` that takes operands of the specified or inferred types.

*Left*\
The left operand of the modulus operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *T*.

*Right*\
The right operand of the modulus operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *U*.

## Return Value

The result of `Left % Right`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator%`.

## Remarks

The `modulus` functor is restricted to integral types for the basic data types, or to user-defined types that implement `operator%`.

## Example

```cpp
// functional_modulus.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main( )
{
   vector <int> v1, v2, v3 ( 6 );
   vector <int>::iterator Iter1, Iter2, Iter3;

   int i;
   for ( i = 1 ; i <= 6 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   int j;
   for ( j = 1 ; j <= 6 ; j++ )
   {
      v2.push_back( 3 * j );
   }

   cout << "The vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   cout << "The vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout << *Iter2 << " ";
   cout << ")" << endl;

   // Finding the element-wise remainders of the elements of v1 & v2
   transform (v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),
      modulus<int>() );

   cout << "The element-wise remainders of the modular division\n are: ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout << *Iter3 << " ";
   cout << ")" << endl;
}
```

```Output
The vector v1 = ( 5 10 15 20 25 30 )
The vector v2 = ( 3 6 9 12 15 18 )
The element-wise remainders of the modular division
are: ( 2 4 6 8 10 12 )
```
