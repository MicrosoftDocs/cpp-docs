---
description: "Learn more about: valarray Class"
title: "valarray Class"
ms.date: "03/27/2019"
f1_keywords: ["valarray/std::valarray", "valarray/std::valarray::value_type", "valarray/std::valarray::apply", "valarray/std::valarray::cshift", "valarray/std::valarray::free", "valarray/std::valarray::max", "valarray/std::valarray::min", "valarray/std::valarray::resize", "valarray/std::valarray::shift", "valarray/std::valarray::size", "valarray/std::valarray::sum", "valarray/std::valarray::swap"]
helpviewer_keywords: ["std::valarray [C++]", "std::valarray [C++], value_type", "std::valarray [C++], apply", "std::valarray [C++], cshift", "std::valarray [C++], free", "std::valarray [C++], max", "std::valarray [C++], min", "std::valarray [C++], resize", "std::valarray [C++], shift", "std::valarray [C++], size", "std::valarray [C++], sum", "std::valarray [C++], swap"]
ms.assetid: 19b862f9-5d09-4003-8844-6ddd02c1a3a7
---
# valarray Class

The class template describes an object that controls a sequence of elements of type `Type` that are stored as an array, designed for performing high-speed mathematical operations, and optimized for computational performance.

## Remarks

The class is a representation of the mathematical concept of an ordered set of values and the elements are numbered sequentially from zero. The class is described as a near container because it supports some, but not all, of the capabilities that first-class sequence containers, such as [vector](../standard-library/vector-class.md), support. It differs from class template vector in two important ways:

- It defines numerous arithmetic operations between corresponding elements of `valarray<Type>` objects of the same type and length, such as *xarr* = cos( *yarr*) + sin( *zarr*).

- It defines a variety of interesting ways to subscript a `valarray<Type>` object, by overloading [operator&#91;&#93;](#op_at).

An object of class `Type`:

- Has a public default constructor, destructor, copy constructor, and assignment operator, with conventional behavior.

- Defines the arithmetic operators and math functions, as needed, that are defined for the floating-point types, with conventional behavior.

In particular, no subtle differences may exist between copy construction and default construction followed by assignment. None of the operations on objects of class `Type` may throw exceptions.

## Members

### Constructors

|Name|Description|
|-|-|
|[valarray](#valarray)|Constructs a `valarray` of a specific size or with elements of a specific value or as a copy of another `valarray` or subset of another `valarray`.|

### Typedefs

|Name|Description|
|-|-|
|[value_type](#value_type)|A type that represents the type of element stored in a `valarray`.|

### Functions

|Name|Description|
|-|-|
|[apply](#apply)|Applies a specified function to each element of a `valarray`.|
|[cshift](#cshift)|Cyclically shifts all the elements in a `valarray` by a specified number of positions.|
|[free](#free)|Frees the memory used by the `valarray`.|
|[max](#max)|Finds the largest element in a `valarray`.|
|[min](#min)|Finds the smallest element in a `valarray`.|
|[resize](#resize)|Changes the number of elements in a `valarray` to a specified number, adding or removing elements as required.|
|[shift](#shift)|Shifts all the elements in a `valarray` by a specified number of positions.|
|[size](#size)|Finds the number of elements in a `valarray`.|
|[sum](#sum)|Determines the sum of all the elements in a `valarray` of nonzero length.|
|[swap](#swap)||

### Operators

|Name|Description|
|-|-|
|[operator!](#op_not)|A unary operator that obtains the logical `NOT` values of each element in a `valarray`.|
|[operator%=](#op_mod_eq)|Obtains the remainder of dividing the elements of an array element-wise either by a specified `valarray` or by a value of the element type.|
|[operator&=](#op_and_eq)|Obtains the bitwise `AND` of elements in an array either with the corresponding elements in a specified `valarray` or with a value of the element type.|
|[operator>>=](#op_gt_gt_eq)|Right-shifts the bits for each element of a `valarray` operand a specified number of positions or by an element-wise amount specified by a second `valarray`.|
|[operator<<=](#op_lt_lt_eq)|Left-shifts the bits for each element of a `valarray` operand a specified number of positions or by an element-wise amount specified by a second `valarray`.|
|[operator*=](#op_star_eq)|Multiplies the elements of a specified `valarray` or a value of the element type, element-wise, to an operand `valarray`.|
|[operator+](#op_add)|A unary operator that applies a plus to each element in a `valarray`.|
|[operator+=](#op_add_eq)|Adds the elements of a specified `valarray` or a value of the element type, element-wise, to an operand `valarray`.|
|[operator-](#operator-)|A unary operator that applies a minus to each element in a `valarray`.|
|[operator-=](#operator-_eq)|Subtracts the elements of a specified `valarray` or a value of the element type, element-wise, from an operand `valarray`.|
|[operator/=](#op_div_eq)|Divides an operand `valarray` element-wise by the elements of a specified `valarray` or a value of the element type.|
|[operator=](#op_eq)|Assigns elements to a `valarray` whose values are specified either directly or as part of some other `valarray` or by a `slice_array`, `gslice_array`, `mask_array`, or `indirect_array`.|
|[operator&#91;&#93;](#op_at)|Returns a reference to an element or its value at specified index or a specified subset.|
|[operator^=](#op_xor_eq)|Obtains the element-wise exclusive logical or operator ( `XOR`) of an array with either a specified valarray or a value of the element type.|
|[operator&#124;=](#op_or_eq)|Obtains the bitwise `OR` of elements in an array either with the corresponding elements in a specified `valarray` or with a value of the element type.|
|[operator~](#op_dtor)|A unary operator that obtains the bitwise `NOT` values of each element in a `valarray`.|

## <a name="apply"></a> apply

Applies a specified function to each element of a valarray.

```cpp
valarray<Type> apply(Type _Func(Type)) const;

valarray<Type> apply(Type _Func(constType&)) const;
```

### Parameters

*_Func(Type)*\
The function object to be applied to each element of the operand valarray.

*_Func(const Type&)*\
The function object for const to be applied to each element of the operand valarray.

### Return Value

A valarray whose elements have had `_Func` applied element-wise to the elements of the operand valarray.

### Remarks

The member function returns an object of class [valarray](../standard-library/valarray-class.md)**\<Type>**, of length [size](#size), each of whose elements *I* is `_Func((*this)[I])`.

### Example

```cpp
// valarray_apply.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

using namespace std;

int __cdecl MyApplyFunc( int n )
{
   return n*2;
}

int main( int argc, char* argv[] )
{
   valarray<int> vaR(10), vaApplied(10);
   int i;

   for ( i = 0; i < 10; i += 3 )
      vaR[i] = i;

   for ( i = 1; i < 10; i += 3 )
      vaR[i] = 0;

   for ( i = 2; i < 10; i += 3 )
      vaR[i] = -i;

   cout << "The initial Right valarray is: (";
   for   ( i=0; i < 10; ++i )
      cout << " " << vaR[i];
   cout << " )" << endl;

   vaApplied = vaR.apply( MyApplyFunc );

   cout << "The element-by-element result of "
       << "applying MyApplyFunc to vaR is the\nvalarray: ( ";
   for ( i = 0; i < 10; ++i )
      cout << " " << vaApplied[i];
   cout << " )" << endl;
}
```

```Output
The initial Right valarray is: ( 0 0 -2 3 0 -5 6 0 -8 9 )
The element-by-element result of applying MyApplyFunc to vaR is the
valarray: (  0 0 -4 6 0 -10 12 0 -16 18 )
```

## <a name="cshift"></a> cshift

Cyclically shifts all the elements in a valarray by a specified number of positions.

```cpp
valarray<Type> cshift(int count) const;
```

### Parameters

*count*\
The number of places the elements are to be shifted forward.

### Return Value

A new valarray in which all the elements have been moved *count* positions cyclically toward the front of the valarray, left with respect to their positions in the operand valarray.

### Remarks

A positive value of *count* shifts the elements cyclically left *count* places.

A negative value of *count* shifts the elements cyclically right *count* places.

### Example

```cpp
// valarray_cshift.cpp
// compile with: /EHsc

#include <valarray>
#include <iostream>

int main()
{
    using namespace std;
    int i;

    valarray<int> va1(10), va2(10);
    for (i = 0; i < 10; i+=1)
        va1[i] = i;
    for (i = 0; i < 10; i+=1)
        va2[i] = 10 - i;

    cout << "The operand valarray va1 is: (";
    for (i = 0; i < 10; i++)
        cout << " " << va1[i];
    cout << ")" << endl;

    // A positive parameter shifts elements right
    va1 = va1.cshift(4);
    cout << "The cyclically shifted valarray va1 is:\nva1.cshift (4) = (";
    for (i = 0; i < 10; i++)
        cout << " " << va1[i];
    cout << ")" << endl;

    cout << "The operand valarray va2 is: (";
    for (i = 0; i < 10; i++)
        cout << " " << va2[i];
    cout << ")" << endl;

    // A negative parameter shifts elements left
    va2 = va2.cshift(-4);
    cout << "The cyclically shifted valarray va2 is:\nva2.shift (-4) = (";
    for (i = 0; i < 10; i++)
        cout << " " << va2[i];
    cout << ")" << endl;
}
```

```Output
The operand valarray va1 is: ( 0 1 2 3 4 5 6 7 8 9)
The cyclically shifted valarray va1 is:
va1.cshift (4) = ( 4 5 6 7 8 9 0 1 2 3)
The operand valarray va2 is: ( 10 9 8 7 6 5 4 3 2 1)
The cyclically shifted valarray va2 is:
va2.shift (-4) = ( 4 3 2 1 10 9 8 7 6 5)
```

## <a name="free"></a> free

Frees the memory used by the valarray.

```cpp
void free();
```

### Remarks

This nonstandard function is equivalent to assigning an empty valarray. For example:

```cpp
valarray<T> v;
v = valarray<T>();

// equivalent to v.free()
```

## <a name="max"></a> max

Finds the largest element in a valarray.

```cpp
Type max() const;
```

### Return Value

The maximum value of the elements in the operand valarray.

### Remarks

The member function compares values by applying **operator\<** or **operator>** between pairs of elements of class `Type`, for which operators must be provided for the element `Type`.

### Example

```cpp
// valarray_max.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i, MaxValue;

   valarray<int> vaR ( 10 );
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  2*i - 1;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  10 - i;

   cout << "The operand valarray is: ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   MaxValue = vaR.max (  );
   cout << "The largest element in the valarray is: "
        << MaxValue  << "." << endl;
}
```

```Output
The operand valarray is: ( 0 1 8 3 7 5 6 13 2 9 ).
The largest element in the valarray is: 13.
```

## <a name="min"></a> min

Finds the smallest element in a valarray.

```cpp
Type min() const;
```

### Return Value

The minimum value of the elements in the operand valarray.

### Remarks

The member function compares values by applying **operator\<** or **operator>** between pairs of elements of class `Type`, for which operators must be provided for the element `Type`.

### Example

```cpp
// valarray_min.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i, MinValue;

   valarray<int> vaR ( 10 );
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  2*i;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  5 - i;

   cout << "The operand valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   MinValue = vaR.min ( );
   cout << "The smallest element in the valarray is: "
        << MinValue  << "." << endl;
}
/* Output:
The operand valarray is: ( 0 2 3 -3 8 0 -6 14 -3 -9 ).
The smallest element in the valarray is: -9.
*/
```

## <a name="op_not"></a> operator!

A unary operator that obtains the logical **NOT** values of each element in a valarray.

```cpp
valarray<bool> operator!() const;
```

### Return Value

The valarray of Boolean values that are the negation of the element values of the operand valarray.

### Remarks

The logical operation **NOT** negates the elements because it converts all zeros into ones and regards all nonzero values as ones and converts them into zeros. The returned valarray of Boolean values is of the same size as the operand valarray.

There is also a bitwise **NOT**[valarray::operator~](#op_dtor) that negates on the level of individual bits within the binary representation of **`char`** and **`int`** elements of a valarray.

### Example

```cpp
// valarray_op_lognot.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 );
   valarray<bool> vaNOT ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;

   cout << "The initial valarray is:  ( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   vaNOT = !vaL;
   cout << "The element-by-element result of "
        << "the logical NOT operator! is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaNOT [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The element-by-element result of the logical NOT operator! is the
valarray: ( 1 1 1 0 1 0 1 0 1 0 ).
```

## <a name="op_mod_eq"></a> operator%=

Obtains the remainder of dividing the elements of an array element-wise either by a specified valarray or by a value of the element type.

```cpp
valarray<Type>& operator%=(const valarray<Type>& right);

valarray<Type>& operator%=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to divide, element-wise, the operand valarray.

### Return Value

A valarray whose elements are the remainder from the element-wise division of the operand valarray by *right*

### Example

```cpp
// valarray_class_op_rem.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 6 ), vaR ( 6 );
   for ( i = 0 ; i < 6 ; i += 2 )
      vaL [ i ] =  53;
   for ( i = 1 ; i < 6 ; i += 2 )
      vaL [ i ] =  -67;
   for ( i = 0 ; i < 6 ; i++ )
      vaR [ i ] =  3*i+1;

   cout << "The initial valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial  right valarray is: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL %= vaR;
   cout << "The remainders from the element-by-element "
        << "division is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is: ( 53 -67 53 -67 53 -67 ).
The initial  right valarray is: ( 1 4 7 10 13 16 ).
The remainders from the element-by-element division is the
valarray: ( 0 -3 4 -7 1 -3 ).
```

## <a name="op_and_eq"></a> operator&amp;=

Obtains the bitwise **AND** of elements in an array either with the corresponding elements in a specified valarray or with a value of the element type.

```cpp
valarray<Type>& operator&=(const valarray<Type>& right);

valarray<Type>& operator&=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the logical `AND` with the operand valarray.

### Return Value

A valarray whose elements are the element-wise logical `AND` of the operand valarray by *right*

### Remarks

A bitwise operation can only be used to manipulate bits in **`char`** and **`int`** data types and variants and not on **`float`**, **`double`**, **longdouble**, **`void`**, **`bool`**, or other, more complex data types.

The bitwise AND has the same truth table as the logical `AND` but applies to the data type on the level of the individual bits. Given bits *b*1 and *b*2, *b*1 `AND` *b*2 is **`true`** if both bits are true; **`false`** if at least one is false.

### Example

```cpp
// valarray_class_op_bitand.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;
   for ( i = 0 ; i < 10 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL &= vaR;
   cout << "The element-by-element result of "
        << "the logical AND operator&= is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is:  ( 0 0 0 2 0 4 0 6 0 8 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 8 9 ).
The element-by-element result of the logical AND operator&= is the
valarray: ( 0 0 0 2 0 4 0 6 0 8 ).
```

## <a name="op_gt_gt_eq"></a> operator&gt;&gt;=

Right-shifts the bits for each element of a valarray operand a specified number of positions or by an element-wise amount specified by a second valarray.

```cpp
valarray<Type>& operator>>=(const valarray<Type>& right);

valarray<Type>& operator>>=(const Type& right);
```

### Parameters

*right*\
The value indicating the amount of right shift or valarray whose elements indicate the element-wise amount of right shift.

### Return Value

A valarray whose elements have been shifted right the amount specified in *right*.

### Remarks

Signed numbers have their signs preserved.

### Example

```cpp
// valarray_class_op_rs.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  64;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -64;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial operand valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The  right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL >>= vaR;
   cout << "The element-by-element result of "
        << "the right shift is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial operand valarray is: ( 64 -64 64 -64 64 -64 64 -64 ).
The  right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the right shift is the
valarray: ( 64 -32 16 -8 4 -2 1 -1 ).
```

## <a name="op_lt_lt_eq"></a> operator&lt;&lt;=

Left-shifts the bits for each element of a valarray operand a specified number of positions or by an element-wise amount specified by a second valarray.

```cpp
valarray<Type>& operator<<=(const valarray<Type>& right);

valarray<Type>& operator<<=(const Type& right);
```

### Parameters

*right*\
The value indicating the amount of left shift or valarray whose elements indicate the element-wise amount of left shift.

### Return Value

A valarray whose elements have been shifted left the amount specified in *right*.

### Remarks

Signed numbers have their signs preserved.

### Example

```cpp
// valarray_class_op_ls.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial operand valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The  right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL <<= vaR;
   cout << "The element-by-element result of "
        << "the left shift"
        << endl << "on the operand array is the valarray:"
        << endl << "( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial operand valarray is: ( 1 -1 1 -1 1 -1 1 -1 ).
The  right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the left shift
on the operand array is the valarray:
( 1 -2 4 -8 16 -32 64 -128 ).
```

## <a name="op_star_eq"></a> operator*=

Multiplies the elements of a specified valarray or a value of the element type, element-wise, to an operand valarray.

```cpp
valarray<Type>& operator*=(const valarray<Type>& right);

valarray<Type>& operator*=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to multiply, element-wise, the operand valarray.

### Return Value

A valarray whose elements are the element-wise product of the operand valarray and *right*.

### Example

```cpp
// valarray_op_emult.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL *= vaR;
   cout << "The element-by-element result of "
        << "the multiplication is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
/* Output:
The initial valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial Right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the multiplication is the
valarray: ( 0 -1 4 -3 8 -5 12 -7 ).
*/
```

## <a name="op_add"></a> operator+

A unary operator that applies a plus to each element in a valarray.

```cpp
valarray<Type> operator+() const;
```

### Return Value

A valarray whose elements are plus those of the operand array.

### Example

```cpp
// valarray_op_eplus.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 );
   valarray<int> vaPLUS ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;

   cout << "The initial valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   vaPLUS = +vaL;
   cout << "The element-by-element result of "
        << "the operator+ is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaPLUS [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is:  ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
The element-by-element result of the operator+ is the
valarray: ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
```

## <a name="op_add_eq"></a> operator+=

Adds the elements of a specified valarray or a value of the element type, element-wise, to an operand valarray.

```cpp
valarray<Type>& operator+=(const valarray<Type>& right);

valarray<Type>& operator+=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be added, element-wise, to the operand valarray.

### Return Value

A valarray whose elements are the element-wise sum of the operand valarray and *right*.

### Example

```cpp
// valarray_op_eadd.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  2;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  -1;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial valarray is: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial  right valarray is: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL += vaR;
   cout << "The element-by-element result of "
        << "the sum is the"
        << endl << "valarray: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is: ( 2 -1 2 -1 2 -1 2 -1 ).
The initial  right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the sum is the
valarray: ( 2 0 4 2 6 4 8 6 ).
```

## <a name="operator-"></a> operator-

A unary operator that applies a minus to each element in a valarray.

```cpp
valarray<Type> operator-() const;
```

### Return Value

A valarray whose elements are minus those of the operand array.

### Example

```cpp
// valarray_op_eminus.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 );
   valarray<int> vaMINUS ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  -i;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  i-1;

   cout << "The initial valarray is:  ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   vaMINUS = -vaL;
   cout << "The element-by-element result of "
        << "the operator+ is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaMINUS [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is:  ( 0 0 -2 2 -4 4 -6 6 -8 8 ).
The element-by-element result of the operator+ is the
valarray: ( 0 0 2 -2 4 -4 6 -6 8 -8 ).
```

## <a name="operator-_eq"></a> operator-=

Subtracts the elements of a specified valarray or a value of the element type, element-wise, from an operand valarray.

```cpp
valarray<Type>& operator-=(const valarray<Type>& right);

valarray<Type>& operator-=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be subtracted, element-wise, from the operand valarray.

### Return Value

A valarray whose elements are the element-wise difference of the operand valarray and *right*.

### Example

```cpp
// valarray_op_esub.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 8 ), vaR ( 8 );
   for ( i = 0 ; i < 8 ; i += 2 )
      vaL [ i ] =  10;
   for ( i = 1 ; i < 8 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i < 8 ; i++ )
      vaR [ i ] =  i;

   cout << "The initial valarray is: ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial  right valarray is: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL -= vaR;
   cout << "The element-by-element result of "
        << "the difference is the"
        << endl << "valarray: ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is: ( 10 0 10 0 10 0 10 0 ).
The initial  right valarray is: ( 0 1 2 3 4 5 6 7 ).
The element-by-element result of the difference is the
valarray: ( 10 -1 8 -3 6 -5 4 -7 ).
```

## <a name="op_div_eq"></a> operator/=

Divides an operand valarray element-wise by the elements of a specified valarray or a value of the element type.

```cpp
valarray<Type>& operator/=(const valarray<Type>& right);

valarray<Type>& operator/=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be divided, element-wise, into the operand valarray.

### Return Value

A valarray whose elements are the element-wise quotient of the operand valarray divided by *right*.

### Example

```cpp
// valarray_op_ediv.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<double> vaL ( 6 ), vaR ( 6 );
   for ( i = 0 ; i < 6 ; i += 2 )
      vaL [ i ] =  100;
   for ( i = 1 ; i < 6 ; i += 2 )
      vaL [ i ] =  -100;
   for ( i = 0 ; i < 6 ; i++ )
      vaR [ i ] =  2*i;

   cout << "The initial valarray is: ( ";
      for (i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The initial Right valarray is: ( ";
      for (i = 0 ; i < 6 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL /= vaR;
   cout << "The element-by-element result of "
        << "the quotient is the"
        << endl << "valarray: ( ";
      for (i = 0 ; i < 6 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial valarray is: ( 100 -100 100 -100 100 -100 ).
The initial Right valarray is: ( 0 2 4 6 8 10 ).
The element-by-element result of the quotient is the
valarray: ( inf -50 25 -16.6667 12.5 -10 ).
```

## <a name="op_eq"></a> operator=

Assigns elements to a valarray whose values are specified either directly or as part of some other valarray or by a slice_array, gslice_array, mask_array, or indirect_array.

```cpp
valarray<Type>& operator=(const valarray<Type>& right);

valarray<Type>& operator=(valarray<Type>&& right);

valarray<Type>& operator=(const Type& val);

valarray<Type>& operator=(const slice_array<Type>& _Slicearray);

valarray<Type>& operator=(const gslice_array<Type>& _Gslicearray);

valarray<Type>& operator=(const mask_array<Type>& _Maskarray);

valarray<Type>& operator=(const indirect_array<Type>& _Indarray);
```

### Parameters

*right*\
The valarray to be copied into the operand valarray.

*val*\
The value to be assigned to the elements of the operand valarray.

*_Slicearray*\
The slice_array to be copied into the operand valarray.

*_Gslicearray*\
The gslice_array to be copied into the operand valarray.

*_Maskarray*\
The mask_array to be copied into the operand valarray.

*_Indarray*\
The indirect_array to be copied into the operand valarray.

### Return Value

The first member operator replaces the controlled sequence with a copy of the sequence controlled by *right*.

The second member operator is the same as the first, but with an [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

The third member operator replaces each element of the controlled sequence with a copy of *val*.

The remaining member operators replace those elements of the controlled sequence selected by their arguments, which are generated only by [operator&#91;&#93;](#op_at).

If the value of a member in the replacement controlled sequence depends on a member in the initial controlled sequence, the result is undefined.

### Remarks

If the length of the controlled sequence changes, the result is generally undefined. In this implementation, however, the effect is merely to invalidate any pointers or references to elements in the controlled sequence.

### Example

```cpp
// valarray_op_assign.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 10 ), vaR ( 10 );
   for ( i = 0 ; i < 10 ; i += 1 )
      va [ i ] = i;
   for ( i = 0 ; i < 10 ; i+=1 )
      vaR [ i ] = 10 -  i;

   cout << "The operand valarray va is:";
   for ( i = 0 ; i < 10 ; i++ )
      cout << " " << va [ i ];
   cout << endl;

   cout << "The operand valarray vaR is:";
      for ( i = 0 ; i < 10 ; i++ )
         cout << " " << vaR [ i ];
   cout << endl;

   // Assigning vaR to va with the first member functon
   va = vaR;
   cout << "The reassigned valarray va is:";
   for ( i = 0 ; i < 10 ; i++ )
      cout << " " << va [ i ];
   cout << endl;

   // Assigning elements of value 10 to va
   // with the second member functon
   va = 10;
   cout << "The reassigned valarray va is:";
      for ( i = 0 ; i < 10 ; i++ )
         cout << " " << va [ i ];
   cout << endl;
}
```

```Output
The operand valarray va is: 0 1 2 3 4 5 6 7 8 9
The operand valarray vaR is: 10 9 8 7 6 5 4 3 2 1
The reassigned valarray va is: 10 9 8 7 6 5 4 3 2 1
The reassigned valarray va is: 10 10 10 10 10 10 10 10 10 10

```

## <a name="op_at"></a> operator[]

Returns a reference to an element or its value at specified index or a specified subset.

```cpp
Type& operator[](size_t _Off);

slice_array<Type> operator[](slice _Slicearray);

gslice_array<Type> operator[](const gslice& _Gslicearray);

mask_array<Type> operator[](const valarray<bool>& _Boolarray);

indirect_array<Type> operator[](const valarray<size_t>& _Indarray);

Type operator[](size_t _Off) const;

valarray<Type> operator[](slice _Slice) const;

valarray<Type> operator[](const gslice& _Gslicearray) const;

valarray<Type> operator[](const valarray<bool>& _Boolarray) const;

valarray<Type> operator[](const valarray<size_t>& _Indarray) const;
```

### Parameters

*_Off*\
The index of the element to be assigned a value.

*_Slicearray*\
A slice_array of a valarray that specifies a subset to be selected or returned to a new valarray.

*_Gslicearray*\
A gslice_array of a valarray that specifies a subset to be selected or returned to a new valarray.

*_Boolarray*\
A bool_array of a valarray that specifies a subset to be selected or returned to a new valarray.

*_Indarray*\
An indirect_array of a valarray that specifies a subset to be selected or returned to a new valarray.

### Return Value

A reference to an element or its value at specified index or a specified subset.

### Remarks

The member operator is overloaded to provide several ways to select sequences of elements from among those controlled by <strong>\*this</strong>. The first group of five member operators work in conjunction with various overloads of [operator=](#op_eq) (and other assigning operators) to allow selective replacement (slicing) of the controlled sequence. The selected elements must exist.

When compiled by using [_ITERATOR_DEBUG_LEVEL](../standard-library/iterator-debug-level.md) defined as 1 or 2, a runtime error occurs if you attempt to access an element outside the bounds of the valarray.  See [Checked Iterators](../standard-library/checked-iterators.md) for more information.

### Example

See the examples for [slice::slice](../standard-library/slice-class.md#slice) and [gslice::gslice](../standard-library/gslice-class.md#gslice) for an example of how to declare and use the operator.

## <a name="op_xor_eq"></a> operator^=

Obtains the element-wise exclusive logical or operator ( **XOR**) of an array with either a specified valarray or a value of the element type.

```cpp
valarray<Type>& operator|=(const valarray<Type>& right);

valarray<Type>& operator|=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the exclusive logical **XOR** with the operand valarray.

### Return Value

A valarray whose elements are the element-wise, exclusive logical **XOR** of the operand valarray and *right*.

### Remarks

The exclusive logical or, referred to as **XOR**, has the following semantics: Given elements *e*1 and *e*2, *e*1 **XOR** *e*2 is **`true`** if exactly one of the elements is true; **`false`** if both elements are false or if both elements are true.

### Example

```cpp
// valarray_op_exor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
    using namespace std;
    int i;

    valarray<int> vaL ( 10 ), vaR ( 10 );
    for ( i = 0 ; i < 10 ; i += 2 )
        vaL [ i ] =  1;
    for ( i = 1 ; i < 10 ; i += 2 )
        vaL [ i ] =  0;
    for ( i = 0 ; i < 10 ; i += 3 )
        vaR [ i ] =  i;
    for ( i = 1 ; i < 10 ; i += 3 )
        vaR [ i ] =  i-1;
    for ( i = 2 ; i < 10 ; i += 3 )
        vaR [ i ] =  i-1;

    cout << "The initial operand valarray is:  ( ";
        for (i = 0 ; i < 10 ; i++ )
            cout << vaL [ i ] << " ";
    cout << ")." << endl;

    cout << "The  right valarray is: ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaR [ i ] << " ";
    cout << ")." << endl;

    vaL ^= vaR;
    cout << "The element-by-element result of "
        << "the bitwise XOR operator^= is the"
        << endl << "valarray: ( ";
        for (i = 0 ; i < 10 ; i++ )
            cout << vaL [ i ] << " ";
    cout << ")." << endl;
}
```

```Output
The initial operand valarray is:  ( 1 0 1 0 1 0 1 0 1 0 ).
The  right valarray is: ( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the bitwise XOR operator^= is the
valarray: ( 1 0 0 3 2 4 7 6 6 9 ).
```

## <a name="op_or_eq"></a> operator&#124;=

Obtains the bitwise `OR` of elements in an array either with the corresponding elements in a specified valarray or with a value of the element type.

```cpp
valarray<Type>& operator|=(const valarray<Type>& right);

valarray<Type>& operator|=(const Type& right);
```

### Parameters

*right*\
The valarray or value of an element type identical to that of the operand valarray that is to be combined, element-wise, by the bitwise `OR` with the operand valarray.

### Return Value

A valarray whose elements are the element-wise bitwise `OR` of the operand valarray by *right*.

### Remarks

A bitwise operation can only be used to manipulate bits in **`char`** and **`int`** data types and variants and not on **`float`**, **`double`**, **longdouble**, **`void`**, **`bool`**, or other, more complex data types.

The bitwise `OR` has the same truth table as the logical `OR` but applies to the data type on the level of the individual bits. Given bits *b*1 and *b*2, *b*1 `OR` *b*2 is **`true`** if at least one of the bits is true; **`false`** if both bits are false.

### Example

```cpp
// valarray_class_op_bitor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> vaL ( 10 ), vaR ( 10 );
   for ( i = 0 ; i < 10 ; i += 2 )
      vaL [ i ] =  1;
   for ( i = 1 ; i < 10 ; i += 2 )
      vaL [ i ] =  0;
   for ( i = 0 ; i < 10 ; i += 3 )
      vaR [ i ] =  i;
   for ( i = 1 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;
   for ( i = 2 ; i < 10 ; i += 3 )
      vaR [ i ] =  i-1;

   cout << "The initial operand valarray is:"
        << endl << "( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;

   cout << "The  right valarray is:"
        << endl << "( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << vaR [ i ] << " ";
   cout << ")." << endl;

   vaL |= vaR;
   cout << "The element-by-element result of "
        << "the logical OR"
        << endl << "operator|= is the valarray:"
        << endl << "( ";
      for (i = 0 ; i < 10 ; i++ )
         cout << vaL [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The initial operand valarray is:
( 1 0 1 0 1 0 1 0 1 0 ).
The  right valarray is:
( 0 0 1 3 3 4 6 6 7 9 ).
The element-by-element result of the logical OR
operator|= is the valarray:
( 1 0 1 3 3 4 7 6 7 9 ).
```

## <a name="op_dtor"></a> operator~

A unary operator that obtains the bitwise `NOT` values of each element in a valarray.

```cpp
valarray<Type> operator~() const;
```

### Return Value

The valarray of Boolean values that are the bitwise `NOT` of the element values of the operand valarray.

### Remarks

A bitwise operation can only be used to manipulate bits in **`char`** and **`int`** data types and variants and not on **`float`**, **`double`**, **longdouble**, **`void`**, **`bool`** or other, more complex data types.

The bitwise `NOT` has the same truth table as the logical `NOT` but applies to the data type on the level of the individual bits. Given bit *b*, ~ *b* is true if *b* is false and false if *b* is true. The logical **NOT**[operator!](#op_not) applies on an element level, counting all nonzero values as **`true`**, and the result is a valarray of Boolean values. The bitwise `NOToperator~`, by contrast, can result in a valarray of values other than 0 or 1, depending on outcome of the bitwise operation.

### Example

```cpp
// valarray_op_bitnot.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
    using namespace std;
    int i;

    valarray<unsigned short int> vaL1 ( 10 );
    valarray<unsigned short int> vaNOT1 ( 10 );
    for ( i = 0 ; i < 10 ; i += 2 )
        vaL1 [ i ] =  i;
    for ( i = 1 ; i < 10 ; i += 2 )
        vaL1 [ i ] =  5*i;

    cout << "The initial valarray <unsigned short int> is:  ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaL1 [ i ] << " ";
    cout << ")." << endl;

    vaNOT1 = ~vaL1;
    cout << "The element-by-element result of "
        << "the bitwise NOT operator~ is the"
        << endl << "valarray: ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaNOT1 [ i ] << " ";
    cout << ")." << endl << endl;

    valarray<int> vaL2 ( 10 );
    valarray<int> vaNOT2 ( 10 );
    for ( i = 0 ; i < 10 ; i += 2 )
        vaL2 [ i ] =  i;
    for ( i = 1 ; i < 10 ; i += 2 )
        vaL2 [ i ] =  -2 * i;

    cout << "The initial valarray <int> is:  ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaL2 [ i ] << " ";
    cout << ")." << endl;

    vaNOT2 = ~vaL2;
    cout << "The element-by-element result of "
        << "the bitwise NOT operator~ is the"
        << endl << "valarray: ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaNOT2 [ i ] << " ";
    cout << ")." << endl;

    // The negative numbers are represented using
    // the two's complement approach, so adding one
    // to the flipped bits returns the negative elements
    vaNOT2 = vaNOT2 + 1;
    cout << "The element-by-element result of "
        << "adding one"
        << endl << "is the negative of the "
        << "original elements the"
        << endl << "valarray: ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << vaNOT2 [ i ] << " ";
    cout << ")." << endl;
}
```

```Output
The initial valarray <unsigned short int> is:  ( 0 5 2 15 4 25 6 35 8 45 ).
The element-by-element result of the bitwise NOT operator~ is the
valarray: ( 65535 65530 65533 65520 65531 65510 65529 65500 65527 65490 ).

The initial valarray <int> is:  ( 0 -2 2 -6 4 -10 6 -14 8 -18 ).
The element-by-element result of the bitwise NOT operator~ is the
valarray: ( -1 1 -3 5 -5 9 -7 13 -9 17 ).
The element-by-element result of adding one
is the negative of the original elements the
valarray: ( 0 2 -2 6 -4 10 -6 14 -8 18 ).
```

## <a name="resize"></a> resize

Changes the number of elements in a valarray to a specified number.

```cpp
void resize(
    size_t _Newsize);

void resize(
    size_t _Newsize,
    const Type val);
```

### Parameters

*_Newsize*\
The number of elements in the resized valarray.

*val*\
The value to be given to the elements of the resized valarray.

### Remarks

The first member function initializes elements with their default constructor.

Any pointers or references to elements in the controlled sequence are invalidated.

### Example

The following example demonstrates the use of the valarray::resize member function.

```cpp
// valarray_resize.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main()
{
    using namespace std;
    int i;
    size_t size1, sizeNew;

    valarray<int> va1(10);
    for (i = 0; i < 10; i+=1)
        va1[i] = i;

    cout << "The valarray contains ( ";
        for (i = 0; i < 10; i++)
            cout << va1[i] << " ";
    cout << ")." << endl;

    size1 = va1.size();
    cout << "The number of elements in the valarray is: "
         << size1  << "." <<endl << endl;

    va1.resize(15, 10);

    cout << "The valarray contains ( ";
        for (i = 0; i < 15; i++)
            cout << va1[i] << " ";
    cout << ")." << endl;
    sizeNew = va1.size();
    cout << "The number of elements in the resized valarray is: "
         << sizeNew  << "." <<endl << endl;
}
```

```Output
The valarray contains ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray is: 10.

The valarray contains ( 10 10 10 10 10 10 10 10 10 10 10 10 10 10 10 ).
The number of elements in the resized valarray is: 15.
```

## <a name="shift"></a> shift

Shifts all the elements in a valarray by a specified number of places.

```cpp
valarray<Type> shift(int count) const;
```

### Parameters

*count*\
The number of places the elements are to be shifted forward.

### Return Value

A new valarray in which all the elements have been moved *count* positions toward the front of the valarray, left with respect to their positions in the operand valarray.

### Remarks

A positive value of *count* shifts the elements left *count* places, with zero fill.

A negative value of *count* shifts the elements right *count* places, with zero fill.

### Example

```cpp
// valarray_shift.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va1 ( 10 ), va2 ( 10 );
   for ( i = 0 ; i < 10 ; i += 1 )
      va1 [ i ] =  i;
   for ( i = 0 ; i < 10 ; i += 1 )
      va2 [ i ] = 10 -  i;

   cout << "The operand valarray va1(10) is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va1 [ i ] << " ";
   cout << ")." << endl;

   // A positive parameter shifts elements left
   va1 = va1.shift ( 4 );
   cout << "The shifted valarray va1 is: va1.shift (4) = ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va1 [ i ] << " ";
   cout << ")." << endl;

   cout << "The operand valarray va2(10) is: ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va2 [ i ] << " ";
   cout << ")." << endl;

   // A negative parameter shifts elements right
   va2 = va2.shift ( - 4 );
   cout << "The shifted valarray va2 is: va2.shift (-4) = ( ";
      for ( i = 0 ; i < 10 ; i++ )
         cout << va2 [ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The operand valarray va1(10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The shifted valarray va1 is: va1.shift (4) = ( 4 5 6 7 8 9 0 0 0 0 ).
The operand valarray va2(10) is: ( 10 9 8 7 6 5 4 3 2 1 ).
The shifted valarray va2 is: va2.shift (-4) = ( 0 0 0 0 10 9 8 7 6 5 ).
```

## <a name="size"></a> size

Finds the number of elements in a valarray.

```cpp
size_t size() const;
```

### Return Value

The number of elements in the operand valarray.

### Example

The following example demonstrates the use of the valarray::size member function.

```cpp
// valarray_size.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main()
{
    using namespace std;
    int i;
    size_t size1, size2;

    valarray<int> va1(10), va2(12);
    for (i = 0; i < 10; i += 1)
        va1[i] =  i;
    for (i = 0; i < 10; i += 1)
        va2[i] =  i;

    cout << "The operand valarray va1(10) is: ( ";
        for (i = 0; i < 10; i++)
            cout << va1[i] << " ";
    cout << ")." << endl;

    size1 = va1.size();
    cout << "The number of elements in the valarray va1 is: va1.size = "
         << size1  << "." <<endl << endl;

    cout << "The operand valarray va2(12) is: ( ";
        for (i = 0; i < 10; i++)
            cout << va2[i] << " ";
    cout << ")." << endl;

    size2 = va2.size();
    cout << "The number of elements in the valarray va2 is: va2.size = "
         << size2  << "." << endl << endl;

    // Initializing two more elements to va2
    va2[10] = 10;
    va2[11] = 11;
    cout << "After initializing two more elements,\n"
         << "the operand valarray va2(12) is now: ( ";
        for (i = 0; i < 12; i++)
            cout << va2[i] << " ";
    cout << ")." << endl;
    cout << "The number of elements in the valarray va2 is still: "
         << size2  << "." << endl;
}
```

```Output
The operand valarray va1(10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray va1 is: va1.size = 10.

The operand valarray va2(12) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The number of elements in the valarray va2 is: va2.size = 12.

After initializing two more elements,
the operand valarray va2(12) is now: ( 0 1 2 3 4 5 6 7 8 9 10 11 ).
The number of elements in the valarray va2 is still: 12.
```

## <a name="sum"></a> sum

Determines the sum of all the elements in a valarray of nonzero length.

```cpp
Type sum() const;
```

### Return Value

The sum of the elements of the operand valarray.

### Remarks

If the length is greater than one, the member function adds values to the sum by applying `operator+=` between pairs of elements of class `Type`, which operator, consequently, needs be provided for elements of type `Type`.

### Example

```cpp
// valarray_sum.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
    using namespace std;
    int i;
    int sumva = 0;

    valarray<int> va ( 10 );
    for ( i = 0 ; i < 10 ; i+=1 )
        va [ i ] =  i;

    cout << "The operand valarray va (10) is: ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << va [ i ] << " ";
    cout << ")." << endl;

    sumva = va.sum ( );
    cout << "The sum of elements in the valarray is: "
        << sumva  << "." <<endl;
}
```

```Output
The operand valarray va (10) is: ( 0 1 2 3 4 5 6 7 8 9 ).
The sum of elements in the valarray is: 45.
```

## <a name="swap"></a> swap

Exchanges the elements of two `valarray`s.

```cpp
void swap(valarray& right);
```

### Parameters

*right*\
A `valarray` providing the elements to be swapped.

### Remarks

The member function swaps the controlled sequences between **`*this`** and *right*. It does so in constant time, it throws no exceptions, and it invalidates no references, pointers, or iterators that designate elements in the two controlled sequences.

## <a name="valarray"></a> valarray

Constructs a valarray of a specific size or with elements of a specific value or as a copy of another valarray or subset of another valarray.

```cpp
valarray();

explicit valarray(
    size_t Count);

valarray(
    const Type& Val,
    size_t Count);

valarray(
    const Type* Ptr,
    size_t Count);

valarray(
    const valarray<Type>& Right);

valarray(
    const slice_array<Type>& SliceArray);

valarray(
    const gslice_array<Type>& GsliceArray);

valarray(
    const mask_array<Type>& MaskArray);

valarray(
    const indirect_array<Type>& IndArray);

valarray(
    valarray<Type>&& Right);

valarray(
    initializer_list<Type> IList);
```

### Parameters

*Count*\
The number of elements to be in the valarray.

*Val*\
The value to be used in initializing the elements in the valarray.

*Ptr*\
Pointer to the values to be used to initialize the elements in the valarray.

*Right*\
An existing valarray to initialize the new valarray.

*SliceArray*\
A slice_array whose element values are to be used in initializing the elements of the valarray being constructed.

*GsliceArray*\
A gslice_array whose element values are to be used in initializing the elements of the valarray being constructed.

*MaskArray*\
A mask_array whose element values are to be used in initializing the elements of the valarray being constructed.

*IndArray*\
A indirect_array whose element values are to be used in initializing the elements of the valarray being constructed.

*IList*\
The initializer_list containing the elements to copy.

### Remarks

The first (default) constructor initializes the object to an empty array. The next three constructors each initialize the object to an array of *Count* elements as follows:

- For explicit `valarray(size_t Count)`, each element is initialized with the default constructor.

- For `valarray(const Type& Val, Count)`, each element is initialized with *Val*.

- For `valarray(const Type* Ptr, Count)`, the element at position `I` is initialized with `Ptr`[ `I`].

Each remaining constructor initializes the object to a valarray\<Type> object determined by the subset specified in the argument.

The last constructor is the same as the next to last, but with an [Rvalue Reference Declarator: &&](../cpp/rvalue-reference-declarator-amp-amp.md).

### Example

```cpp
// valarray_ctor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main()
{
    using namespace std;
    int i;

    // The second member function
    valarray<int> va(10);
    for (auto i : va){
        va[i] = 2 * (i + 1);
    }

    cout << "The operand valarray va is:\n(";
    for (auto i : va) {
        cout << " " << va[i];
    }
    cout << " )" << endl;

    slice Slice(2, 4, 3);

    // The fifth member function
    valarray<int> vaSlice = va[Slice];

    cout << "The new valarray initialized from the slice is vaSlice =\n"
        << "va[slice( 2, 4, 3)] = (";
    for (int i = 0; i < 3; i++) {
        cout << " " << vaSlice[i];
    }
    cout << " )" << endl;

    valarray<int> va2{{ 1, 2, 3, 4 }};
    for (auto& v : va2) {
        cout << v << " ";
    }
    cout << endl;
}
```

```Output
The operand valarray va is:
( 0 2 2 2 2 2 2 2 2 2 )
The new valarray initialized from the slice is vaSlice =
va[slice( 2, 4, 3)] = ( 0 0 0 )
1 2 3 4
```

## <a name="value_type"></a> value_type

A type that represents the type of element stored in a valarray.

```cpp
typedef Type value_type;
```

### Remarks

The type is a synonym for the template parameter `Type`.

### Example

```cpp
// valarray_value_type.cpp
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

    // value_type declaration and initialization:
    valarray<int>::value_type Right = 10;

    cout << "The decalared value_type Right is: "
            << Right << endl;
    va *= Right;
    cout << "The resulting valarray is:  ( ";
        for ( i = 0 ; i < 10 ; i++ )
            cout << va [ i ] << " ";
    cout << ")." << endl;
}
```

```Output
The initial operand valarray is:  ( 0 -1 2 -1 4 -1 6 -1 8 -1 ).
The decalared value_type Right is: 10
The resulting valarray is:  ( 0 -10 20 -10 40 -10 60 -10 80 -10 ).
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
