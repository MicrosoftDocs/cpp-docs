---
description: "Learn more about the /TIME (Linker time information) linker option."
title: "/TIME"
ms.date: 05/11/2022
f1_keywords: ["/time"]
helpviewer_keywords: ["/time"]
---
# `/TIME` (Linker time information)

Output the time taken by linker steps and total link time in milliseconds.

## Syntax

> **`/TIME`**

## Remarks

The `/TIME` linker option displays the time taken by the linker steps and the total link time in milliseconds.

Typical output looks something like this example:

```cmd
C:\temp>link /nologo /time test.obj
  OptRef: Total time = 0.000s
  OptIcf: Total time = 0.000s
Pass 1: Interval #1, time = 0.063s
Pass 2: Interval #2, time = 0.000s
Final: Total time = 0.063s
```

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In the **Additional Options** box, add the *`/TIME`* linker option. Choose **OK** to save your changes.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
