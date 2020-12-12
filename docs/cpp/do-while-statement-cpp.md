---
description: "Learn more about: do-while Statement (C++)"
title: "do-while Statement (C++)"
ms.date: "11/04/2016"
f1_keywords: ["do_cpp"]
helpviewer_keywords: ["do keyword [C++], do-while", "do-while keyword [C++]", "do keyword [C++]", "while keyword [C++], do-while"]
ms.assetid: e01e6f7c-7da1-4591-87f9-c26ff848e7b0
---
# do-while Statement (C++)

Executes a *statement* repeatedly until the specified termination condition (the *expression*) evaluates to zero.

## Syntax

```
do
   statement
while ( expression ) ;
```

## Remarks

The test of the termination condition is made after each execution of the loop; therefore, a **do-while** loop executes one or more times, depending on the value of the termination expression. The **do-while** statement can also terminate when a [break](../cpp/break-statement-cpp.md), [goto](../cpp/goto-statement-cpp.md), or [return](../cpp/return-statement-cpp.md) statement is executed within the statement body.

The *expression* must have arithmetic or pointer type. Execution proceeds as follows:

1. The statement body is executed.

1. Next, *expression* is evaluated. If *expression* is false, the **do-while** statement terminates and control passes to the next statement in the program. If *expression* is true (nonzero), the process is repeated, beginning with step 1.

## Example

The following sample demonstrates the **do-while** statement:

```cpp
// do_while_statement.cpp
#include <stdio.h>
int main()
{
    int i = 0;
    do
    {
        printf_s("\n%d",i++);
    } while (i < 3);
}
```

## See also

[Iteration Statements](../cpp/iteration-statements-cpp.md)<br/>
[Keywords](../cpp/keywords-cpp.md)<br/>
[while Statement (C++)](../cpp/while-statement-cpp.md)<br/>
[for Statement (C++)](../cpp/for-statement-cpp.md)<br/>
[Range-based for Statement (C++)](../cpp/range-based-for-statement-cpp.md)
