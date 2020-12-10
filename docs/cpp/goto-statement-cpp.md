---
description: "Learn more about: goto Statement (C++)"
title: "goto Statement (C++)"
ms.date: "11/04/2016"
f1_keywords: ["goto_cpp"]
helpviewer_keywords: ["goto keyword [C++]"]
ms.assetid: 724c5deb-2de1-42d8-8ef1-23589d9bf5ed
---
# goto Statement (C++)

The **`goto`** statement unconditionally transfers control to the statement labeled by the specified identifier.

## Syntax

```
goto identifier;
```

## Remarks

The labeled statement designated by `identifier` must be in the current function. All `identifier` names are members of an internal namespace and therefore do not interfere with other identifiers.

A statement label is meaningful only to a **`goto`** statement; otherwise, statement labels are ignored. Labels cannot be redeclared.

A **`goto`** statement is not allowed to transfer control to a location that skips over the initialization of any variable that is in scope in that location. The following example raises C2362:

```cpp
int goto_fn(bool b)
{
    if (!b)
    {
        goto exit;  // C2362
    }
    else
    { /*...*/ }

    int error_code = 42;

exit:
    return error_code;
}
```

It is good programming style to use the **`break`**, **`continue`**, and **`return`** statements instead of the **`goto`** statement whenever possible. However, because the **`break`** statement exits from only one level of a loop, you might have to use a **`goto`** statement to exit a deeply nested loop.

For more information about labels and the **`goto`** statement, see [Labeled Statements](../cpp/labeled-statements.md).

## Example

In this example, a **`goto`** statement transfers control to the point labeled `stop` when `i` equals 3.

```cpp
// goto_statement.cpp
#include <stdio.h>
int main()
{
    int i, j;

    for ( i = 0; i < 10; i++ )
    {
        printf_s( "Outer loop executing. i = %d\n", i );
        for ( j = 0; j < 2; j++ )
        {
            printf_s( " Inner loop executing. j = %d\n", j );
            if ( i == 3 )
                goto stop;
        }
    }

    // This message does not print:
    printf_s( "Loop exited. i = %d\n", i );

    stop:
    printf_s( "Jumped to stop. i = %d\n", i );
}
```

```Output
Outer loop executing. i = 0
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 1
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 2
Inner loop executing. j = 0
Inner loop executing. j = 1
Outer loop executing. i = 3
Inner loop executing. j = 0
Jumped to stop. i = 3
```

## See also

[Jump Statements](../cpp/jump-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)
