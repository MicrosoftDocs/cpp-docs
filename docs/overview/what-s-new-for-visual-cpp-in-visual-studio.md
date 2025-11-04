---
title: "What's new for C++ in Visual Studio"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools in Visual Studio."
ms.date: 11/04/2025
ms.service: "visual-cpp"
ms.subservice: "ide"
ms.custom: intro-whats-new
ai-usage: ai-assisted
---

# What's new for C++ in Visual Studio

Microsoft C++ Build Tools (MSVC Build Tools) versioning is no longer synchronized with Visual Studio versioning starting with Visual Studio 2026 version 18.0 and Microsoft C++ Build Tools version 14.50. For the latest updates to MSVC going forward, see [What's new for MSVC](/cpp/overview/what-s-new-for-msvc.md).

## What's new for C++ in Visual Studio 2022

Visual Studio 2022 brings many updates and fixes to the Microsoft C++ compiler and tools. The Visual Studio IDE also offers significant improvements in performance and productivity, and now runs natively as a 64-bit application.

- For more information on what's new in all of Visual Studio, see [What's new in Visual Studio 2022](/visualstudio/ide/whats-new-visual-studio-2022).
- For information about version build dates, see [Visual Studio 2022 Release History](/visualstudio/releases/2022/release-history).

## What's new for C++ in Visual Studio version 17.14

*Released May 2025*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.14](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-14/) |
| Standard Library (STL) merged C++26 and C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.14](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1714) |
| New features in the IDE |[Visual Studio 2022 version 17.14 Release Notes](/visualstudio/releases/2022/release-notes) |
| C++ language updates  | [C++ Language Updates in MSVC in Visual Studio 2022 17.14](https://devblogs.microsoft.com/cppblog/c-language-updates-in-msvc-in-visual-studio-2022-17-14/) |
| C++ language conformance improvements | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.14](cpp-conformance-improvements.md#improvements_1714) |

A quick highlight of some of the new features:

- C++ Dynamic Debugging allows you to debug optimized code without impacting performance. For more information, see [C++ Dynamic Debugging](/visualstudio/debugger/cpp-dynamic-debugging).
- Implemented C++23 features (requires `/std:c++latest` or `/std:c++23preview`):
  - [`static operator()`](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p1169r4.html)
  - [`static operator[]`](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2589r1.pdf)
  - [`if consteval`](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2021/p1938r3.html). Allows you to run different code depending on whether the statement is executed at compile time or run time.
- Automatically generate documentation comments with GitHub Copilot. For more information, see [Introducing automatic documentation comment generation in Visual Studio](https://devblogs.microsoft.com/visualstudio/introducing-automatic-documentation-comment-generation-in-visual-studio/).
- Use the Model Picker in Visual Studio to select your AI model for GitHub Copilot. For more information, see [Changing the AI model for Copilot Chat](https://docs.github.com/en/copilot/using-github-copilot/ai-models/changing-the-ai-model-for-copilot-chat). This screenshot shows the Model Picker at the bottom of the GitHub Copilot chat window:
    :::image type="complex" source="./media/model-picker.png" alt-text="A screenshot of the GitHub Copilot chat window with the Model Picker dropdown highlighted.":::
    The dropdown for the Model Picker is open. The options include: GPT-4o, o3-mini, Claude 3.7 Sonnet Thinking, and others.
    :::image-end:::
- Unreal Engine integration improvements:
    - The Visual Studio C++ debugger now supports Unreal Engine Blueprints.
    - Commands for building files, modules, and plugins are available natively in Visual Studio.
- New compiler flag [/forceInterlockedFunctions](../build/reference/force-interlocked-functions.md) dynamically selects between Armv8.0 load, store exclusive instructions or Armv8.1 Large System Extension (LSE) atomic instructions based on CPU capability at runtime.
- Added support for IntelliSense-based completions and quick info for CMake modules in Visual Studio. You can view all available CMake modules and when you hover over a referenced CMake module, IntelliSense provides more info about the selected module:
    :::image type="complex" source="./media/cmake-module-intellisense.png" alt-text="A screenshot of intellisense explaining C Make Print Helpers.":::
    The screenshot is of an edit in the C Make Lists .txt file. The cursor is on include ( CMakePrintHelpers ). Intellisense says: Convenience functions for printing properties and variables, useful for debugging.
    :::image-end:::

    When you start typing a CMake module name in your `CMakeLists.txt` or other CMake script files, IntelliSense provides a list of available modules to choose from:
    :::image type="complex" source="./media/cmake-intellisense.png" alt-text="A screenshot of intellisense for a include statement.":::
    The screenshot is of an edit in the C Make Lists .txt file. The cursor is on include ( C Make. The Intellisense dropdown contains entries for C Make Add Fortran Subdirectory, C Make Dependent Option, and more.
    :::image-end:::
- Guidelines Support Library (GSL) 4.2.0: This release includes performance improvements for `gsl::span`, new features, and better alignment with C++ standards. For more information, see [Announcing Guidelines Support Library v4.2.0](https://devblogs.microsoft.com/cppblog/announcing-guidelines-support-library-v4-2-0/).

## What's new for C++ in Visual Studio version 17.13

*Released February 2025*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.13](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-13/) |
| Standard Library (STL) C++26 and C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.13](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1713) |
| New features in the IDE |[Visual Studio 2022 version 17.13 Release Notes](/visualstudio/releases/2022/release-notes-v17.13) |
| C++ language updates  | [MSVC compiler updates in Visual Studio 2022 17.13](https://devblogs.microsoft.com/cppblog/msvc-compiler-updates-in-visual-studio-2022-version-17-13/) |
| C++ language conformance improvements | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.13](cpp-conformance-improvements.md#improvements_1713) |

A quick highlight of some new features:

- **C++ language enhancements**

  - Try out C++23 preview features by setting the C++ Language Standard to `/std:c++23preview`. This setting enables the latest C++23 features and bug fixes. For more information, see [/std (Specify Language Standard Version)](../build/reference/std-specify-language-standard-version.md#stdc23preview).
  - Support for C++23’s `size_t` literal suffix, which helps avoid truncations or signed comparison mismatches--especially when writing loops. For example:
    ```cpp
    // Infinite loop if v.size > max unsigned int 
    for (auto i = 0u; i < v.size(); ++i)
    { 
      ...
    } 
    
    // Fixed because of uz literal 
    for (auto i = 0uz; i < v.size(); ++i)
    { 
      ...
    } 
    ```

  - Support for vector lengths for code generation on x86 and x64. For more information, see [/vlen](../build/reference/vlen.md).
  - Support for Intel Advanced Vector Extensions 10 version 1. For more information about `/arch:AVX10.1`, see [/arch (x64)](../build/reference/arch-x64.md).

- **Standard Library enhancements**

  - Standard library support for coroutines. In this example from [P2502R2](https://wg21.link/p2502r2), the `fib` function is a coroutine. When the `co_yield` statement is executed, `fib` is suspended and the value is returned to the caller. You can resume the `fib` coroutine later to produce more values without requiring any manual state handling:

    ```cpp
    std::generator<int> fib()
    { 
      auto a = 0, b = 1; 
   
      while (true)
      { 
          co_yield std::exchange(a, std::exchange(b, a + b)); 
      }
    } 
      
    int answer_to_the_universe()
    { 
      auto rng = fib() | std::views::drop(6) | std::views::take(3); 
      return std::ranges::fold_left(std::move(rng), 0, std::plus{}); 
    } 
    ```

 - Moved `system_clock`, `high_resolution_clock`, and `chrono_literals` from a commonly included internal header to `<chrono>`. If you see compiler errors that types like `system_clock` or user-defined literals like `1729ms` aren't recognized, include `<chrono>`.
  - Improved the vectorized implementations of `bitset` constructors from strings, `basic_string::find_last_of()`, `remove()`, `ranges::remove`, and the `minmax_element()` and `minmax()` algorithm families.
  - Added vectorized implementations of:
    - `find_end()` and `ranges::find_end` for 1-byte and 2-byte elements.
    - `basic_string::find()` and `basic_string::rfind()` for a substring.
    - `basic_string::rfind()` for a single character.
  - Merged C++23 Defect Reports:
    - [P3107R5](https://wg21.link/P3107R5) Permit an efficient implementation of `<print>`.
    - [P3235R3](https://wg21.link/P3235R3) `std::print` More types faster with less memory.

- **GitHub Copilot**

  - GitHub Copilot Free is now available. Get 2,000 code completions and 50 chat requests per month at no cost.
  - GitHub Copilot code completions provide autocomplete suggestions inline as you code. To enhance the experience of C++ developers, GitHub Copilot includes other relevant files as context. This reduces errors while offering more relevant and accurate suggestions.
  - You can now request a code review from GitHub Copilot from the Git Changes window:
    :::image type="complex" source="./media/vs2022-copilot-git-changes-review.png" alt-text="A screenshot of the Git Changes window with the GitHub Copilot Review button highlighted.":::
    The Git Changes window is open with the GitHub Copilot Review button highlighted.
    :::image-end:::

    GitHub Copilot looks for potential issues and creates comments for them:

    :::image type="complex" source="./media/vs2022-copilot-comment-example.png" alt-text="A screenshot of the GitHub Copilot explaining an issue.":::
    GitHub Copilot found an issue with the line if ( is_enabled_) new_site.disable(). It says it may be a mistake and should likely be if ( is_enabled_) new_site.enable() because the intention seem to be enabling the new site if the breakpoint is enabled.
    :::image-end:::

    To use this feature, ensure the following are turned on:
      - **Tools** > **Options** > **Preview Features** > **Pull Request Comments**
      - **Tools** > **Options** > **GitHub** > **Copilot** > **Source Control Integration** > **Enable Git preview features**.

  - GitHub Copilot Edits is a new feature that can make changes across multiple files in your project. To start a new Edits session, click **Create new edit session** at the top of the GitHub Copilot Chat window:

    :::image type="content" source="./media/vs2022-copilot-edit-session.png" alt-text="A screenshot of the GitHub Copilot Chat window. The Create new edit session button is highlighted.":::

    Describe the changes you want to make and Copilot suggests relevant edits. You can preview the edits one-by-one and accept the ones you want or make corrections:

    :::image type="complex" source="./media/vs2022-copilot-edit-session-example.png" alt-text="A screenshot of the GitHub Copilot Chat window displaying the files it edited.":::
    GitHub Copilot is displaying a summary of the changes it made, such as 1. Create a new subclass range_breakpoint in include/libsdb/breakpoint.hpp" and 2. Implement the range_breakpoint class in src/breakpoint.cpp. An option to accept the changes is displayed.
    :::image-end:::

    For more information, see [Iterate across multiple files more efficiently with GitHub Copilot Edits](https://devblogs.microsoft.com/visualstudio/iterate-across-multiple-files-more-efficiently-with-github-copilot-edits-preview/).

- **CMake**
  - Now supports CMake Presets v9. New macro expansions in a preset's include field. For more information, see [Macro expansion](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html#macro-expansion) in the official CMake documentation.

## What's new for C++ in Visual Studio version 17.12

*Released November 2024*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.12](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-12/) |
| Standard Library (STL) merged C++26 and C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.12](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-1712) |
| New features in the Visual Studio 17.12 IDE |[Visual Studio 2022 version 17.12 Release Notes](/visualstudio/releases/2022/release-notes-v17.12) |
| C++ language conformance improvements in Visual Studio 2022 17.12 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.12](cpp-conformance-improvements.md#improvements_1712) |

A quick highlight of some of the new features:

- **Standard Library Enhancements**
  - C++23 Formatting ranges ([P2286R8](https://wg21.link/P2286R8)) implementation complete. Added formatters for the container adaptors `stack`, `queue`, and `priority_queue`.
  - Added multidimensional subscript operators, which also support `<mdspan>`. For example: `print("m[{}, {}]: '{}'; ", i, j, m[i, j])`.
- **Game development in C++**
  - Directly open Unreal Engine projects in Visual Studio without having to generate a Visual Studio solution file wrapping the Unreal Engine project. For more information, see [Work with Unreal Engine projects in Visual Studio](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-quickstart).
  - You can specify the command line arguments to pass when debugging directly from the toolbar. For more information, see [Set command line arguments for Unreal Engine projects](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-quickstart#set-command-line-arguments).
  :::image type="content" source="./media/command-line-argument-dropdown.png" alt-text="A screenshot of the command-line argument dropdown. It contains one command line argument: -graphicsadaptor=0.":::
- **Build Insights**
  - You can run Build Insights on selected files. Select the files you want in the **Solution Explorer**, right-click, and choose **Run Build Insights on Selected Files**:
  :::image type="content" source="./media/build-insights-run-on-selected-files.png" alt-text="A screenshot of files in the Solution Explorer. The context menu is open and the option to Run Build Insights on Selected Files is highlighted.":::
  - You can filter Build Insights results by project. Click the filter button on the filter column header and select the projects you want to see results for:
  :::image type="content" source="./media/build-insights-filter-by-project.png" alt-text="A screenshot of the Build Insights window with the Included Files tab open. The filter button was selected and a list of projects appears. Checkboxes next to Two projects are checked.":::
  - Clicking the question mark icon in the Build Insights window to see a short description for the tabs in the Build Insights window, and a link to the documentation for a detailed explanation:
  :::image type="content" source="./media/build-insights-view-explanations.png" alt-text="A screenshot of the Build Insights window with the view explanations button (a question mark in a circle) highlighted.":::
- **GitHub Copilot**
  - You can click **Ask Copilot** next to the value of a variable to get AI-driven insights into what led to its current state. For example, the following program has an off-by-one error in its loop condition:
  :::image type="complex" source="./media/copilot-smart-variable-inspection.png" alt-text="A screenshot of the Autos window. The variable named it is NULL. The Ask Copilot icon next to it is highlighted.":::
  The code that caused this problem is: for (auto it = h.animals_.begin(); it <= h.animals_.end(); it++).
  :::image-end:::
  If you click Ask Copilot icon for the `it` variable, it tells you why it is `<NULL>`:
  :::image type="complex" source="./media/copilot-smart-variable-explanation.png" alt-text="A screenshot of a GitHub Copilot window.":::
  This error is inside a function defined as int calculate_number_of_cats(const house& h). The GitHub Copilot message says: "The value of the expression it is NULL, which means that the iterator is not pointing to any valid element in the vector animals_. In the context of your program, it is supposed to iterate over the animals_ vector in the house object to count the number of cat objects. Why it is null. Based on the locals and call stack context: the house object h has an empty animals_ vector (size=0). The loop condition it <= h.animals_.end() is incorrect. It should be it != h.animals_.end()."
  :::image-end:::
  - You can click **Ask Copilot** about errors in the Visual Studio **Error List** to get help on the error and a suggested fix. For example:
  :::image type="complex" source="./media/copilot-fix-my-code.png" alt-text="A screenshot of the Error List window.":::
  The Ask Copilot icon is highlighted next to an error that unique_ptr is attempting to reference a deleted function.
  :::image-end:::
  If you click Ask Copilot, it tells you about the error:
  :::image type="complex" source="./media/copilot-fix-my-code-suggestion.png" alt-text="A screenshot of the GitHub Copilot explanation for the error.":::
  The Copilot message says: "The error occurs because the range-based for loop was attempting to copy std::unique_ptr objects, which is not allowed since std::unique_ptr cannot be copied. To fix this, I changed the loop to use a reference to avoid copying the std::unique_ptr objects. This way, the loop iterates over references to the std::unique_ptr objects, which is allowed."
  :::image-end:::
- **Debugging**
  - New debug visualizers for `mutex`, `recursive_mutex`, and `move_iterator`.
  - The debugger now displays return values inline:
  :::image type="content" source="./media/debugger-inline-return-values.png" alt-text="A screenshot of a tooltip showing the value 8.25. It's the result of the expression following the return statement that was stepped over.":::

## What's new for C++ in Visual Studio version 17.11

*Released August 2024*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.11](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-11/) |
| Standard Library (STL) merged C++26 and C++23 features, C++20 defect reports, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.11](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-1711) |
| New features in the Visual Studio 17.11 IDE |[Visual Studio 2022 version 17.11 Release Notes](/visualstudio/releases/2022/release-notes-v17.11) |
| C++ language conformance improvements in Visual Studio 2022 17.11 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.11](cpp-conformance-improvements.md#improvements_1711) |

A partial list of new features:

- **Standard Library Enhancements**
    - The formatted output implementation now includes `std::range_formatter` and formatters for `std::pair` and `std::tuple`.
    - Added support for `std::println()` with no arguments. This prints a blank line as proposed in [P3142R0](https://wg21.link/P3142R0).
    - Improved vectorization for several algorithms including `replace_copy()`, `replace_copy_if()`, `ranges::replace_copy`, `ranges::replace_copy_if`, `find_first_of()` and `ranges::find_first_of`, for 8-bit and 16-bit elements, `mismatch()`, `ranges::mismatch`, `count()`, `ranges::count`, `find()`, `ranges::find`, `ranges::find_last`, and `ranges::iota`.

- **Game development in C++**
    - You can now add common Unreal Engine class templates, modules, and plugins from within Visual Studio. For more information, see [Add Unreal Engine classes, modules, and plugins in Visual Studio](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-add-class-module-plugin).
    - The new Unreal Engine toolbar provides quick access to Unreal Engine related actions from within Visual Studio. The toolbar allows you to quickly attach to Unreal Engine processes, rescan the Blueprints cache, quickly access the Unreal Engine Log, and provides quick access to the Unreal Engine Configuration Page for Visual Studio. For more information, see [Unreal Engine Toolbar](/visualstudio/gamedev/unreal/get-started/vs-tools-unreal-quickstart#unreal-engine-toolbar).
    - You can now filter trace results by project. Also, results in each row show the relative path and file name instead of the full path. Results grouping in the **Included Files** view is also improved:
    :::image type="complex" source="./media/include-diagnostics-improved.png" alt-text="A screenshot of the improved Included Files diagnostics results.":::
    The Included Files view has a new column for the project. The Project column is selected and projects such as (Select All), CompilerIdC, OpenAL, common, and so on, are selected. The included files are listed by relative path and file name and grouped together.
    :::image-end:::
- **CMake debugging**
    - You can now debug your CMake scripts and `CMakeLists.txt` files in the Visual Studio debugger for CMake projects that target Linux via Windows Subsystem for Linux (WSL) or SSH. To start a CMake debugging session in Visual Studio, set a breakpoint in your `CMakeLists.txt` file and then navigate to **Project** > **Configure Cache with CMake Debugging**.
- **GitHub Copilot**
    - When you hover over symbols in the code editor, click the Copilot **Tell me more** button in the Quick Info dialog to learn more about a given symbol:
    :::image type="complex" source="./media/github-copilot-quick-info.png" alt-text="A screenshot of the Quick Info window.":::
    The Quick Info window is shown above a function. The Tell me more link is highlighted.
    :::image-end:::
    - GitHub Copilot can generate naming suggestions for your identifiers (variables, methods, or classes) based on how your identifier is used and the style of your code.
      :::image type="complex" source="./media/copilot-rename.png" alt-text="A screenshot of the GitHub Copilot Rename dialog.":::
      The Rename dialog has a New name field with a dropdown list that shows these choices: text_color, font_color, display_color, console_color, and menu_text_color.
      :::image-end:::
    You need an active [GitHub Copilot subscription](https://visualstudio.microsoft.com/github-copilot/). Right-click the variable you wish to rename, and choose **Rename** (`Ctrl+R`, `Ctrl+R`). Select the GitHub Copilot sparkle icon to generate naming suggestions.

- **Debugging**
    - Conditional breakpoints in C++ are faster.

- **Diagnostics improvements**
    - Improved diagnostics when calling `std::get<T>` on a `std::tuple` that has multiple instances of `T` in its template arguments. MSVC used to report:\
          `error C2338: static_assert failed: 'duplicate type T in get<T>(tuple)'`.\
      Now it reports:\
          `error C2338: static_assert failed: 'get<T>(tuple<Types...>&) requires T to occur exactly once in Types.(N4971 [tuple.elemm]/5)'`
    - Improved diagnostics when `std::ranges::to` is unable to construct the requested result. MSVC used to report:\
          `error C2338: static_assert failed: 'the program is ill-formed per N4950 [range.utility.conv.to]/2.3'`\
      Now it reports:\
             `error C2338: static_assert failed: 'ranges::to requires the result to be constructible from the source range, either by using a suitable constructor, or by inserting each element of the range into the default-constructed object. (N4981 [range.utility.conv.to]/2.1.5)'`

## What's new for C++ in Visual Studio version 17.10

*Released May 2024*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's new for C++ Developers in Visual Studio 2022 17.10](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-10/) |
| Standard Library (STL) merged C++26 and C++23 features, C++20 defect reports, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.10](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-1710) |
| New features in the Visual Studio 17.10 IDE |[Visual Studio 2022 version 17.10 Release Notes](/visualstudio/releases/2022/release-notes-v17.10) |
| C++ language conformance improvements in Visual Studio 2022 17.10 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.10](cpp-conformance-improvements.md#improvements_1710) |

A partial list of new features:

- **MSVC Toolset Update**: The MSVC toolset version is updated from 19.39 to 19.40. This may affect projects that have version assumptions. For more information about some ways in which this affects projects that assume that MSVC versions are all 19.3X for Visual Studio 2022 releases, see [MSVC Toolset Minor Version Number 14.40 in VS 2022 v17.10](https://devblogs.microsoft.com/cppblog/msvc-toolset-minor-version-number-14-40-in-vs-2022-v17-10/).
- **Standard Library Enhancements**: The standard library added support for [P2510R3 Formatting Pointers](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2510r3.pdf), which brings the set of format specifiers for pointers when using `std::format` more in line with those that already exist for integers. Improved the vectorized implementations of `std::min_element`, `std::ranges::min`, and friends.
- **Build Insights**: Now provides template instantiation information. See [Templates View for Build Insights in Visual Studio](https://devblogs.microsoft.com/cppblog/templates-view-for-build-insights-in-visual-studio-2/) or the [Pure Virtual C++ - Templates view for Build Insights in Visual Studio](https://youtu.be/68pOEQ5YA5s) recording.
- **Unreal Engine Plugin**: There's a new opt-in feature for the Unreal Engine Plugin to run in the background, reducing startup costs. This is an opt-in feature that is activated via **Tools** > **Options** > **Unreal Engine**.
- **New features for Linux**: See [New Linux Development Features in Visual Studio](https://youtu.be/jZTMRvm8AwY).
- **CMake Targets**: You can now pin targets in the **CMake Targets View**.
- **Connection Manager UX**: The user experience provides a more seamless experience when connecting to remote systems. For more information, see [Usability Improvements in the Visual Studio Connection Manager](https://devblogs.microsoft.com/cppblog/usability-improvements-in-the-visual-studio-connection-manager/).
- **Pull request comments**: You can now view GitHub and Azure DevOps comments directly in your working file. Enable the feature flag, **Pull Request Comments** in **Options** > **Environment** > **Preview Features** and checkout the pull request branch to get started.
- **AI-Generated Content**: GitHub Copilot can now draft pull request descriptions. Requires an active GitHub Copilot subscription. Try it out by clicking the **Add AI Generated Pull Request Description** sparkle pen icon within the **Create a Pull Request** window.
- **Image Preview**: Hover over an image path to see a preview with size details. The size is capped to 500 px wide and high.
  :::image type="complex" source="media/hover-preview.png" alt-text="Screenshot of hover preview.":::
  The mouse is hovering over the line std::filesystem::path vs_logo_path = "../images/vs_logo.png". Underneath appears a preview of the Visual Studio logo and the information that it's 251 x 500 pixels and 13.65 KB in size.
  :::image-end:::
- **Breakpoint/Tracepoint Creation**: You can now create conditional breakpoints or tracepoints directly from expressions in the source code from the right-click menu. This works on property or field names and values from autos, locals, watch windows, or DataTips.
- **Attach to Process Dialog**: The functionality provided by the Attach to Process dialog is more user-friendly. You can now easily switch between tree and list views, organize processes better with collapsible sections, and select code types with a simplified combobox. Also, the "Select/Track Window" feature is now easier to use, allowing two-way tracking: selecting a process highlights its window, and clicking on a window selects its process.
- **GitHub Copilot Integration**: GitHub Copilot and Copilot Chat extensions are now unified and ship directly in Visual Studio. To install it, install the **GitHub Copilot** component in the **Visual Studio Installer**:
    :::image type="complex" source="media/github-copilot-install-option.png" alt-text="Screenshot of the Visual Studio Installer GitHub Copilot installation option." lightbox="media/github-copilot-install-option-expanded.png":::
    The Visual Studio installer is open to the Workloads tab. In the installation details pane, GitHub Copilot is shown as selected.
    :::image-end:::
    The GitHub Copilot interface is in the top-right corner of Visual Studio. To use it, you need an active GitHub Copilot subscription.
    :::image type="complex" source="media/unified-github-copilot-button.png" alt-text="Screenshot of GitHub Copilot button.":::
    The GitHub Copilot button is shown in the top-right corner of Visual Studio. It has options to open a chat window, GitHub Copilot settings, learn more, and manage copilot subscription.
    :::image-end:::

## What's new for C++ in Visual Studio version 17.9

*Released Feb 2024*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's new for C++ Developers in Visual Studio 2022 17.9](https://devblogs.microsoft.com/cppblog/whats-new-for-cpp-developers-in-visual-studio-2022-17-9/) |
| Standard Library (STL) merged C++23 features, performance improvements, enhanced behavior, Language Working Group (LWG) issue resolutions, and fixed bugs | [STL Changelog 17.9](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-179) |
| New features in the Visual Studio 17.9 IDE |[Visual Studio 2022 version 17.9 Release Notes](/visualstudio/releases/2022/release-notes-v17.9) |
| C++ language conformance improvements in Visual Studio 2022 17.9 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_179) |
| Summary of C++ backend updates | [MSVC Backend updates since Visual Studio 2022 version 17.3](https://devblogs.microsoft.com/cppblog/msvc-backend-updates-since-visual-studio-2022-version-17-3/) |

A partial list of new features:

- `#include` diagnostics, which provides a detailed analysis of your `#include` directives. Activate this feature by right-clicking an `#include` and choosing **#include directives** > **Turn #include directive diagnostics on**. Above each `#include` is the number of times your code references that `#include` file. Click the **reference** link to navigate to where your code uses something from that header file. To view the build time of your `#include` directives, run Build Insights by navigating to **Build** > **Run Build Insights on Solution** > **Build**.
    :::image type="complex" source="media/include-diagnostics.png" alt-text="Screenshot of #include diagnostics.":::
    Above the # include is a **reference** link and many of the references to this # include file (in this case 1). The build time is also listed (in this case less than 1/2 a second).
    :::image-end:::
- Memory layout visualization, which shows how memory is arranged for your classes, structs, and unions. Hover over a type and choose the **Memory Layout** link in the **Quick Info** to open a dedicated window displaying the memory layout of the selected type. Hovering over individual data types within this window provides detailed information about their size and offset within the type.
    :::image type="complex" source="media/memory-layout-window.png" alt-text="Screenshot of the memory layout window":::
    The memory layout window shows the contents of the Snake class. It shows the memory offsets of the various fields of the class such as Point classes for the location of the head and body, the score, and so on.
    :::image-end:::
- You can now specify your own custom CMake executable. This feature is useful if you want to use a specific version of CMake that isn't shipped with Visual Studio. Navigate to **Tools** > **Options** and select **CMake** > **General**. Select **Enable custom CMake executable** and specify the directory path of your CMake executable.
    :::image type="complex" source="media/custom-cmake-option.png" alt-text="Screenshot of the CMake options dialog":::
    The CMake options dialog with the "Enable custom CMake executable" option and "CMake Executable Directory" field highlighted.
    :::image-end:::
- Improved IntelliSense for Unreal Engine projects.
- Improved C++23 support:
    `std::format` and `std::span`
    `formattable`, `range_format`, `format_kind`, and `set_debug_format()` as part of [P2286R8 Formatting Ranges](https://wg21.link/P2286R8)
    `<mdspan>` per [P0009R18](https://wg21.link/P0009R18) and subsequent wording changes that were applied to the C++23 Standard.
    Also, `format()` can format pointers per [P2510R3](https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2022/p2510r3.pdf).

## What's new for C++ in Visual Studio version 17.8

*Released Nov 2023*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's new for C++ Developers in Visual Studio 2022 17.8](https://devblogs.microsoft.com/cppblog/whats-new-for-cpp-developers-in-visual-studio-2022-17-8/) |
| Standard Library (STL) merged C++26, C++23 features, C++20 extensions, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.8](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-178) |
| New features in the Visual Studio 17.8 IDE |[Visual Studio 2022 version 17.8 Release Notes](/visualstudio/releases/2022/release-notes-v17.8) |
| C++ language conformance improvements in Visual Studio 2022 17.8 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_178) |
| An overview of C++ improvements in Visual Studio, VS Code, and vcpkg during 2023 | [A year of C++ improvements](https://devblogs.microsoft.com/cppblog/a-year-of-cpp-improvements-in-visual-studio-vs-code-and-vcpkg) |

A partial list of new features:

- C++ structured diagnostics in the Output window and a new problem details window that provides more information about the error. For more information, see [Structured SARIF Output](../build/reference/sarif-output.md) and [Problem Details Window](/visualstudio/ide/reference/problem-details-window).
- A feature that lets you visualize the size and alignment of your classes, structs, unions, base types, or enums even before the code is compiled. Hover over the identifier and a Quick Info displays the size and alignment information.
- A feature that suggests when to mark member functions `const` because they don't modify the object's state. Hover over a member function and click the light bulb icon to mark the function as `const`.
- Visual Studio now prompts you to mark global functions as static via a screwdriver icon that appears by the function name. Click the screwdriver icon to mark the function as static.
- Unused #include directives are dimmed in the editor. You can hover over a dimmed include and use the light bulb menu to either remove that include or all unused includes. You can also add `#include` directives for entities that are indirectly included via other headers. For more information, see [Clean up C/C++ includes in Visual Studio](../ide/include-cleanup-overview.md).
- More Unreal Engine support:
  - Unreal Engine Test Adapter lets you discover, run, manage, and debug your Unreal Engine tests without leaving the Visual Studio IDE.
  - With Unreal Engine Code Snippets, you can find common Unreal Engine constructs as snippets in your member list.
  - Build Insights is now integrated with Visual Studio 2022 and works with MSBuild and CMake projects using MSVC. You can now see additional information about the compilation of a function such as how long it took to compile, the number of ForceInlines, and the impact of header files on build time. For more information, see [Tutorial: Troubleshoot function inlining on build time](../build-insights/tutorials/build-insights-function-view.md) and [Tutorial: Troubleshoot header file impact on build time](../build-insights/tutorials/build-insights-included-files-view.md).
- Remote Linux unit test support now lets you run your CTest and GTest tests on your remote Linux machines from Visual Studio's Test Explorer, just like your local tests.

## What's new for C++ in Visual Studio version 17.7

*Released Aug 2023*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's new for C++ Developers in Visual Studio 2022 17.7](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-7/) |
| New C++ features specific to game development | [Unleashing the Power of Visual Studio 2022 for C++ Game Development](https://devblogs.microsoft.com/visualstudio/unleashing-the-power-of-visual-studio-2022-for-c-game-development/) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.7](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-177) |
| New features in the Visual Studio 17.7 IDE |[Visual Studio 2022 version 17.7 Release Notes](/visualstudio/releases/2022/release-notes-v17.7) |
| C++ language conformance improvements in Visual Studio 2022 17.7 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_177) |

A partial list of new features:

* Faster debugging sessions and faster project load times
* Step-by-step visualization of macro expansion
* One-click download for Windows Subsystem for Linux (WSL)
* Improved support for Doxygen comments
* C++ Build Insights for game development
* Added [`/std:clatest`](../build/reference/std-specify-language-standard-version.md) for the C compiler.
* Unreal Engine project improvements such as faster IntelliSense and syntax colorization, the ability to find all Unreal Engine Blueprint references, and more.

## What's new for C++ in Visual Studio version 17.6

*Released May 2023*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.6](https://devblogs.microsoft.com/cppblog/visual-studio-17-6-for-cpp-devs/) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.6](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-176) |
| New features in the Visual Studio 17.6 IDE | [Visual Studio 2022 version 17.6 Release Notes](/visualstudio/releases/2022/release-notes-v17.6) |
| C++ language conformance improvements in Visual Studio 2022 17.6 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_176) |

A partial list of new features includes:
- CMake script debugging
- Built-in support for High Level Shading Language (HLSL)
- Unreal Engine Log viewer
- VCPKG is now added by default
- Initial support for C++20 in C++/CLI projects and some C++23 standard library features for ranges.

## What's new for C++ in Visual Studio version 17.5

*Released Feb 2023*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.5](https://devblogs.microsoft.com/cppblog/visual-studio-17-5-for-cpp-devs/) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.5](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-175) |
| New features in the Visual Studio 17.5 IDE | [Visual Studio 2022 version 17.5 Release Notes](/visualstudio/releases/2022/release-notes-v17.5) |

A partial list of new features includes:

- `std::move`, `std::forward`, `std::move_if_noexcept`, and `std::forward_like` now don't produce function calls in generated code, even in debug mode. This change avoids named casts causing unnecessary overhead in debug builds. `/permissive-` (or an option that implies it, such as `/std:c++20` or `/std:c++latest`) is required.
- Added [`[[msvc::intrinsic]]`](../cpp/attributes.md#msvcintrinsic). You can apply this attribute to nonrecursive functions consisting of a single cast, which take only one parameter.
- Added support for Linux Console in the Integrated Terminal, which allows for terminal I/O.
- Added initial experimental support for C11 atomic primitives (`<stdatomic.h>`). You can enable this experimental feature with the `/experimental:c11atomics` option in `/std:c11` mode or later.
- Added a new set of experimental high-confidence checks to the Lifetime Checker for reduced noise.
- A new preview feature, Remote File Explorer, lets you view the file directory on your remote machines within VS, and upload and download files to it.
- Changed versioning of CMake executables shipped with Visual Studio to match Kitware versions.
- Added support for Hot Reload to the CMake Project template.
- Go To Definition for C++ now uses a more subtle indicator of the operation taking more time, replacing the modal dialog from previous versions.
- Started rollout of an experiment providing more smart results in the C++ autocompletion and member list. This functionality was previously known as Predictive IntelliSense but now uses a new presentation method.
- We now ship a native Arm64 Clang toolset with our LLVM workload, allowing native compilation on Arm64 machines.
- Added localization to the [Image Watch Extension](https://marketplace.visualstudio.com/items?itemName=VisualCPPTeam.ImageWatchForVisualStudio2022) (This extension is available in the Marketplace, and isn't bundled through the Visual Studio Installer).
- Added support for opening a Terminal window into the currently running Developer Container.
- Made several improvements to IntelliSense macro expansion. Notably, we enabled recursive expansion in more contexts, and we added options to the pop up to copy the expansion to the clipboard or expand the macro inline.
- Concurrent monitoring is now supported in the Serial Monitor. Concurrent monitoring allows you to monitor multiple ports at the same time side by side. Press the plus button to open another Serial Monitor and get started.
- You can now view properties from base classes modified in an Unreal Blueprint asset without leaving Visual Studio. Double-click in a Blueprint reference for a C++ class or property to open the UE Asset Inspector in Visual Studio.
- Enabled running DevContainers on a remote Linux machine.
- Enabled selection of multiple targets to build in the CMake Targets view.
- Added support for CMakePresets.json version 5. See the [CMake documentation](https://cmake.org/cmake/help/v3.24/manual/cmake-presets.7.html) for information of new features.
- Enabled Test Explorer to build and test multiple CMake targets in parallel.
- Added "Open container in terminal" option to Dev Containers.
- Implemented standard library features:

  - [P2508R1](https://wg21.link/P2508R1) `basic_format_string`, `format_string`, `wformat_string`
  - [P2322R6](https://wg21.link/P2322R6) `ranges::fold_left`, `ranges::fold_right`, and so on.
  - [P2321R2](https://wg21.link/P2321R2) `views::zip` (doesn't include `zip_transform`, `adjacent`, and `adjacent_transform`)

## What's new for C++ in Visual Studio version 17.4

*Released Nov 2022*

| For more information about | See |
|---|---|
| What's new for C++ developers | [What's New for C++ Developers in Visual Studio 2022 17.4](https://devblogs.microsoft.com/cppblog/whats-new-for-cpp-developers-in-visual-studio-2022-17-4/) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.4](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-174) |
| New features in the Visual Studio 17.4 IDE | [Visual Studio 2022 version 17.4 Release Notes](/visualstudio/releases/2022/release-notes-v17.4) |
| C++ language conformance improvements in Visual Studio 2022 17.4 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_174) |

A partial list of new features in 17.4:

- Improved compiler error messages to provide more correct and useful information, especially for concepts.
- Added experimental MSVC option [`/experimental:log<directory>`](../build/reference/experimental-log.md) to output [structured SARIF diagnostics](../build/reference/sarif-output.md) to the specified directory.
- Added support for C23 attributes to IntelliSense and continued progress in C++20 modules support.
- Improved indexing performance when opening a new solution. Large projects could see a 20-35% improvement from 17.3.
- Improved Named Return Value Optimization (NRVO):
  - NRVO is enabled for cases that involve exception handling or loops.
  - NRVO is enabled even under **`/Od`** if the user passes the **`/Zc:nrvo`** option, or **`/std:c++20`** or later, or **`/permissive-`**.
  - You can now disable NRVO with the **`/Zc:nrvo-`** option.
- Upgraded the version of LLVM shipped with Visual Studio to 15.0.1. For more information on what is available, see the [LLVM](https://releases.llvm.org/15.0.0/docs/ReleaseNotes.html) and [Clang](https://releases.llvm.org/15.0.0/tools/clang/docs/ReleaseNotes.html) release notes.
- Added support to Visual Studio for vcpkg artifacts with CMake projects. For projects that include a vcpkg manifest, the environment is activated automatically on project open. Learn more about this feature in the [vcpkg environment activation in Visual Studio](https://aka.ms/vsvcpkgenv) blog post.
- You can now use Dev Containers for your C++ projects. Learn more about this feature in our [Dev Containers for C++](https://aka.ms/vscppdevcontainer) blog post.
- IntelliSense now respects the order of preincluded headers when one of them is a PCH. Previously, when a PCH was used via **`/Yu`** and force-included via **`/FI`**, IntelliSense would always process it first, before any other headers included via **`/FI`**. This behavior didn't match the build behavior. With this change, **`/FI`** headers are processed in the order they're specified.
- Removed internal prefixes from CTest names in Test Explorer.
- Updated the version of CMake shipped with Visual Studio to version 3.24.1. For details of what is available, see the [CMake release notes](https://cmake.org/cmake/help/v3.24/release/3.24.html).
- Android SDK update:
  - Ant scripts were removed, so users no longer see Ant-based templates in the New Project dialog. For help migrating from Ant templates to Gradle templates, see [Migrating Builds From Apache Ant](https://docs.gradle.org/current/userguide/migrating_from_ant.html)
  - Added support for building with NDK 23 and 24
  - Updated NDK component to the LTS version 23
- Added vectorized implementations of `ranges::min_element()`, `ranges::max_element()`, and `ranges::minmax_element()`
- We continue to track the latest developments in C++ standardization. Support for these C++23 features is available by including [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) in your compiler options:
  - [P2302R4](https://wg21.link/p2302r4) `ranges::contains`, `ranges::contains_subrange`
  - [P2499R0](https://wg21.link/p2499r0) `string_view` Range Constructor Should Be `explicit`
  - [P0849R8](https://wg21.link/p0849r8) `auto(x)`: decay-copy In The Language

    (The compiler part isn't implemented yet. The library part was implemented in C++20 mode when Ranges support was initially implemented.)
  - [P0881R7](https://wg21.link/p0881r7) `<stacktrace>`
  - [P2301R1](https://wg21.link/p2301r1) Add a `pmr` alias for `std::stacktrace`
  - [P1328R1](https://wg21.link/p1328r1) `constexpr type_info::operator==()`
  - [P2440R1](https://wg21.link/p2440r1) `ranges::iota`, `ranges::shift_left`, `ranges::shift_right`
  - [P2441R2](https://wg21.link/p2441r2) `views::join_with`

- Added an option "Navigation after Create Declaration/Definition" to allow you to choose the navigation behavior of the Create Declaration/Definition feature. You can select between peeking (the default) or opening the document, or no navigation.
- Arm64 builds of Visual Studio now bundle Arm64 versions of CMake and Ninja.
- Added support for CMake Presets version 4. For details of what is available, see the [CMake release notes](https://cmake.org/cmake/help/v3.23/release/3.23.html#id6).
- Remote system connections using the [Connection Manager](../linux/connect-to-your-remote-linux-computer.md) now support SSH ProxyJump. ProxyJump is used to access an SSH host via another SSH host (for example, to access a host behind a firewall).

## What's new for C++ in Visual Studio version 17.3

*Released Aug 2022*

| For more information about | See |
|---|---|
| What's new for C++ developers | [C++ improvements in 17.3](https://devblogs.microsoft.com/visualstudio/visual-studio-2022-17-3-is-now-available/#c++-improvements) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.3](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-173) |
| New features in the Visual Studio 17.3 IDE | [Visual Studio 2022 version 17.3 Release Notes](/visualstudio/releases/2022/release-notes-v17.3) |
| C++ language conformance improvements in Visual Studio 2022 17.3 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_173) |

A partial list of new features in 17.3:

- The Arm64EC toolchain is no longer marked as experimental and is ready for production use.
- The Visual Studio Terminal can now be used as an SSH client with your stored SSH connections. With the C++ for Linux Tools installed, open the Terminal tool window. The Terminal dropdown is populated with your stored connections. When you select a connection, a new Terminal window opens inside Visual Studio that shows a pseudo-terminal on your remote system. Control characters, colors, and cursor positional awareness are all supported.
- Visual Studio can now add Unreal Engine class templates for your UE projects. To try this feature, ensure **IDE support for Unreal Engine** is selected in the **Game development with C++** workload in the Visual Studio Installer. When you're working on a UE project, right-click in the project or a folder/filter and select **Add** > **UE Class**.
- **Go to Definition** now remembers the prior signature and navigates accordingly when a better match isn't available (for example, after you manually change the signature of one of the pair).
The responsiveness of **Go To All** is improved. Previously, results appeared after you stopped typing. In the new experience, results show as you type.
- In contexts requiring `enum` type completion (for example, assignments to `enum` variables, case labels, returning `enum` type, and so on), the autocompletion list is now filtered to just the matching enumerators and related constructs.
- Added NuGet PackageReference support for C++/CLI MSBuild projects targeting .NET Core. This change was made to unblock mixed codebases from being able to adopt .NET Core. This support doesn't work for other C++ project types or any C++ project types targeting .NET Framework. There are no plans to extend PackageReference support to other C++ scenarios. The team is working on separate experiences involving vcpkg for non-MSBuild scenarios and to add greater functionality.
- Added a Serial Monitor window for embedded development, available through **Debug** > **Windows** > **Serial Monitor**.
- Improved C++ indexing by ~66% compared to 17.2.
- Updated the version of CMake shipped with Visual Studio to version 3.23. See the [CMake 3.23 release notes](https://cmake.org/cmake/help/v3.23/release/3.23.html) for details of what is available.
- Upgraded the versions of LLVM tools shipped with Visual Studio to v14. For details of what is available, see the [LLVM](https://releases.llvm.org/14.0.0/docs/ReleaseNotes.html) and [Clang](https://releases.llvm.org/14.0.0/tools/clang/docs/ReleaseNotes.html) release notes.
- Updated the side-by-side Dev 16.11 C++ Toolset to version 14.29.30145.00. The latest version of the Dev 16.11 C++ Toolset contains important bug fixes, including fixing all remaining C++20 defect reports. For more information about bug fixes, including C++20 defect reports in Dev 16.11, see [Visual Studio 2019 version 16.11.14 release notes](/visualstudio/releases/2019/release-notes#16.11.14).
- Made various improvements to the in-editor experience of C++ modules. We're continuously working on improving the quality of the experience but encourage you to try them in 17.3. Report remaining issues through [Developer Community](https://aka.ms/vsfeedback/browsecpp).

## What's new for C++ in Visual Studio version 17.2

*Released May 2022*

| For more information about | See |
|---|---|
| What's new for C++ developers | [Visual Studio 2022 17.2 is now available](https://devblogs.microsoft.com/visualstudio/visual-studio-2022-17-2-is-now-available/) |
| Standard Library (STL) merged C++20 defect reports, C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.2](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-172) |
| New features in the Visual Studio 17.2 IDE | [Visual Studio 2022 version 17.2 Release Notes](/visualstudio/releases/2022/release-notes-v17.2) |
| C++ language conformance improvements in Visual Studio 2022 17.2 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_172) |

A partial list of new features in 17.2:

- Added compiler support for C++23 feature [deducing `this`](https://wg21.link/p0847), available under the **`/std:c++latest`** option.
- Added IntelliSense support for C++23 features [deducing `this`](https://wg21.link/p0847) and [`if consteval`](https://wg21.link/p1938).
- Added inline parameter name and type hint support, toggled by pressing **Alt+F1** or double-tapping **Ctrl**. This behavior can be customized under **Tools > Options > Text Editors > C/C++ > IntelliSense**.
- Added experimental support for C++20 modules in CMake projects. This support is currently only available with the Visual Studio (MSBuild) generator.
- In 17.1, we introduced peripheral register and RTOS views for embedded developers. We continue to improve the capabilities of those views with usability improvements in 17.2:
  - The RTOS tool window is now hidden by default. It prevents showing a tool window with error messages that aren't relevant when you're not using an RTOS.
  - When you double-click an RTOS object in the tool window, it adds a watch for the object.
  - When you select the start and end values for the stack pointer in the RTOS tool window, it opens in the memory window.
  - Added thread awareness for device targets to the call stack window.
  - Users can now select a pin icon next to peripherals, registers, or fields to pin them to the top of the Peripheral View.
- Added implementations of the remaining C++20 defect reports (also known as *backports*). All C++20 features are now available under the **`/std:c++20`** option. For more information about the implemented backports, see the [VS 2022 Changelog](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-172) in the Microsoft/STL GitHub repository and the [MSVC's STL Completes `/std:c++20`](https://devblogs.microsoft.com/cppblog/msvcs-stl-completes-stdc20/) blog post.
- We added various C++23 Library features, available under the **`/std:c++latest`** option. For more information about the new features, see the [STL Repo changelog](https://github.com/microsoft/STL/wiki/Changelog).
- Improved performance of the initial C++ indexing by up to 20%, depending on the depth of the include graph.

## What's new for C++ in Visual Studio version 17.1

*Released Feb 2022*

| For more information about | See |
|---|---|
| What's new for C++ developers | [Visual Studio 2022 17.1 is now available!](https://devblogs.microsoft.com/visualstudio/visual-studio-2022-17-1-is-now-available/) |
| Standard Library (STL) merged C++23 features, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.1](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-171) |
| New features in the Visual Studio 17.1 IDE | [Visual Studio 2022 version 17.1 Release Notes](/visualstudio/releases/2022/release-notes-v17.1) |
| C++ language conformance improvements in Visual Studio 2022 17.1 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022](cpp-conformance-improvements.md#improvements_171) |

A partial list of new features in 17.1:

- A new **Configure Preset** template is added to configure and build CMake projects on a remote macOS system with *`CMakePresets.json`*. You can also launch CMake targets on a remote macOS system, and then debug remotely in the Visual Studio debugger backed by GDB or LLDB.
- You can now debug core dumps on a remote macOS system from Visual Studio with LLDB or GDB.
- The versions of [`Clang`](https://releases.llvm.org/13.0.0/tools/clang/docs/ReleaseNotes.html) and [`LLVM`](https://releases.llvm.org/13.0.0/docs/ReleaseNotes.html) shipped with Visual Studio are upgraded to v13.
- Visual Studio's CMake integration is only active when a *`CMakeLists.txt`* is identified at the root of the open workspace. If a *`CMakeLists.txt`* is identified at another level of the workspace, then you're prompted to activate Visual Studio's CMake integration with a notification.
- New views that enable you to inspect and interact with peripheral registers on microcontrollers and real time operating systems (RTOS) objects, available through **Debug** > **Windows** > **Embedded Registers**
- Added a new thread view for RTOS projects, available through **Debug** > **Windows** > **RTOS Objects**. For more information, see [Embedded Software Development in Visual Studio](https://devblogs.microsoft.com/cppblog/visual-studio-embedded-development/).

## What's new for C++ in Visual Studio version 17.0

*Released Nov 2021*

| For more information about | See |
|---|---|
| New features in the Visual Studio 17.0 IDE | [Visual Studio 2022 version 17.0 Release Notes](/visualstudio/releases/2022/release-notes-v17.0) |
| Standard Library (STL) merged C++23 and C++26 features, C++20 defect reports, Language Working Group (LWG) issue resolutions, performance improvements, enhanced behavior, and fixed bugs | [STL Changelog 17.0](https://github.com/microsoft/STL/wiki/VS-2022-Changelog#vs-2022-170) |
| C++ language conformance improvements in Visual Studio 2022 17.0 | [C++ Conformance improvements, behavior changes, and bug fixes in Visual Studio 2022 17.10](cpp-conformance-improvements.md#improvements_170) |

An overview of some of the new features in Visual Studio 2022 version 17.0:

- The Visual Studio IDE, *`devenv.exe`*, is now a native 64-bit application.
- The MSVC toolset now defaults to SHA-256 source hashing in debug records. Previously, the toolset used MD5 for source hashing by default.
- The v143 build tools are now available through the Visual Studio installer and in the [standalone build tools](https://aka.ms/vs/17/pre/vs_BuildTools.exe).

### Hot Reload for native C++

- [Hot Reload for C++](https://devblogs.microsoft.com/cppblog/edit-your-c-code-while-debugging-with-hot-reload-in-visual-studio-2022/) makes it possible to make many types of code edits to your running app and apply them without needing to pause app execution with something like a breakpoint.

In Visual Studio 2022, when you start your app in the debugger, you can use the Hot Reload button to modify your application while it's still running. This experience is powered by native Edit and Continue. For more information about supported edits, see [Edit and Continue (C++)](/visualstudio/debugger/edit-and-continue-visual-cpp?view=vs-2022&preserve-view=true).

- Hot Reload supports CMake and Open Folder projects.

### WSL2 support

- You can now build and debug natively on WSL2 without establishing an SSH connection. Both cross-platform CMake projects and MSBuild-based Linux projects are supported.

### Improved CMake support

- Upgraded the version of CMake shipped with Visual Studio to version 3.21. For more information on what's available in this version, see the [CMake 3.21 release notes](https://cmake.org/cmake/help/latest/release/3.21.html).

- CMake Overview Pages are updated to support *`CMakePresets.json`*.
- You can now configure and build your CMake projects with CMake 3.21 and *`CMakePresets.json`* v3.
- Visual Studio now supports the `buildPresets.targets` option in *`CMakePresets.json`*. This option allows you to build a subset of targets in your CMake project.
- The Project menu in CMake projects is streamlined and exposes options to "Delete Cache and Reconfigure" and "View Cache."
- Implemented the **`/scanDependencies`** compiler option to list C++20 module dependencies for CMake projects, as described in [P1689R5](https://wg21.link/P1689r5). It's a step towards support for building modules-based projects with CMake and we're working on completing this support in later releases.

### Standard Library improvements

Select Standard Library (STL) improvements are highlighted here. For a comprehensive list of new functionality, changes, bug fixes, and performance improvements, see the STL team's [Changelog](https://github.com/microsoft/STL/wiki/Changelog).

- Added debugging visualizers to improve how the following types are displayed: `source_location`, `bind_front()`, `u8string` (and its iterators), `default_sentinel_t`, `unreachable_sentinel_t`, `ranges::empty_view`, `ranges::single_view`, `ranges::iota_view` (and its iterator/sentinel), `ranges::ref_view`, `thread`, `thread::id`, `jthread`, and `filesystem::path`
- Added `[[nodiscard]]` to the `stoi()` family of functions in `<string>` and to various functions in `<locale>` such as the `collate` member functions, `has_facet()`, and the `isalnum()` and `tolower()` families.
- [P0980R1](https://wg21.link/P0980R1) Made `std::string` `constexpr` in VS 2019 16.10. Now supported for Clang.
- [P1004R2](https://wg21.link/P1004R2) Made `std::vector` `constexpr` in VS 2019 16.10. Now supported for Clang.

**Highlighted C++23 features**

- [P1048R1](https://wg21.link/P1048R1) Added `is_scoped_enum`, a new trait for the C++ Standard library, which detects whether a type is a scoped enumeration.
- [P1132R7](https://wg21.link/P1132R7) `out_ptr()`, `inout_ptr()`
- [P1679R3](https://wg21.link/P1679R3) `contains()` For `basic_string` and `basic_string_view`
- [P1682R3](https://wg21.link/P1682R3) `to_underlying()` for enumerations
- [P2162R2](https://wg21.link/P2162R2) Allow inheriting from `std::variant`
- [P2166R1](https://wg21.link/P2166R1) Prohibit constructing `basic_string` and `basic_string_view` from `nullptr`. This change is a source-breaking change. Code that previously had undefined behavior at runtime is now rejected with compiler errors.
- [P2186R2](https://wg21.link/P2186R2) Removed garbage collection support. This change removes `declare_reachable`, `undeclare_reachable`, `declare_no_pointers`, `undeclare_no_pointers`, `get_pointer_safety`. Previously, these functions had no effect.

**Highlighted performance improvements**

- `<format>` now detects when it's writing to a `back_insert_iterator` for a `basic_string` or a `vector`, and makes a faster call to `insert()` at the `end()` of the container.
- We improved the performance of `std::find()` and `std::count()` for `vector<bool>` 19x and 26x (times, not percent).
- We improved the performance of `std::count()` for `vector<bool>`
- `std::byte` now has the same performance as `unsigned char` in `reverse()` and `variant::swap()`

### Clang and LLVM support

- LLVM tools shipped with Visual Studio are upgraded to LLVM 12. For more information, see the [LLVM release notes](https://releases.llvm.org/12.0.0/docs/ReleaseNotes.html).

- Clang-cl support was updated to LLVM 12.
- You can now debug processes running on a remote system from Visual Studio by using LLDB.

### C++ AMP deprecated

- C++ AMP headers are now deprecated. Including `<amp.h>` in a C++ project generates build errors. To silence the errors, define `_SILENCE_AMP_DEPRECATION_WARNINGS`. For more information, see [our AMP Deprecation links](../parallel/amp/cpp-amp-overview.md).

### IntelliSense improvements

- We made improvements in C++ IntelliSense when providing navigation and syntax highlighting for types from imported Modules and Header Units. IntelliSense is an active area of investment for us. Help us improve: Share your feedback on Developer Community by using **Help** > **Send Feedback**.
- We improved C++ IntelliSense performance by optimizing cached header usage and symbol database access, providing improved load times to get into your code.
- The IntelliSense Code Linter for C++ is now on by default, providing instant as-you-type suggestions and fix suggestions for common code defects.
- C++ IntelliSense for CMake projects now works when using a preset with a display name.

### C++ Workload updates

- Updated to NDK r21 LTS in the **C++ Mobile Development** workload.
- The **Game development with C++** workload now installs the latest Unreal Engine with support for Visual Studio 2022.

### Code analysis improvements

- Code analysis now enforces that return values of functions annotated with `_Check_return_` or `_Must_inspect_result_` must be checked.
- Null pointer dereference detection is improved in our code analysis tooling.
- Added support for `gsl::not_null` to code analysis.
- Support for Libfuzzer under the **`/fsanitize=fuzzer`** compiler option.

## Release notes for older versions

Release notes for older C++ versions are also available:

- For information on what's new for C++ in Visual Studio 2019, see [What's new for C++ in Visual Studio 2019](what-s-new-for-cpp-2019.md).
- For information on what's new for C++ in Visual Studio 2017, see [What's new for C++ in Visual Studio 2017](what-s-new-for-cpp-2017.md).
- For information on what's new in earlier versions, see [Visual C++ What's new 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## Known issues

**C++ IntelliSense**

- [`When importing a C++20 module or header unit, IntelliSense may stop working or 'There are too many errors' error is shown`](https://aka.ms/vcmoduleintellisenseinfo).

For more information on other open issues and available workarounds for C++ in Visual Studio 2022, see the C++ Developer Community [issues list](https://developercommunity.visualstudio.com/search?space=62&stateGroup=active&ftype=problem&sort=votes&q=2022).

## Feedback and suggestions

We'd love to hear from you! You can [Report a Problem or Suggest a Feature](/visualstudio/ide/how-to-report-a-problem-with-visual-studio) by using the Send Feedback icon in the upper right-hand corner of either the installer or the Visual Studio IDE, or from **Help** > **Send Feedback**. You can track your issues by using [Visual Studio Developer Community](https://developercommunity.visualstudio.com/), where you add comments or find solutions. You can also get free installation help through our [Live Chat support](https://visualstudio.microsoft.com/vs/support/#talktous).

## Blogs

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site to stay up to date on all new releases. The blogs include deep dive posts on a broad range of features. The [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) are of particular interest.
