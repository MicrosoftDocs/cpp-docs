---
description: "Learn more about how to specify additional code information by using _Analysis_assume_."
title: "Use _Analysis_assume_ for code analysis hints"
ms.date: 12/16/2020
ms.topic: "conceptual"
f1_keywords:
  - "_Analysis_assume_"
helpviewer_keywords:
  - "_Analysis_assume_"
---
# How to specify additional code information by using `_Analysis_assume_`

You can provide hints to the code analysis tool for C/C++ code that will help the analysis process and reduce warnings. To provide additional information, use the following function macro:

`_Analysis_assume( expr )`

*`expr`* - any expression that is assumed to evaluate to true.

The code analysis tool assumes that the condition represented by the expression *`expr`* is true at the point where the function appears. And, it remains true until *`expr`* is altered, for example, by assignment to a variable.

> [!NOTE]
> `_Analysis_assume_` does not impact code optimization. Outside the code analysis tool, `_Analysis_assume_` is defined as a no-op.

## Example

The following code uses `_Analysis_assume_` to correct the code analysis warning [C6388](../code-quality/c6388.md):

```cpp
#include <windows.h>
#include <codeanalysis\sourceannotations.h>

using namespace vc_attributes;

//requires pc to be null
void f([Pre(Null=Yes)] char* pc);

// calls free and sets ch to null
void FreeAndNull(char** ch);

void test()
{
    char pc = (char)malloc(5);
    FreeAndNull(&pc);
    _Analysis_assume_(pc == NULL);
    f(pc);
}
```

## See also

- [__assume](../intrinsics/assume.md)
