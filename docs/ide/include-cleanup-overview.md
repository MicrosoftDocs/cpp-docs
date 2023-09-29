---
title: "Clean up C++ #includes in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 10/03/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Clean up C++ #includes in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an `#include` cleanup tool that improves the quality of your code in the following ways:
- Offers to remove unused header files--improving your build time.
- Offers to add header files for code that is only working because another header file includes the necessary header file. This reduces the brittleness of your code by removing its reliance on hidden dependencies.

This article provides an introduction to the `#include` cleanup tool.

## Turn on #include cleanup

Turn on the `#include` cleanup tool via **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and select **Enable #include cleanup**.

Then use the dropdowns to configure how you want to be notified about opportunities to remove unused headers or add missing headers:

:::image type="complex" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup.":::
The Enable # include cleanup checkbox is checked. The dropdowns for Remove unused includes suggestion level, and Add missing includes suggestion level, are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes tags** dropdown offers the same options but also adds dimmed.
:::image-end:::

The options are:

**Refactoring only**\
The cleanup tool offers actions it can take through the quick action menu when you hover the mouse pointer over an `#include` or place the cursor on the `#include` line and press Ctrl+period:

:::image type="complex" source="media/include-cleanup-refactor-lightbulb.png" alt-text="A screenshot of the quick action to remove an unused header":::
When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file."
:::image-end:::

**Suggestion, Warning, Error**

The cleanup tool offers suggestions via suggestions, warnings, or errors in the Error List window. You determine which. In this screenshot, the `#include` cleanup tool is configured to indicate unused headers with a warning. Ensure that **Build + Intellisense** is chosen in the dropdown filter so that you can see the cleanup tool output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to Build + IntelliSense. A warning is visible: VCIC002 - #include < iostream > is not used in this file."
:::image-end:::

**Dimmed:**\
The `#include` cleanup tool indicates unused headers by dimming the line of the unused `#include` in the code editor. Hover your cursor over the dimmed `#include` to bring up the quick action menu to remove the unused header.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for #include < iostream > is dimmed becasue the line of code that uses iostream is commented out. That line of code is // std::cout << "charSize = " << charSize; The quick action menu is also visible for this line. It says the #include < iostream > is not used in this file, and has a link to Show potential fixes.
:::image-end:::

For the exercises in this article, Remove unused includes tags is set to **Dimmed** and add missing includes tags is set to **Refactoring only**.

There are more options for configuring the `#include` cleanup tool such as excluding specified includes from cleanup suggestions, indicating required header files so that the tool doesn't mark them as unused, and so on. For more information, see [Configure code cleanup](/visualstudio/ide/code-cleanup#configure-code-cleanup???).

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