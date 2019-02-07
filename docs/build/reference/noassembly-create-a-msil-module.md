---
title: "/NOASSEMBLY (Create a MSIL Module)"
ms.date: "11/04/2016"
f1_keywords: ["/NOASSEMBLY", "VC.Project.VCLinkerTool.TurnOffAssemblyGeneration"]
helpviewer_keywords: ["assemblies [C++]", "-NOASSEMBLY linker option", "/NOASSEMBLY linker option", "NOASSEMBLY linker option", "assemblies [C++], not creating an assembly"]
ms.assetid: 3cea4e70-f451-4395-a626-1930b1b127fe
---
# /NOASSEMBLY (Create a MSIL Module)

```
/NOASSEMBLY
```

## Remarks

The /NOASSEMBLY option tells the linker to create an image for the current output file without a .NET Framework assembly. An MSIL output file without an assembly manifest is called a module.

By default, an assembly is created. You can also use the [/LN (Create MSIL Module)](../../build/reference/ln-create-msil-module.md) compiler option to create a module.

Other linker options that affect assembly generation are:

- [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](../../build/reference/assemblyresource-embed-a-managed-resource.md)

- [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)

- [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Advanced** property page.

1. Modify the **Turn Off Assembly Generation** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.TurnOffAssemblyGeneration%2A>.

## See also

- [Setting Linker Options](../../build/reference/setting-linker-options.md)
- [Linker Options](../../build/reference/linker-options.md)
