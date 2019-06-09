---
title: "Using Arrays (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["arrays [C++]"]
ms.assetid: 7818a7fe-7e82-4881-a3d1-7d25162b7fc7
---
# Using Arrays (C++)

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

## See also

[Arrays](../cpp/arrays-cpp.md)