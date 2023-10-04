---
title: "Clean up C++ #includes in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 10/03/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Clean up C and C++ #includes in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an `#include` cleanup feature that improves the quality of your code in the following ways:
- Offers to remove unused header files--improving build times and code cleanliness.
- Offers to add header files for code that is only working because another header file includes the necessary header file.

Include cleanup is on by default. To learn how to configure it, see [Config C/C++ include cleanup in Visual Studio](include-cleanup-config.md).

## Direct vs indirect headers

Here's some terminology to help you understand what include cleanup does:

- A direct header is a header that you explicitly `#include` in your code.
- An indirect header is a header that you don't explicitly `#include`, but that is included by a header file that you directly include. We also say that an indirect header is a transitively included header file.

Include cleanup analyzes your code and determines which headers are directly included and which are indirectly included. It also determines which header files aren't used. Consider the following header file and the program that uses it:

```cpp
// myHeader.h

#include <string>
#include <iostream>

void myFunc()
{
    std::string s = "myFunc()\n";
    std::cout << s;
}
```

And the program that uses it:

```cpp
// myProgram.cpp
#include "myHeader.h"

int main()
{
    std::string s = "main()"; // string is indirectly included from myHeader.h
    std::cout << s; // cout is indirectly included from myHeader.h
    myFunc();
}
```

In `myProgram.cpp`, `myHeader.h` is a direct header because `myProgram.cpp` directly includes it. `myHeader.h` includes `<string>` and `<iostream>`, so those are indirect headers.

The problem is that `myProgram.cpp` is using `std::string` and `std::cout` but doesn't directly include the headers that define those types. This code happens to compile because `myHeader.h` includes those headers. This code is brittle because it depends on `myHeader.h` to include those headers. If `myHeader.h` ever stopped including either one of them, this code would break.

Per the C++ guidelines, it's better to explicitly include headers for all your dependencies so that your code isn't subject to brittleness caused by changes to header files. For more information, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). 

Include cleanup helps you find and fix issues like this. It analyzes your code and determines which headers are directly included and which are indirectly included. It provides feedback, based on the settings described in [Config the C++ #include tool in Visual Studio](include-cleanup-config.md), such as warnings, suggestions, and so on, so that you can choose to remove unused headers, and add indirectly included headers directly.

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to keep track of in a complex project, and over time your build time may be impacted by the compiler processing header files that aren't used. Include cleanup helps you find and remove unused headers. For example, what if `myFunc()` is commented out in `myProgram.cpp`:

```cpp
// myProgram.cpp
#include "myHeader.h"

int main()
{
    std::string s = "main()"; // string is indirectly included from myHeader.h
    std::cout << s; // cout is indirectly included from myHeader.h
    // myFunc(); // directly included from myHeader.h
}
```

In the following screenshot, `#include "myHeader.h"` is dimmed (a setting described in [Config the C++ #include tool in Visual Studio](include-cleanup-config.md)) because it isn't used since `myFunc()` is commented out. Hover your cursor over the dimmed `#include` to bring up the quick action menu. Click the lightbulb (or choose the **Show potential fixes** link) to see actions related to the unused file:

:::image type="content" source="media/vs2022-include-cleanup-refactor-options.png" alt-text="Three refactoring options are shown: Remove # include myHeader.h, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

## Add transitively used headers

We could choose to remove the unused header file, but that results in the code breaking since we will no longer be indirectly including `<string>` and `<iostream>`. 

Instead, we can choose **Add all transitvely used and remove all unused #includes**. This removes the now unused header `myHeader.h`, but also adds any headers that are being used that were indirectly included by the removed header file. In this case, `#include <string>` and `#include <iostream>` are added because they are indirectly included by `myHeader.h`, which is then removed. You can think of the order of operations as:

- first determine which indirect header files are being used and are included by the unused header file that is about to be removed
- add `#include`s for the indirect header files
- remove the unused header file

The result in this case is:

```cpp
// myProgram.cpp
#include <iostream>
#include <string>

int main()
{
    std::string s = "main()"; // string is directly included from <string>
    std::cout << s; // cout is directly included from <string>
    // MyFunc();
}
```

The tool doesn't update the comments, but you can see that the code is now using `std::string` and `std::cout` directly. This code is no longer brittle because it doesn't depend on `myHeader.h` to include those headers.

In this brief overview, you've seen how include cleanup can help you remove unused headers and add headers that were indirectly included. This helps you keep your code clean, potentially build faster, and reduces the brittleness of your code.

## See also

[Config C/C++ include cleanup in Visual Studio](include-cleanup-config.md)