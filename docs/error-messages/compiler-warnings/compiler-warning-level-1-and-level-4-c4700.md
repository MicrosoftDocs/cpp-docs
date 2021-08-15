---
description: "Learn more about: Compiler Warning (level 1 and level 4) C4700"
title: "Compiler Warning (level 1 and level 4) C4700"
ms.date: "02/21/2018"
f1_keywords: ["C4700"]
helpviewer_keywords: ["C4700"]
ms.assetid: 2da0deb4-77dd-4b05-98d3-b78d74ac4ca7
---
# Compiler Warning (level 1 and level 4) C4700

> uninitialized local variable '*name*' used

The local variable *name* has been *used*, that is, read from, before it has been assigned a value. In C and C++, local variables are not initialized by default. Uninitialized variables can contain any value, and their use leads to undefined behavior. Warning C4700 almost always indicates a bug that can cause unpredictable results or crashes in your program.

To fix this issue, you can initialize local variables when they are declared, or assign a value to them before they are used. A function can be used to initialize a variable that's passed as a reference parameter, or when its address is passed as a pointer parameter.

## Example

This sample generates C4700 when variables t, u, and v are used before they are initialized, and shows the kind of garbage value that can result. Variables x, y, and z do not cause the warning, because they are initialized before use:

```cpp
// c4700.cpp
// compile by using: cl /EHsc /W4 c4700.cpp
#include <iostream>

// function takes an int reference to initialize
void initialize(int& i)
{
    i = 21;
}

int main()
{
    int s, t, u, v;   // Danger, uninitialized variables

    s = t + u + v;    // C4700: t, u, v used before initialization
    std::cout << "Value in s: " << s << std::endl;

    int w, x;         // Danger, uninitialized variables
    initialize(x);    // fix: call function to init x before use
    int y{10};        // fix: initialize y, z when declared
    int z{11};        // This C++11 syntax is recommended over int z = 11;

    w = x + y + z;    // Okay, all values initialized before use
    std::cout << "Value in w: " << w << std::endl;
}
```

When this code is run, t, u, and v are uninitialized, and the output for s is unpredictable:

```Output
Value in s: 37816963
Value in w: 42
```
