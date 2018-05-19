---
title: "/DEPENDENTLOADFLAGS (Set default dependent load flags)"
description: "The /DEPENDENTLOADFLAGS option sets default flags for DLLs loaded using LoadLibrary
ms.custom: ""
ms.date: "05/18/2018"
ms.technology: ["cpp-tools"]
ms.topic: "reference"
f1_keywords: ["dependentloadflag"]
dev_langs: ["C++"]
helpviewer_keywords: ["LINK tool [C++], dependent load flags", "-DEPENDENTLOADFLAGS linker option", "linker [C++], DEPENDENTLOADFLAGS", "DEPENDENTLOADFLAGS linker option", "/DEPENDENTLOADFLAGS linker option"]
author: "corob-msft"
ms.author: "corob"
ms.workload: ["cplusplus"]
---
# /DEPENDENTLOADFLAGS (Set default dependent load flags)

Sets the default load flags used when LoadLibrary is used to load DLLs.

## Syntax

> **/DEPENDENTLOADFLAGS**[**:**_loadflags_]

## Arguments

*loadflags*

An optional "C"-style 16-bit integer value in decimal, octal with a leading zero, or hexadecimal with a leading `0x`, that specifies the dependent load flags to apply to all [LoadLibrary](loadlibrary-and-afxloadlibrary.md) calls. The default value is 0.

## Remarks

This option is new in Visual Studio 2017, and applies only to apps running on Windows 10 RS1 and later versions. This option is ignored by other operating systems that run the app.

On supported operating systems, this option has the effect of changing calls to `LoadLibrary("dependent.dll")` to the equivalent of `LoadLibraryEx("dependent.dll", 0, loadflags)`.

This flag can be used to prevent DLL planting attacks. For example, if an app uses `LoadLibrary` to load a dependent DLL, an attacker could plant a DLL with the same name in the search path used by `LoadLibrary`, such as the current directory, which is checked before the app directory and system directories. For more information, see [The search path that is used by Windows to locate a DLL](../search-path-used-by-windows-to-locate-a-dll.md). Instead, if you specify `/DEPENDENTLOADFLAGS:0xA00` (the value of the combined flags `LOAD_LIBRARY_SEARCH_APPLICATION_DIR|LOAD_LIBRARY_SEARCH_SYSTEM32`), then the DLL search path is constrained to protected directories that are more difficult for an attacker to change.

### To set the DEPENDENTLOADFLAGS linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in **Additional Options**.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

- [Setting Linker Options](setting-linker-options.md)
- [Linker Options](linker-options.md)
- [How to link implicitly to a DLL](../linking-an-executable-to-a-dll.md#linking-implicitly)
- [Determine which linking method to use](../linking-an-executable-to-a-dll.md#determining-which-linking-method-to-use)
- [LoadLibrary](http://go.microsoft.com/fwlink/p/?LinkID=259187)
- [The search path that is used by Windows to locate a DLL](../search-path-used-by-windows-to-locate-a-dll.md)
