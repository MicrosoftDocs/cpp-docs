---
title: "Cleanup #includes in C++ code in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 09/15/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Cleanup #includes in C++ code in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio has an #include cleanup tool that improves the quality of your code in the following ways:
- Identifies unused header files in your code and offers to remove them--which improves your build times.
- Add headers for code that is only working because the header file for it is indirectly included by another header file. This reduces the brittleness of your code because your code doesn't rely on hidden dependencies in other header files.

This article provides an overview of what the #include cleanup tool in Visual Studio can do.

## Configure #include cleanup

To configure the #include cleanup tool, go to **Tools** > **Options** > **C/C++** > **Intellisense** and select **Enable #include cleanup**.

:::image type="content" source="media/vs2022_include_cleanup_option.png" alt-text="The Tools options dialog for C/C++ > Intellisense. The area in focus is the Enable # include cleanup checkbox and a dropdown for Remove unused includes tags and Add missing includes tags with the values Refactoring only, dimmed, warning, error, and suggestion.":::

Use the following options to configure how you'd like to be notified about unused headers and for adding missing headers:

**Refactoring only**
The cleanup tool will only offer to remove unused headers when you invoke refactoring by hovering the cursor over the include to bring up the light bulb. You can also press Ctrl+period while the cursor is in the #include to bring up the refactoring lightbulb:

:::image type="content" source="media/include-cleanup-refactor-lightbulb.png" alt-text="When hovering the cursor over # include iostream, a lightbulb appears with the text that # include iostream is not used in this file.":::

**Suggestion, Warning, Error**
The #include cleanup tool will offer to remove unused headers and show a suggestion, warning, or error in the Error List window.

**Dimmed**
The #include cleanup tool will offer to remove unused header by dimming #include in the code editor. Hover your cursor over the dimmed #include to bring up the refactoring options to remove the unused header.



## Direct vs Indirect headers

First, some terminology. Direct headers are headers that you explicitly #include in your code because you use something from them. Indirect headers are headers that are included by other headers that you may inadvertently take a dependency on. Here's an example:

File: header.h

```cpp
// header.h
#include <iostream>
void test() { std::cout << "test";} // uses std::cout from <iostream>, which we include, so <iostream> is a direct header
```

File: source.cpp

```cpp
#include "header.h"
// you should explicitly #include <iostream> because you're using std::cout in this file

test(); // outputs "test"
std::cout << "Only works because header1.h includes <iostream>"; // <iostream> is an indirect header because you rely on rely on header1.h to provide it
```

In this example, if `header1.h` is updated to no longer include `<iostream>`, your code will break in `source.cpp` because it doesn't directly include a dependency it needs. It was relying on `header1.h` to provide it. Per the C++ guidelines, it's better to explicitly `#include <iostream>` in `source.cpp` so that your code isn't subject to brittleness caused by changes to header files. For more information about the guideline to avoid dependencies on names brought in implicitly when #including a header, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). The C++ include cleanup tool helps you find and fix these issues like this.

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to track in complex projects and over time your build time may be impacted by the compiler processing header files that aren't needed. The C++ include cleanup tool helps you find and remove these unused headers. For example:

```cpp
#include <cstdlib>
#include <iostream>

int main()
{
    int x = std::rand(); // std::rand is defined in <cstdlib>
    // std::cout << "x is: " << x; // we no longer output x, so we don't need <iostream>
}
```

## See Also

the walkthrough
the reference