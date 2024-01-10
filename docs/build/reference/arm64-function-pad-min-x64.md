---
description: "Learn more about: /ARM64XFUNCTIONPADMINX64 (Minimum padding between x64 functions in an ARM64X image)"
title: "/ARM64XFUNCTIONPADMINX64 (Minimum x64 function padding)"
ms.date: 01/08/2024
helpviewer_keywords: ["/ARM64XFUNCTIONPADMINX64 linker option", "-ARM64XFUNCTIONPADMINX64 linker option", "ARM64XFUNCTIONPADMINX64 linker option"]
---
# /ARM64XFUNCTIONPADMINX64 (Minimum x64 function padding)

Specifies the minimum number of bytes of padding between x64 functions in ARM64X images.

## Syntax

```
/ARM64XFUNCTIONPADMINX64:[number]
```

## Arguments

*number*\
The minimum number of bytes of padding between x64 functions.

## Remarks

This switch ensures that there is at least as much padding between X64 functions in an ARM64X image as specified. There may be more padding to meet architecture alignment requirements.

This flag is available in Visual Studio 17.8 and later.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Modify the **Additional Options** property to include **/ARM64XFUNCTIONPADMINX64:**`number`, where `number` is the minimum number of bytes of padding to put between x64 functions, and then choose **OK**.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[`/FUNCTIONPADMIN` (Create hotpatchable image)](../reference/functionpadmin-create-hotpatchable-image.md)\
[`/NOFUNCTIONPADSECTION`](no-function-pad-section.md)\
[MSVC Linker Options](linker-options.md)\
[MSVC linker reference](linking.md)
