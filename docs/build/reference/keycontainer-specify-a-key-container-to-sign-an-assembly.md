---
description: "Learn more about: /KEYCONTAINER (Specify a Key Container to Sign an Assembly)"
title: "/KEYCONTAINER (Specify a Key Container to Sign an Assembly)"
ms.date: "11/04/2016"
f1_keywords: ["VC.Project.VCLinkerTool.KeyContainer", "/keycontainer"]
helpviewer_keywords: ["KEYCONTAINER linker option", "/KEYCONTAINER linker option", "-KEYCONTAINER linker option"]
ms.assetid: 94882d12-b77a-49c7-96d0-18a31aee001e
---
# /KEYCONTAINER (Specify a Key Container to Sign an Assembly)

```
/KEYCONTAINER:name
```

## Arguments

*name*<br/>
Container that contains the key. Place the string in double quotation marks (" ") if it contains a space.

## Remarks

The linker creates a signed assembly by inserting a public key into the assembly manifest and signing the final assembly with the private key. To generate a key file, type [sn -k](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* at the command line. **sn -i** installs the key pair into a container.

If you compile with [/LN](ln-create-msil-module.md), the name of the key file is held in the module and incorporated into the assembly that is created when you compile an assembly that includes an explicit reference to the module, via [#using](../../preprocessor/hash-using-directive-cpp.md), or when linking with [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md).

You can also pass your encryption information to the compiler with [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md). Use [/DELAYSIGN](delaysign-partially-sign-an-assembly.md) if you want a partially signed assembly. See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) for more information on signing an assembly.

Other linker options that affect assembly generation are:

- [/ASSEMBLYDEBUG](assemblydebug-add-debuggableattribute.md)

- [/ASSEMBLYLINKRESOURCE](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [/ASSEMBLYMODULE](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [/ASSEMBLYRESOURCE](assemblyresource-embed-a-managed-resource.md)

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
