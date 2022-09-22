---
title: "/NXCOMPAT (Compatible with Data Execution Prevention)"
description: "Describes the Microsoft C/C++ (MSVC) /NXCOMPAT linker option, which marks an executable as compatible with Data Execution Prevention (DEP)."
ms.date: 09/19/2022
f1_keywords: ["VC.Project.VCLinkerTool.DataExecutionPrevention", "/NXCOMPAT"]
helpviewer_keywords: ["/NXCOMPAT linker option", "-NXCOMPAT linker option", "NXCOMPAT linker option"]
---
# `/NXCOMPAT` (Compatible with Data Execution Prevention)

Indicates that an executable is compatible with the Windows Data Execution Prevention feature.

## Syntax

> **`/NXCOMPAT`**[**`:NO`**]

## Remarks

By default, **`/NXCOMPAT`** is on.

**`/NXCOMPAT:NO`** can be used to explicitly specify an executable as incompatible with Data Execution Prevention.

For more information about Data Execution Prevention, see these articles:

- [Data Execution Prevention](/windows/win32/Memory/data-execution-prevention)

- [Data Execution Prevention (Windows Embedded)](/previous-versions/windows/embedded/ms913190\(v=winembedded.5\))

### To set this linker option in Visual Studio

1. Open the **Property Pages** dialog box for the project. For more information, see [Set compiler and build properties](../working-with-project-properties.md).

1. Choose the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Data Execution Prevention (DEP)** property. Choose **OK** or **Apply** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
