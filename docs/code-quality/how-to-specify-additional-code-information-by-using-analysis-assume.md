---
title: "Use _Analysis_assume for code analysis hints"
ms.date: 11/04/2016
ms.topic: "conceptual"
f1_keywords:
  - "_Analysis_assume"
helpviewer_keywords:
  - "_Analysis_assume"
ms.assetid: 51205d97-4084-4cf4-a5ed-3eeaf67deb1b
---
# How to: Specify Additional Code Information by Using _Analysis_assume

You can provide hints to the code analysis tool for C/C++ code that will help the analysis process and reduce warnings. To provide additional information, use the following function:

`_Analysis_assume(`  `expr`  `)`

`expr` - any expression that is assumed to evaluate to true.

The code analysis tool assumes that the condition represented by the expression is true at the point where the function appears and remains true until expression is altered, for example, by assignment to a variable.

> [!NOTE]
> `_Analysis_assume` does not impact code optimization. Outside the code analysis tool, `_Analysis_assume` is defined as a no-op.

## Example

The following code uses `_Analysis_assume` to correct the code analysis warning [C6388](../code-quality/c6388.md):

```cpp
#include<windows.h>
#include<codeanalysis\sourceannotations.h>

using namespace vc_attributes;

//requires pc to be null
void f([Pre(Null=Yes)] char* pc);

// calls free and sets ch to null
void FreeAndNull(char** ch);

void test()
{
    char pc = (char)malloc(5);
    FreeAndNull(&pc);
    _Analysis_assume(pc == NULL);
    f(pc);
}
```

## See also

- [__assume](/cpp/intrinsics/assume)
