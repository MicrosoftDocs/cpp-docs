---
title: "Clean up C++ #includes in Visual Studio"
description: "Learn about using the C++ code editor in Visual Studio to remove, add, and transitively add the includes needed in your project."
ms.date: 10/03/2023
ms.topic: "overview"
ms.custom: intro-overview
---
# Clean up C++ #includes in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides an `#include` cleanup tool that improves the quality of your code in the following ways:
- Offers to remove unused header files--improving build times.
- Offers to add header files for code that is only working because another header file includes the necessary header file.

This article provides an introduction to the `#include` cleanup tool.

## Turn on #include cleanup

Turn on the `#include` cleanup tool via **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and select **Enable #include cleanup**.

Then use the dropdowns to configure how you want to be notified about opportunities to remove unused headers or add missing headers:

:::image type="complex" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup.":::
The Enable # include cleanup checkbox is checked. The dropdowns for Remove unused includes suggestion level, and Add missing includes suggestion level, are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes suggestion level** dropdown offers the same options but also adds dimmed.
:::image-end:::

The meaning of the suggestion level options are:

**Refactoring only**

The cleanup tool offers actions it can take through the quick action menu when you hover the mouse pointer over an `#include`, or place the cursor on the `#include` line and press Ctrl+period:

:::image type="complex" source="media/include-cleanup-refactor-lightbulb.png" alt-text="A screenshot of the quick action to remove an unused header":::
When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file."
:::image-end:::

**Suggestion, Warning, Error**

The cleanup tool offers actions it can take via suggestions, warnings, or errors in the Error List window. You determine which. In the following screenshot of the Error List, the `#include` cleanup tool was configured to show unused headers with a warning. Ensure that **Build + Intellisense** is selected in the dropdown filter so that you can see the cleanup tool output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to Build + IntelliSense. A warning is visible: VCIC002 - #include < iostream > is not used in this file."
:::image-end:::

**Dimmed**

The `#include` cleanup tool indicates unused headers by dimming the line of the unused header file in the code editor. Hover your cursor over the dimmed `#include` to bring up the quick action menu and choose **Show potential fixes** to see actions related to the unused file.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for #include < iostream > is dimmed becasue the line of code that uses iostream is commented out. That line of code is // std::cout << "charSize = " << charSize; The quick action menu is also visible for this line. It says the #include < iostream > is not used in this file, and has a link to Show potential fixes.
:::image-end:::

For the exercises in this article, **Remove unused includes suggestion level** is set to **Dimmed** and **Add missing includes suggestion level** is set to **Suggestion**.

There are more options for configuring the `#include` cleanup tool such as excluding specified includes from cleanup suggestions, indicating that some header files are required so that the tool doesn't mark them as unused, and so on. For more information, see [Configure code cleanup](/visualstudio/ide/code-cleanup#configure-code-cleanup-JTW_TO_WRITE).

## Direct vs indirect headers

To understand what the include cleanup tool can do, here's some terminology:

- Direct headers are headers that you explicitly `#include` in your code.
- Indirect headers are included by another header that you directly include. You can inadvertently take a dependency on the indirect header. 

Here's an example:

```cpp
#include <stdlib.h>

int main()
{
    int charSize = CHAR_BIT; // CHAR_BIT is defined in limits.h
}
```

In this example, `CHAR_BIT` is defined in `limits.h`. The reason this code compiles is because `stdlib.h` happens to include `limits.h` If `stdlib.h` ever stopped including `limits.h`, this code would break because it doesn't directly include a dependency it needs.

Per the C++ guidelines, it's better to explicitly include headers for all your dependencies so that your code isn't subject to brittleness caused by changes to header files. For more information, see [C++ Core Guidelines SF.10](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#sf10-avoid-dependencies-on-implicitly-included-names). The C++ include cleanup tool helps you find and fix issues like this.

## Unused headers

As your code evolves, you may no longer need some header files. This is hard to keep track of in a complex project, and over time your build time may be impacted by the compiler processing header files that aren't used. The C++ include cleanup tool helps you find and remove these unused headers. For example:

```cpp
#include <stdlib.h>
#include <iostream>

int main()
{
    int charSize = CHAR_BIT; // CHAR_BIT is defined in limits.h
    // std::cout << "charSize = " << charSize << std::endl; // Commenting this line means <iostream> isn't needed
}
```

In the following screenshot, `#include <iostream>` is dimmed because it isn't used since `std::cout` is commented out. Hover your cursor over the dimmed `#include` to bring up the quick action lightbulb. Click the lightbulb (or choose the **Show potential fixes** link) and choose **Remove #include <iostream** to remove the unused header:

:::image type="content" source="media/vs2022-include-cleanup-refactor-options.png" alt-text="Three refactoring options are shown: Remove # include iostream, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

## Add transitively used headers

It might be surprising that both `stdlib.h` and `iostream` are dimmed. The reason that `stdlib.h` is dimmed is because it isn't used in this file. Because `stdlib.h` includes `<limits.h>`, which defines `CHAR_BIT`, the code compiles. But we are getting `limits.h` indirectly through `stdlib.h`. The situation we really want is to not include `stdlib.h` because the compiler is just processing a bunch of stuff we don't need, but we do want to include `limits.h` because we are using that. The `#include` cleanup tool can help with this.

Hover your cursor over the dimmed `#include <stdlib.h>` to bring up the quick action lightbulb. Click the lightbulb (or choose the **Show potential fixes** link) and choose **Add all transitively used and remove all unused #includes**:

:::image type="content" source="media/include-cleanup-add-transitively-used.png" alt-text="Three refactoring options are shown: Remove # include stdlib.h, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

This removes unused headers and adds any headers that are being used because they are indirectly included by other header files. In this case, `#include <limits.h>` is added because `CHAR_BIT` is defined in that header. And `stdlib.h` is removed because we aren't using anything from it.  The result is:

```cpp
#include <limits.h>

int main()
{
    int charSize = CHAR_BIT; // CHAR_BIT is defined in limits.h
    //std::cout << "charSize = " << charSize;
}
```

## Add unused headers

Now let's see how to add headers by uncommenting the line: `// std::cout << "charSize = " << charSize;`. This code now uses `std::cout`, but it doesn't directly include the header that defines it.Hover your cursor over that line and choose **Show potential fixes** (or click the light bulb). Then choose **Add '#include <iostream'**:

:::image type="content" source="media/include-cleanup-add-iostream.png" alt-text="Three refactoring options are shown: Remove # include stdlib.h, remove all unused includes, and Add all transitively used and remove all unused # includes.":::

Now your code compiles again, and does so by only bringing in the headers that it's actually using.

In this brief overview, you've seen how the #include cleanup tool can help you remove unused headers, add headers that were indirectly included by other headers so that now your code follows best practices and is less brittle, and add missing headers. For a practical introduction to improving code quality and build times, see [Cleanup tool walkthrough - TBD naming](link-somewhere).

## See also

[Cleanup tool walkthrough - TBD naming](link-somewhere)\
[Cleanup tool configuration reference](link-somewhere)