---
title: "Config the C++ #include cleanup tool"
description: "Learn how to configure the C++ include cleanup tool for individual users and for your team."
ms.date: 10/10/2023
ms.topic: "how-to"
ms.custom: intro-overview
---
# Config the C++ #include tool in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio provides the `#include` cleanup tool to improve the quality of your code in the following ways:
- Offers to remove unused header files--improving build times.
- Offers to add header files for code that is only working because another header file includes the necessary header file.

This article describes how to configure the `#include` cleanup tool. For more information about the `#include` clean tool, see [Clean up C++ #includes in Visual Studio](/visualstudio/ide/include-cleanup-overview).

## Turn on #include cleanup

The `#include` cleanup tool is on by default. If it isn't active, you can turn on the `#include` cleanup tool via **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and select **Enable #include cleanup**.

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

For the exercise in this article, **Remove unused includes suggestion level** is set to **Dimmed** and **Add missing includes suggestion level** is set to **Suggestion**.

There are more options for configuring the `#include` cleanup tool such as excluding specified includes from cleanup suggestions, indicating that some header files are required so that the tool doesn't mark them as unused, and so on. For more information, see [Configure code cleanup](/visualstudio/ide/code-cleanup#configure-code-cleanup-JTW_TO_WRITE).

## See also

[Clean up C++ #includes in Visual Studio](/visualstudio/ide/include-cleanup-overview)