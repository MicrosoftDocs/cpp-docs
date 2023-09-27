---
title: "Clean up C++ #includes in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 10/03/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Clean up C++ #includes in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an `#include` cleanup tool that improves the quality of your code in the following ways:
- Identifies and offers to remove unused header files--improving your build time.
- Identifies and offers to add headers for code that is only working because another header file includes the necessary header file. This reduces the brittleness of your code by removing its reliance on hidden dependencies.

This article provides an overview of the `#include` cleanup tool.

## Configure #include cleanup

Turn on the `#include` cleanup tool via **Tools** > **Options** > **Text Editor** > **Code Cleanup** > **Code Cleanup** and select **Configure Code Cleanup**.

Then use the dropdowns to configure how you want to be notified about opportunities to remove unused headers and add missing headers:

:::image type="content" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup. The Enable # include cleanup checkbox is checked. The dropdowns for Remove unused includes tags and Add missing includes tags are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes tags** dropdown offers the same contents but also adds dimmed.":::

**Refactoring only:**\
The cleanup tool only offers to remove unused headers when you invoke refactoring by hovering the cursor over an `#include` to bring up the light bulb. You can also press Ctrl+period while the cursor is in the `#include` to bring up the refactoring light bulb:

:::image type="content" source="media/include-cleanup-refactor-lightbulb.png" alt-text="When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file.":::

**Suggestion, Warning, Error:**\
The `#include` cleanup tool offers to remove unused headers via a suggestion squiggle, or a warning or error in the Error List window.

**Dimmed:**\
The `#include` cleanup tool offers to remove unused header by dimming `#include` in the code editor. Hover your cursor over the dimmed `#include` to bring up the refactoring options to remove the unused header.

For the exercises in this article, Remove unused includes tags is set to **Dimmed** and add missing includes tags is set to **Refactoring only**.

## Direct vs indirect headers

First, some terminology. Direct headers are headers that you explicitly `#include` in your code. Indirect headers are included by another header that you directly include. You can inadvertently take a dependency on the indirect header. Here's an example:

```cpp
#include <stdlib.h>

int main()
{
    int charSize = CHAR_BIT; // CHAR_BIT is defined in limits.h
}
```

In this example, `CHAR_BIT` is defined in `limits.h`. The reason this code compiles is because `stdlib.h` includes `limits.h` If `stdlib.h` ever stopped including `limits.h`, this code would break because it doesn't directly include a dependency it needs. It's relying on `stdlib.h` to provide it.

Per the C++ guidelines, it's better to explicitly include headers for all your dependencies so that your code isn't subject to brittleness caused by changes to header files. For more information, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). The C++ include cleanup tool helps you find and fix issues like this.

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to track in a complex project, and over time your build time may be impacted by the compiler processing header files that aren't even used. The C++ include cleanup tool helps you find and remove these unused headers. For example:

```cpp
#include <stdlib.h>
#include <iostream>

int main()
{
    int charSize = CHAR_BIT; // CHAR_BIT is defined in limits.h
    // std::cout << "charSize = " << charSize << std::endl; // Commenting this line means <iostream> isn't needed
}
```

In this case, `#include <iostream>` is dimmed because it isn't used since `std::cout` is commented out. Hover your cursor over the dimmed `#include` to bring up the refactoring options to remove the unused header:

:::image type="content" source="media/include-cleanup-refactor-lightbulb.png" alt-text="#include iostream is dimmed. Hovering the cursor over that line shows the refactor light bulb and a link to Show potential fixes.":::

Choose **Show potential fixes** (or click the light bulb) to bring up the refactoring menu. Choose **Remove unused #include** to remove the unused header:

:::image type="content" source="media/vs2022-include-cleanup-refactor-options.png" alt-text="Three refactoring options are shown: Remove # include iostream, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

It might be surprising that both `stdlib.h` and `iostream` are dimmed. The reason is that nothing in `stdlib.h` is used in this file. Because it includes `#include <limits.h>`, which defines `CHAR_BIT`, we're relying on it indirectly.

Choose **Add all transitively used and remove all unused # includes.** to remove the unused header and add any headers that are transitively used by the code in the file. In this case, `#include <limits.h>` is added because `CHAR_BIT` is defined in that header, and `stdlib.h` was indirectly including that for us. And `stdlib.h` is removed because we aren't using anything from it.

Now let's see how adding headers work by uncommenting the line: `// std::cout << "charSize = " << charSize;`. This code now uses `std::cout`, but it doesn't directly include the header that defines it. Hover your cursor over that line and choose Show potential fixes (or click the light bulb). Then choose **Add '#include <iostream'**.

Now your code compiles again, but does so by only bringing in the headers that it's actually using.

In this brief overview, you've seen how the #include cleanup tool can help you remove unused headers and add missing headers. For more information, see the walkthrough and the reference.

## See also

the walkthrough
the reference