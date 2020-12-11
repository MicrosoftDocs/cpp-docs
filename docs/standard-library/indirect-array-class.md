---
description: "Learn more about: indirect_array Class"
title: "indirect_array Class"
ms.date: "11/04/2016"
f1_keywords: ["valarray/std::indirect_array"]
helpviewer_keywords: ["indirect_array class"]
ms.assetid: 10e1eaea-ba5a-405c-a25e-7bdd3eee7fc7
---
# indirect_array Class

An internal, auxiliary class template that supports objects that are subsets of valarrays by providing operations between subset arrays defined by specifying a subset of indices of a parent valarray.

## Syntax

## Remarks

The class describes an object that stores a reference to an object `va` of class [valarray](../standard-library/valarray-class.md)**\<Type>**, along with an object `xa` of class `valarray<size_t>`, which describes the sequence of elements to select from the `valarray<Type>` object.

You construct an `indirect_array<Type>` object only by writing an expression of the form `va[xa]`. The member functions of class indirect_array then behave like the corresponding function signatures defined for `valarray<Type>`, except that only the sequence of selected elements is affected.

The sequence consists of **xa.**[size](../standard-library/valarray-class.md#size) elements, where element `I` becomes the index **xa**[ `I`] within `va`.

## Example:

```cpp
// indirect_array.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      va [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 2 )
      va [ i ] =  -1;

   cout << "The initial operand valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   // Select 2nd, 4th & 6th elements
   // and assign a value of 10 to them
   valarray<size_t> indx ( 3 );
   indx [0] = 2;
   indx [1] = 4;
   indx [2] = 6;
   va[indx] = 10;

   cout << "The modified operand valarray is:  ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;
}
```

### Output

```cpp
The initial operand valarray is:  (0 -1 2 -1 4 -1 6 -1 8 -1).
The modified operand valarray is:  (0 -1 10 -1 10 -1 10 -1 8 -1).
```

## Requirements

**Header:** \<valarray>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
