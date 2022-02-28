---
title: "What's new for C++ in Visual Studio"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools in Visual Studio."
ms.date: 02/15/2022
ms.technology: "cpp-ide"
ms.custom: intro-whats-new
---
# What's new for C++ in Visual Studio 2022

Visual Studio 2022 brings many updates and fixes to the Microsoft C++ environment. We've added features and fixed many bugs and issues in the compiler and tools. The Visual Studio IDE also offers significant improvements in performance and productivity, and now runs natively as a 64-bit application. For more information on what's new in all of Visual Studio, visit [What's new in Visual Studio 2022](/visualstudio/ide/whats-new-visual-studio-2022?view=vs-2022&preserve-view=true). For information about what's new in the C++ docs, see [Microsoft C++ docs: What's new](whats-new-cpp-docs.md).

## What's new for C++ in Visual Studio version 17.1

For a summary of new features and bug fixes in Visual Studio, see [What's New in Visual Studio 2022 version 17.1](/visualstudio/releases/2022/release-notes).

- A new **Configure Preset** template has been added to configure and build CMake projects on a remote macOS system with *`CMakePresets.json`*. You can also launch CMake targets on a remote macOS system, and then debug remotely in the Visual Studio debugger backed by GDB or LLDB.

- You can now debug core dumps on a remote macOS system from Visual Studio with LLDB or GDB.

- The versions of [`Clang`](https://releases.llvm.org/13.0.0/tools/clang/docs/ReleaseNotes.html) and [`LLVM`](https://releases.llvm.org/13.0.0/docs/ReleaseNotes.html) shipped with Visual Studio have been upgraded to v13.

- Visual Studio's CMake integration is only active when a *`CMakeLists.txt`* is identified at the root of the open workspace. If a *`CMakeLists.txt`* is identified at another level of the workspace, then you'll be prompted to activate Visual Studio's CMake integration with a notification.

- Added a new register visualization window for embedded targets, available through **Debug** > **Windows** > **Embedded Registers**.

- Added a new thread view for RTOS projects, available through **Debug** > **Windows** > **RTOS Objects**.

## What's new for C++ in Visual Studio version 17.0

For a summary of new features and bug fixes in Visual Studio, see [What's New in Visual Studio 2022 version 17.0](/visualstudio/releases/2022/release-notes).

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

- We've upgraded the version of CMake shipped with Visual Studio to version 3.21. For more information on what's available in this version, see the [CMake 3.21 release notes](https://cmake.org/cmake/help/latest/release/3.21.html).

- CMake Overview Pages have been updated to support *`CMakePresets.json`*.

- You can now configure and build your CMake projects with CMake 3.21 and *`CMakePresets.json`* v3.

- Visual Studio now supports the `buildPresets.targets` option in *`CMakePresets.json`*. This option allows you to build a subset of targets in your CMake project.

- The Project menu in CMake projects has been streamlined and exposes options to "Delete Cache and Reconfigure" and "View Cache".

- Implemented the **`/scanDependencies`** compiler option to list C++20 module dependencies for CMake projects, as described in [P1689R4](https://wg21.link/P1689r4). It's a step towards support for building modules-based projects with CMake and we're working on completing this support in later releases.

### Standard Library improvements

Select Standard Library (STL) improvements are highlighted here. For a comprehensive list of new functionality, changes, bug fixes, and performance improvements, see the STL team's [Changelog](https://github.com/microsoft/STL/wiki/Changelog#vs-2022).

- Added debugging visualizers to improve how the following types are displayed: `source_location`, `bind_front()`, `u8string` (and its iterators), `default_sentinel_t`, `unreachable_sentinel_t`, `ranges::empty_view`, `ranges::single_view`, `ranges::iota_view` (and its iterator/sentinel), `ranges::ref_view`, `thread`, `thread::id`, `jthread`, and `filesystem::path`
- Added `[[nodiscard]]` to the `stoi()` family of functions in `<string>` and to various functions in `<locale>` such as the `collate` member functions, `has_facet()`, and the `isalnum()` and `tolower()` families.
- [P0980R1](https://wg21.link/P0980R1) Made `std::string` `constexpr` in VS 2019 16.10. Now it's also supported for Clang.
- [P1004R2](https://wg21.link/P1004R2) Made `std::vector` `constexpr`in VS 2019 16.10. Now it's also supported for Clang.

**Highlighted C++23 features**

- [P1048R1](https://wg21.link/P1048R1) Added `is_scoped_enum`, a new trait for the C++ Standard library, which detects whether a type is a scoped enumeration.
- [P1132R7](https://wg21.link/P1132R7) `out_ptr()`, `inout_ptr()`
- [P1679R3](https://wg21.link/P1679R3) `contains()` For `basic_string` and `basic_string_view`
- [P1682R3](https://wg21.link/P1682R3) `to_underlying()` for enumerations
- [P2162R2](https://wg21.link/P2162R2) Allow inheriting from `std::variant`
- [P2166R1](https://wg21.link/P2166R1) Prohibit constructing`basic_string` and `basic_string_view` from `nullptr`. This change is a source-breaking change. Code that previously had undefined behavior at runtime is now rejected with compiler errors.
- [P2186R2](https://wg21.link/P2186R2) Removed garbage collection support. This change removes `declare_reachable`, `undeclare_reachable`, `declare_no_pointers`, `undeclare_no_pointers`, `get_pointer_safety`. Previously, these functions had no effect.

**Highlighted performance improvements**

- `<format>` now detects when it's writing to a `back_insert_iterator` for a `basic_string` or a `vector`, and makes a faster call to `insert()` at the `end()` of the container.
- We improved the performance of `std::find()` and `std::count()` for `vector<bool>` 19x and 26x (times, not percent).
- We improved the performance of `std::count()` for `vector<bool>`
- `std::byte` now has the same performance as `unsigned char` in `reverse()` and `variant::swap()`

### Clang and LLVM support

- LLVM tools shipped with Visual Studio have been upgraded to LLVM 12. For more information, see the [LLVM release notes](https://releases.llvm.org/12.0.0/docs/ReleaseNotes.html).

- Clang-cl support was updated to LLVM 12.

- You can now debug processes running on a remote system from Visual Studio by using LLDB.

### C++ AMP deprecated

- C++ AMP headers are now deprecated. Including `<amp.h>` in a C++ project generates build errors. To silence the errors, define `_SILENCE_AMP_DEPRECATION_WARNINGS`. For more information, see [our AMP Deprecation links](/cpp/parallel/amp/cpp-amp-overview).

### IntelliSense improvements

- We made improvements in C++ IntelliSense when providing navigation and syntax highlighting for types from imported Modules and Header Units. IntelliSense is an active area of investment for us. Help us improve: Share your feedback on Developer Community by using **Help** > **Send Feedback**.

- We improved C++ IntelliSense performance by optimizing cached header usage and symbol database access, providing improved load times to get into your code.

- The IntelliSense Code Linter for C++ is now on by default, providing instant as-you-type suggestions and fix suggestions for common code defects.

- C++ IntelliSense for CMake projects now works when using a preset with a display name.

### C++ Workload updates

- Updated to NDK r21 LTS in the **C++ Mobile Development** workload.

- The **Game development with C++** workload now installs the latest Unreal Engine with support with for Visual Studio 2022.

### Code analysis improvements

- Code analysis now enforces that return values of functions annotated with `_Check_return_` or `_Must_inspect_result_` must be checked.

- We've improved null pointer dereference detection in our code analysis tooling.

- Added support for `gsl::not_null` to code analysis.

- Support for Libfuzzer under the **`/fsanitize=fuzzer`** compiler option.

## Release notes for older versions

Release notes for older C++ versions are also available. For information on what's new for C++ in Visual Studio 2019, see [What's new for C++ in Visual Studio 2019.](what-s-new-for-cpp-2019.md) For information on what's new for C++ in Visual Studio 2017, see [What's new for C++ in Visual Studio 2017.](what-s-new-for-cpp-2017.md) For information on what's new in earlier versions, see [Visual C++ What's New 2003 through 2015.](../porting/visual-cpp-what-s-new-2003-through-2015.md)

## Known issues

**C++ IntelliSense**

- [`When importing a C++20 module or header unit, IntelliSense may stop working or 'There are too many errors' error is shown`](https://aka.ms/vcmoduleintellisenseinfo).

For more information on other open issues and available workarounds for C++ in Visual Studio 2022, see the C++ Developer Community [issues list](https://developercommunity.visualstudio.com/search?space=62&stateGroup=active&ftype=problem&sort=votes&q=2022).

## Feedback and suggestions

We'd love to hear from you! You can [Report a Problem or Suggest a Feature](/visualstudio/ide/how-to-report-a-problem-with-visual-studio) by using the Send Feedback icon in the upper right-hand corner of either the installer or the Visual Studio IDE, or from **Help** > **Send Feedback**. You can track your issues by using [Visual Studio Developer Community](https://developercommunity.visualstudio.com/), where you add comments or find solutions. You can also get free installation help through our [Live Chat support](https://visualstudio.microsoft.com/vs/support/#talktous).

## Blogs

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site. They'll keep you up to date on all new releases. The blogs include deep dive posts on a broad range of features. You'll find the [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) of particular interest.
