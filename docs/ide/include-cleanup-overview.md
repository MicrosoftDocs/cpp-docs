---
title: "Clean up C++ #includes in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 10/03/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Clean up C++ #includes in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an `#include` cleanup tool that improves the quality of your code in the following ways:
- Offers to remove unused header files--improving build times and code cleanliness.
- Offers to add header files for code that is only working because another header file includes the necessary header file, removing dependencies on indirectly included headers.

The `#include` cleanup tool is on by default. To learn how to configure it, see [Config the C++ #include tool in Visual Studio](include-cleanup-config.md).

## Direct vs indirect headers

To understand what the include cleanup tool does, here's some terminology:

- A direct header is a header that you explicitly `#include` in your code.
- An indirect header is a header that is included by another header file that you directly include. We also say that the indirect header is a transitively included header file.

The include cleanup tool analyzes your code and determines which headers are directly included and which are indirectly included. Consider the following header file and the program that uses it:

A header file:

```cpp
// myHeader.h

#pragma once

#include <string>
#include <iostream>

void myFunc()
{
    std::string s = "test()\n";
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
    test();
}
```

In `myProgram.cpp`, `myHeader.h` is a direct header because it is directly included. `myHeader.h` includes `<string>` and `<iostream>`, so those are indirect headers. The problem here is that `myProgram.cpp` is using `std::string` and `std::cout` but doesn't directly include the headers that define those types. This code happens to compile because `myHeader.h` includes those headers, but this code is brittle because it depends on `myHeader.h` to include those headers. If `myHeader.h` ever stopped including either one of them, this code would break.

Per the C++ guidelines, it's better to explicitly include headers for all your dependencies so that your code isn't subject to brittleness caused by changes to header files. For more information, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). 

The C++ include cleanup tool helps you find and fix issues like this. The cleanup tool analyzes your code and determines which headers are directly included and which are indirectly included. It provides feedback, based on the settings described in [Config the C++ #include tool in Visual Studio](include-cleanup-config.md), such as warnings, suggestions, and so on, so that you can choose to remove unused headers, add missing headers, and so on.

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to keep track of in a complex project, and over time your build time may be impacted by the compiler processing header files that aren't used. The C++ include cleanup tool helps you find and remove unused headers. For example, what if test() is commented out in `myProgram.cpp`? 

```cpp
// myProgram.cpp
#include "myHeader.h"

int main()
{
    std::string s = "main()"; // string is indirectly included from myHeader.h
    std::cout << s; // cout is indirectly included from myHeader.h
    // test();
}
```

In the following screenshot, `#include "myHeader.h"` is dimmed because it isn't used since `test()` is commented out. Hover your cursor over the dimmed `#include` to bring up the quick action menu. Click the lightbulb (or choose the **Show potential fixes** link) to see actions related to the unused file.:

:::image type="content" source="media/vs2022-include-cleanup-refactor-options.png" alt-text="Three refactoring options are shown: Remove # include myHeader.h, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

## Add transitively used headers

We could choose to remove the unused header file, but that results in the code breaking since we will no longer be indirectly including `<string>` and `<iostream>`. Instead, we can choose **Add all transitvely used and remove all unused #includes**. This removes the now unused header `myHeader.h`, but also adds any *used* headers that are indirectly included by other header files. In this case, `#include <string>` and `#include <iostream>` are added because they are indirectly included by `myHeader.h`. You can think of the order of operations with this step as first determining what indirect header files are being included by the unused header file that is about to be removed, they are added, the unused header file is removed, and the result in this case is:

```cpp
// myProgram.cpp
#include <iostream>
#include <string>

int main()
{
    std::string s = "main()"; // string is directly included from <string>
    std::cout << s; // cout is directly included from <string>
    // test();
}
```

The tool doesn't update the comments, but you can see that the code is now using `std::string` and `std::cout` directly. This code is no longer brittle because it doesn't depend on `myHeader.h` to include those headers.

In this brief overview, you've seen how the #include cleanup tool can help you remove unused headers, and add headers that were indirectly included by other headers. This helps you keep your code clean, potentially build faster, and reduces the brittleness of your code.

For a practical introduction to improving code quality and build times, see [Cleanup tool walkthrough - TBD naming](link-somewhere).\
For more information about customizing how the #include cleanup generates suggestions for your project and across your team, see [Cleanup tool configuration reference](include-cleanup-config.md).

## See also

[Cleanup tool walkthrough - TBD naming](link-somewhere)\
[Cleanup tool configuration reference](link-somewhere)