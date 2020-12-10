---
description: "Learn more about: logical_not Struct"
title: "logical_not Struct"
ms.date: "11/04/2016"
f1_keywords: ["functional/std::logical_not"]
helpviewer_keywords: ["logical_not class", "logical_not struct"]
ms.assetid: 892db678-31da-4540-974b-17b05efc0849
---
# logical_not Struct

A predefined function object that performs the logical not operation (`operator!`) on its argument.

## Syntax

```
template <class Type = void>
struct logical_not : public unary_function<Type, bool>
{
    bool operator()(const Type& Left) const;
};

// specialized transparent functor for operator!
template <>
struct logical_not<void>
{
  template <class Type>
  auto operator()(Type&& Left) const`
     -> decltype(!std::forward<Type>(Left));
};
```

### Parameters

*Type*\
Any type that supports an `operator!` that takes an operand of the specified or inferred type.

*Left*\
The operand of the logical not operation. The unspecialized template takes an lvalue reference argument of type *Type*. The specialized template does perfect forwarding of lvalue and rvalue reference arguments of inferred type *Type*.

## Return Value

The result of `!Left`. The specialized template does perfect forwarding of the result, which has the type that's returned by `operator!`.

## Example

```cpp
// functional_logical_not.cpp
// compile with: /EHsc
#include <deque>
#include <algorithm>
#include <functional>
#include <iostream>

int main( )
{
   using namespace std;
   deque<bool> d1, d2 ( 7 );
   deque<bool>::iterator iter1, iter2;

   int i;
   for ( i = 0 ; i < 7 ; i++ )
   {
      d1.push_back((bool)((i % 2) != 0));
   }

   cout << boolalpha;    // boolalpha I/O flag on

   cout << "Original deque:\n d1 = ( " ;
   for ( iter1 = d1.begin( ) ; iter1 != d1.end( ) ; iter1++ )
      cout << *iter1 << " ";
   cout << ")" << endl;

   // To flip all the truth values of the elements,
   // use the logical_not function object
   transform( d1.begin( ), d1.end( ), d2.begin( ),logical_not<bool>( ) );
   cout << "The deque with its values negated is:\n d2 = ( " ;
   for ( iter2 = d2.begin( ) ; iter2 != d2.end( ) ; iter2++ )
      cout << *iter2 << " ";
   cout << ")" << endl;
}
```

```Output
Original deque:
d1 = ( false true false true false true false )
The deque with its values negated is:
d2 = ( true false true false true false true )
```
