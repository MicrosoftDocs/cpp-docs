---
description: "Learn more about: /DLL (Build a DLL)"
title: "/DLL (Build a DLL)"
ms.date: "11/04/2016"
f1_keywords: ["/dll"]
helpviewer_keywords: ["-DLL linker option", "/DLL linker option [C++]", "exporting DLLs [C++], specifying exports", "DLLs [C++], building", "DLL linker option [C++]"]
ms.assetid: c7685aec-31d0-490f-9503-fb5171a23609
---
# /DLL (Build a DLL)

```
/DLL
```

## Remarks

The /DLL option builds a DLL as the main output file. A DLL usually contains exports that can be used by another program. There are three methods for specifying exports, listed in recommended order of use:

1. [__declspec(dllexport)](../../cpp/dllexport-dllimport.md) in the source code

1. An [EXPORTS](exports.md) statement in a .def file

1. An [/EXPORT](export-exports-a-function.md) specification in a LINK command

A program can use more than one method.

Another way to build a DLL is with the **LIBRARY** module-definition statement. The /BASE and /DLL options together are equivalent to the **LIBRARY** statement.

Do not specify this option within the development environment; this option is for use only on the command line. This option is set when you create a DLL project with an Application Wizard.

Note that if you create your import library in a preliminary step, before creating your .dll, you must pass the same set of object files when building the .dll, as you passed when building the import library.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Configuration Properties** folder.

1. Click the **General** property page.

1. Modify the **Configuration Type** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCPropertySheet.ConfigurationType%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
