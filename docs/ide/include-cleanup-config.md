---
title: "Configure C/C++ include cleanup in Visual Studio"
description: "Learn how to configure C/C++ include cleanup."
ms.date: 10/10/2023
ms.topic: "how-to"
ms.custom: intro-overview
---
# Configure C/C++ include cleanup in Visual Studio

Starting with Visual Studio 17.7 preview 3, Visual Studio can cleanup your `#include`s to improve the quality of your C and C++ code in the following ways:
- Offers to remove unused header files--improving build times.
- Offers to add header files for code that is only working because the needed header file is included indirectly.

This article describes how to configure include cleanup in Visual Studio. For more information about include cleanup, see [C/C++ include cleanup overview](/visualstudio/ide/include-cleanup-overview).

## Turn on include cleanup

The include cleanup feature is on by default. If it isn't active, you can turn it on via **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and select **Enable #include cleanup**.

Then use the dropdowns to configure how you want to be notified about opportunities to remove unused headers or add indirect headers:

:::image type="complex" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup.":::
The Enable # include cleanup checkbox is checked. The dropdowns for Remove unused includes suggestion level, and Add missing includes suggestion level, are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes suggestion level** dropdown offers the same options but also adds dimmed.
:::image-end:::

The meaning of the suggestion level options are:

**Refactoring only**: Include cleanup offers actions it can take through the quick action menu when you hover the mouse pointer over an `#include`, or place the cursor on the `#include` line and press Ctrl+period:

:::image type="complex" source="media/include-cleanup-refactor-lightbulb.png" alt-text="A screenshot of the quick action to remove an unused header":::
When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file."
:::image-end:::

**Suggestion, Warning, Error**: Include cleanup offers actions it can take via suggestions, warnings, or errors in the Error List window. You determine which. In the following screenshot of the Error List, include cleanup is configured to show unused headers with a warning. Ensure that **Build + Intellisense** is selected in the dropdown filter so that you can see the include cleanup output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to Build + IntelliSense. A warning is visible: VCIC002 - #include < iostream > is not used in this file."
:::image-end:::

**Dimmed**

Include cleanup shows unused headers by dimming the line of the unused header file in the code editor. Hover your cursor over the dimmed `#include` to bring up the quick action menu and choose **Show potential fixes** to see actions related to the unused file.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for #include < iostream > is dimmed becasue the line of code that uses iostream is commented out. That line of code is // std::cout << "charSize = " << charSize; The quick action menu is also visible for this line. It says the #include < iostream > is not used in this file, and has a link to Show potential fixes.
:::image-end:::

## Configure include cleanup with `.editorconfig`

There are more options for configuring include cleanup such as excluding specified includes from cleanup suggestions, indicating that some header files are required so that the tool doesn't mark them as unused, and so on. These options are defined in an `.editorconfig` file, that, among other things, can be added to your project to enforce consistent coding styles for everyone that works in the codebase. For more information about adding an `.editorconfig` file to your project, see [Create portable, custom editor settings with EditorConfig](/visualstudio/ide/create-portable-custom-editor-options).

The `.editorconfig` settings that you can use with include cleanup are:

| Setting | Description | Values | Example |
|--|--|--|--|
| `cpp_include_cleanup_add_missing_error_tag_type` | Sets the error level of add transitive include suggestions. | `none`</br>`suggestion`</br>`warning`</br>`error` | `cpp_include_cleanup_add_missing_error_tag_type = suggestion` |
| `cpp_include_cleanup_remove_unused_error_tag_type` | Sets the error level of remove unused include suggestions. | `none`</br>`suggestion`</br>`warning`</br>`error`</br>`dimmed` | `cpp_include_cleanup_remove_unused_error_tag_type = dimmed` |
| `cpp_include_cleanup_excluded_files` | Excludes the specified files from include tool cleanup suggestions. You won’t get a suggestion related to the header at all, whether to add it or that it is unused. | filename | `cpp_include_cleanup_excluded_files = vcruntime.h, vcruntime_string.h` |
| `cpp_include_cleanup_required_files` | Specify that usage of file1 requires file2. For example, specify that if you use `atlwin.h` that `altbase.h` must also be included. | file1:file2 | `cpp_include_cleanup_required_files = atlwin.h:altbase.h, atlcom.h:altbase.h` |
| `cpp_include_cleanup_replacement_files` | Suggest that the usage of file1 be replaced by file2. | file1:file2 | `cpp_include_cleanup_replacement_files = stdio.h:cstdio,stdint.h:cstdint` |
| `cpp_include_cleanup_alternate_files` | Suggest that file1 be used as an alternative to file2. Useful for facade files. | file1:file2 | `cpp_include_cleanup_alternate_files = windows.h:minwindef.h, windows.h:winerror.h` |

## See also

[C/C++ include cleanup overview](/visualstudio/ide/include-cleanup-overview)