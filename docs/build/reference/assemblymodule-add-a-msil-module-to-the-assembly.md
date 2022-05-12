---
description: "Learn more about: /ASSEMBLYMODULE (Add an MSIL module to the assembly)"
title: "/ASSEMBLYMODULE (Add an MSIL module to the assembly)"
ms.date: 05/11/2022
f1_keywords: ["/assemblymodule", "VC.Project.VCLinkerTool.AddModuleNamesToAssembly"]
helpviewer_keywords: ["ASSEMBLYMODULE linker option", "assemblies [C++], adding modules to", "assemblies [C++]", "/ASSEMBLYMODULE linker option", "-ASSEMBLYMODULE linker option"]
ms.assetid: 67357da8-e4b6-49fd-932c-329a5777f143
---
# `/ASSEMBLYMODULE` (Add an MSIL module to the assembly)

## Syntax

> **`/ASSEMBLYMODULE:`*`filename`***

### Arguments

*`filename`*\
The module you want to include in this assembly.

## Remarks

The **`/ASSEMBLYMODULE`** linker option allows you to add a module reference to an assembly. Type information in the module won't be available to the assembly program that added the module reference. However, type information in the module will be available to any program that references the assembly.

Use [`#using`](../../preprocessor/hash-using-directive-cpp.md) to both add a module reference to an assembly and make the module's type information available to the assembly program.

For example, consider the following scenario:

1. Create a module with [`/LN`](ln-create-msil-module.md).

1. Use **`/ASSEMBLYMODULE`** in a different project to include the module in the current compilation, which creates an assembly. This project won't reference the module with `#using`.

1. Any project that references this assembly can now also use types from the module.

Other linker options that affect assembly generation are:

- [`/ASSEMBLYDEBUG`](assemblydebug-add-debuggableattribute.md)

- [`/ASSEMBLYLINKRESOURCE`](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md)

- [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md)

- [`/NOASSEMBLY`](noassembly-create-a-msil-module.md)

- [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

The MSVC linker accepts *`.netmodule`* files as input and the output file produced by the linker will be an assembly or *`.netmodule`* file with no run-time dependence on any of the *`.netmodule`* files that were input to the linker. For more information, see [`.netmodule` files as linker input](netmodule-files-as-linker-input.md).

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Input** property page.

1. Modify the **Add Module to Assembly** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AddModuleNamesToAssembly%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
