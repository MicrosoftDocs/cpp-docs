---
description: "Learn more about: /PROFILE (Performance Tools Profiler)"
title: "/PROFILE (Performance Tools Profiler)"
ms.date: 10/13/2021
f1_keywords: ["VC.Project.VCLinkerTool.Profile"]
helpviewer_keywords: ["-PROFILE linker option", "/PROFILE linker option"]
---
# `/PROFILE` (Performance Tools Profiler)

Produces an output file that can be used with the Performance Tools profiler.

## Syntax

> **`/PROFILE`**

## Remarks

/PROFILE implies the following linker options:

- [`/DEBUG:FULL`](debug-generate-debug-info.md)

- [`/DEBUGTYPE:cv,fixup`](debugtype-debug-info-options.md)

- [`/OPT:REF`](opt-optimizations.md)

- [`/OPT:NOICF`](opt-optimizations.md)

- [`/INCREMENTAL:NO`](incremental-link-incrementally.md)

- [`/FIXED:NO`](fixed-fixed-base-address.md)

**`/PROFILE`** is used to support the Performance Tools for Visual Studio Profiler utility [`VSInstr.exe`](/visualstudio/profiling/vsinstr).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Profile** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.

### To set this linker option in a Visual Studio CMake project

Because a **CMake** project doesn't have the usual **Property Pages** support, the linker option can be set by modifying the *`CMakeLists.txt`* file.

1. Open the *`CMakeLists.txt`* file in the project root directory.

1. Add the code below. For more information, see the CMake [`set_target_properties`](https://cmake.org/cmake/help/latest/command/set_target_properties.html) documentation.

   ```txt
   SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/PROFILE")
   ```

1. Rebuild your solution.

## See Also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
