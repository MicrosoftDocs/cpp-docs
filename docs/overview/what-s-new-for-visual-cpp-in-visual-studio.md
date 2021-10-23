---
title: "What's new for C++ in Visual Studio"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools in Visual Studio."
ms.date: 10/22/2021
ms.technology: "cpp-ide"
ms.custom: intro-whats-new
---
# What's new for C++ in Visual Studio 2022 Preview

Visual Studio 2022 brings many updates and fixes to the Microsoft C++ environment. We've added features and fixed many bugs and issues in the compiler and tools. The Visual Studio IDE also offers significant improvements in performance and productivity, and now runs natively as a 64-bit application. For more information on what's new in all of Visual Studio, visit [What's new in Visual Studio 2022](/visualstudio/ide/whats-new-visual-studio-2022?view=vs-2022&preserve-view=true). For information about what's new in the C++ docs, see [Microsoft C++ docs: What's new](whats-new-cpp-docs.md).

## What's new for C++ in Visual Studio version 17.0

For a summary of new features and bug fixes in Visual Studio, see [What's New in Visual Studio 2022 version 17.0](/visualstudio/releases/2022/release-notes).

- The Visual Studio IDE, *`devenv.exe`*, is now a native 64-bit application.

- The MSVC toolset now defaults to SHA-256 source hashing in debug records. Previously, the toolset used MD5 for source hashing by default.

- The v143 build tools are now available through the Visual Studio installer and in the [standalone build tools](https://aka.ms/vs/17/pre/vs_BuildTools.exe).

### Hot Reload for native C++

- [Hot Reload for C++](https://devblogs.microsoft.com/cppblog/edit-your-c-code-while-debugging-with-hot-reload-in-visual-studio-2022/) makes it possible to make many types of code edits to your running app and apply them without needing to pause app execution with something like a breakpoint. We've improved the Hot Reload experience in the debugger and the underlying Edit and Continue mechanism. Hot Reload now supports CMake and OpenFolder projects.

### WSL2 support

- You can now build and debug natively on WSL2 without establishing an SSH connection. Both cross-platform CMake projects and MSBuild-based Linux projects are supported.

### Improved CMake support

- We've upgraded the version of CMake shipped with Visual Studio to version 3.21. For more information on what's available in this version, see the [CMake 3.21 release notes](https://cmake.org/cmake/help/latest/release/3.21.html).

- CMake Overview Pages have been updated to support *`CMakePresets.json`*.

- You can now configure and build your CMake projects with CMake 3.21 and *`CMakePresets.json`* v3.

- Visual Studio now supports the `buildPresets.targets` option in *`CMakePresets.json`*. This option allows you to build a subset of targets in your CMake project.

- The Project menu in CMake projects has been streamlined and exposes options to "Delete Cache and Reconfigure" and "View Cache".

- Implemented the **`/scanDependencies`** compiler option to list C++20 module dependencies for CMake projects, as described in [P1689r3](https://wg21.link/P1689r3). It's a step towards support for building modules-based projects with CMake and we're working on completing this support in later releases.

### Clang and LLVM support

- LLVM tools shipped with Visual Studio have been upgraded to LLVM 12. For more information, see the [LLVM release notes](https://releases.llvm.org/12.0.0/docs/ReleaseNotes.html).

- Clang-cl support was updated to LLVM 12.

- You can now debug processes running on a remote system from Visual Studio by using LLDB.

### C++ AMP deprecated

- C++ AMP headers are now deprecated. Including *`<amp.h>`* in a C++ project generates build errors. To silence the errors, define `_SILENCE_AMP_DEPRECATION_WARNINGS`. For more information, see [our AMP Deprecation links](https://aka.ms/amp_deprecate).

### IntelliSense improvements

- We made improvements in C++ IntelliSense when providing navigation and syntax highlighting for types from imported Modules and Header Units. IntelliSense is an active area of investment for us. Help us improve: Share your feedback on Developer Community by using **Help** > **Send Feedback**.

- Improved C++ IntelliSense performance by optimizing cached header usage and symbol database access, providing improved load times to get into your code.

- The IntelliSense Code Linter for C++ is now on by default, providing instant as-you-type suggestions and fix suggestions for common code defects.

- C++ IntelliSense for CMake projects now works when using a preset with a display name.

- Updated to NDK r21 LTS in C++ Mobile Development workload.

- The **Game development with C++** workload now installs the latest Unreal Engine with support with for Visual Studio 2022.

### Code analysis improvements

- Code analysis now enforces that return values of functions annotated with `_Check_return_` or `_Must_inspect_result_` must be checked.

- We've improved null pointer dereference detection in our code analysis tooling.

- Added support for `gsl::not_null` to code analysis.

- Support for Libfuzzer under the **`/fsanitize=fuzzer`** compiler option.

## Release notes for older versions

Release notes for older C++ versions are also available. For information on what's new for C++ in Visual Studio 2019, see [What's new for C++ in Visual Studio 2019](what-s-new-for-cpp-2019.md). For information on what's new for C++ in Visual Studio 2017, see [What's new for C++ in Visual Studio 2017](what-s-new-for-cpp-2017.md). For information on what's new in earlier versions, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md).

## Known issues

For more information on open issues and available workarounds for C++ in Visual Studio 2022, see the C++ Developer Community [issues list](https://developercommunity.visualstudio.com/search?space=62&stateGroup=active&ftype=problem&sort=votes&q=2022).

## Feedback and suggestions

We'd love to hear from you! You can [Report a Problem or Suggest a Feature](/visualstudio/ide/visualstudio/ide/how-to-report-a-problem-with-visual-studio) by using the Send Feedback icon in the upper right-hand corner of either the installer or the Visual Studio IDE, or from **Help** > **Send Feedback**. You can track your issues by using [Visual Studio Developer Community](https://developercommunity.visualstudio.com/), where you add comments or find solutions. You can also get free installation help through our [Live Chat support](https://visualstudio.microsoft.com/vs/support/#talktous).

## Blogs

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site. They'll keep you up to date on all new releases. The blogs include deep dive posts on a broad range of features. You'll find the [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) of particular interest.
