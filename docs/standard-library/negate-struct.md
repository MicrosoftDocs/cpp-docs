---
description: "Learn more about: negate Struct"
title: "negate Struct"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::negate"]
helpviewer_keywords: ["negate struct", "negate class"]
ms.assetid: 8a372686-786e-4262-b37c-ca13dc11e62f
---
# negate Struct

A predefined function object that performs the arithmetic negation operation (unary `operator-`) on its argument.

## Syntax

```
template <class Type = void>
struct negate : public unary_function<Type, Type>
{
    Type operator()(const Type& Left) const;
};

// specialized transparent functor for unary operator-
template <>
struct negate<void>
{
  template <class Type>
  auto operator()(Type&& Left) const`
    -> decltype(-std::forward<Type>(Left));
};
```

### Parameters

*Type*\
Any type that supports an `operator-` that takes an operand of the specified or inferred type.

*Left*\
The operand to be negated. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *Type*.

## Return Value

The result of `-Left`. The specialized template does perfect forwarding of the result, which has the type that's returned by unary `operator-`.

## Example

```cpp
// functional_negate.cpp
// compile with: /EHsc
#include <vector>
#include <functional>
#include <algorithm>
#include <iostream>

using namespace std;

int main( )
{
   vector <int> v1, v2 ( 8 );
   vector <int>::iterator Iter1, Iter2;

   int i;
   for ( i = -2 ; i <= 5 ; i++ )
   {
      v1.push_back( 5 * i );
   }

   cout << "The vector v1 = ( " ;
   for ( Iter1 = v1.begin( ) ; Iter1 != v1.end( ) ; Iter1++ )
      cout << *Iter1 << " ";
   cout << ")" << endl;

   // Finding the element-wise negatives of the vector v1
   transform ( v1.begin( ),  v1.end( ), v2.begin( ), negate<int>( ) );

   cout << "The negated elements of the vector = ( " ;
   for ( Iter2 = v2.begin( ) ; Iter2 != v2.end( ) ; Iter2++ )
      cout << *Iter2 << " ";
   cout << ")" << endl;
}
```

```Output
The vector v1 = ( -10 -5 0 5 10 15 20 25 )
The negated elements of the vector = ( 10 5 0 -5 -10 -15 -20 -25 )
```
