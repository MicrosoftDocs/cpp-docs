---
description: "Learn more about: mask_array Class"
title: "mask_array Class"
ms.date: "11/04/2016"
f1_keywords: ["valarray/std::mask_array"]
helpviewer_keywords: ["mask_array class"]
ms.assetid: c49bed6a-3000-4f39-bff6-cb9a453acb0b
---
# mask_array Class

An internal, auxiliary class template that supports objects that are subsets of parent valarrays, specified with a Boolean expression, by providing operations between the subset arrays.

## Syntax

## Remarks

The class describes an object that stores a reference to an object `va` of class [valarray](../standard-library/valarray-class.md)**\<Type>**, along with an object `ba` of class [valarray\<bool>](../standard-library/valarray-bool-class.md), which describes the sequence of elements to select from the `valarray<Type>` object.

You construct a `mask_array<Type>` object only by writing an expression of the form [va&#91;ba&#93;](../standard-library/valarray-class.md#op_at). The member functions of class mask_array then behave like the corresponding function signatures defined for `valarray<Type>`, except that only the sequence of selected elements is affected.

The sequence consists of at most `ba.size` elements. An element *J* is included only if **ba**[ *J*] is true. Thus, there are as many elements in the sequence as there are true elements in `ba`. If `I` is the index of the lowest true element in `ba`, then **va**[ `I`] is element zero in the selected sequence.

## Example

```cpp
// mask_array.cpp
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

   // Use masked subsets to assign a value of 10
   // to all elements grrater than 3 in value
   va [va > 3 ] = 10;
   cout << "The modified operand valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;
}
```

### Output

```Output
The initial operand valarray is:  (0 -1 2 -1 4 -1 6 -1 8 -1).
The modified operand valarray is:  (0 -1 2 -1 10 -1 10 -1 10 -1).
```

## Requirements

**Header:** \<valarray>

**Namespace:** std

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
