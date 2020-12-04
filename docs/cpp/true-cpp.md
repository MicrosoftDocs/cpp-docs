---
description: "Learn more about: true (C++)"
title: "true (C++)"
ms.date: "11/04/2016"
f1_keywords: ["true_cpp"]
helpviewer_keywords: ["true keyword [C++]"]
ms.assetid: 96be2a70-51c3-4250-9752-874d25a5a11e
---
# true (C++)

## Syntax

```
bool-identifier = true ;
bool-expression logical-operator true ;
```

## Remarks

This keyword is one of the two values for a variable of type [bool](../cpp/bool-cpp.md) or a conditional expression (a conditional expression is now a true boolean expression). If `i` is of type **`bool`**, then the statement `i = true;` assigns **`true`** to `i`.

## Example

```cpp
// bool_true.cpp
#include <stdio.h>
int main()
{
    bool bb = true;
    printf_s("%d\n", bb);
    bb = false;
    printf_s("%d\n", bb);
}
```

```Output
1
0
```

## See also

[Keywords](../cpp/keywords-cpp.md)
