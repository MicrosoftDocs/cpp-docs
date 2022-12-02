---
title: "What's new for C++ in Visual Studio 2019"
description: "The new features and fixes in the Microsoft C/C++ compiler and tools in Visual Studio 2019."
ms.date: 10/22/2021
ms.technology: "cpp-ide"
ms.custom: intro-whats-new
---
# What's new for C++ in Visual Studio 2019

Visual Studio 2019 brings many updates and fixes to the Microsoft C++ environment. We've fixed many bugs and issues in the compiler and tools. Many of these issues were submitted by customers through the [Report a Problem](/visualstudio/ide/how-to-report-a-problem-with-visual-studio?view=vs-2019&preserve-view=true) and [Provide a Suggestion](https://aka.ms/feedback/suggest?space=62) options under **Send Feedback**. Thank you for reporting bugs!

For more information on what's new in all of Visual Studio, visit [What's new in Visual Studio 2019](/visualstudio/ide/whats-new-visual-studio-2019). For information on what's new for C++ in Visual Studio 2017, see [What's new for C++ in Visual Studio 2017](what-s-new-for-cpp-2017.md). For information on what's new for C++ in Visual Studio 2015 and earlier versions, see [Visual C++ What's New 2003 through 2015](../porting/visual-cpp-what-s-new-2003-through-2015.md). For more information, see [Microsoft C++ docs: What's new](whats-new-cpp-docs.md).

## What's new for C++ in Visual Studio version 16.11

For a summary of new features and bug fixes in Visual Studio version 16.11, see [What's New in Visual Studio 2019 version 16.11](/visualstudio/releases/2019/release-notes-v16.11).

- The compiler now supports the [`/std:c++20`](../build/reference/std-specify-language-standard-version.md) compiler mode. Previously, C++20 features were available only in [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) mode in Visual Studio 2019. Features that originally required **`/std:c++latest`** mode now work in **`/std:c++20`** mode or later in the latest versions of Visual Studio.

- LLVM tools shipped with Visual Studio have been upgraded to LLVM 12. For details, see the [LLVM release notes](https://releases.llvm.org/12.0.0/docs/ReleaseNotes.html).

- Clang-cl support was updated to LLVM 12.

## What's new for C++ in Visual Studio version 16.10

For a summary of new features and bug fixes in Visual Studio version 16.10, see [What's New in Visual Studio 2019 version 16.10](/visualstudio/releases/2019/release-notes-v16.10).

- All C++20 features are now available under [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md). While MSVC's implementation of the C++20 standards (as currently published by ISO) is feature complete, some key C++20 library features are expected to be amended by upcoming Defect Reports (ISO C++20 bug fixes) that may change them in an ABI-incompatible way. Please see [Microsoft/STL Issue #1814](https://github.com/microsoft/STL/issues/1814) for more details.

  - C++20 immediate functions & constinit support added in 16.10
  - The final pieces of `<chrono>`: new clocks, leap seconds, time zones, and parsing
  - Implementation of `<format>` for text formatting

- [`/openmp:llvm`](../build/reference/openmp-enable-openmp-2-0-support.md) is now available on x86 and ARM64, in addition to x64

- Include directories can now be designated as external with customized compilation warning levels and code analysis settings.

- Added the [`/await:strict`](../build/reference/await-enable-coroutine-support.md) option to enable C++20-style coroutines in earlier language modes.

- Debugger visualization of `std::coroutine_handle<T>` now displays the original coroutine function name and signature and the current suspend point.

- Added support for [CMakePresets](https://cmake.org/cmake/help/latest/manual/cmake-presets.7.html).

- You're now required to accept or deny the host key fingerprint presented by the server when adding a new remote connection in Visual Studio.

- Added an [`/external`](../build/reference/external-external-headers-diagnostics.md) switch to MSVC for specifying headers which should be treated as external for warning purposes.

## What's new for C++ in Visual Studio version 16.9

For a summary of new features and bug fixes in Visual Studio version 16.9, see [What's New in Visual Studio 2019 version 16.9](/visualstudio/releases/2019/release-notes-v16.9).

- [Address Sanitizer](../sanitizers/asan.md):

  - Our address sanitizer support on Windows is out of experimental mode and has reached general availability.

  - Expanded `RtlAllocateHeap` support, fixed a compatibility issue with `RtlCreateHeap` and `RtlAllocateHeap` interceptors when creating executable memory pools.

  - Added support for the legacy `GlobalAlloc` and `LocalAlloc` family of memory functions. You can enable these interceptors by setting the environment flag `ASAN_OPTIONS=windows_hook_legacy_allocators=true`.

  - Updated error messages for shadow memory interleaving and interception failure to make problems and resolutions explicit.

  - The IDE integration can now handle the complete collection of exceptions which ASan can report.

  - The compiler and linker will suggest emitting debug information if they detect you're building with ASan but not emitting debug information.

- You can now target the LLVM version of the OpenMP runtime with the new CL switch **`/openmp:llvm`**. This adds support for the `lastprivate` clause on `#pragma omp` sections and unsigned index variables in parallel `for` loops. The **`/openmp:llvm`** switch is currently only available for the amd64 target and is still experimental.

- Visual Studio CMake projects now have first-class support for remote Windows development. This includes configuring a CMake project to target Windows ARM64, deploying the project to a remote Windows machine, and debugging the project on a remote Windows machine from Visual Studio.

- The version of Ninja shipped with Visual Studio on Windows has been updated to version 1.10. For more information on what's included, see the [Ninja 1.10 release notes](https://groups.google.com/g/ninja-build/c/piOltAhywFA/m/zPfkrTtRCwAJ?pli=1).

- The version of CMake shipped with Visual Studio has been updated to version 3.19. For more information on what's included, see the [CMake 3.19 release notes](https://cmake.org/cmake/help/latest/release/3.19.html).

- [Marked many lock/guard types in the STL as `nodiscard`](https://github.com/microsoft/STL/pull/1495).

- IntelliSense:

  - Improved the stability and functionality of providing imported modules and header units completion in IntelliSense.

  - Added Go-to-definition on module imports, indexing support for `export {...}`, and more accurate module reference for modules with the same name.

  - Improved the language conformance of C++ IntelliSense by adding support for [Copy-initialization of temporary in reference direct-initialization](https://wg21.link/P1358R0), `__builtin_memcpy` and `__builtin_memmove`, [Fixing inconsistencies between `constexpr` and `consteval` functions](https://wg21.link/P1937R2), [Lifetime-extended temporaries in constant expressions](https://wg21.link/P1968R0), and [Similar types and reference binding](https://wg21.link/P1358R0).

  - Added completion for make_unique, make_shared, emplace and emplace_back which provides completion based on the type parameter specified.

- MSVC now determines the correct address sanitizer runtimes required for your binaries. Your Visual Studio project will automatically get the new changes. When using address sanitizer on the command line, you now only need to pass [`/fsanitize=address`](../build/reference/fsanitize.md) to the compiler.

- Visual Studio's Connection Manager now supports private keys using the ECDSA public key algorithm.

- Updated the versions of LLVM and Clang shipped in our installer to v11. Read the release notes for [LLVM](https://releases.llvm.org/11.0.0/docs/ReleaseNotes.html) and [Clang](https://releases.llvm.org/11.0.0/tools/clang/docs/ReleaseNotes.html) for more information.

- Visual Studio will now use CMake variables from toolchain files to configure IntelliSense. This will provide a better experience for embedded and Android development.

- Implementation of the [More Constexpr Containers proposal](https://wg21.link/P0784R7), which allows destructors and new expressions to be **`constexpr`**. This paves the way for utilities like **`constexpr`** `std::vector` and `std::string`.

- Extended support for C++20 modules IntelliSense, including Go To Definition, Go To Module, and member completion.

- [Abbreviated function templates](https://en.cppreference.com/w/cpp/language/function_template#Abbreviated_function_template) are now supported in the MSVC compiler.

## What's new for C++ in Visual Studio version 16.8

For a summary of new features and bug fixes in Visual Studio version 16.8, see [What's New in Visual Studio 2019 version 16.8](/visualstudio/releases/2019/release-notes-v16.8).

- C++20 Coroutines are now supported under [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) (or **`/std:c++20`** starting in Visual Studio 2019 version 16.11) and the `<coroutine>` header.

- IntelliSense now provides support for C++20 `<concepts>` and `<ranges>` headers, and rename and browsing for concept definitions.

- Our STL now has support for the majority of C++20 Ranges.

- [Conditionally trivial special member functions](https://wg21.link/P0848R3) are now supported in MSVC.

- C11 and C17 are now supported under the [`/std:c11` and `/std:c17`](../build/reference/std-specify-language-standard-version.md) switches.

- Additional STL improvements include full support for [`std::atomic_ref`](https://wg21.link/p0019r8), [`std::midpoint` and `std::lerp`](https://wg21.link/p0811r3) and [`std::execution::unseq`](https://wg21.link/p1001r2), optimizations for [`std::reverse_copy`](../standard-library/algorithm-functions.md#reverse_copy), and more.

- Upgraded version of CMake shipped with Visual Studio to [CMake 3.18](https://cmake.org/cmake/help/latest/release/3.18.html).

- Our code analysis tools now support the SARIF 2.1 standard: the industry standard static analysis log format.

- Missing build tools in Linux projects will now issue a warning in the toolbar and a clear description of the missing tools in the error list.

- You can now debug Linux core dumps on a remote Linux system or WSL directly from Visual Studio.

- For C++ Doxygen comment generation, we added additional comment style options (`/*!` and `//!`).

- Additional [vcpkg announcements](https://aka.ms/vcpkg/team).

- Compiler support for lambdas in unevaluated contexts.

- [`/DEBUG:FULL`](../build/reference/debug-generate-debug-info.md) link performance improved by multi-threading PDB creation. Several large applications and AAA games see between 2 to 4 times faster linking.

- The Visual Studio debugger now has support for **`char8_t`**.

- Support for ARM64 projects using clang-cl.

- [Intel AMX intrinsics](https://software.intel.com/content/www/us/en/develop/documentation/cpp-compiler-developer-guide-and-reference/top/compiler-reference/intrinsics/intrinsics-for-intel-advanced-matrix-extensions-intel-amx-instructions.html) support.

## What's new for C++ in Visual Studio version 16.7

For a summary of new features and bug fixes in Visual Studio version 16.7, see [What's New in Visual Studio 2019 version 16.7](/visualstudio/releases/2019/release-notes-v16.7).

- Our remote C++ support now supports a wider range of Linux distros and shells, including sh, csh, bash, tsch, ksh, zsh, and dash. You can override the choice of a shell for a remote connection by modifying the new "shell" property via ConnectionManager.exe. This support has been tested with both MSBuild-based Linux projects and CMake projects targeting a remote Linux system or WSL.

- You can now use Ninja (a build system that evaluates incremental builds very quickly) to improve incremental build times for MSBuild-based Linux projects. You can opt into this feature by setting "Enable Incremental Build" to "With Ninja" in the General Property Page. Ninja (ninja-build) must be installed on your remote Linux system or WSL.

- New C++20 Standard Library features have been implemented. Please refer to the [STL Changelog on GitHub](https://github.com/microsoft/STL/wiki/Changelog) for a detailed list.

- You can now edit and set default remote SSH connections in the [Connection Manager](../linux/connect-to-your-remote-linux-computer.md#set-up-the-remote-connection). This means you can edit an existing remote connection (for example, if its IP address changed) and set default connections to be consumed in CMakeSettings.json and launch.vs.json. Remote SSH connections allow you to build and debug C++ projects on a remote Linux system directly from Visual Studio.

- Enhanced IntelliSense support for Clang on Windows (clang-cl) in Visual Studio. The clang include path now includes the clang libraries, we've improved in-editor squiggle display when using the std library, and we've added support for C++2a in clang mode.

- You can now try out underlining code errors and see more suggested quick fixes in C++ projects. Enable this feature under **Tools > Options > Text Editor > C/C++ > Experimental**. Set **Disable Experimental Code Linter** to false. Learn more on the [C++ Team Blog](https://aka.ms/cpp/isensecodelinter).

- We've added four new code analysis rules to incorporate additional safety features into C++: [C26817](../code-quality/c26817.md), [C26818](../code-quality/c26818.md), [C26819](../code-quality/c26819.md), and [C26820](../code-quality/c26820.md).

- We've added first-class support for debugging CMake projects on remote systems with gdbserver.

- Find memory corruption errors easily with an experimental implementation of AddressSanitizer for C++ in Visual Studio, now available for x64 native projects. We also now support the use of debug runtimes (**`/MTd`**, **`/MDd`**, **`/LDd`**).

- IntelliSense now has basic support for Concepts, designated initializers, and several other C++20 features.

- *`.ixx`* and *`.cppm`* files are now recognized as C++ and get treated as such by the syntax highlighter and IntelliSense.

## What's new for C++ in Visual Studio version 16.6

For a summary of new features and bug fixes in Visual Studio version 16.6, see [What's New in Visual Studio 2019 version 16.6](/visualstudio/releases/2019/release-notes-v16.6).

- **Improved Doxygen/XML comment generation:** Automatically generate Doxygen or XML doc comment stubs by typing `///` or `/**` above functions. These are now displayed in Quick Info tooltips as well.

- **Ninja support for CMake for Linux/WSL:** Use Ninja as the underlying generator when building CMake projects on WSL or a remote system. Ninja is now the default generator when adding a new Linux or WSL configuration.

- **Debug templates for remote CMake debugging**: We've simplified the templates for debugging CMake projects on a remote Linux system or WSL with gdb.

- **Initial support for C++20 concepts:** IntelliSense now recognizes [C++20 concepts](https://devblogs.microsoft.com/cppblog/c20-concepts-are-here-in-visual-studio-2019-version-16-3/) and suggests them in the member list.

## What's new for C++ in Visual Studio version 16.5

For a summary of new features and bug fixes in Visual Studio version 16.5, see [What's New in Visual Studio 2019 version 16.5](/visualstudio/releases/2019/release-notes-v16.5).

- **IntelliCode Team Completions model and member variables support:**  C++ developers can now train IntelliCode models on their own codebases. We call this a Team Completions model because you benefit from your team's practices. Additionally, we've improved IntelliCode suggestions for member variables.

- **IntelliSense improvements:**
  - IntelliSense now displays more readable type names when dealing with the Standard Library.
  - We've added the ability to toggle whether **Enter**, **Space**, and **Tab** function as commit characters, and to toggle whether **Tab** is used to Insert Snippet. Find these settings under **Tools > Options > Text Editor > C/C++ > Advanced > IntelliSense**.

- **Connection Manager over the command line:**  You can now interact with your stored remote connections over the command line. It's useful for tasks such as provisioning a new development machine or setting up Visual Studio in continuous integration.

- **Debug and deploy for WSL:** Use Visual Studio's native support for WSL to separate your build system from your remote deploy system. Now you can build natively on WSL and deploy the build artifacts to a second remote system for debugging. This workflow is supported by both CMake projects and MSBuild-based Linux projects.

- **Support for FIPS 140-2 compliance mode:** Visual Studio now supports FIPS 140-2 compliance mode when developing C++ applications that target a remote Linux system.

- **Language services for CMake Language files and better CMake project manipulation:**
  - The source file copy for CMake projects targeting a remote Linux system has been optimized. Visual Studio now keeps a "fingerprint file" of the last set of sources copied remotely and optimizes behavior based on the number of files that have changed.
  - Code navigation features such as Go To Definition and Find All References are now supported for functions, variables, and targets in CMake script files.

  - Add, remove, and rename source files and targets in your CMake projects from the IDE without manually editing your CMake scripts. When you add or remove files with the Solution Explorer, Visual Studio will automatically edit your CMake project. You can also add, remove, and rename the project's targets from the Solution Explorer's Targets View.

- **Linux project improvements:** Visual Studio Linux projects now have more accurate IntelliSense and allow you to control remote header synchronization on a project-by-project basis.

## What's new for C++ in Visual Studio version 16.4

For a summary of new features and bug fixes in Visual Studio version 16.4, see [What's New in Visual Studio 2019 version 16.4](/visualstudio/releases/2019/release-notes-v16.4).

- Code Analysis now natively supports [`Clang-Tidy`](https://aka.ms/cpp/clangtidy) for both MSBuild and CMake projects, whether you're using a Clang or MSVC toolset. clang-tidy checks can run as part of background code analysis, appear as in-editor warnings (squiggles), and display in the Error List.

- Visual Studio CMake projects now have [Overview](https://devblogs.microsoft.com/cppblog/usability-improvements-for-cmake-in-visual-studio-2019-version-16-4-launch-target-selection-and-overview-pages/) Pages to help you get started with cross-platform development. These pages are dynamic and help you connect to a Linux system and add a Linux or WSL configuration to your CMake project.

- The [launch dropdown menu for CMake projects](https://devblogs.microsoft.com/cppblog/usability-improvements-for-cmake-in-visual-studio-2019-version-16-4-launch-target-selection-and-overview-pages/) now displays your most recently used targets and can be filtered.

- [C++/CLI](https://devblogs.microsoft.com/cppblog/an-update-on-cpp-cli-and-dotnet-core/) now supports interop with .NET Core 3.1 and higher on Windows.

- You can now enable [ASan](https://aka.ms/cpp/asanmsvc) for projects compiled with MSVC on Windows for runtime instrumentation of C++ code that helps with detection of memory errors.

- Updates to MSVC's C++ Standard Library:
  - C++17: Implemented `to_chars()` general precision, completing [P0067R5](https://wg21.link/P0067R5) Elementary String Conversions (charconv). This completes implementation of all library features in the C++17 Standard.
  - C++20: Implemented [P1754R1](https://wg21.link/P1754R1) Rename concepts to standard_case. To include these features, use the **`/std:c++latest`** compiler option (or **`/std:c++20`** starting in Visual Studio 2019 version 16.11). The option can also be set in the **Configuration Properties > C/C++ > Language** project property page using the **C++ Language Standard** property.

- A new collection of tools named [C++ Build Insights](../build-insights/get-started-with-cpp-build-insights.md) is now available. For more information about the announcement, see the [C++ Team Blog](https://devblogs.microsoft.com/cppblog/introducing-c-build-insights/).

## What's new for C++ in Visual Studio version 16.3

For a summary of new features and bug fixes in Visual Studio version 16.3, see [What's New in Visual Studio 2019 version 16.3](/visualstudio/releases/2019/release-notes-v16.3).

- C++ developers can now toggle line comments using the keyboard shortcut **Ctrl+K**, **Ctrl+/**.

- IntelliSense member lists are now filtered based on type qualifiers, for example, `const std::vector` now filters out methods such as `push_back`.

- We added these C++20 Standard Library features (available under **`/std:c++latest`**, or **`/std:c++20`** starting in Visual Studio 2019 version 16.11):
  - [P0487R1](https://wg21.link/P0487R1): Fixing `operator>>(basic_istream&, CharT*)`
  - [P0616R0](https://wg21.link/P0616R0): Using `move()` In `<numeric>`
  - [P0758R1](https://wg21.link/P0758R1): `is_nothrow_convertible`
  - [P0734R0](https://wg21.link/P0734R0): C++ extensions for Concepts
  - [P0898R3](https://wg21.link/P0898R3): Standard Library Concepts
  - [P0919R3](https://wg21.link/P0919R3): Heterogeneous Lookup For Unordered Containers

- [New C++ Core Guideline checks](https://devblogs.microsoft.com/cppblog/new-c-core-check-rules/), including the new "Enum Rules" rule set, and additional `const`, `enum`, and type rules.

- A new default semantic colorization scheme allows users to better understand their code at a glance, the call-stack window can be configured to hide template arguments, and C++ IntelliCode is on-by-default.

- Configure debug targets and custom tasks with environment variables using CMakeSettings.json or CppProperties.json or the new "env" tag on individual targets and tasks in launch.vs.json and tasks.vs.json.

- Users can now use a quick action on missing vcpkg packages to automatically open a console and install to the default vcpkg installation.

- The remote header copy done by Linux projects ([CMake](../linux/cmake-linux-project.md) and [MSBuild](../linux/configure-a-linux-project.md)) has been optimized and now runs in parallel.

- Visual Studio's [native support for WSL](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/) now supports parallel builds for MSBuild-based Linux projects.

- Users can now specify a list of local build outputs to deploy to a remote system with Linux Makefile projects.

- Setting descriptions in the [CMake Settings Editor](https://devblogs.microsoft.com/cppblog/introducing-the-new-cmake-project-settings-ui/) now contain more context and links to helpful documentation.

- The C++ base model for IntelliCode is now enabled by default. You can change this setting by going to **Tools** > **Options** > **IntelliCode**.

## What's new for C++ in Visual Studio version 16.2

For a summary of new features and bug fixes in Visual Studio version 16.2, see [What's New in Visual Studio 2019 version 16.2](/visualstudio/releases/2019/release-notes-v16.2).

- For local CMake projects configured with Clang, Code Analysis now runs clang-tidy checks, appearing as part of background code analysis as in-editor warnings (squiggles) and in the Error List.

- Updated the `<charconv>` header for C++17's [P0067R5](https://wg21.link/P0067R5) Elementary string conversions:
  - Added floating-point `to_chars()` overloads for `chars_format::fixed` and `chars_format::scientific` precision (`chars_format::general precision` is the only part not yet implemented)
  - Optimized `chars_format::fixed` shortest

- Added these C++20 Standard Library features:
  - Available under **`/std:c++latest`** (or **`/std:c++20`** starting in Visual Studio 2019 version 16.11):
    - [P0020R6](https://wg21.link/P0020R6): `atomic<floating-point>`
    - [P0463R1](https://wg21.link/P0463R1): endian enumeration
    - [P0482R6](https://wg21.link/P0482R6): `char8_t` type for UTF-8 characters and strings
    - [P0653R2](https://wg21.link/P0653R2): `to_address()` for converting a pointer to a raw pointer
  - Available under `/std:c++17` and `/std:c++latest` (or **`/std:c++20`** starting in Visual Studio 2019 version 16.11):
    - [P0600R1](https://wg21.link/P0600R1): `[[nodiscard]]` in the library
  - Available unconditionally:
    - [P0754R2](https://wg21.link/P0754R2): `<version>` header
    - [P0771R1](https://wg21.link/P0771R1): `std::function` move constructor should be `noexcept`

- Windows SDK is no longer a dependency for the CMake for Windows and CMake for Linux components.

- Improvements to the [C++ linker](https://aka.ms/cpp/162linker) to significantly improve iteration build times for the largest of input. **`/DEBUG:FAST`** and **`/INCREMENTAL`** times are on average twice as fast, and **`/DEBUG:FULL`** is now three to six times faster.

## What's new for C++ in Visual Studio version 16.1

For a summary of new features and bug fixes in Visual Studio version 16.1, see [What's New in Visual Studio 2019 version 16.1](/visualstudio/releases/2019/release-notes-v16.1).

### C++ compiler

- These C++20 features have been implemented in the C++ compiler, available under **`/std:c++latest`** (or **`/std:c++20`** starting in Visual Studio 2019 version 16.11):
  - Increased ability to find function templates via argument-dependent lookup for function call expressions with explicit template arguments ([P0846R0](https://wg21.link/p0846r0)).
  - Designated initialization ([P0329R4](https://wg21.link/p0329r4)), which allows specific members to be selected in aggregate initialization, for example, by using the `Type t { .member = expr }` syntax.

- Lambda support has been overhauled, addressing a large number of long-standing bugs. This change is enabled by default when using **`/std:c++20`** or **`/std:c++latest`**. In **`/std:c++17`** language mode and under the default (**`/std:c++14`** ) mode, the new parser can be enabled by using [`/Zc:lambda`](../build/reference/zc-lambda.md) in Visual Studio 2019 version 16.9 or later (previously available as **`/experimental:newLambdaProcessor`** beginning in Visual Studio 2019 version 16.3), for example, `/std:c++17 /Zc:lambda`.

### C++ standard library improvements

- These C++20 features have been added to our implementation of the C++ Standard Library, available under **`/std:c++latest`**:
  - `starts_with` and `ends_with` for `basic_string` and `basic_string_view`.
  - `contains` for associative containers.
  - `remove`, `remove_if`, and `unique` for `list` and `forward_list` now return `size_type`.
  - `shift_left` and `shift_right` added to `<algorithm>`.

### C++ IDE

#### IntelliCode for C++

IntelliCode now ships as an optional component in the **Desktop Development with C++** workload. For more information, see [Improved C++ IntelliCode now Ships with Visual Studio 2019](https://devblogs.microsoft.com/cppblog/improved-c-intellicode-now-ships-with-visual-studio-2019/).

IntelliCode uses its own extensive training and your code context to put what you're most likely to use at the top of your completion list. It can often eliminate the need to scroll down through the list. For C++, IntelliCode offers the most help when using popular libraries such as the standard library.

The new IntelliCode features (Custom Models, C++ support, and EditorConfig inference) are disabled by default. To enable them, go to **Tools > Options > IntelliCode > General**. This version of IntelliCode has improved accuracy and includes support for free-functions. For more information, see [AI-Assisted Code Completion Suggestions Come to C++ via IntelliCode](https://devblogs.microsoft.com/cppblog/cppintellicode/).

#### Quick Info improvements

- The Quick Info tooltip now respects the semantic colorization of your editor. It also has a new **Search Online** link that will search online documentation for information about the hovered code construct. The link provided by Quick Info for red-squiggled code will search for the error online. That way you don't need to retype the message into your browser. For more information, see [Quick Info Improvements in Visual Studio 2019: Colorization and Search Online](https://devblogs.microsoft.com/cppblog/quick-info-improvements-in-visual-studio-2019-colorization-and-search-online/).

#### General improvements

- The Template Bar can populate the dropdown menu based on instantiations of that template in your codebase.

- Lightbulbs for missing `#include` directives that vcpkg can install, and autocompletion of available packages for the CMake `find_package` directive.

- The **General** Property Page for C++ projects has been revised. Some options are now listed under a new **Advanced** page. The **Advanced** page also includes new properties for your preferred toolset architecture, debug libraries, the MSVC toolset minor version, and Unity (jumbo) builds.

### CMake support

- We updated the CMake version that ships with Visual Studio to 3.14. This version adds built-in support for MSBuild generators targeting Visual Studio 2019 projects as well as file-based IDE integration APIs.

- We've added improvements to the CMake Settings Editor, including support for Windows Subsystem for Linux (WSL) and configurations from existing caches, changes to the default build and install roots, and support for environment variables in Linux CMake configurations.

- Completions and quick info for built-in CMake commands, variables, and properties make it easier to edit your *`CMakeLists.txt`* files.

- We've integrated support for editing, building, and debugging CMake projects with Clang/LLVM. For more information, see [Clang/LLVM Support in Visual Studio](https://devblogs.microsoft.com/cppblog/clang-llvm-support-in-visual-studio/).

### Linux and the Windows Subsystem for Linux

- We now support [AddressSanitizer (ASan)](https://github.com/google/sanitizers/wiki/AddressSanitizer) in Linux and CMake cross-platform projects. For more information, see [AddressSanitizer (ASan) for the Linux Workload in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/addresssanitizer-asan-for-the-linux-workload-in-visual-studio-2019/).

- We've integrated Visual Studio support for using C++ with the Windows Subsystem for Linux (WSL). Now you can use your local Windows Subsystem for Linux (WSL) installation with C++ natively in Visual Studio without additional configuration or a SSH connection. For more information, see [C++ with Visual Studio 2019 and Windows Subsystem for Linux (WSL)](https://devblogs.microsoft.com/cppblog/c-with-visual-studio-2019-and-windows-subsystem-for-linux-wsl/).

### Code Analysis

- New quick fixes for uninitialized variable checks were added. Code Analysis warnings [C6001: using uninitialized memory `<variable>`](../code-quality/c6001.md) and [C26494 VAR_USE_BEFORE_INIT](../code-quality/c26494.md) are available in the lightbulb menu on relevant lines. They're enabled by default in the Microsoft Native Minimum ruleset and C++ Core Check Type rulesets, respectively. For more information, see [New code analysis quick fixes for uninitialized memory (C6001) and use before init (C26494) warnings](https://devblogs.microsoft.com/cppblog/new-code-analysis-quick-fixes-for-uninitialized-memory-c6001-and-use-before-init-c26494-warnings/).

### Remote builds

- Users can now separate remote build machines from remote debug machines when targeting Linux in both MSBuild and CMake projects.

- The improved logging for remote connections makes it easier to diagnose issues in cross-platform development.

## What's new for C++ in Visual Studio version 16.0

For a summary of new features and bug fixes in Visual Studio version 16.0, see [What's New in Visual Studio 2019 version 16.0](/visualstudio/releases/2019/release-notes-v16.0).

### C++ compiler

- Enhanced support for C++17 features and correctness fixes, plus experimental support for C++20 features such as modules and coroutines. For detailed information, see [C++ Conformance Improvements in Visual Studio 2019](cpp-conformance-improvements.md).

- The [`/std:c++latest`](../build/reference/std-specify-language-standard-version.md) option now includes C++20 features that aren't necessarily complete, including initial support for the C++20 operator **`<=>`** ("spaceship") for three-way comparison.

- The C++ compiler switch [`/Gm`](../build/reference/gm-enable-minimal-rebuild.md) is now deprecated. Consider disabling the **`/Gm`** switch in your build scripts if it's explicitly defined. However, you can also safely ignore the deprecation warning for **`/Gm`**, because it's not treated as an error when using "Treat warnings as errors" ([`/WX`](../build/reference/compiler-option-warning-level.md)).

- As MSVC begins implementing features from the C++20 standard draft under the **`/std:c++latest`** flag, **`/std:c++latest`** is now incompatible with **`/clr`** (all flavors), **`/ZW`**, and **`/Gm`**. In Visual Studio 2019, use `/std:c++17` or `/std:c++14` modes when compiling with `/clr`, `/ZW`, or `/Gm` (but see previous bullet).

- Precompiled headers are no longer generated by default for C++ console and desktop apps.

#### Codegen, security, diagnostics, and versioning

Improved analysis with [`/Qspectre`](../build/reference/qspectre.md) for providing mitigation assistance for Spectre Variant 1 ([CVE-2017-5753](https://cve.mitre.org/cgi-bin/cvename.cgi?name=CVE-2017-5753)). For more information, see [Spectre Mitigations in MSVC](https://devblogs.microsoft.com/cppblog/spectre-mitigations-in-msvc/).

### C++ standard library improvements

- Implementation of additional C++17 and C++20 library features and correctness fixes. For detailed information, see [C++ Conformance Improvements in Visual Studio 2019](cpp-conformance-improvements.md).

- Clang-Format has been applied to the C++ standard library headers for improved readability.

- Because Visual Studio now supports Just My Code for C++, the standard library no longer needs to provide custom machinery for `std::function` and `std::visit` to achieve the same effect. Removing that machinery largely has no user-visible effects. One exception is that the compiler will no longer produce diagnostics that indicate issues on line 15732480 or 16707566 of `<type_traits>` or `<variant>`.

### Performance/throughput improvements in the compiler and standard library

- Build throughput improvements, including the way the linker handles File I/O, and link time in PDB type merging and creation.

- Added basic support for OpenMP SIMD vectorization. You can enable it using the new compiler switch **`/openmp:experimental`**. This option allows loops annotated with `#pragma omp simd` to potentially be vectorized. The vectorization isn't guaranteed, and loops annotated but not vectorized will get a warning reported. No SIMD clauses are supported; they're ignored, and a warning is reported.

- Added a new inlining command-line switch **`/Ob3`**, which is a more aggressive version of **`/Ob2`**. **`/O2`** (optimize the binary for speed) still implies **`/Ob2`** by default. If you find that the compiler doesn't inline aggressively enough, consider passing **`/O2 -Ob3`**.

- We've added support for Short Vector Math Library (SVML) intrinsic functions. These functions compute the 128-bit, 256-bit, or 512-bit vector equivalents. We added them to support hand vectorization of loops with calls to math library functions, and certain other operations like integer division. See the [Intel Intrinsic Guide](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html#!=undefined&techs=SVML) for definitions of the supported functions.

- New and improved optimizations:

  - Constant-folding and arithmetic simplifications for expressions using SIMD vector intrinsics, for both float and integer forms.

  - A more powerful analysis for extracting information from control flow (if/else/switch statements) to remove branches always proven to be true or false.

  - Improved memset unrolling to use SSE2 vector instructions.

  - Improved removal of useless struct/class copies, especially for C++ programs that pass by value.

  - Improved optimization of code using `memmove`, such as `std::copy` or `std::vector` and `std::string` construction.

- Optimized the standard library physical design to avoid compiling parts of the standard library not directly included. This change cut the build time of an empty file that includes only `<vector>` in half. As a consequence, you may need to add `#include` directives for headers that were previously indirectly included. For example, code that uses `std::out_of_range` may now need to add `#include <stdexcept>`. Code that uses a stream insertion operator may now need to add `#include <ostream>`. The benefit is that only translation units actually using `<stdexcept>` or `<ostream>` components pay the throughput cost to compile them.

- `if constexpr` was applied in more places in the standard library for improved throughput and reduced code size in copy operations, in permutations like reverse and rotate, and in the parallel algorithms library.

- The standard library now internally uses `if constexpr` to reduce compile times, even in C++14 mode.

- The runtime dynamic linking detection for the parallel algorithms library no longer uses an entire page to store the function pointer array. Marking this memory read-only was considered no longer relevant for security purposes.

- The `std::thread` constructor no longer waits for the thread to start, and no longer inserts so many layers of function calls between the underlying C library `_beginthreadex` and the supplied callable object. Previously `std::thread` put six functions between `_beginthreadex` and the supplied callable object. This number has been reduced to only three, two of which are just `std::invoke`. This change also resolves an obscure timing bug, where a `std::thread` constructor would stop responding if the system clock changed at the exact moment the `std::thread` was being created.

- Fixed a performance regression in `std::hash` that we introduced when implementing `std::hash<std::filesystem::path>`.

- The standard library now uses destructors instead of catch blocks in several places to achieve correctness. This change results in better debugger interaction: Exceptions you throw through the standard library in the affected locations now show up as being thrown from their original throw site, rather than our rethrow. Not all standard library catch blocks were eliminated. We expect the number of catch blocks to be reduced in later releases of MSVC.

- Suboptimal codegen in `std::bitset` caused by a conditional throw inside a `noexcept` function was fixed by factoring out the throwing path.

- The `std::list` and `std::unordered_*` family use non-debugging iterators internally in more places.

- Several `std::list` members were changed to reuse list nodes where possible rather than deallocating and reallocating them. For example, given a `list<int>` that already has a size of 3, a call to `assign(4, 1729)` now overwrites the `int` values in the first three list nodes, and allocates one new list node with the value 1729.

- All standard library calls to `erase(begin(), end())` were changed to `clear()`.

- `std::vector` now initializes and erases elements more efficiently in certain cases.

- Improvements to `std::variant` to make it more optimizer-friendly, resulting in better generated code. Code inlining is now much better with `std::visit`.

### C++ IDE

#### Live Share C++ support

[Live Share](/visualstudio/liveshare/) now supports C++, allowing developers using Visual Studio or Visual Studio Code to collaborate in real time. For more information, see [Announcing Live Share for C++: Real-Time Sharing and Collaboration](https://devblogs.microsoft.com/cppblog/cppliveshare/)

#### Template IntelliSense

The **Template Bar** now uses the **Peek Window** UI rather than a modal window, supports nested templates, and pre-populates any default arguments into the **Peek Window**. For more information, see [Template IntelliSense Improvements for Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/template-intellisense-improvements-for-visual-studio-2019-preview-2/). A **Most Recently Used** dropdown in the **Template Bar** enables you to quickly switch between previous sets of sample arguments.

#### New Start window experience

When launching the IDE, a new Start window appears. It has options to open recent projects, clone code from source control, open local code as a solution or a folder, or create a new project. The New Project dialog has also been overhauled into a search-first, filterable experience.

#### New names for some project templates

We've modified several project template names and descriptions to fit with the updated New Project dialog.

#### Various productivity improvements

Visual Studio 2019 includes the following features that will help make coding easier and more intuitive:

- Quick fixes for:
  - Add missing `#include`
  - `NULL` to `nullptr`
  - Add missing semicolon
  - Resolve missing namespace or scope
  - Replace bad indirection operands (`*` to `&` and `&` to `*`)
- Quick Info for a block by hovering on closing brace
- Peek Header / Code File
- Go to Definition on `#include` opens the file

For more information, see [C++ Productivity Improvements in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/c-productivity-improvements-in-visual-studio-2019-preview-2/).

### CMake support

- Support for CMake 3.14

- Visual Studio can now open existing CMake caches generated by external tools, such as CMakeGUI, customized meta-build systems or build scripts that invoke cmake.exe themselves.

- Improved IntelliSense performance.

- A new settings editor provides an alternative to manually editing the CMakeSettings.json file, and provides some parity with CMakeGUI.

- Visual Studio helps bootstrap your C++ development with CMake on Linux by detecting if you have a compatible version of CMake on your Linux machine. If not, it offers to install it for you.

- Incompatible settings in CMakeSettings, such as mismatched architectures or incompatible CMake generator settings, show squiggles in the JSON editor and errors in the error list.

- The vcpkg toolchain is automatically detected and enabled for CMake projects that are opened in the IDE once `vcpkg integrate install` has been run. This behavior can be turned off by specifying an empty toolchain file in CMakeSettings.

- CMake projects now enable Just My Code debugging by default.

- Static analysis warnings are now processed in the background and displayed in the editor for CMake projects.

- Clearer build and configure 'begin' and 'end' messages for CMake projects and support for Visual Studio's build progress UI. Additionally, there's now a CMake verbosity setting in **Tools > Options** to customize the detail level of CMake build and configuration messages in the Output Window.

- The `cmakeToolchain` setting is now supported in CMakeSettings.json to specify toolchains without manually modifying the CMake command line.

- A new **Build All** menu shortcut **Ctrl+Shift+B**.

### IncrediBuild integration

IncrediBuild is included as an optional component in the **Desktop development with C++** workload. The IncrediBuild Build Monitor is fully integrated in the Visual Studio IDE. For more information, see [Visualize your build with IncrediBuild's Build Monitor and Visual Studio 2019](https://devblogs.microsoft.com/cppblog/visualize-your-build-with-incredibuilds-build-monitor-and-visual-studio-2019/).

### Debugging

- For C++ applications running on Windows, PDB files now load in a separate 64-bit process. This change addresses a range of crashes caused by the debugger running out of memory. For example, when debugging applications that contain a large number of modules and PDB files.

- Search is enabled in the **Watch**, **Autos**, and **Locals** windows.

### Windows desktop development with C++

- These C++ ATL/MFC wizards are no longer available:

  - ATL COM+ 1.0 Component Wizard
  - ATL Active Server Pages Component Wizard
  - ATL OLE DB Provider Wizard
  - ATL Property Page Wizard
  - ATL OLE DB Consumer Wizard
  - MFC ODBC Consumer
  - MFC class from ActiveX control
  - MFC class from Type Lib.

  Sample code for these technologies is archived in Microsoft Learn and the VCSamples GitHub repository.

- The Windows 8.1 Software Development Kit (SDK) is no longer available in the Visual Studio installer. We recommend you upgrade your C++ projects to the latest Windows SDK. If you have a hard dependency on 8.1, you can download it from the Windows SDK archive.

- Windows XP targeting will no longer be available for the latest C++ toolset. XP targeting with VS 2017-level MSVC compiler & libraries is still supported and can be installed via "Individual components."

- Our documentation actively discourages usage of Merge Modules for Visual C++ Runtime deployment. We're taking the extra step this release of marking our MSMs as deprecated. Consider migrating your VCRuntime central deployment from MSMs to the redistributable package.

### Mobile development with C++ (Android and iOS)

The C++ Android experience now defaults to Android SDK 25 and Android NDK 16b.

### Clang/C2 platform toolset

The Clang/C2 experimental component has been removed. Use the MSVC toolset for full C++ standards conformance with `/permissive-` and `/std:c++17`, or the Clang/LLVM toolchain for Windows.

### Code analysis

- Code analysis now runs automatically in the background. Warnings display as green squiggles in-editor as you type. For more information, see [In-editor code analysis in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/in-editor-code-analysis-in-visual-studio-2019-preview-2/).

- New experimental ConcurrencyCheck rules for well-known standard library types from the `<mutex>` header. For more information, see [Concurrency Code Analysis in Visual Studio 2019](https://devblogs.microsoft.com/cppblog/concurrency-code-analysis-in-visual-studio-2019/).

- An updated partial implementation of the [Lifetime profile checker](https://herbsutter.com/2018/09/20/lifetime-profile-v1-0-posted/), which detects dangling pointers and references. For more information, see [Lifetime Profile Update in Visual Studio 2019 Preview 2](https://devblogs.microsoft.com/cppblog/lifetime-profile-update-in-visual-studio-2019-preview-2/).

- More coroutine-related checks, including [C26138](../code-quality/c26138.md), [C26810](../code-quality/c26810.md), [C26811](../code-quality/c26811.md), and the experimental rule [C26800](../code-quality/c26800.md). For more information, see [New Code Analysis Checks in Visual Studio 2019: use-after-move and coroutine](https://devblogs.microsoft.com/cppblog/new-code-analysis-checks-in-visual-studio-2019-use-after-move-and-coroutine/).

### Unit testing

The Managed C++ Test Project template is no longer available. You can continue using the Managed C++ Test framework in your existing projects. For new unit tests, consider using one of the native test frameworks for which Visual Studio provides templates (MSTest, Google Test), or the Managed C# Test Project template.
