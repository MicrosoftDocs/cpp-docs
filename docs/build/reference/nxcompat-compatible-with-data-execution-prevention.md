---
title: "/NXCOMPAT (Compatible with Data Execution Prevention) | Microsoft Docs"
ms.custom: ""
ms.date: "12/29/2017"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["/NXCOMPAT"]
dev_langs: ["C++"]
helpviewer_keywords: ["/NXCOMPAT linker option", "-NXCOMPAT linker option", "NXCOMPAT linker option"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /NXCOMPAT (Compatible with Data Execution Prevention)

Indicates that an executable is compatible with the Windows Data Execution Prevention feature.

## Syntax

> **/NXCOMPAT**[**:NO**]

## Remarks

By default, **/NXCOMPAT** is on.

**/NXCOMPAT:NO** can be used to explicitly specify an executable as incompatible with Data Execution Prevention.

For more information about Data Execution Prevention, see these articles:

- [A detailed description of the Data Execution Prevention (DEP) feature](https://support.microsoft.com/en-us/help/875352/a-detailed-description-of-the-data-execution-prevention-dep-feature-in)

- [Data Execution Prevention](/windows/desktop/Memory/data-execution-prevention)

- [Data Execution Prevention (Windows Embedded)](/previous-versions/windows/embedded/ms913190\(v=winembedded.5\))

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For details, see [Working with Project Properties](../../ide/working-with-project-properties.md).

1. Choose the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in the **Additional Options** box. Choose **OK** or **Apply** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCCLCompilerTool.AdditionalOptions%2A>.

## See also

[Setting Linker Options](../../build/reference/setting-linker-options.md)  
[Linker Options](../../build/reference/linker-options.md)  
