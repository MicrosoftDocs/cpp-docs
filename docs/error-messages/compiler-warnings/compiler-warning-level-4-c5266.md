---
description: "Learn more about: Compiler Warning (level 4) C5266"
title: "Compiler Warning (level 4) C5266"
ms.date: 01/18/2024
f1_keywords: ["C5266"]
helpviewer_keywords: ["C5266"]
---
# Compiler Warning (level 4) C5266

> 'const' qualifier on return type has no effect

## Remarks

The C++ Standard specifies that a top-level const (or volatile) qualification on a function return type is ignored.

This warning is off by default.\
This warning was introduced in Visual Studio 17.6

## Example

The following sample generates C5266:

```cpp
// compile with: /W4 /c

#pragma warning(default : 5266) // enable warning C5266 because it's off by default (or compile with /w45266)

const int f() // warning C5266: 'const' qualifier on return type has no effect
{
    return 13;
}
```

## See also

[Enable warnings that are off by default](../../preprocessor/compiler-warnings-that-are-off-by-default.md)