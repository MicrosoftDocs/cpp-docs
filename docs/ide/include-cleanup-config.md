---
title: "Configure C/C++ Include Cleanup in Visual Studio"
description: "Learn how to configure C/C++ Include Cleanup."
ms.date: 01/23/2026
ms.topic: "how-to"
f1_keywords: ["config include cleanup"]
helpviewer_keywords: ["config include cleanup"]
---
# Configure C/C++ Include Cleanup in Visual Studio

Starting with 17.8 Preview 1, Visual Studio can clean up your `#include`s to improve the quality of your C and C++ code in the following ways:
- Offers to add header files for code that compiles only because a needed header file is included indirectly by another header file.
- Offers to remove unused header files--improving build times.

This article describes how to configure Include Cleanup in Visual Studio. For more information about Include Cleanup, see [C/C++ Include Cleanup overview](include-cleanup-overview.md).

## Turn on Include Cleanup

The Include Cleanup feature is on by default. If it isn't active, you can turn it on via **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and select **Enable #include cleanup**.

Then use the dropdowns to configure how you want to be notified about opportunities to add indirect headers or remove unused headers:

:::image type="complex" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup.":::
The Enable # include cleanup checkbox is checked. The dropdowns for Remove unused includes suggestion level, and Add missing includes suggestion level, are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes suggestion level** dropdown offers the same options but also adds dimmed.
:::image-end:::

The meanings of the suggestion level options are:

**Refactoring only**: Include Cleanup offers actions you can take through the quick action menu when you hover the mouse pointer over an `#include`, or place the cursor on the `#include` line and press Ctrl+period:

:::image type="complex" source="media/include-cleanup-refactor-lightbulb.png" alt-text="A screenshot of the quick action to remove an unused header":::
When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file."
:::image-end:::

**Suggestion, Warning, Error**: Include Cleanup offers actions it can take via suggestions, warnings, or errors in the Error List window. You determine which. In the following screenshot of the Error List, Include Cleanup is configured to show unused headers with a warning. Ensure that **Build + Intellisense** is selected in the dropdown filter so that you can see the Include Cleanup output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to Build + IntelliSense. A warning is visible: VCIC002 - #include < iostream > isn't used in this file."
:::image-end:::

**Dimmed**

Include Cleanup shows unused headers by dimming the line of the unused header file in the code editor. Hover your cursor over the dimmed `#include` to bring up the quick action menu and choose **Show potential fixes**, or click on the light bulb dropdown, to see actions related to the unused file.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for #include < iostream > is dimmed because the line of code that uses iostream is commented out. That line of code is // std::cout << "charSize = " << charSize; The quick action menu is also visible for this line. It says the #include < iostream > isn't used in this file, and has a link to Show potential fixes.
:::image-end:::

## Configure Include Cleanup with `.editorconfig`

There are more options for configuring Include Cleanup such as excluding specified includes from cleanup suggestions, indicating that some header files are required so that the tool doesn't mark them as unused, and so on. These options are defined in an `.editorconfig` file, that you can add to your project to, among other things, enforce consistent coding styles for everyone that works in the codebase. For more information about adding an `.editorconfig` file to your project, see [Create portable, custom editor settings with EditorConfig](/visualstudio/ide/create-portable-custom-editor-options).

The `.editorconfig` settings that you can use with Include Cleanup are:

| Setting | Values | Example |
|--|--|--|--|
| `cpp_include_cleanup_add_missing_error_tag_type`</br></br>Sets the error level of add transitive include messages. | `none`</br>`suggestion`</br>`warning`</br>`error` | `cpp_include_cleanup_add_missing_error_tag_type = suggestion` |
| `cpp_include_cleanup_remove_unused_error_tag_type`</br></br>Sets the error level of remove unused include messages. | `none`</br>`suggestion`</br>`warning`</br>`error`</br>`dimmed` | `cpp_include_cleanup_remove_unused_error_tag_type = dimmed` |
| `cpp_include_cleanup_excluded_files`</br></br>Excludes the specified files from Include Cleanup messages. You won't get a suggestion related to the header at all, whether to add it or that it's unused. | *filename* | `cpp_include_cleanup_excluded_files = vcruntime.h, vcruntime_string.h` |
| `cpp_include_cleanup_required_files`</br></br>Specify that usage of *file1* requires *file2*. For example, specify that if you use `atlwin.h` that `altbase.h` must also be included. | *file1*:*file2* | `cpp_include_cleanup_required_files = atlwin.h:altbase.h, atlcom.h:altbase.h` |
| `cpp_include_cleanup_replacement_files`</br></br>Replaces *file1* with *file2* during Include Cleanup processing. For example, you may prefer using `cstdio` over `stdio.h`. If you have a file with both `#include <cstdio>` and `#include <stdio.h>` and you consume content only from `stdio.h`, with this setting Include Cleanup will tell you to remove `stdio.h` because it replaced the usage of `cstdio` with `stdio.h` during processing. If you don't use the contents from either, Include Cleanup will tell you to remove both.| *file1*:*file2* | `cpp_include_cleanup_replacement_files = stdio.h:cstdio,stdint.h:cstdint` |
| `cpp_include_cleanup_alternate_files`</br></br>Suppress messages for indirect includes. For example, if you `#include <windows.h>` and only use content from its indirectly included headers `winerror.h` or `minwindef.h`, the tool won't suggest adding them. | *file1*:*file2*[:*file3*...][,*file4*:*file5*...] | `cpp_include_cleanup_alternate_files = windows.h:winerror.h:minwindef.h`</br>or</br>`cpp_include_cleanup_alternate_files = windows.h:winerror.h:minwindef.h,umbrella.h:internal.h`|

## See also

[C/C++ Include Cleanup overview](include-cleanup-overview.md)\
[Include Cleanup messages](include-cleanup-messages.md)
