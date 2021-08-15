---
description: "Learn more about: while Statement (C++)"
title: "while Statement (C++)"
ms.date: "11/04/2016"
f1_keywords: ["while_cpp"]
helpviewer_keywords: ["while keyword [C++]", "while keyword [C++], syntax"]
ms.assetid: 358dbe76-5e5e-4af5-b575-c2293c636899
---
# while Statement (C++)

Executes *statement* repeatedly until *expression* evaluates to zero.

## Syntax

```
while ( expression )
   statement
```

## Remarks

The test of *expression* takes place before each execution of the loop; therefore, a **`while`** loop executes zero or more times. *expression* must be of an integral type, a pointer type, or a class type with an unambiguous conversion to an integral or pointer type.

A **`while`** loop can also terminate when a [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), or [return](../cpp/return-statement-cpp.md) within the statement body is executed. Use [continue](../cpp/continue-statement-cpp.md) to terminate the current iteration without exiting the **`while`** loop. **`continue`** passes control to the next iteration of the **`while`** loop.

The following code uses a **`while`** loop to trim trailing underscores from a string:

```cpp
// while_statement.cpp

#include <string.h>
#include <stdio.h>
char *trim( char *szSource )
{
    char *pszEOS = 0;

    //  Set pointer to character before terminating NULL
    pszEOS = szSource + strlen( szSource ) - 1;

    //  iterate backwards until non '_' is found
    while( (pszEOS >= szSource) && (*pszEOS == '_') )
        *pszEOS-- = '\0';

    return szSource;
}
int main()
{
    char szbuf[] = "12345_____";

    printf_s("\nBefore trim: %s", szbuf);
    printf_s("\nAfter trim: %s\n", trim(szbuf));
}
```

The termination condition is evaluated at the top of the loop. If there are no trailing underscores, the loop never executes.

## See also

[Iteration Statements](../cpp/iteration-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[do-while Statement (C++)](../cpp/do-while-statement-cpp.md)<br/>
[for Statement (C++)](../cpp/for-statement-cpp.md)<br/>
[Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md)
