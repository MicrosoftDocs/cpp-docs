---
description: "Learn more about: minus Struct"
title: "minus Struct"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::minus"]
helpviewer_keywords: ["minus struct", "minus class"]
ms.assetid: 7bce784e-2be6-413a-b516-004e9ecb2a39
---
# minus Struct

A predefined function object that performs the subtraction operation (binary `operator-`)  on its arguments.

## Syntax

```
template <class Type = void>
struct minus : public binary_function <Type, Type, Type>
{
    Type operator()(const Type& Left, const Type& Right) const;
};

// specialized transparent functor for operator-
template <>
struct minus<void>
{
  template <class T, class U>
  auto operator()(T&& Left, U&& Right) const`
    -> decltype(std::forward<T>(Left) - std::forward<U>(Right));
};
```

### Parameters

*Type*, *T*, *U*\
A type that supports a binary `operator-` that takes operands of the specified or inferred types.

*Left*\
The left operand of the operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *T*.

*Right*\
The right operand of the operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *U*.

## Return Value

The result of `Left - Right`. The specialized template does perfect forwarding of the result, which has the type returned by `operator-`.

## Example

```cpp
// functional_minus.cpp
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
   for ( i = 0 ; i <= 5 ; i++ )
   {
      v1.push_back( 4 * i + 1);
   }

   int j;
   for ( j = 0 ; j <= 5 ; j++ )
   {
      v2.push_back( 3 * j - 1);
   }

   cout << "The vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   cout << "The vector v2 = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout << *Iter2 << " ";
   cout << ")" << endl;

   // Finding the element-wise diference of the elements of v1 & v2
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), v3.begin ( ),
      minus<int>( ) );

   cout << "The element-wise differences between v1 and v2 are: ( " ;
   for ( Iter3 = v3.begin( ) ; Iter3 != v3.end( ) ; Iter3++ )
      cout << *Iter3 << " ";
   cout << ")" << endl;
}
```

```Output
The vector v1 = ( 1 5 9 13 17 21 )
The vector v2 = ( -1 2 5 8 11 14 )
The element-wise differences between v1 and v2 are: ( 2 3 4 5 6 7 )
```
