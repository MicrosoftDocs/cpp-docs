---
description: "Learn more about: Compiler Warning (level 4) C4189"
title: "Compiler Warning (level 4) C4189"
ms.date: 05/03/2021
f1_keywords: ["C4189"]
helpviewer_keywords: ["C4189"]
---
# Compiler Warning (level 4) C4189

> '*identifier*' : local variable is initialized but not referenced

A variable is declared and initialized but not used.

## Examples

The following sample generates C4189:

```cpp
// C4189.cpp
// compile with: /W4
int main() {
   int a = 1;   // C4189, remove declaration to resolve
}
```

Starting in Visual Studio 2017 version 15.5, warning C4189 is emitted in more cases, as shown in the following code:

```cpp
void f() {
    char s[2] = {0}; // C4189. Either use the variable or remove it.
}
```

To fix the error, remove the unused variable.
