---
description: "Learn more about: /ASSEMBLYRESOURCE (Embed a managed resource)"
title: "/ASSEMBLYRESOURCE (Embed a managed resource)"
ms.date: 05/11/2022
f1_keywords: ["VC.Project.VCLinkerTool.EmbedManagedResourceFile", "/ASSEMBLYRESOURCE"]
helpviewer_keywords: ["ASSEMBLYRESOURCE linker option", "assemblies [C++]", "-ASSEMBLYRESOURCE linker option", "assemblies [C++], linking resource files", "/ASSEMBLYRESOURCE linker option"]
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
---
# `/ASSEMBLYRESOURCE` (Embed a managed resource)

Embeds a managed resource in an assembly.

## Syntax

> **`/ASSEMBLYRESOURCE:`*`filename`***\[**`,`**\[***`name`***]\[**`,PRIVATE`**]]

## Arguments

*`filename`*\
The managed resource you want to embed in this assembly.

*`name`*\
Optional. The logical name for the resource; the name used to load the resource. The default is the name of the file.

Optionally, you can use `PRIVATE` to specify if the file should be private in the assembly manifest. By default, *`name`* is public in the assembly.

## Remarks

Use the **`/ASSEMBLYRESOURCE`** linker option to embed a resource in an assembly.

Resources are public in the assembly when created with the linker. The linker doesn't allow you to rename the resource in the assembly.

If *`filename`* is a .NET Framework resource (*`.resources`*) file created, for example, by the [Resource file generator (`Resgen.exe`)](/dotnet/framework/tools/resgen-exe-resource-file-generator) or in the development environment, it can be accessed with members in the `System.Resources` namespace. For more information, see [`System.Resources.ResourceManager`](/dotnet/api/system.resources.resourcemanager). For all other resources, use the `GetManifestResource*` methods in the `System.Reflection.Assembly` class to access the resource at run time.

Other linker options that affect assembly generation are:

- [`/ASSEMBLYDEBUG`](assemblydebug-add-debuggableattribute.md)

- [`/ASSEMBLYLINKRESOURCE`](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md)

- [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [`/NOASSEMBLY`](noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Input** property page.

1. Modify the **Embed Managed Resource File** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
