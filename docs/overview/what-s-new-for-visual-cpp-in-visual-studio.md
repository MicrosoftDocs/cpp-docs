---
title: "What's new for C++ in Visual Studio"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools in Visual Studio."
ms.date: 08/23/2023
ms.technology: "cpp-ide"
ms.custom: intro-whats-new
---

# What's new for C++ in Visual Studio 2022

Visual Studio 2022 brings many updates and fixes to the Microsoft C++ environment. We've added features and fixed many bugs and issues in the compiler and tools. The Visual Studio IDE also offers significant improvements in performance and productivity, and now runs natively as a 64-bit application.

For more information on what's new in all of Visual Studio, see [What's new in Visual Studio 2022](/visualstudio/ide/whats-new-visual-studio-2022?view=vs-2022&preserve-view=true). For information about what's new in the C++ docs, see [Microsoft C++ docs: What's new](./whats-new-cpp-docs.md)

## What's new for C++ in Visual Studio version 17.7

For a summary of new C++ features in Visual Studio 17.7, see [What’s New for C++ Developers in Visual Studio 2022 17.7](https://devblogs.microsoft.com/cppblog/whats-new-for-c-developers-in-visual-studio-2022-17-7/).

Briefly, some of the new features are:
* Faster debugging sessions and faster project load times
* Step-by-step visualization of macro expansion
* One-click download for Windows Subsystem for Linux (WSL)
* Improved support for Doxygen comments
* C++ Build Insights for game development
* Unreal Engine project improvements such as faster IntelliSense and syntax colorization, the ability to find all Unreal Engine Blueprint references, and more.

For a summary of new C++ features that are specific to game development, see [Unleashing the Power of Visual Studio 2022 for C++ Game Development](https://devblogs.microsoft.com/visualstudio/unleashing-the-power-of-visual-studio-2022-for-c-game-development/#:~:text=Unleashing%20the%20Power%20of%20Visual%20Studio%202022%20for,6%20Optimizing%20Build%20Times%20in%20Visual%20Studio%20)

For a summary of new features in the Visual Studio 17.7 IDE, see [Visual Studio 2022 version 17.7 Release Notes](/visualstudio/releases/2022/release-notes).

## What's new for C++ in Visual Studio version 17.6

For a summary of new C++ features in Visual Studio 17.6, see [What’s New for C++ Developers in Visual Studio 2022 17.6](https://devblogs.microsoft.com/cppblog/visual-studio-17-6-for-cpp-devs/).

Briefly, some of the new features are: CMake script debugging, built-in support for High Level Shading Language (HLSL), an Unreal Engine Log viewer, initial support for C++20 in C++/CLI projects, vcpkg is now added by default, and some C++23 standard library features for ranges. To see a full list of new features added to the standard library, see the [STL changelog](https://github.com/microsoft/STL/wiki/Changelog#vs-2022-176).

For a summary of new features in Visual Studio 17.6 IDE, see [Visual Studio 2022 version 17.6 Release Notes](/visualstudio/releases/2022/release-notes-v17.6).

## What's new for C++ in Visual Studio version 17.5

For a summary of new C++ features in Visual Studio in version 17.5, see [What’s New for C++ Developers in Visual Studio 2022 17.5](https://devblogs.microsoft.com/cppblog/visual-studio-17-5-for-cpp-devs/).
For a summary of new features and bug fixes in the Visual Studio IDE version 17.5, see [Visual Studio 2022 version 17.5 Release Notes](/visualstudio/releases/2022/release-notes-v17.5).

- `std::move`, `std::forward`, `std::move_if_noexcept`, and `std::forward_like` now don't produce function calls in generated code, even in debug mode. This change avoids named casts causing unnecessary overhead in debug builds. `/permissive-` (or an option that implies it, such as `/std:c++20` or `std:c++latest`) is required.

- Added [`[[msvc::intrinsic]]`](../cpp/attributes.md#msvcintrinsic) to support the above item. You can apply this attribute to nonrecursive functions consisting of a single cast, which take only one parameter.

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

For a summary of new features and bug fixes in Visual Studio in version 17.4, see [Visual Studio 2022 version 17.4 Release Notes](/visualstudio/releases/2022/release-notes-v17.4) and [What’s New for C++ Developers in Visual Studio 2022 17.4](https://devblogs.microsoft.com/cppblog/whats-new-for-cpp-developers-in-visual-studio-2022-17-4/).

- Improved compiler error messages to provide more correct and useful information, especially for concepts.

- Added experimental MSVC option **`/experimental:log<directory>`** to output SARIF build logs to the specified directory.

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
  - Ant scripts have been removed, so users no longer see Ant-based templates in the New Project dialog. For help migrating from Ant templates to Gradle templates, see [Migrating Builds From Apache Ant](https://docs.gradle.org/current/userguide/migrating_from_ant.html)
  - Added support for building with NDK 23 and 24
  - Updated NDK component to the LTS version 23

- Added vectorized implementations of `ranges::min_element()`, `ranges::max_element()`, and `ranges::minmax_element()`

- We continue to track the latest developments in C++ standardization. Support for these C++23 features is available by including [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) in your compiler options:
  - [P2302R4](https://wg21.link/p2302r4) `ranges::contains`, `ranges::contains_subrange`
  - [P2499R0](https://wg21.link/p2499r0) `string_view` Range Constructor Should Be `explicit`
  - [P0849R8](https://wg21.link/p0849r8) `auto(x)`: decay-copy In The Language

    (The compiler part isn't implemented yet. The library part was implemented in C++20 mode when Ranges support was initially implemented.)
  - [P0881R7](https://wg21.link/p0881r7) `<stacktrace>`
  - [P2301R1](https://wg21.link/p2301r1) Add A `pmr` Alias For `std::stacktrace`
  - [P1328R1](https://wg21.link/p1328r1) `constexpr type_info::operator==()`
  - [P2440R1](https://wg21.link/p2440r1) `ranges::iota`, `ranges::shift_left`, `ranges::shift_right`
  - [P2441R2](https://wg21.link/p2441r2) `views::join_with`

- Added an option "Navigation after Create Declaration/Definition" to allow you to choose the navigation behavior of the Create Declaration/Definition feature. You can select between peeking (the default) or opening the document, or no navigation.

- Arm64 builds of Visual Studio now bundle Arm64 versions of CMake and Ninja.

- Added support for CMake Presets version 4. For details of what is available, see the [CMake release notes](https://cmake.org/cmake/help/v3.23/release/3.23.html#id6).

- Remote system connections using the [Connection Manager](../linux/connect-to-your-remote-linux-computer.md) now support SSH ProxyJump. ProxyJump is used to access an SSH host via another SSH host (for example, to access a host behind a firewall).

## What's new for C++ in Visual Studio version 17.3

For a summary of new features and bug fixes in Visual Studio in version 17.3, see [Visual Studio 2022 version 17.3 Release Notes](/visualstudio/releases/2022/release-notes-v17.3) and [C++ improvements](https://devblogs.microsoft.com/visualstudio/visual-studio-2022-17-3-is-now-available/#c-improvements).

- The Arm64EC toolchain is no longer marked as experimental and is ready for production use.

- The Visual Studio Terminal can now be used as an SSH client with your stored SSH connections. With the C++ for Linux Tools installed, open the Terminal tool window. The Terminal dropdown is populated with your stored connections. When you select a connection, a new Terminal window opens inside Visual Studio that shows a pseudo-terminal on your remote system. Control characters, colors, and cursor positional awareness are all supported.

- Visual Studio can now add Unreal Engine class templates for your UE projects. To try this feature, ensure **IDE support for Unreal Engine** is selected in the **Game development with C++** workload in the Visual Studio Installer. When you're working on a UE project, right-click in the project or a folder/filter and select **Add** > **UE Class**.

- **Go to Definition** now remembers the prior signature and navigates accordingly when a better match isn't available (for example, after you manually change the signature of one of the pair).
We've improved responsiveness of **Go To All**. Previously, results appeared after you stopped typing. In the new experience, results show as you type.

- In contexts requiring `enum` type completion (for example, assignments to `enum` variables, case labels, returning `enum` type, and so on), the autocompletion list is now filtered to just the matching enumerators and related constructs.

- Added NuGet PackageReference support for C++/CLI MSBuild projects targeting .NET Core. This change was made to unblock mixed codebases from being able to adopt .NET Core. This support doesn't work for other C++ project types or any C++ project types targeting .NET Framework. There are no plans to extend PackageReference support to other C++ scenarios. The team is working on separate experiences involving vcpkg for non-MSBuild scenarios and to add greater functionality.

- Added a Serial Monitor window for embedded development, available through **Debug** > **Windows** > **Serial Monitor**.

- Improved C++ indexing by ~66% compared to 17.2.

- Updated the version of CMake shipped with Visual Studio to version 3.23. See the [CMake 3.23 release notes](https://cmake.org/cmake/help/v3.23/release/3.23.html) for details of what is available.

- Upgraded the versions of LLVM tools shipped with Visual Studio to v14. For details of what is available, see the [LLVM](https://releases.llvm.org/14.0.0/docs/ReleaseNotes.html) and [Clang](https://releases.llvm.org/14.0.0/tools/clang/docs/ReleaseNotes.html) release notes.

- Updated the side-by-side Dev 16.11 C++ Toolset to version 14.29.30145.00. The latest version of the Dev 16.11 C++ Toolset contains important bug fixes, including fixing all remaining C++20 defect reports. For more information about bug fixes, including C++20 defect reports in Dev 16.11, see [Visual Studio 2019 version 16.11.14 release notes](/visualstudio/releases/2019/release-notes#16.11.14).

- We have made various improvements to the in-editor experience of C++ modules. We're continuously working on improving the quality of the experience but encourage you to try them in 17.3. Report remaining issues through [Developer Community](https://aka.ms/vsfeedback/browsecpp).

## What's new for C++ in Visual Studio version 17.2

For a summary of new features and bug fixes in Visual Studio in version 17.2, see [Visual Studio 2022 version 17.1 Release Notes](/visualstudio/releases/2022/release-notes-v17.2).

- Added compiler support for C++23 feature [deducing `this`](https://wg21.link/p0847), available under the **`/std:c++latest`** option.

- Added IntelliSense support for C++23 features [deducing `this`](https://wg21.link/p0847) and [`if consteval`](http://wg21.link/p1938).

- Added inline parameter name and type hint support, toggled by pressing **Alt+F1** or double-tapping **Ctrl**. This behavior can be customized under **Tools > Options > Text Editors > C/C++ > IntelliSense**.

- Added experimental support for C++20 modules in CMake projects. This support is currently only available with the Visual Studio (MSBuild) generator.

- In 17.1, we introduced peripheral register and RTOS views for embedded developers. We continue to improve the capabilities of those views with usability improvements in 17.2:
  - The RTOS tool window is now hidden by default. It prevents showing a tool window with error messages that aren't relevant when you're not using an RTOS.
  - When you choose (double-click) an RTOS object in the tool window, it adds a watch for the object.
  - When you select the start and end values for the stack pointer in the RTOS tool window, it's opened in the memory window.
  - We've added thread awareness for device targets to the call stack window.
  - Users can now select a pin icon next to peripherals, registers, or fields to pin them the top of the Peripheral View.

- We've added implementations of the remaining C++20 defect reports (also known as *backports*). All C++20 features are now available under the **`/std:c++20`** option. For more information about the implemented backports, see the [C++20 Defect Reports project](https://github.com/microsoft/STL/projects/9) in the Microsoft/STL GitHub repository and the [MSVC's STL Completes `/std:c++20`](https://devblogs.microsoft.com/cppblog/msvcs-stl-completes-stdc20/) blog post.

- We added various C++23 Library features, available under the **`/std:c++latest`** option. For more information about the new features, see the [STL Repo changelog](https://github.com/microsoft/STL/wiki/Changelog).

- Improved performance of the initial C++ indexing by up to 20%, depending on the depth of the include graph.

## What's new for C++ in Visual Studio version 17.1

For a summary of new features and bug fixes in Visual Studio in version 17.1, see [Visual Studio 2022 version 17.1 Release Notes](/visualstudio/releases/2022/release-notes-v17.1).

- A new **Configure Preset** template has been added to configure and build CMake projects on a remote macOS system with *`CMakePresets.json`*. You can also launch CMake targets on a remote macOS system, and then debug remotely in the Visual Studio debugger backed by GDB or LLDB.

- You can now debug core dumps on a remote macOS system from Visual Studio with LLDB or GDB.

- The versions of [`Clang`](https://releases.llvm.org/13.0.0/tools/clang/docs/ReleaseNotes.html) and [`LLVM`](https://releases.llvm.org/13.0.0/docs/ReleaseNotes.html) shipped with Visual Studio have been upgraded to v13.

- Visual Studio's CMake integration is only active when a *`CMakeLists.txt`* is identified at the root of the open workspace. If a *`CMakeLists.txt`* is identified at another level of the workspace, then you're prompted to activate Visual Studio's CMake integration with a notification.

- New views that enable you to inspect and interact with peripheral registers on microcontrollers and real time operating systems (RTOS) objects, available through **Debug** > **Windows** > **Embedded Registers**
- Added a new thread view for RTOS projects, available through **Debug** > **Windows** > **RTOS Objects**. For more information, see [Embedded Software Development in Visual Studio](https://devblogs.microsoft.com/cppblog/visual-studio-embedded-development/).

## What's new for C++ in Visual Studio version 17.0

For a summary of new features and bug fixes in Visual Studio, see [Visual Studio 2022 version 17.0 Release Notes](/visualstudio/releases/2022/release-notes-v17.0).

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

- Implemented the **`/scanDependencies`** compiler option to list C++20 module dependencies for CMake projects, as described in [P1689R5](https://wg21.link/P1689r5). It's a step towards support for building modules-based projects with CMake and we're working on completing this support in later releases.

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

Take advantage of the insights and recommendations available in the [Microsoft Developer Blogs](https://devblogs.microsoft.com/) site to stay up to date on all new releases. The blogs include deep dive posts on a broad range of features. The [C++ Team Blog](https://devblogs.microsoft.com/cppblog) and the [Visual Studio Blog](https://devblogs.microsoft.com/visualstudio) are of particular interest.
