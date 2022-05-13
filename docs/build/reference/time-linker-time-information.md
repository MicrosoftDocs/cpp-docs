---
description: "Learn more about the /TIME (Linker time information) linker option."
title: "/TIME"
ms.date: 05/11/2022
f1_keywords: ["/time"]
helpviewer_keywords: ["/time"]
---
# `/TIME` (Linker time information)

Output the time taken by linker steps and total link time.

## Syntax

> **`/TIME`**

## Remarks

The `/TIME` linker option displays the time taken by the linker steps and the total link time in seconds, with millisecond precision.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional Options** box, add the *`/TIME`* linker option. Choose **OK** or **Apply** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
