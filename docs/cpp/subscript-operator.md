---
description: "Learn more about: Subscript Operator []"
title: "Subscript Operator []"
ms.date: "11/04/2016"
f1_keywords: ["[]"]
helpviewer_keywords: ["operators [C++], subscript", "postfix operators [C++]", "[] operator", "subscript operator [C++], syntax"]
ms.assetid: 69c31494-52da-4dd0-8bbe-6ccbfd50f197
---
# Subscript Operator []

## Syntax

```
postfix-expression [ expression ]
```

## Remarks

A postfix expression (which can also be a primary expression) followed by the subscript operator, **[ ]**, specifies array indexing.

For information about managed arrays in C++/CLI, see [Arrays](../extensions/arrays-cpp-component-extensions.md).

Usually, the value represented by *postfix-expression* is a pointer value, such as an array identifier, and *expression* is an integral value (including enumerated types). However, all that is required syntactically is that one of the expressions be of pointer type and the other be of integral type. Thus the integral value could be in the *postfix-expression* position and the pointer value could be in the brackets in the *expression* or subscript position. Consider the following code fragment:

```cpp
int nArray[5] = { 0, 1, 2, 3, 4 };
cout << nArray[2] << endl;            // prints "2"
cout << 2[nArray] << endl;            // prints "2"
```

In the preceding example, the expression `nArray[2]` is identical to `2[nArray]`. The reason is that the result of a subscript expression `e1[e2]` is given by:

`*((e2) + (e1))`

The address yielded by the expression is not *e2* bytes from the address *e1*. Rather, the address is scaled to yield the next object in the array *e2*. For example:

```cpp
double aDbl[2];
```

The addresses of `aDb[0]` and `aDb[1]` are 8 bytes apart — the size of an object of type **`double`**. This scaling according to object type is done automatically by the C++ language and is defined in [Additive Operators](../cpp/additive-operators-plus-and.md) where addition and subtraction of operands of pointer type is discussed.

A subscript expression can also have multiple subscripts, as follows:

*expression1* **[** *expression2* **] [** *expression3* **]** ...

Subscript expressions associate from left to right. The leftmost subscript expression, *expression1* **[** *expression2* **]**, is evaluated first. The address that results from adding *expression1* and *expression2* forms a pointer expression; then *expression3* is added to this pointer expression to form a new pointer expression, and so on until the last subscript expression has been added. The indirection operator (<strong>\*</strong>) is applied after the last subscripted expression is evaluated, unless the final pointer value addresses an array type.

Expressions with multiple subscripts refer to elements of multidimensional arrays. A multidimensional array is an array whose elements are arrays. For example, the first element of a three-dimensional array is an array with two dimensions. The following example declares and initializes a simple two-dimensional array of characters:

```cpp
// expre_Subscript_Operator.cpp
// compile with: /EHsc
#include <iostream>

using namespace std;
#define MAX_ROWS 2
#define MAX_COLS 2

int main() {
  char c[ MAX_ROWS ][ MAX_COLS ] = { { 'a', 'b' }, { 'c', 'd' } };
  for ( int i = 0; i < MAX_ROWS; i++ )
     for ( int j = 0; j < MAX_COLS; j++ )
        cout << c[ i ][ j ] << endl;
}
```

## Positive and negative subscripts

The first element of an array is element 0. The range of a C++ array is from *array*[0] to *array*[*size* - 1]. However, C++ supports positive and negative subscripts. Negative subscripts must fall within array boundaries; if they do not, the results are unpredictable. The following code shows positive and negative array subscripts:

```cpp
#include <iostream>
using namespace std;

int main() {
    int intArray[1024];
    for (int i = 0, j = 0; i < 1024; i++)
    {
        intArray[i] = j++;
    }

    cout << intArray[512] << endl;   // 512

    cout << 257[intArray] << endl;   // 257

    int *midArray = &intArray[512];  // pointer to the middle of the array

    cout << midArray[-256] << endl;  // 256

    cout << intArray[-256] << endl;  // unpredictable, may crash
}
```

The negative subscript in the last line can produce a run-time error because it points to an address 256 **`int`** positions lower in memory than the origin of the array. The pointer `midArray` is initialized to the middle of `intArray`; it is therefore possible (but dangerous) to use both positive and negative array indices on it. Array subscript errors do not generate compile-time errors, but they yield unpredictable results.

The subscript operator is commutative. Therefore, the expressions *array*[*index*] and *index*[*array*] are guaranteed to be equivalent as long as the subscript operator is not overloaded (see [Overloaded Operators](../cpp/operator-overloading.md)). The first form is the most common coding practice, but either works.

## See also

[Postfix Expressions](../cpp/postfix-expressions.md)<br/>
[C++ Built-in Operators, Precedence and Associativity](../cpp/cpp-built-in-operators-precedence-and-associativity.md)<br/>
[Arrays](../cpp/arrays-cpp.md)<br/>
[One-Dimensional Arrays](../c-language/one-dimensional-arrays.md)<br/>
[Multidimensional Arrays](../c-language/multidimensional-arrays-c.md)<br/>
