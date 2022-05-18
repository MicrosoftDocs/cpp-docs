---
description: "Learn more about: /ASSEMBLYLINKRESOURCE (Link to .NET Framework resource)"
title: "/ASSEMBLYLINKRESOURCE (Link to .NET Framework resource)"
ms.date: 05/11/2022
f1_keywords: ["/ASSEMBLYLINKRESOURCE", "VC.Project.VCLinkerTool.AssemblyLinkResource"]
helpviewer_keywords: ["-ASSEMBLYLINKRESOURCE linker option", "ASSEMBLYLINKRESOURCE linker option", "/ASSEMBLYLINKRESOURCE linker option"]
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
---
# `/ASSEMBLYLINKRESOURCE` (Link to .NET Framework resource)

Create a link to a .NET Framework resource in the output file.

## Syntax

> **`/ASSEMBLYLINKRESOURCE:`*`filename`***

## Arguments

*`filename`*
The .NET Framework resource file to link from the assembly.

## Remarks

The **`/ASSEMBLYLINKRESOURCE`** linker option creates a link to a .NET Framework resource in the output file. The resource file isn't placed in the output file. Use the [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md) option to embed a resource file in the output file.

Linked resources are public in the assembly when created with the linker.

**`/ASSEMBLYLINKRESOURCE`** requires the [`/clr`](clr-common-language-runtime-compilation.md) compiler option. The [`/LN`](ln-create-msil-module.md) or [`/NOASSEMBLY`](noassembly-create-a-msil-module.md) options aren't allowed with **`/ASSEMBLYLINKRESOURCE`**.

If *`filename`* is a .NET Framework resource file that's created, for example, by [`Resgen.exe`](/dotnet/framework/tools/resgen-exe-resource-file-generator) or in the development environment, it can be accessed with members in the `System.Resources` namespace. For more information, see [`System.Resources.ResourceManager`](/dotnet/api/system.resources.resourcemanager). For all other resources, use the `GetManifestResource*` methods in the `System.Reflection.Assembly` class to access the resource at run time.

*`filename`* can have any file format. For example, you may want to make a native DLL part of the assembly. Then it can be installed into the Global Assembly Cache and accessed from managed code in the assembly.

Other linker options that affect assembly generation are:

- [`/ASSEMBLYDEBUG`](assemblydebug-add-debuggableattribute.md)

- [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md)

- [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md)

- [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [`/NOASSEMBLY`](noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. Enter the option in **Additional Options**. Choose **OK** or **Apply** to apply the change.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
