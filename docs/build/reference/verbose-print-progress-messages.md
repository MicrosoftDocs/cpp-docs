---
description: "Learn more about: /VERBOSE (Print progress messages)"
title: "/VERBOSE (Print progress messages)"
ms.date: "06/13/2019"
f1_keywords: ["/verbose", "VC.Project.VCLinkerTool.ShowProgress"]
helpviewer_keywords: ["-VERBOSE linker option", "linking [C++], session progress information", "Print Progress Messages linker option", "linker [C++], output dependency information", "/VERBOSE linker option", "dependencies [C++], dependency information in linker output", "VERBOSE linker option"]
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
---
# /VERBOSE (Print progress messages)

Outputs progress messages during the link process.

## Syntax

> **/VERBOSE**\[**:**{**CLR**|**ICF**|**INCR**|**LIB**|**REF**|**SAFESEH**|**UNUSEDDELAYLOAD**|**UNUSEDLIBS**}\]

## Remarks

The linker sends information about the progress of the linking session to the **Output** window. On the command line, the information is sent to standard output, and can be redirected to a file.

| Option | Description |
| ------------ | ----------------- |
| /VERBOSE | Displays details about the linking process. |
| /VERBOSE:CLR | Displays information about linker activity specific to objects and metadata compiled by using [/clr](clr-common-language-runtime-compilation.md). |
| /VERBOSE:ICF | Displays information about linker activity that results from the use of [/OPT:ICF](opt-optimizations.md). |
| /VERBOSE:INCR | Displays information about the incremental link process. |
| /VERBOSE:LIB | Displays progress messages that indicate just the libraries searched.<br/> The displayed information includes the library search process. It lists each library and object name (with full path), the symbol being resolved from the library, and a list of objects that reference the symbol. |
| /VERBOSE:REF | Displays information about linker activity that results from the use of [/OPT:REF](opt-optimizations.md). |
| /VERBOSE:SAFESEH | Displays information about modules that are incompatible with safe structured exception handling when [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) isn't specified. |
| /VERBOSE:UNUSEDDELAYLOAD | Displays information about any delay loaded DLLs that have no symbols used when the image is created. |
| /VERBOSE:UNUSEDLIBS | Displays information about any library files that are unused when the image is created. |

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Add the option to the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
