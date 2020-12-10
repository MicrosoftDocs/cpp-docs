---
description: "Learn more about: /ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)"
title: "/ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)"
ms.date: "11/04/2016"
f1_keywords: ["/ASSEMBLYLINKRESOURCE", "VC.Project.VCLinkerTool.AssemblyLinkResource"]
helpviewer_keywords: ["-ASSEMBLYLINKRESOURCE linker option", "ASSEMBLYLINKRESOURCE linker option", "/ASSEMBLYLINKRESOURCE linker option"]
ms.assetid: 8b6ad184-1b33-47a4-8513-4803cf915b64
---
# /ASSEMBLYLINKRESOURCE (Link to .NET Framework Resource)

```
/ASSEMBLYLINKRESOURCE:filename
```

## Arguments

*filename*<br/>
The .NET Framework resource file to which you want to link from the assembly.

## Remarks

The /ASSEMBLYLINKRESOURCE option creates a link to a .NET Framework resource in the output file; the resource file is not placed in the output file. [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md) embeds a resource file in the output file.

Linked resources are public in the assembly when created with the linker.

/ASSEMBLYLINKRESOURCE requires that the compilation include [/clr](clr-common-language-runtime-compilation.md); [/LN](ln-create-msil-module.md) or [/NOASSEMBLY](noassembly-create-a-msil-module.md) is not allowed with /ASSEMBLYLINKRESOURCE.

If *filename* is a .NET Framework resource file created, for example, by [Resgen.exe](/dotnet/framework/tools/resgen-exe-resource-file-generator) or in the development environment, it can be accessed with members in the **System.Resources** namespace. For more information, see [System.Resources.ResourceManager](/dotnet/api/system.resources.resourcemanager). For all other resources, use the **GetManifestResource**\* methods in the **System.Reflection.Assembly** class to access the resource at run time.

*filename* can be any file format. For example, you may want to make a native DLL part of the assembly, so it can be installed into the Global Assembly Cache and accessed from managed code in the assembly.

Other linker options that affect assembly generation are:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](delaysign-partially-sign-an-assembly.md)

- [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/NOASSEMBLY](noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Command Line** property page.

1. Type the option into the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)<br/>
[MSVC Linker Options](linker-options.md)
