---
description: "Learn more about: /PROFILE (Performance Tools Profiler)"
title: "/PROFILE (Performance Tools Profiler)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.Profile"]
helpviewer_keywords: ["-PROFILE linker option", "/PROFILE linker option"]
ms.assetid: e676baa1-5063-47a3-a357-ba0d1f0d1699
---
# /PROFILE (Performance Tools Profiler)

Produces an output file that can be used with the Performance Tools profiler.

## Syntax

```
/PROFILE
```

## Remarks

/PROFILE implies the following linker options:

- [/OPT:REF](opt-optimizations.md)

- /OPT:NOICF

- [/INCREMENTAL:NO](incremental-link-incrementally.md)

- [/FIXED:NO](fixed-fixed-base-address.md)

/PROFILE causes the linker to generate a relocation section in the program image.  A relocation section allows the profiler to transform the program image to get profile data.

**/PROFILE** is only available only in Enterprise (team development) versions.  For more information on PREfast, see [Code Analysis for C/C++ Overview](../../code-quality/code-analysis-for-c-cpp-overview.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Expand the **Configuration Properties** node.

1. Expand the **Linker** node.

1. Select the **Advanced** property page.

1. Modify the **Profile** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.Profile%2A>.

### To set this linker option within Visual Studio CMake project

**CMake** project does not have a **Property Pages**, the linker options can be set by modifing the CMakeLists.txt.

1. Open the CMakeLists.txt in the project root directory.

1. Add code below. For details, see [CMake references](https://cmake.org/cmake/help/v3.0/command/set_target_properties.html)

1. Rebuild your solution.

```
SET_TARGET_PROPERTIES(${PROJECT_NAME} PROPERTIES LINK_FLAGS "/PROFILE")
```

## See Also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
