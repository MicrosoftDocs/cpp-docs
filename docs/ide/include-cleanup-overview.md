---
title: "Clean up C/C++ #includes in Visual Studio"
description: "Learn about using C/C++ Include Cleanup in Visual Studio to remove unused headers, and transitively add indirect headers needed in your project."
ms.date: 10/5/2023
ms.topic: "overview"
ms.custom: intro-overview
f1_keywords: ["include cleanup"]
helpviewer_keywords: ["include cleanup"]
---
# Clean up C/C++ includes in Visual Studio

Starting with Visual Studio 17.8 Preview 1, Visual Studio provides an `#include` cleanup feature that improves the quality of your code in the following ways:

- Offers to add header files for code that compiles only because a needed header file is included indirectly by another header file.
- Offers to remove unused header files--improving build times and code cleanliness.

Include Cleanup is on by default. To learn how to configure it, see [Config C/C++ Include Cleanup in Visual Studio](include-cleanup-config.md).

## Direct vs indirect headers

First some terminology:

- A direct header is a header that you explicitly `#include` in your code.
- An indirect header is a header that you don't explicitly `#include`. Instead, a header file that you do directly include, includes it. We also say that an indirect header is included `transitively`.

Include Cleanup analyzes your code and determines which headers aren't used and which are indirectly included. Consider the following header file:

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
    std::string s = "main()"; // string is indirectly included by myHeader.h
    std::cout << s; // cout is indirectly included by myHeader.h
    myFunc();
}
```

`myHeader.h` is a direct header because `myProgram.cpp` explicitly includes it. `myHeader.h` includes `<string>` and `<iostream>`, so those are indirect headers.

The issue is that `myProgram.cpp` uses `std::string` and `std::cout`, but doesn't directly include the headers that define them. This code happens to compile because `myHeader.h` includes those headers. This code is brittle because if `myHeader.h` ever stopped including either one, `myProgram.cpp` wouldn't compile anymore.

Per the C++ guidelines, it's better to explicitly include headers for all of your dependencies so that your code isn't subject to brittleness caused by changes to header files. For more information, see [SF.10: Avoid dependencies on implicitly `#include`d names](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names) in the C++ Core Guidelines.

Include Cleanup analyzes your code to identify unused and indirectly included headers. It provides feedback based on the settings described in [Config the C++ #include tool in Visual Studio](include-cleanup-config.md). Feedback can be in the form of error list warnings, suggestions, etc. For more details on the feedback provided by Include Cleanup, refer [Include Cleanup messages](include-cleanup-messages.md).

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to keep track of in a complex project. Over time, your builds may take longer because the compiler is processing unnecessary header files. Include Cleanup helps you find and remove unused headers. For example, what if `myFunc()` is commented out in `myProgram.cpp`:

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

In the following screenshot, `#include "myHeader.h"` is dimmed (a setting described in [Config the C++ #include tool in Visual Studio](include-cleanup-config.md)) because it isn't used since `myFunc()` is commented out.

Hover your cursor over the dimmed `#include` to bring up the quick action menu. Click the light bulb (or choose the **Show potential fixes** link) to see actions related to the unused file:

:::image type="content" source="media/vs2022-include-cleanup-refactor-options.png" alt-text="Three refactoring options are shown: Remove # include myHeader.h, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

## Add transitively used headers

We could choose to remove the unused header file, but that breaks the code since `<string>` and `<iostream>` are indirectly included via `myheader.h`.

Instead, we can choose **Add all transitively used and remove all unused #includes**. This removes the unused header `myHeader.h`, but also adds any headers being used that are indirectly included via `myHeader.h`. The result, in this case, is adding `#include <string>` and `#include <iostream>` to `myProgram.cpp`, and removing `#include "myHeader.h"`:

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

The tool doesn't update the comments, but you can see that the code is now using `std::string` and `std::cout` directly. This code is no longer brittle because it doesn't depend on `myHeader.h` to include the other required headers.

## Best practice

Don't remove what appear to be unused header files without first adding indirectly included header files. That's because your code may rely on indirect includes in a header file that is otherwise unused. Add transitively used headers first. Then, when you remove unused headers, you don't get compilation errors due to missing header files that are included indirectly by a header file you've removed.

One way to do this is to set the Include Cleanup setting for **Add missing includes suggestion level** to **Suggestion** (**Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup**). Also set **Remove unused includes suggestion level** to **Suggestion**. Then:

1. In the error list, make sure the filter is set to **Build + IntelliSense**.
1. Look for instances of "Content from #include x is used in this file and transitively included."
1. Hover your cursor over a line with the suggestion. From the light bulb dropdown, select **Add all transitively used includes**.
1. Repeat these steps in your project until all suggestions regarding transitive includes are addressed.
1. Remove unused includes: in the error list, look for an instance of "#include x is not used in this file."
1. Hover your cursor over the unused header. From the light bulb dropdown, select **Remove all unused includes**.
1. Repeat these steps in your project until all Include Cleanup suggestions are addressed.

In this brief overview, you've seen how Include Cleanup can help you remove unused headers, and add headers that were indirectly included. This helps you keep your code clean, potentially build faster, and reduces the brittleness of your code.

## See also

[Configure C/C++ Include Cleanup in Visual Studio](include-cleanup-config.md)\
[Include Cleanup messages](include-cleanup-messages.md)