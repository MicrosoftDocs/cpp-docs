---
title: "Arrays (C++)"
description: "Learn how to declare and use the native array type in the standard C++ programming language."
ms.date: 11/08/2020
helpviewer_keywords: ["declaring arrays [C++], about declaring arrays", "multidimensional arrays [C++]", "arrays [C++]"]
---
# Arrays (C++)

An array is a sequence of objects of the same type that occupy a contiguous area of memory. Traditional C-style arrays are the source of many bugs, but are still common, especially in older code bases. In modern C++, we strongly recommend using [`std::vector`](../standard-library/vector-class.md) or [`std::array`](../standard-library/array-class-stl.md) instead of C-style arrays described in this section. Both of these standard library types store their elements as a contiguous block of memory. However, they provide greater type safety, and support iterators that are guaranteed to point to a valid location within the sequence. For more information, see [Containers](../standard-library/stl-containers.md).

## Stack declarations

In a C++ array declaration, the array size is specified after the variable name, not after the type name as in some other languages. The following example declares an array of 1000 doubles to be allocated on the stack. The number of elements must be supplied as an integer literal or else as a constant expression. That's because the compiler has to know how much stack space to allocate; it can't use a value computed at run-time. Each element in the array is assigned a default value of 0. If you don't assign a default value, each element initially contains whatever random values happen to be at that memory location.

```cpp
    constexpr size_t size = 1000;

    // Declare an array of doubles to be allocated on the stack
    double numbers[size] {0};

    // Assign a new value to the first element
    numbers[0] = 1;

    // Assign a value to each subsequent element
    // (numbers[1] is the second element in the array.)
    for (size_t i = 1; i < size; i++)
    {
        numbers[i] = numbers[i-1] * 1.1;
    }

    // Access each element
    for (size_t i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }
```

The first element in the array is the zeroth element. The last element is the (*n*-1) element, where *n* is the number of elements the array can contain. The number of elements in the declaration must be of an integral type and must be greater than 0. It is your responsibility to ensure that your program never passes a value to the subscript operator that is greater than `(size - 1)`.

A zero-sized array is legal only when the array is the last field in a **`struct`** or **`union`** and when the Microsoft extensions are enabled (**`/Za`** or **`/permissive-`** isn't set).

Stack-based arrays are faster to allocate and access than heap-based arrays. However, stack space is limited. The number of array elements can't be so large that it uses up too much stack memory. How much is too much depends on your program. You can use profiling tools to determine whether an array is too large.

## Heap declarations

You may require an array that's too large to allocate on the stack, or whose size isn't known at compile time. It's possible to allocate this array on the heap by using a [`new[]`](new-operator-cpp.md) expression. The operator returns a pointer to the first element. The subscript operator works on the pointer variable the same way it does on a stack-based array. You can also use [pointer arithmetic](../c-language/pointer-arithmetic.md) to move the pointer to any arbitrary elements in the array. It's your responsibility to ensure that:

- you always keep a copy of the original pointer address so that you can delete the memory when you no longer need the array.
- you don't increment or decrement the pointer address past the array bounds.

The following example shows how to define an array on the heap at run time. It shows how to access the array elements using the subscript operator and by using pointer arithmetic:

```cpp
void do_something(size_t size)
{
    // Declare an array of doubles to be allocated on the heap
    double* numbers = new double[size]{ 0 };

    // Assign a new value to the first element
    numbers[0] = 1;

    // Assign a value to each subsequent element
    // (numbers[1] is the second element in the array.)
    for (size_t i = 1; i < size; i++)
    {
        numbers[i] = numbers[i - 1] * 1.1;
    }

    // Access each element with subscript operator
    for (size_t i = 0; i < size; i++)
    {
        std::cout << numbers[i] << " ";
    }

    // Access each element with pointer arithmetic
    // Use a copy of the pointer for iterating
    double* p = numbers;

    for (size_t i = 0; i < size; i++)
    {
        // Dereference the pointer, then increment it
        std::cout << *p++ << " ";
    }

    // Alternate method:
    // Reset p to numbers[0]:
    p = numbers;

    // Use address of pointer to compute bounds.
    // The compiler computes size as the number
    // of elements * (bytes per element).
    while (p < (numbers + size))
    {
        // Dereference the pointer, then increment it
        std::cout << *p++ << " ";
    }

    delete[] numbers; // don't forget to do this!

}
int main()
{
    do_something(108);
}
```

## Initializing arrays

You can initialize an array in a loop, one element at a time, or in a single statement. The contents of the following two arrays are identical:

```cpp
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        a[i] = i + 1;
    }

    int b[10]{ 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
```

## Passing arrays to functions

When an array is passed to a function, it's passed as a pointer to the first element, whether it's a stack-based or heap-based array. The pointer contains no other size or type information. This behavior is called *pointer decay*. When you pass an array to a function, you must always specify the number of elements in a separate parameter. This behavior also implies that the array elements aren't copied when the array gets passed to a function. To prevent the function from modifying the elements, specify the parameter as a pointer to **`const`** elements.

The following example shows a function that accepts an array and a length. The pointer points to the original array, not a copy. Because the parameter isn't **`const`**, the function can modify the array elements.

```cpp
void process(double *p, const size_t len)
{
    std::cout << "process:\n";
    for (size_t i = 0; i < len; ++i)
    {
        // do something with p[i]
    }
}
```

Declare and define the array parameter `p` as **`const`** to make it read-only within the function block:

```cpp
void process(const double *p, const size_t len);
```

The same function can also be declared in these ways, with no change in behavior. The array is still passed as a pointer to the first element:

```cpp
// Unsized array
void process(const double p[], const size_t len);

// Fixed-size array. Length must still be specified explicitly.
void process(const double p[1000], const size_t len);
```

## Multidimensional arrays

Arrays constructed from other arrays are multidimensional arrays. These multidimensional arrays are specified by placing multiple bracketed constant expressions in sequence. For example, consider this declaration:

```cpp
int i2[5][7];
```

It specifies an array of type **`int`**, conceptually arranged in a two-dimensional matrix of five rows and seven columns, as shown in the following figure:

:::image type="content" source="../cpp/media/vc38rc1.gif" alt-text="Conceptual layout of a multidimensional array.":::

The image is a grid 7 cells wide and 5 cells high. Each cell contains the index of the cell. The first cell index is labeled 0,0. The next cell in that row is 0,1 and so on to the last cell in that row which is 0,6. The next row starts with the index 1,0. The cell after that has an index of 1,1. The last cell in that row is 1,6. This pattern repeats until the last row, which starts with the index 4,0. The the last cell in the last row has an index of 4,6.
:::image-end

You can declare multidimensioned arrays that have an initializer list (as described in [Initializers](../cpp/initializers.md)). In these declarations, the constant expression that specifies the bounds for the first dimension can be omitted. For example:

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

You can also omit the bounds specification for the first dimension of a multidimensional array in function declarations, as shown here:

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

   for( size_t i = 0; i < cFacts; ++i )
      MinCost = (MinCost < TransportCosts[i][Mkt]) ?
         MinCost : TransportCosts[i][Mkt];

   return MinCost;
}
```

```Output
The minimum cost to Market 3 is: 17.29
```

The function `FindMinToMkt` is written such that adding new factories doesn't require any code changes, just a recompilation.

## Initializing Arrays

Arrays of objects that have a class constructor are initialized by the constructor. When there are fewer items in the initializer list than elements in the array, the default constructor is used for the remaining elements. If no default constructor is defined for the class, the initializer list must be *complete*, that is, there must be one initializer for each element in the array.

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

Static member arrays (whether **`const`** or not) can be initialized in their definitions (outside the class declaration). For example:

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

You can access individual elements of an array by using the array subscript operator (`[ ]`). If you use the name of a one-dimensional array without a subscript, it gets evaluated as a pointer to the array's first element.

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

In the preceding code, `multi` is a three-dimensional array of type **`double`**. The `p2multi` pointer points to an array of type **`double`** of size three. In this example, the array is used with one, two, and three subscripts. Although it's more common to specify all subscripts, as in the `cout` statement, sometimes it's useful to select a specific subset of array elements, as shown in the statements that follow `cout`.

## Overloading subscript operator

Like other operators, the subscript operator (`[]`) can be redefined by the user. The default behavior of the subscript operator, if not overloaded, is to combine the array name and the subscript using the following method:

`*((array_name) + (subscript))`

As in all addition that involves pointer types, scaling is done automatically to adjust for the size of the type. The resultant value isn't *n* bytes from the origin of `array_name`; instead, it's the *n*th element of the array. For more information about this conversion, see [Additive operators](additive-operators-plus-and.md).

Similarly, for multidimensional arrays, the address is derived using the following method:

`((array_name) + (subscript1 * max2 * max3 * ... * maxn) + (subscript2 * max3 * ... * maxn) + ... + subscriptn))`

## Arrays in Expressions

When an identifier of an array type appears in an expression other than **`sizeof`**, address-of (`&`), or initialization of a reference, it's converted to a pointer to the first array element. For example:

```cpp
char szError1[] = "Error: Disk drive not ready.";
char *psz = szError1;
```

The pointer `psz` points to the first element of the array `szError1`. Arrays, unlike pointers, aren't modifiable l-values. That's why the following assignment is illegal:

```cpp
szError1 = psz;
```

## See also

[`std::array`](../standard-library/array-class-stl.md)
