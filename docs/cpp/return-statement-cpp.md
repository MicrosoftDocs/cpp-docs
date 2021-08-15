---
description: "Learn more about: return Statement (C++)"
title: "return Statement (C++)"
ms.date: "11/04/2016"
f1_keywords: ["return_cpp"]
helpviewer_keywords: ["return keyword [C++], syntax", "return keyword [C++]"]
ms.assetid: a498903a-056a-4df0-a6cf-72f633a62210
---
# return Statement (C++)

Terminates the execution of a function and returns control to the calling function (or to the operating system if you transfer control from the `main` function). Execution resumes in the calling function at the point immediately following the call.

## Syntax

```
return [expression];
```

## Remarks

The `expression` clause, if present, is converted to the type specified in the function declaration, as if an initialization were being performed. Conversion from the type of the expression to the **`return`** type of the function can create temporary objects. For more information about how and when temporaries are created, see [Temporary Objects](../cpp/temporary-objects.md).

The value of the `expression` clause is returned to the calling function. If the expression is omitted, the return value of the function is undefined. Constructors and destructors, and functions of type **`void`**,cannot specify an expression in the **`return`** statement. Functions of all other types must specify an expression in the **`return`** statement.

When the flow of control exits the block enclosing the function definition, the result is the same as it would be if a **`return`** statement without an expression had been executed. This is invalid for functions that are declared as returning a value.

A function can have any number of **`return`** statements.

The following example uses an expression with a **`return`** statement to obtain the largest of two integers.

## Example

```cpp
// return_statement2.cpp
#include <stdio.h>

int max ( int a, int b )
{
   return ( a > b ? a : b );
}

int main()
{
    int nOne = 5;
    int nTwo = 7;

    printf_s("\n%d is bigger\n", max( nOne, nTwo ));
}
```

## See also

[Jump Statements](../cpp/jump-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
