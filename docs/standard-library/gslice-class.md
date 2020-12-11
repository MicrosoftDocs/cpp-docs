---
description: "Learn more about: gslice Class"
title: "gslice Class"
ms.date: "11/04/2016"
f1_keywords: ["valarray/std::gslice", "valarray/std::gslice::size", "valarray/std::gslice::start", "valarray/std::gslice::stride"]
helpviewer_keywords: ["std::gslice [C++]", "std::gslice [C++], size", "std::gslice [C++], start", "std::gslice [C++], stride"]
ms.assetid: f47cffd0-ea59-4b13-848b-7a5ce1d7e2a3
---
# gslice Class

A utility class to valarray that is used to define multidimensional subsets of a valarray. If a valarray is regarded as a multidimensional matrix with all elements in an array, then the slice extracts a vector out of the multidimensional array.

## Remarks

The class stores the parameters that characterize an object of type [gslice_array](../standard-library/gslice-array-class.md). The subset of a valarray is indirectly constructed when an object of class gslice appears as an argument for an object of class [valarray](../standard-library/valarray-class.md#op_at)**\<Type>**. The stored values that specify the subset selected from the parent valarray include:

- A starting index.

- A length vector of class `valarray<size_t>`.

- A stride vector of class `valarray<size_t>`.

The two vectors must have the same length.

If the set defined by a gslice is the subset of a constant valarray, then the gslice is a new valarray. If the set defined by a gslice is the subset of a nonconstant valarray, then the gslice has reference semantics to the original valarray. The evaluation mechanism for nonconstant valarrays saves time and memory.

Operations on valarrays are guaranteed only if the source and destination subsets defined by the gslices are distinct and all indices are valid.

### Constructors

|Constructor|Description|
|-|-|
|[gslice](#gslice)|Defines a subset of a `valarray` that consists of multiple slices of the `valarray` that all start at a specified element.|

### Member functions

|Member function|Description|
|-|-|
|[size](#size)|Finds the array values specifying the numbers of elements in a general slice of a `valarray`.|
|[start](#start)|Finds the starting index of a general slice of a `valarray`.|
|[stride](#stride)|Finds the distance between elements in a general slice of a `valarray`.|

## Requirements

**Header:** \<valarray>

**Namespace:** std

## <a name="gslice"></a> gslice::gslice

A utility class to valarray that is used to define multi-dimensional slices of a valarray.

```cpp
gslice();

gslice(
    size_t _StartIndex,
    const valarray<size_t>& _LenArray,
    const valarray<size_t>& _IncArray);
```

### Parameters

*_StartIndex*\
The valarray index of the first element in the subset.

*_LenArray*\
An array specifying the number of elements in each slice.

*_IncArray*\
An array specifying the stride in each slice.

### Return Value

The default constructor stores zero for the starting index, and zero-length vectors for the length and stride vectors. The second constructor stores *_StartIndex* for the starting index, *_LenArray* for the length array, and *_IncArray* for the stride array.

### Remarks

**gslice** defines a subset of a valarray that consists of multiple slices of the valarray that each start at the same specified element. The ability to use arrays to define multiple slices is the only difference between `gslice` and [slice::slice](../standard-library/slice-class.md#slice). The first slice has a first element with an index of *_StartIndex*, a number of elements specified by the first element of *_LenArray*, and a stride given by the first element of *_IncArray*. The next set of orthogonal slices has first elements given by the first slice. The second element of *_LenArray* specifies the number of elements. The stride is given by the second element of *_IncArray*. A third dimension of slices would take the elements of the two-dimensional array as the starting elements and proceed analogously

### Example

```cpp
// gslice_ctor.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i+=1 )
      va [ i ] =  i;

   cout << "The operand valarray va is:" << endl << "(";
   for ( i = 0 ; i < 20 ; i++ )
      cout << " " << va [ i ];
   cout << " )" << endl;

   valarray<size_t> Len ( 2 ), Stride ( 2 );
   Len [0] = 4;
   Len [1] = 4;
   Stride [0] = 7;
   Stride [1] = 4;

   gslice vaGSlice ( 0, Len, Stride );
   vaResult = va [ vaGSlice ];

   cout << "The valarray for vaGSlice is vaResult:" << endl
        << "va[vaGSlice] = (";

   for ( i = 0 ; i < 8 ; i++ )
      cout << " " << vaResult [ i ];
   cout << ")" << endl;
}
```

```Output
The operand valarray va is:
( 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 )
The valarray for vaGSlice is vaResult:
va[vaGSlice] = ( 0 4 8 12 7 11 15 19)
```

## <a name="size"></a> gslice::size

Finds the array values specifying the numbers of elements in a general slice of a valarray.

```cpp
valarray<size_t> size() const;
```

### Return Value

A valarray specifying the number of elements in each slice of a general slice of a valarray.

### Remarks

The member function returns the stored lengths of slices.

### Example

```cpp
// gslice_size.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;
   size_t sizeVA;

   valarray<int> va ( 20 ), vaResult;
   for ( i = 0 ; i < 20 ; i+=1 )
      va [ i ] =  i;

   cout << "The operand valarray va is:\n ( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   sizeVA = va.size ( );
   cout << "The size of the valarray is: "
        << sizeVA << "." << endl << endl;

   valarray<size_t> Len ( 2 ), Stride ( 2 );
   Len [0] = 4;
   Len [1] = 4;
   Stride [0] = 7;
   Stride [1] = 4;

   gslice vaGSlice ( 0, Len, Stride );
   vaResult = va [ vaGSlice ];
   const valarray <size_t> sizeGS = vaGSlice.size ( );

   cout << "The valarray for vaGSlice is vaResult:"
        << "\n va[vaGSlice] = ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   cout << "The size of vaResult is:"
        << "\n vaGSlice.size ( ) = ( ";
      for ( i = 0 ; i < 2 ; i++ )
         cout << sizeGS[ i ] << " ";
   cout << ")." << endl;
}
```

```Output
The operand valarray va is:
( 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ).
The size of the valarray is: 20.

The valarray for vaGSlice is vaResult:
va[vaGSlice] = ( 0 4 8 12 7 11 15 19 ).
The size of vaResult is:
vaGSlice.size ( ) = ( 4 4 ).
```

## <a name="start"></a> gslice::start

Finds the starting index of a general slice of a valarray.

```cpp
size_t start() const;
```

### Return Value

The starting index of a general slice of a valarray.

### Example

```cpp
// gslice_start.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 20 ), vaResult;
   for (i = 0 ; i < 20 ; i+=1 )
      va [ i ] =  i;

   cout << "The operand valarray va is:\n ( ";
      for ( i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   valarray<size_t> Len ( 2 ), Stride ( 2 );
   Len [0] = 4;
   Len [1] = 4;
   Stride [0] = 7;
   Stride [1] = 4;

   gslice vaGSlice ( 0, Len, Stride );
   vaResult = va [ vaGSlice ];
   size_t vaGSstart = vaGSlice.start ( );

   cout << "The valarray for vaGSlice is vaResult:"
        << "\n va[vaGSlice] = ( ";
      for (i = 0 ; i < 8 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   cout << "The index of the first element of vaResult is: "
        << vaGSstart << "." << endl;
}
```

```Output
The operand valarray va is:
( 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ).
The valarray for vaGSlice is vaResult:
va[vaGSlice] = ( 0 4 8 12 7 11 15 19 ).
The index of the first element of vaResult is: 0.
```

## <a name="stride"></a> gslice::stride

Finds the distance between elements in a general slice of a valarray.

```cpp
valarray<size_t> stride() const;
```

### Return Value

A valarray specifying the distances between elements in each slice of a general slice of a valarray.

### Example

```cpp
// gslice_stride.cpp
// compile with: /EHsc
#include <valarray>
#include <iostream>

int main( )
{
   using namespace std;
   int i;

   valarray<int> va ( 20 ), vaResult;
   for (i = 0 ; i < 20 ; i+=1 )
      va [ i ] =  i;

   cout << "The operand valarray va is:\n ( ";
      for (i = 0 ; i < 20 ; i++ )
         cout << va [ i ] << " ";
   cout << ")." << endl;

   valarray<size_t> Len ( 2 ), Stride ( 2 );
   Len [0] = 4;
   Len [1] = 4;
   Stride [0] = 7;
   Stride [1] = 4;

   gslice vaGSlice ( 0, Len, Stride );
   vaResult = va [ vaGSlice ];
   const valarray <size_t> strideGS = vaGSlice.stride ( );

   cout << "The valarray for vaGSlice is vaResult:"
        << "\n va[vaGSlice] = ( ";
      for ( i = 0 ; i < 8 ; i++ )
         cout << vaResult [ i ] << " ";
   cout << ")." << endl;

   cout << "The strides of vaResult are:"
        << "\n vaGSlice.stride ( ) = ( ";
      for ( i = 0 ; i < 2 ; i++ )
         cout << strideGS[ i ] << " ";
   cout << ")." << endl;

}
```

```Output
The operand valarray va is:
( 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 ).
The valarray for vaGSlice is vaResult:
va[vaGSlice] = ( 0 4 8 12 7 11 15 19 ).
The strides of vaResult are:
vaGSlice.stride ( ) = ( 7 4 ).
```

## See also

[Thread Safety in the C++ Standard Library](../standard-library/thread-safety-in-the-cpp-standard-library.md)
