---
title: "Configure C/C++ Include Cleanup in Visual Studio"
description: "Learn how to configure C/C++ Include Cleanup."
ms.date: 07/15/2026
ms.topic: "how-to"
f1_keywords: ["config include cleanup"]
helpviewer_keywords: ["config include cleanup"]
---
# Configure C/C++ Include Cleanup in Visual Studio

Starting with 17.8 Preview 1, Visual Studio can clean up which files you `#include` to improve the quality of your C and C++ code in the following ways:
- Offers to add header files for code that compiles only because a needed header file is included indirectly by another header file.
- Offers to remove unused header files--improving build times.

This article describes how to configure Include Cleanup in Visual Studio. For more information about Include Cleanup, see [C/C++ Include Cleanup overview](include-cleanup-overview.md).

## Turn on Include Cleanup

The Include Cleanup feature is off by default.

::: moniker range="<=msvc-170"

Turn it on by selecting **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup** and selecting **Enable #include cleanup**.

Then use the dropdowns to configure the severity of the notifications about opportunities to add indirect headers or remove unused headers:

:::image type="complex" source="media/vs2022-include-cleanup-option.png" alt-text="The Tools options dialog opened at Text Editor > C/C++ > Code Cleanup.":::
The **Enable #include cleanup** checkbox is selected. The dropdowns for **Remove unused includes suggestion level** and **Add missing includes suggestion level** are shown. The contents of the dropdown are shown, which are: **Refactoring only**, **Suggestion**, **Warning**, and **Error**. The **Remove unused includes suggestion level** dropdown offers the same options but also adds **Dimmed**.
:::image-end:::

These options control the kind of notification that the Include Cleanup feature provides about unused headers:

**Dimmed**

Include Cleanup shows unused headers by dimming the line of the unused header file in the code editor, and with a message in the **Error List** window. In the code editor, hover your cursor over the dimmed `#include` to bring up the quick action menu and choose **Show potential fixes**, or click on the light bulb dropdown, to see actions related to the unused file.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for #include < iostream > is dimmed because the line of code that uses iostream is commented out. That line of code is // std::cout << "charSize = " << charSize; The quick action menu is also visible for this line. It says the #include < iostream > isn't used in this file, and has a link to Show potential fixes.
:::image-end:::

**Refactoring only**: Include Cleanup offers actions you can take through the quick action menu in the code editor when you hover the mouse pointer over an `#include`, or place the cursor on the `#include` line and press Ctrl+period:

:::image type="complex" source="media/include-cleanup-refactor-lightbulb.png" alt-text="A screenshot of the quick action to remove an unused header.":::
When hovering the cursor over # include iostream, a light bulb appears with the text that # include iostream isn't used in this file."
:::image-end:::

**Suggestion, Warning, Error**: Include Cleanup can show Include Cleanup messages as suggestions, warnings, or errors in the **Error List** window. You determine which. In the following screenshot of the **Error List**, Include Cleanup is configured to show unused headers with a warning. Ensure that **Build + Intellisense** is selected in the dropdown filter so that you can see the Include Cleanup output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to **Build + IntelliSense**. A warning is visible: VCIC002 - `#include <iostream>` isn't used in this file."
:::image-end:::
::: moniker-end
::: moniker range=">=msvc-180"

Turn it on by selecting **Tools** > **Options** > **All Settings** > **Languages** > **C/C++** > **Code cleanup** > **Include cleanup**. Use the dropdowns to configure how you want to be notified about opportunities to highlight unused `#include` statements, `#include` statements that can be optimized (removed after their required transitive includes are added directly), and missing `#include` statements that are transitively included.

:::image type="complex" source="media/vs-include-cleanup-option.png" alt-text="A screenshot of the Tools options dialog opened at All Settings > Languages > C/C++ > Code cleanup > Include cleanup.":::
Screenshot showing dropdowns for choosing how to highlight an unused header in the code editor, those that can be optimized, and those that are transitively included.
:::image-end:::

The meaning of the options:

**Dimmed**

Include Cleanup shows unused headers by dimming the line of the unused header file in the code editor, and as a message in the **Error List** window. In the code editor, hover your cursor over the dimmed `#include` to bring up the quick action menu and choose **Show potential fixes**, or click on the light bulb dropdown, to see actions related to the unused file.

:::image type="complex" source="media/include-cleanup-dimmed-include.png" alt-text="A screenshot of a dimmed #include < iostream > line.":::
The line for `#include <iostream>` is dimmed because the line of code that uses `iostream` is commented out. That line of code is `// std::cout << "charSize = " << charSize;`. The quick action menu is also visible for this line. It says the `#include <iostream>` isn't used in this file, and has a link to **Show potential fixes**.
:::image-end:::

**None**: Take no action. Include Cleanup still offers actions you can take in the code editor via the quick action menu when you hover the mouse pointer over an `#include`, or place the cursor on the `#include` line and press Ctrl+period:

**Suggestion, Warning, Error**: Include Cleanup can show Include Cleanup messages as suggestions, warnings, or errors in the Error List window. You determine which. In the following screenshot of the **Error List**, Include Cleanup is configured to show unused headers with a warning. Ensure that **Build + Intellisense** is selected in the dropdown filter so that you can see the Include Cleanup output:

:::image type="complex" source="media/include-cleanup-error-list.png" alt-text="A screenshot of the Error List window.":::
The dropdown filter is set to **Build + IntelliSense**. A warning is visible: VCIC002 - `#include <iostream>` isn't used in this file."
:::image-end:::
::: moniker-end

## Other configuration options

::: moniker range="<=msvc-170"

More **Include Cleanup** settings are available under **Tools** > **Options** > **Text Editor** > **C/C++** > **Code Cleanup**:

- **Sort includes**: Flags `#include` directives that need sorting. Choose the severity notification level of the message that appears in the **Error List** window: **None** (feature is off), **Suggestion**, **Warning**, or **Error**.
- **Style**: Controls how `#include` statements are sorted. Choose **Ignore** to sort without considering bracket style, **Quotes** to sort quoted includes above angle-bracket includes, or **Angle brackets** to sort angle-bracket includes above quoted includes.
- **Case sensitive**: When selected, sorting compares include filenames case-sensitively. When cleared, sorting is case-insensitive.

:::image type="content" source="media/other-include-cleanup-options.png" alt-text="Screenshot of Visual Studio Options with Advanced filtering, Sort after edits, Sort Includes, Sorting priority, Style, and Case sensitive settings highlighted.":::
::: moniker-end
::: moniker range=">=msvc-180"

More **Include Cleanup** settings are available under **Tools** > **Options** > **All Settings** > **Languages** > **C/C++** > **Code cleanup** > **Include cleanup**:

- **Advanced Filtering**: When selected, if you call a member function on a derived class object but the function is defined in the base class, the tool doesn't suggest adding the base-class header. Turn this option on to reduce noisy suggestions when the symbols you use come from base classes rather than the type you directly reference.
- **Sort the #include directives after making any edits for include cleanup**: When selected, the built-in sort-includes feature runs after any Include Cleanup action.
- **Format the #include directives after making any edits for include cleanup**: When selected, the format command runs after any Include Cleanup action.

:::image type="content" source="media/vs-other-include-cleanup-options.png" alt-text="Screenshot of Visual Studio Include cleanup options with Advanced filtering, Sort, and Format settings highlighted.":::

::: moniker-end

## Configure Include Cleanup with `.editorconfig`

The Include Cleanup feature has more options, such as excluding specified includes from cleanup suggestions and indicating that some header files are required so the tool doesn't mark them as unused. Define these options in an `.editorconfig` file. Add this file to your project to enforce consistent coding styles for everyone that works in the codebase. For more information about adding an `.editorconfig` file to your project, see [Create portable, custom editor settings with EditorConfig](/visualstudio/ide/create-portable-custom-editor-options).

The `.editorconfig` settings that you can use with Include Cleanup are:

| Setting | Values | Example |
|--|--|--|
| `cpp_include_cleanup_add_missing_error_tag_type`</br></br>Sets the error level for add transitive include messages. | `none`</br>`suggestion`</br>`warning`</br>`error` | `cpp_include_cleanup_add_missing_error_tag_type = suggestion` |
| `cpp_include_cleanup_alternate_files`</br></br>Suppress messages for indirect includes. For example, if you `#include <windows.h>` and only use content from its indirectly included headers `winerror.h` or `minwindef.h`, the tool doesn't suggest adding them. | *file1*:*file2*[:*file3*...][,*file4*:*file5*...] | `cpp_include_cleanup_alternate_files = windows.h:winerror.h:minwindef.h`</br>or</br>`cpp_include_cleanup_alternate_files = windows.h:winerror.h:minwindef.h,umbrella.h:internal.h`|
| `cpp_include_cleanup_excluded_files`</br></br>Excludes the specified files from Include Cleanup messages. You won't get a suggestion related to the header at all, whether to add it or that it's unused. | *filename* | `cpp_include_cleanup_excluded_files = vcruntime.h, vcruntime_string.h` |
| `cpp_include_cleanup_remove_unused_error_tag_type`</br></br>Sets the error level for remove unused include messages. | `none`</br>`suggestion`</br>`warning`</br>`error`</br>`dimmed` | `cpp_include_cleanup_remove_unused_error_tag_type = dimmed` |
| `cpp_include_cleanup_replacement_files`</br></br>Replaces *file1* with *file2* during Include Cleanup processing. For example, you may prefer using `cstdio` over `stdio.h`. If you have a file with both `#include <cstdio>` and `#include <stdio.h>` and you consume content only from `stdio.h`, with this setting Include Cleanup will tell you to remove `stdio.h` because it replaced the usage of `cstdio` with `stdio.h` during processing. If you don't use the contents from either, Include Cleanup will tell you to remove both.| *file1*:*file2* | `cpp_include_cleanup_replacement_files = stdio.h:cstdio,stdint.h:cstdint` |
| `cpp_include_cleanup_required_files`</br></br>Specify that usage of *file1* requires *file2*. For example, specify that if you use `atlwin.h` that `altbase.h` must also be included. | *file1*:*file2* | `cpp_include_cleanup_required_files = atlwin.h:altbase.h, atlcom.h:altbase.h` |
| `cpp_sort_includes_error_tag_type`</br></br>Sets the error level of sort-includes messages. `none` turns the feature off. `suggestion` shows a **`...`** squiggle and adds a message to the error list. `warning` shows a green squiggle and adds a warning. `error` shows a red squiggle and adds an error. | `none`</br>`suggestion`</br>`warning`</br>`error` | `cpp_sort_includes_error_tag_type = suggestion` |
| `cpp_sort_includes_priority_case_sensitive`</br></br>When `true`, sort compares include filenames case-sensitively. When `false`, sort is case-insensitive. | `true`</br>`false` | `cpp_sort_includes_priority_case_sensitive = false` |
| `cpp_sort_includes_priority_style`</br></br>Controls whether the sort takes bracket style into account. `ignore` sorts without considering brackets. `quoted` sorts quoted includes above angle-bracket includes. `angle_brackets` sorts angle-bracket includes above quoted includes. | `ignore`</br>`quoted`</br>`angle_brackets` | `cpp_sort_includes_priority_style = quoted` |

::: moniker range=">=msvc-180"

The following settings are available starting in Visual Studio 2026:

| Setting | Values | Example |
|--|--|--|
| `cpp_include_cleanup_format_after_edits`</br></br>When `true`, runs the format command after any Include Cleanup action. Useful when you have clang-format configured to sort your `#include` directives. | `true`</br>`false` | `cpp_include_cleanup_format_after_edits = true` |
| `cpp_include_cleanup_sort_after_edits`</br></br>When `true`, runs the built-in sort-includes feature after any Include Cleanup action. Useful when you're not using clang-format to sort your `#include` directives. | `true`</br>`false` | `cpp_include_cleanup_sort_after_edits = true` |

## Suppress unused-include messages through code

Starting in Visual Studio 2026, you can suppress **Include Cleanup** messages on a single `#include` directive by adding a `// VCIC-Excluded` comment on the same line. The Include Cleanup tool doesn't suggest removing that include, even if it appears unused. Provide optional justification text after the marker so future readers know why the include is there:

```cpp
#include "Header2.h" // VCIC-Excluded: needed for the ATL macros used below
```

You can also use the light-bulb menu to add the `// VCIC-Excluded` comment to a `#include` directive. Ensure that Include Cleanup is turned on via **Tools** > **Options** > **All Settings** > **Languages** > **C/C++** > **Code cleanup** > **Include cleanup** because it's off by default. Then, hover your cursor over the `#include` line, select **Other Fixes** > **Suppress VCIC002 in source**::

:::image type="content" source="media/include-cleanup-lightbulb-suppress.png" alt-text="Screenshot of Visual Studio light-bulb menu, showing Suppress VCIC002 in source.":::

The `// VCIC-Excluded` comment only applies to the `#include` for the file. Setting `cpp_include_cleanup_excluded_files` in `.editorconfig` applies that exclusion in every file governed by the `.editorconfig`.

::: moniker-end

## See also

[C/C++ Include Cleanup overview](include-cleanup-overview.md)\
[Include Cleanup messages](include-cleanup-messages.md)
