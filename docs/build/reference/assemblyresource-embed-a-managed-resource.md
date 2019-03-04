---
title: "/ASSEMBLYRESOURCE (Embed a Managed Resource)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.EmbedManagedResourceFile", "/ASSEMBLYRESOURCE"]
helpviewer_keywords: ["ASSEMBLYRESOURCE linker option", "assemblies [C++]", "-ASSEMBLYRESOURCE linker option", "assemblies [C++], linking resource files", "/ASSEMBLYRESOURCE linker option"]
ms.assetid: 0ce6e1fb-921b-4b1b-a59c-d35388d789f2
---
# /ASSEMBLYRESOURCE (Embed a Managed Resource)

```
/ASSEMBLYRESOURCE:filename[,[name][,PRIVATE]]
```

## Parameters

*filename*<br/>
The managed resource you want to embed in this assembly.

*name*<br/>
Optional. The logical name for the resource; the name used to load the resource. The default is the name of the file.

Optionally, you can specify if the file should be private in the assembly manifest. By default, *name* is public in the assembly.

## Remarks

Use the /ASSEMBLYRESOURCE option to embed a resource in an assembly.

Resources are public in the assembly when created with the linker. The linker does not allow you to rename the resource in the assembly.

If *filename* is a .NET Framework resource (.resources) file created, for example, by the [Resource File Generator (Resgen.exe)](/dotnet/framework/tools/resgen-exe-resource-file-generator) or in the development environment, it can be accessed with members in the **System.Resources** namespace (see [System.Resources.ResourceManager](https://msdn.microsoft.com/library/system.resources.resourcemanager.aspx) for more information). For all other resources, use the **GetManifestResource**\* methods in **System.Reflection.Assembly** class to access the resource at run time.

Other linker options that affect assembly generation are:

- [/ASSEMBLYDEBUG](../../build/reference/assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](../../build/reference/assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](../../build/reference/assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/DELAYSIGN](../../build/reference/delaysign-partially-sign-an-assembly.md)

- [/KEYFILE](../../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER](../../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [/NOASSEMBLY](../../build/reference/noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Setting Visual C++ Project Properties](../../ide/working-with-project-properties.md).

1. Click the **Linker** folder.

1. Click the **Input** property page.

1. Modify the **Embed Managed Resource File** property.

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.EmbedManagedResourceFile%2A>.

## See also

[Setting Linker Options](../../build/reference/setting-linker-options.md)<br/>
[Linker Options](../../build/reference/linker-options.md)
