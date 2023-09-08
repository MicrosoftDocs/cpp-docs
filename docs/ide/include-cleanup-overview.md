---
title: "Cleanup #includes in C++ code in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 09/10/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Cleanup #includes in C++ code in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an #include cleanup tool that improves the quality of your code in the following ways:
- Identifies unused headers and offers suggestions to remove them--which improves your build times.
- Add headers for code that is only working because the header for it is indirectly included by another headers. This reduces the brittleness of your code with respect to what files you # #include.
 
This article shows explains what the #include cleanup tool in Visual Studio can do for you.

## Direct vs Indirect headers

First, some terminology. Direct headers are headers that you explicitly #include in your code. Indirect headers are headers that are included by other headers. Here's an example:

File: header1.h

```cpp
// header1.h
#include <iostream>
void test() { std::cout << "test";}
```

File: source.cpp
```cpp
#include "header1.h"
// you should explicitly #include <iostream> because you're using std::cout in this file

test(); // outputs "test"
std::cout << "Only works because header1.h includes <iostream>"; // you should explicitly #include <iostream> rather than rely on header1.h to include it
```

In this example, if `header1.h` is updated to no longer include `<iostream>`, your code will break in `source.cpp`. Per the C++ guidelines, it's better to explicitly `#include <iostream>` in `source.cpp` so that your code isn't subject to brittleness caused by changes to header files. For more information about the guideline to avoid dependencies on names brought in implicitly when #including a header, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). The C++ include cleanup tool helps you find and fix these issues like this.

## Unused headers

As your code evolves, you may no longer need some headers. This is particularly hard to track in complex projects with many files. The C++ include cleanup tool helps you find and remove these unused headers. For example:

```cpp

#include <cstdlib>
#include <iostream>

int main()
{
    int x = std::rand(); // std::rand is defined in <cstdlib>
    std::cout << "x is: " << x;
    int r = std::rand
}
```

## See Also

the walkthrough
the reference