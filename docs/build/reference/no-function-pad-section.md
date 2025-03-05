---
description: "Learn more about: /NOFUNCTIONPADSECTION (Disable function padding)"
title: "/NOFUNCTIONPADSECTION (Disable function padding)"
ms.date: 01/09/2024
helpviewer_keywords: ["/NOFUNCTIONPADSECTION linker option", "-NOFUNCTIONPADSECTION linker option", "NOFUNCTIONPADSECTION linker option"]
---
# /NOFUNCTIONPADSECTION (Disable function padding)

Disables function padding for functions in the specified section.

## Syntax

```
/NOFUNCTIONPADSECTION:[name]
```

## Arguments

*name*\
The name of the section to disable x64 function padding in.

## Remarks

You can instruct the linker to put a specified minimum number of bytes between functions with [`/FUNCTIONPADMIN` (Create hotpatchable image)](../reference/functionpadmin-create-hotpatchable-image.md) and [`/ARM64XFUNCTIONPADMINX64`](arm64-function-pad-min-x64.md). This flag disables adding that padding for the specified sections.

To exclude multiple sections, specify the switch multiple times.

This flag is available starting with in Visual Studio 17.8 and later.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Modify the **Additional Options** property to include **/NOFUNCTIONPADSECTION:**`name`, where `name` is the name of the section to disable x64 function padding in, and then choose **OK**.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC Linker Options](linker-options.md)\
[MSVC linker reference](linking.md)
