---
title: "/ERRORREPORT (Report internal linker errors)"
description: "Learn how to use /ERRORREPORT."
ms.date: "02/09/2020"
f1_keywords: ["/ERRORREPORT", "VC.Project.VCLinkerTool.ErrorReporting"]
helpviewer_keywords: ["/ERRORREPORT linker option", "ERRORREPORT linker option", "-ERRORREPORT linker option"]
ms.assetid: f5fab595-a2f1-4eb0-ab5c-1c0fbd3d8c28
---
# /ERRORREPORT (Report Internal Linker Errors)

The **/ERRORREPORT** option is deprecated. Starting in Windows Vista, error reporting is controlled by [Windows Error Reporting (WER)](/windows/win32/wer/windows-error-reporting) settings.

## Syntax

> **/ERRORREPORT:** \[ **none** \| **prompt** \| **queue** \| **send** ]

## Remarks

The **/ERRORREPORT** arguments are overridden by the Windows Error Reporting service settings. The linker automatically sends reports of internal errors to Microsoft, if reporting is enabled by Windows Error Reporting. No report is sent if disabled by Windows Error Reporting.

### To set this compiler option in the Visual Studio development environment

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Error Reporting** property.

### To set this compiler option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ErrorReporting%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
