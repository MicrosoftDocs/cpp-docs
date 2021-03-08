---
title: "AddressSanitizer"
description: "Top-level description of the AddressSanitizer feature for Microsoft C/C++."
ms.date: 03/05/2021
f1_keywords: ["AddressSanitizer"]
helpviewer_keywords: ["ASan", "AddressSanitizer", "Address Sanitizer", "compiling for AddressSanitizer"]
---

# AddressSanitizer

## Overview

The C & C++ languages are powerful, but can suffer from a class of bugs that affect program correctness and program security. Starting in Visual Studio 2019 version 16.9, the Microsoft C/C++ compiler (MSVC) and IDE supports the *AddressSanitizer*. AddressSanitizer (ASan) is a compiler and runtime technology that exposes many hard-to-find bugs with **zero** false positives:

- [Alloc/dealloc mismatches](error-alloc-dealloc-mismatch.md) and [`new`/`delete` type mismatches](error-new-delete-type-mismatch.md)
- [Allocations too large for the heap](error-allocation-size-too-big.md)
- [`calloc` overflow](error-calloc-overflow.md) and [`alloca` overflow](error-dynamic-stack-buffer-overflow.md)
- [Double free](error-double-free.md) and [use after free](error-heap-use-after-free.md)
- [Global variable overflow](error-global-buffer-overflow.md)
- [Heap buffer overflow](error-heap-buffer-overflow.md)
- [Invalid alignment of aligned values](error-invalid-allocation-alignment.md)
- [`memcpy`](error-memcpy-param-overlap.md) and [`strncat` parameter overlap](error-strncat-param-overlap.md)
- [Stack buffer overflow](error-stack-buffer-overflow.md) and [underflow](error-stack-buffer-underflow.md)
- [Stack use after `return`](error-stack-use-after-return.md) and [use after scope](error-stack-use-after-scope.md)
- [Memory use after it's poisoned](error-use-after-poison.md)

Use AddressSanitizer to reduce your time spent on:

- Basic correctness
- Cross platform portability
- Security
- Stress testing
- Integrating new code

AddressSanitizer, originally [introduced by Google](https://www.usenix.org/conference/atc12/technical-sessions/presentation/serebryany), is a powerful alternative to both [`/RTC` (Runtime error checks)](../build/reference/rtc-run-time-error-checks.md) and [`/analyze` (Static analysis)](../build/reference/analyze-code-analysis.md). It provides run-time bug-finding technologies that use your existing build systems and existing test assets directly.

AddressSanitizer is integrated with the Visual Studio project system, the CMake build system, and the IDE. Projects can enable AddressSanitizer by setting a project property, or by using one extra compiler option: **`/fsanitize=address`**. The new option is compatible with all levels of optimization and configurations of x86 and x64. However, it's incompatible with [edit-and-continue](/visualstudio/debugger/edit-and-continue-visual-cpp), [incremental linking](../build/reference/incremental-link-incrementally.md), and [`/RTC`](../build/reference/rtc-run-time-error-checks.md).

Starting in Visual Studio 2019 version 16.9, Microsoft's AddressSanitizer technology enables integration with the Visual Studio IDE. The functionality can optionally create a crash dump file when the sanitizer finds a bug at runtime. If you set the `ASAN_SAVE_DUMPS=MyFileName.dmp` environment variable before you run your program, a crash dump file gets created with extra metadata for efficient [post-mortem debugging](#crash-dumps) of precisely diagnosed bugs. These dump files make extended use of the AddressSanitizer easier for:

- Local machine testing,
- On-premise distributed testing, and
- Cloud-based workflows for testing.

### Install the AddressSanitizer

The AddressSanitizer IDE integration and libraries get installed by default with C++ workloads in the Visual Studio Installer. However, if you're upgrading from an older version of Visual Studio 2019, use the Installer to enable ASan support after the upgrade:

:::image type="content" source="media/asan-installer-option.png" alt-text="Visual Studio Installer screenshot highlighting the C++ AddressSanitizer component":::

You can choose **Modify** on your existing Visual Studio installation from the Visual Studio Installer to get to the screen above.

> [!NOTE]
> If you run Visual Studio on the new update but haven't installed ASan, you'll get an error when you run your code:
>
> LNK1356: cannot find library 'clang_rt.asan_dynamic-i386.lib'

### <a name="using-asan"></a> Use the AddressSanitizer

Start building your executables with the **`/fsanitize=address`** compiler option using any of these common development methods:

- Command line builds
- Visual Studio project system
- Visual Studio CMake integration

 Recompile, then run your program normally. This code generation exposes [many types of precisely diagnosed bugs](#error-types). These errors get reported in three ways: in the debugger IDE, on the command line, or stored in a [new type of dump file](#crash-dumps) for precise off-line processing.

Microsoft recommends using the AddressSanitizer in these three standard workflows:

- **Developer inner loop**
  - Visual Studio - [Command line](#command-prompt)
  - Visual Studio - [Project system](#ide-msbuild)
  - Visual Studio - [CMake](#ide-cmake)

- **CI/CD** - continuous integration / continuous development
  - Error reporting - [New AddressSanitizer dump files](#crash-dumps)

- **Fuzzing** - building with the [libFuzzer](https://llvm.org/docs/LibFuzzer.html) wrapper
  - [Azure OneFuzz](https://www.microsoft.com/security/blog/2020/09/15/microsoft-onefuzz-framework-open-source-developer-tool-fix-bugs/)
  - Local Machine

This article covers the information you require to enable the three workflows listed above. The information is specific to the **platform-dependent** Windows 10 implementation of the AddressSanitizer. This documentation supplements the excellent documentation from [Google, Apple, and GCC](#external-docs) already published.

> [!NOTE]
> Current support is limited to x86 and x64 on Windows 10. [Send us feedback](https://aka.ms/vsfeedback/browsecpp) on what you'd like to see in future releases. Your feedback helps us prioritize other sanitizers for the future, such as **`/fsanitize=thread`**, **`/fsanitize=leak`**, **`/fsanitize=memory`**, **`/fsanitize=undefined`**, or **`/fsanitize=hwaddress`**. You can [report bugs here](https://aka.ms/feedback/report?space=62) if you run into issues.

## <a name="command-prompt"></a> Use the AddressSanitizer from a developer command prompt

Use the **`/fsanitize=address`** compiler option in a [developer command prompt](../build/building-on-the-command-line.md#developer_command_prompt_shortcuts) to enable compiling for the AddressSanitizer runtime. The **`/fsanitize=address`** option is compatible with all existing C++ or C optimization levels (for example, `/Od`, `/O1`, `/O2`, `/O2 /GL`, and `PGO`). The option works with static and dynamic CRTs (for example, `/MD`, `/MDd`, `/MT`, and `/MTd`). It works whether you create an EXE or a DLL. Debug information is required for optimal formatting of call stacks. In the example below, `cl /fsanitize=address /Zi` is passed on the command line.

The AddressSanitizer libraries (.lib files) get linked for you automatically. For more information, see [AddressSanitizer language, build, and debugging reference](asan-building.md).

### Example - basic global buffer overflow

```cpp
// basic-global-overflow.cpp
#include <stdio.h>
int x[100];
int main() {
    printf("Hello!\n");
    x[100] = 5; // Boom!
    return 0;
}
```

Using a developer command prompt for Visual Studio 2019, compile *`main.cpp`* using `/fsanitize=address /Zi`

:::image type="content" source="media/asan-command-basic-global-overflow.png" alt-text="Screenshot of a command prompt showing the command to compile with AddressSanitizer options.":::

When you run the resulting *`main.exe`* at the command line, it creates the formatted error report seen below.

Consider the overlaid, red boxes that highlight seven key pieces of information:

:::image type="content" source="media/asan-basic-global-overflow.png" alt-text="Screenshot of the debugger showing a basic global overflow error.":::

### Red highlights, from top to bottom

1. The memory safety bug is a global-buffer-overflow.
2. There were **4 bytes** (32 bits) **stored** outside any user-defined variable.
3. The store took place in function `main()` defined in file `basic-global-overflow.cpp` on line 7.
4. The variable named `x` gets defined in basic-global-overflow.cpp on line 3, starting at column 8
5. This global variable `x` is of size 400 bytes
6. The exact [shadow byte](./asan-shadow-bytes.md) describing the address targeted by the store had a value of `0xf9`
7. The shadow byte legend says `0xf9` is an area of padding to the right of `int x[100]`

> [!NOTE]
> The function names in the call stack are produced through the [LLVM symbolizer](https://llvm.org/docs/CommandGuide/llvm-symbolizer.html) that's invoked by the runtime upon error.

## <a name="ide-msbuild"></a> Use the AddressSanitizer in Visual Studio

AddressSanitizer is integrated with the Visual Studio IDE. To turn on the AddressSanitizer for an MSBuild project, right-click on the project in Solution Explorer and choose **Properties**. In the **Property Pages** dialog, select **Configuration Properties** > **C/C++** > **General**, then modify the **Enable AddressSanitizer** property. Choose **OK** to save your changes.

:::image type="content" source="media/asan-project-system-dialog.png" alt-text="Screenshot of the Property Pages dialog showing the Enable AddressSanitizer property.":::

To build from the IDE, opt out of any [incompatible options](./asan-known-issues.md#incompatible-options). For an existing project compiled by using **`/Od`** (or Debug mode), you may need to turn off these options:

- Turn off [edit and continue](/visualstudio/debugger/how-to-enable-and-disable-edit-and-continue)
- Turn off [`/RTC1` (runtime checks)](../build/reference/rtc-run-time-error-checks.md)
- Turn off [`/INCREMENTAL` (incremental linking)](../build/reference/incremental-link-incrementally.md)

To build and run the debugger, enter **F5**. You'll see this window in Visual Studio:

:::image type="content" source="media/asan-global-buffer-overflow-F5.png" alt-text="Screenshot of the debugger showing a global buffer overflow error.":::

## <a name="ide-cmake"></a> Using the AddressSanitizer from Visual Studio: CMake

To enable the AddressSanitizer for [a CMake project created to target Windows](../build/cmake-projects-in-visual-studio.md), take these steps:

1. Open the **Configurations** dropdown in the toolbar at the top of the IDE and select **Manage Configurations**.

   :::image type="content" source="media/asan-cmake-configuration-dropdown.png" alt-text="Screenshot of the CMake configuration dropdown.":::

   That selection opens the CMake Project Settings editor, which is saved in a CMakeSettings.json file.

1. Choose the **Edit JSON** link in the editor. This selection switches the view to raw JSON.

1. Add the property: **“addressSanitizerEnabled”: true**

   This image is of CMakeSettings.json after that change:

   :::image type="content" source="media/asan-cmake-json.png" alt-text="Screenshot of the text editor view of CMakeSettings.json.":::

1. Enter **Ctrl+S** to save this JSON file, then enter **F5** to recompile and run under the debugger.

This screenshot captures the error from the CMake build.

:::image type="content" source="media/asan-cmake-error-f5.png" alt-text="Screenshot of the CMake build error message.":::

## <a name="crash-dumps"></a> AddressSanitizer crash dumps

We introduced new functionality in the AddressSanitizer for use with cloud and distributed workflows. This functionality allows offline viewing of an AddressSanitizer error in the IDE. The error gets overlaid on top of your source, just as you would experience in a live debug session.

These new dump files can lead to efficiencies when analyzing a bug. You don't need to rerun, or find remote data or look for a machine that went off-line.

To produce a new type of dump file that can be viewed in Visual Studio on another machine at a later date:

```cmd
set ASAN_SAVE_DUMPS=MyFileName.dmp
```

Starting with Visual Studio 16.9 you can display **a precisely diagnosed error**, stored in your *`*.dmp`* file, on top of your source code.

[This new crash dump functionality](./asan-offline-crash-dumps.md) enables cloud-based workflows, or distributed testing. It can also be used to file a detailed, actionable bug in any scenario.

## <a name="error-types"></a> Example errors

AddressSanitizer can detect several kinds of memory misuse errors. Here are many of the runtime errors reported when you run your binaries compiled by using the AddressSanitizer (**`/fsanitize=address`**) compiler option:

- [`alloc-dealloc-mismatch`](error-alloc-dealloc-mismatch.md)
- [`allocation-size-too-big`](error-allocation-size-too-big.md)
- [`calloc-overflow`](error-calloc-overflow.md)
- [`double-free`](error-double-free.md)
- [`dynamic-stack-buffer-overflow`](error-dynamic-stack-buffer-overflow.md)
- [`global-buffer-overflow`](error-global-buffer-overflow.md)
- [`heap-buffer-overflow`](error-heap-buffer-overflow.md)
- [`heap-use-after-free`](error-heap-use-after-free.md)
- [`invalid-allocation-alignment`](error-invalid-allocation-alignment.md)
- [`memcpy-param-overlap`](error-memcpy-param-overlap.md)
- [`new-delete-type-mismatch`](error-new-delete-type-mismatch.md)
- [`stack-buffer-overflow`](error-stack-buffer-overflow.md)
- [`stack-buffer-underflow`](error-stack-buffer-underflow.md)
- [`stack-use-after-return`](error-stack-use-after-return.md)
- [`stack-use-after-scope`](error-stack-use-after-scope.md)
- [`strncat-param-overlap`](error-strncat-param-overlap.md)
- [`use-after-poison`](error-use-after-poison.md)

For more information about the examples, see [AddressSanitizer error examples](./asan-error-examples.md).

## <a name="differences"></a> Differences with Clang 12.0

MSVC currently differs from Clang 12.0 in two functional areas:

- **stack-use-after-scope** - this setting is on by default and can't be turned off.
- **stack-use-after-return** - this functionality requires an extra compiler option, and isn't available by only setting `ASAN_OPTIONS`.

These decisions were made to reduce the test matrix required to deliver this first version.

Features that could lead to false positives in Visual Studio 2019 16.9 weren't included. That discipline enforced the effective testing integrity necessary when considering interop with decades of existing code. More capabilities may be considered in later releases:

- [Initialization Order Fiasco](https://github.com/google/sanitizers/wiki/AddressSanitizerInitializationOrderFiasco)
- [Intra Object Overflow](https://github.com/google/sanitizers/wiki/AddressSanitizerIntraObjectOverflow)
- [Container Overflow](https://github.com/google/sanitizers/wiki/AddressSanitizerContainerOverflow)
- [Pointer Subtraction/Comparison](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

For more information, see [Building for the AddressSanitizer with MSVC](./asan-building.md).

## <a name="external-docs"></a> Existing industry documentation

Extensive documentation already exists for these language and platform-dependent implementations of the AddressSanitizer technology.

- [Google](https://github.com/google/sanitizers/wiki/AddressSanitizer)
- [Apple](https://developer.apple.com/documentation/xcode/diagnosing_memory_thread_and_crash_issues_early)
- [GCC](https://gcc.gnu.org/onlinedocs/gcc/Instrumentation-Options.html)

This seminal paper on the [AddressSanitizer](https://www.usenix.org/system/files/conference/atc12/atc12-final39.pdf) describes the implementation.

## See also

[AddressSanitizer known issues](./asan-known-issues.md)\
[AddressSanitizer build and language reference](./asan-building.md)\
[AddressSanitizer runtime reference](./asan-runtime.md)\
[AddressSanitizer shadow bytes](./asan-shadow-bytes.md)\
[AddressSanitizer cloud or distributed testing](./asan-offline-crash-dumps.md)\
[AddressSanitizer debugger integration](./asan-debugger-integration.md)\
[AddressSanitizer error examples](./asan-error-examples.md)
