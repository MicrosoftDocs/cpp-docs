---
title: "return Statement in Program Termination (C++)"
ms.date: "11/04/2016"
helpviewer_keywords: ["data types [C++], function return types", "function return types [C++], return statement", "return keyword [C++], syntax"]
ms.assetid: 66d002ab-5625-4b68-8446-71e1b8fcdbd8
---
# return Statement in Program Termination (C++)

Issuing a **return** statement from `main` is functionally equivalent to calling the `exit` function. Consider the following example:

```cpp
// return_statement.cpp
#include <stdlib.h>
int main()
{
    exit( 3 );
    return 3;
}
```

The `exit` and **return** statements in the preceding example are functionally identical. However, C++ requires that functions that have return types other than **void** return a value. The **return** statement allows you to return a value from `main`.

## See also

- [Program Termination](../cpp/program-termination.md)
