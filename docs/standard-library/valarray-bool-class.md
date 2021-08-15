---
description: "Learn more about: valarray&lt;bool&gt; Class"
title: "valarray&lt;bool&gt; Class"
ms.date: "11/04/2016"
f1_keywords: ["valarray<bool>", "valarray/std::valarray<bool>"]
helpviewer_keywords: ["valarray<bool> class"]
ms.assetid: fc0e7121-4758-4ea5-86c3-f04448f04acf
---
# valarray&lt;bool&gt; Class

A specialized version of the class template **valarray\<Type>** to elements of type **`bool`**.

## Syntax

```cpp
class valarray<bool>
```

## Example

```cpp
// valarray_bool.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   valarray<bool> vaBool ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial Left valarray is: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaBool = ( vaL < vaR );
   cout << "The result of the less-than comparison "
   << "test is the\nvalarray<bool>: ( ";
   for ( i = 0 ; i < 10 ; i++ )
      cout << vaBool [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial Left valarray is: ( 0 1 -2 3 -4 5 -6 7 -8 9 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The result of the less-than comparison test is the
valarray<bool>: ( 0 0 1 0 1 0 1 0 1 0 ).
*/
```

## Requirements

**Header:** \<valarray>

**Namespace:** std

## See also

[valarray Class](../standard-library/valarray-class.md)\
[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
