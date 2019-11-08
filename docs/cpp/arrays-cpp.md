---
title: "Arrays (C++)"
ms.date: "11/11/2019"
helpviewer_keywords: ["declaring arrays [C++], about declaring arrays", "multidimensional arrays [C++]", "arrays [C++]"]
ms.assetid: 3f5986aa-485c-4ba4-9502-67e2ef924238
---
# Arrays (C++)

An array is a sequence of objects of the same type that occupy a contiguous area of memory. Traditional C-style arrays are the source of many bugs, but are still very common especially in older code bases. In modern C++, we strongly recommend using std::vector or std::array instead of C-style arrays described in this section. Both of these standard library types store their elements as a contiguous block of memory but provide much greater type safety along with iterators that are guaranteed to point to a valid location within the sequence.

An array is initialized by using the [] operator after the variable name. The number of elements must be specified with a constant value. Individual elements in the array are accessed by the same [] operator.

``cpp
int i[100] {0}; // an array of 100 ints all initialized to zero
MyClass* [12]; // an array of 12 pointers to MyClass
i[0] = 256; // assign the value 256 to the first element in the array
```

The first element in the array is the 0th element, and the last element is the (*n*-1) element, where *n* is the number of elements the array can contain. The number of elements in the declaration must be of an integral type and must be greater than 0. A zero-sized array is legal only when the array is the last field in a **struct** or **union** and when the Microsoft extensions (/Ze) are enabled.

The following example shows how to define an array at run time:

```cpp

#include <iostream>

int main() {
    using namespace std;
    int size = 3, i = 0;

    // initialize the array elements
    int* myarr = new int[size] {1, 2, 3};

    // double the value of each element
    for (i = 0; i < size; i++)
    {
        myarr[i] *= 2;  
    }

    // Access each element
    for (i = 0; i < size; i++)
    {
        cout << myarr[i] << " "; // 2 4 6
    }

    // Return the memory to the OS.
    delete[] myarr;
}
```

## Multidimensional arrays

Arrays constructed from other arrays are multidimensional arrays. These multidimensional arrays are specified by placing multiple bracketed constant expressions in sequence. For example, consider this declaration:

```cpp
int i2[5][7];
```

It specifies an array of type **int**, conceptually arranged in a two-dimensional matrix of five rows and seven columns, as shown in the following figure:

![Conceptual layout of a multi&#45;dimensional array](../cpp/media/vc38rc1.gif "Conceptual layout of a multi&#45;dimensional array") <br/>
Conceptual layout of a multi-dimensional array

In declarations of multidimensioned arrays that have an initializer list (as described in [Initializers](../cpp/initializers.md)), the constant expression that specifies the bounds for the first dimension can be omitted. For example:

```cpp
// arrays2.cpp
// compile with: /c
const int cMarkets = 4;
// Declare a float that represents the transportation costs.
double TransportCosts[][cMarkets] = {
   { 32.19, 47.29, 31.99, 19.11 },
   { 11.29, 22.49, 33.47, 17.29 },
   { 41.97, 22.09,  9.76, 22.55 }
};
```

The preceding declaration defines an array that is three rows by four columns. The rows represent factories and the columns represent markets to which the factories ship. The values are the transportation costs from the factories to the markets. The first dimension of the array is left out, but the compiler fills it in by examining the initializer.

Use of the indirection operator (*) on an n-dimensional array type yields an n-1 dimensional array. If n is 1, a scalar (or array element) is yielded.

C++ arrays are stored in row-major order. Row-major order means the last subscript varies the fastest.

## Example

The technique of omitting the bounds specification for the first dimension of a multidimensional array can also be used in function declarations as follows:

```cpp
// multidimensional_arrays.cpp
// compile with: /EHsc
// arguments: 3
#include <limits>   // Includes DBL_MAX
#include <iostream>

const int cMkts = 4, cFacts = 2;

// Declare a float that represents the transportation costs
double TransportCosts[][cMkts] = {
   { 32.19, 47.29, 31.99, 19.11 },
   { 11.29, 22.49, 33.47, 17.29 },
   { 41.97, 22.09,  9.76, 22.55 }
};

// Calculate size of unspecified dimension
const int cFactories = sizeof TransportCosts /
                  sizeof( double[cMkts] );

double FindMinToMkt( int Mkt, double myTransportCosts[][cMkts], int mycFacts);

using namespace std;

int main( int argc, char *argv[] ) {
   double MinCost;

   if (argv[1] == 0) {
      cout << "You must specify the number of markets." << endl;
      exit(0);
   }
   MinCost = FindMinToMkt( *argv[1] - '0', TransportCosts, cFacts);
   cout << "The minimum cost to Market " << argv[1] << " is: "
       << MinCost << "\n";
}

double FindMinToMkt(int Mkt, double myTransportCosts[][cMkts], int mycFacts) {
   double MinCost = DBL_MAX;

   for( int i = 0; i < cFacts; ++i )
      MinCost = (MinCost < TransportCosts[i][Mkt]) ?
         MinCost : TransportCosts[i][Mkt];

   return MinCost;
}
```

```Output
The minimum cost to Market 3 is: 17.29
```

The function `FindMinToMkt` is written such that adding new factories does not require any code changes, just a recompilation.

## Initializing Arrays

If a class has a constructor, arrays of that class are initialized by a constructor. If there are fewer items in the initializer list than elements in the array, the default constructor is used for the remaining elements. If no default constructor is defined for the class, the initializer list must be complete — that is, there must be one initializer for each element in the array.

Consider the `Point` class that defines two constructors:

```cpp
// initializing_arrays1.cpp
class Point
{
public:
   Point()   // Default constructor.
   {
   }
   Point( int, int )   // Construct from two ints
   {
   }
};

// An array of Point objects can be declared as follows:
Point aPoint[3] = {
   Point( 3, 3 )     // Use int, int constructor.
};

int main()
{
}
```

The first element of `aPoint` is constructed using the constructor `Point( int, int )`; the remaining two elements are constructed using the default constructor.

Static member arrays (whether **const** or not) can be initialized in their definitions (outside the class declaration). For example:

```cpp
// initializing_arrays2.cpp
class WindowColors
{
public:
    static const char *rgszWindowPartList[7];
};

const char *WindowColors::rgszWindowPartList[7] = {
    "Active Title Bar", "Inactive Title Bar", "Title Bar Text",
    "Menu Bar", "Menu Bar Text", "Window Background", "Frame"   };
int main()
{
}
```

## Accessing array elements

You can access individual elements of an array by using the array subscript operator (`[ ]`). If a one-dimensional array is used in an expression that has no subscript, the array name evaluates to a pointer to the first element in the array.

```cpp
// using_arrays.cpp
int main() {
   char chArray[10];
   char *pch = chArray;   // Evaluates to a pointer to the first element.
   char   ch = chArray[0];   // Evaluates to the value of the first element.
   ch = chArray[3];   // Evaluates to the value of the fourth element.
}
```

When you use multidimensional arrays, you can use various combinations in expressions.

```cpp
// using_arrays_2.cpp
// compile with: /EHsc /W1
#include <iostream>
using namespace std;
int main() {
   double multi[4][4][3];   // Declare the array.
   double (*p2multi)[3];
   double (*p1multi);

   cout << multi[3][2][2] << "\n";   // C4700 Use three subscripts.
   p2multi = multi[3];               // Make p2multi point to
                                     // fourth "plane" of multi.
   p1multi = multi[3][2];            // Make p1multi point to
                                     // fourth plane, third row
                                     // of multi.
}
```

In the preceding code, `multi` is a three-dimensional array of type **double**. The `p2multi` pointer points to an array of type **double** of size three. In this example, the array is used with one, two, and three subscripts. Although it is more common to specify all subscripts, as in the `cout` statement, it is sometimes useful to select a specific subset of array elements, as shown in the statements that follow `cout`.

## Overloading subscript operator

Like other operators, the subscript operator ([]) can be redefined by the user. The default behavior of the subscript operator, if not overloaded, is to combine the array name and the subscript using the following method:

*((array-name) + (subscript))

As in all addition that involves pointer types, scaling is performed automatically to adjust for the size of the type. Therefore, the resultant value is not \[n] bytes from the origin of array-name; rather, it is the [n]th element of the array. (For more information about this conversion, see Additive Operators.)

Similarly, for multidimensional arrays, the address is derived using the following method:

`((array-name) + (subscript1 * max2 * max3 * ... * maxn) + (subscript2 * max3 * ... * maxn) + ... + subscriptn))`

## Arrays in Expressions

When an identifier of an array type appears in an expression other than `sizeof`, address-of (**&**), or initialization of a reference, it is converted to a pointer to the first array element. For example:

```cpp
char szError1[] = "Error: Disk drive not ready.";
char *psz = szError1;
```

The pointer `psz` points to the first element of the array `szError1`. Note that arrays, unlike pointers, are not modifiable l-values. Therefore, the following assignment is illegal:

```cpp
szError1 = psz;
```
