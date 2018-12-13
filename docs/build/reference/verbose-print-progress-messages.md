---
title: "/VERBOSE (Print Progress Messages) (C++) - Visual Studio"
ms.date: "12/14/2018"
f1_keywords: ["/verbose", "VC.Project.VCLinkerTool.ShowProgress"]
helpviewer_keywords: ["-VERBOSE linker option", "linking [C++], session progress information", "Print Progress Messages linker option", "linker [C++], output dependency information", "/VERBOSE linker option", "dependencies [C++], dependency information in linker output", "VERBOSE linker option"]
ms.assetid: 9c347d98-4c37-4724-a39e-0983934693ab
---
# /VERBOSE (Print Progress Messages)

```
/VERBOSE[:{ICF|INCR|LIB|REF|SAFESEH|UNUSEDLIBS}]
```

## Remarks

The linker sends information about the progress of the linking session to the **Output** window. On the command line, the information is sent to standard output and can be redirected to a file.

|Option|Description|
|------------|-----------------|
|/VERBOSE|Displays details about the linking process.|
|/VERBOSE:ICF|Display information about linker activity that results from the use of [/OPT:ICF](opt-optimizations.md).|
|/VERBOSE:INCR|Displays information about the incremental link process.|
|/VERBOSE:LIB|Displays progress messages that indicate just the libraries searched.<br /><br /> The displayed information includes the library search process and lists each library and object name (with full path), the symbol being resolved from the library, and a list of objects that reference the symbol.|
|/VERBOSE:REF|Displays information about linker activity that results from the use of [/OPT:REF](opt-optimizations.md).|
|/VERBOSE:SAFESEH|Displays information about modules that are not compatible with safe exception handling when [/SAFESEH](safeseh-image-has-safe-exception-handlers.md) is not specified.|
|/VERBOSE:UNUSEDLIBS|Displays information about any library files that are unused when the image is created.|

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../working-with-project-properties.md).

1. Expand the **Linker** folder.

1. Select the **Command Line** property page.

1. Add the option to the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.ShowProgress%2A>.

## See Also

[Setting Linker Options](linking.md)<br/>
[Linker Options](linker-options.md)