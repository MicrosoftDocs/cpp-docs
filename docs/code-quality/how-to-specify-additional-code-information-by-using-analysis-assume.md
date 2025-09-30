---
description: "Learn more about how to specify additional code information by using _Analysis_assume_."
title: "Use _Analysis_assume_ for code analysis hints"
ms.date: 12/16/2020
f1_keywords:
  - "_Analysis_assume_"
helpviewer_keywords:
  - "_Analysis_assume_"
---
# How to specify additional code information by using `_Analysis_assume_`

You can provide hints to the code analysis tool for C/C++ code that help the analysis process and reduce warnings. To provide additional information, use the following function macro:

`_Analysis_assume_( expr )`

*`expr`* - any expression that is assumed to evaluate to true.

The code analysis tool assumes that the condition represented by the expression *`expr`* is true at the point where the function appears. And, it remains true until *`expr`* is altered, for example, by assignment to a variable.

> [!NOTE]
> `_Analysis_assume_` does not impact code optimization. Outside the code analysis tool, `_Analysis_assume_` is defined as a no-op.

## Example

The following code uses `_Analysis_assume_` to correct the code analysis warning [C6388](../code-quality/c6388.md):

```cpp
#include <windows.h>
#include <sal.h>

// Requires pc to be null.
void f(_Pre_null_ char* pc);

// Calls free and sets ch to null.
void FreeAndNull(char** ch);

void test()
{
    char* pc = (char*)malloc(5);
    FreeAndNull(&pc);
    _Analysis_assume_(pc == NULL);
    f(pc);
}
```

`_Analysis_assume_` should be used as a last resort. We should first try to make the contracts of the functions more precise. In this case we could improve the contract of `FreeAndNull` instead of using `_Analysis_assume_`:

```cpp
#include <windows.h>
#include <sal.h>

// Requires pc to be null.
void f(_Pre_null_ char* pc);

// Calls free and sets ch to null.
_At_(*ch, _Post_null_)
void FreeAndNull(char** ch);

void test()
{
    char* pc = (char*)malloc(5);
    FreeAndNull(&pc);
    f(pc);
}
```

## See also

- [__assume](../intrinsics/assume.md)
