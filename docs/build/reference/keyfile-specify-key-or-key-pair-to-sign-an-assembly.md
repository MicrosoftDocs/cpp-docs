---
title: "/KEYFILE (Specify Key or Key Pair to Sign an Assembly)"
description: "Learn more about: /KEYFILE (Specify Key or Key Pair to Sign an Assembly)"
ms.date: 03/24/2025
f1_keywords: ["/keyfile", "VC.Project.VCLinkerTool.KeyFile"]
helpviewer_keywords: ["/KEYFILE linker option", "-KEYFILE linker option", "KEYFILE linker option"]
---
# `/KEYFILE` (Specify Key or Key Pair to Sign an Assembly)

```
/KEYFILE:filename
```

## Arguments

*`filename`*\
File that contains the key. Place the string in double quotation marks (" ") if it contains a space.

## Remarks

The linker inserts the public key into the assembly manifest and then signs the final assembly with the private key. To generate a key file, type [`sn -k`](/dotnet/framework/tools/sn-exe-strong-name-tool) *filename* at the command line. A signed assembly is said to have a strong name.

If you compile with [`/LN`](ln-create-msil-module.md), the name of the key file is held in the module and incorporated into the assembly that is created when you compile an assembly that includes an explicit reference to the module, via [`#using`](../../preprocessor/hash-using-directive-cpp.md), or when linking with [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md).

You can also pass your encryption information to the linker with [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md). Use [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md) if you want a partially signed assembly. For more information on signing an assembly, see [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) and [Creating and Using Strong-Named Assemblies](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies).

In case both **`/KEYFILE`** and **`/KEYCONTAINER`** are specified (either by command-line option or by custom attribute), the linker will first try the key container. If that succeeds, then the assembly is signed with the information in the key container. If the linker doesn't find the key container, it will try the file specified with /KEYFILE. If that succeeds, the assembly is signed with the information in the key file and the key information will be installed in the key container (similar to sn -i) so that on the next compilation, the key container will be valid.

A key file might contain only the public key.

Other linker options that affect assembly generation are:

- [`/ASSEMBLYDEBUG`](assemblydebug-add-debuggableattribute.md)
- [`/ASSEMBLYLINKRESOURCE`](assemblylinkresource-link-to-dotnet-framework-resource.md)
- [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md)
- [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md)
- [`/NOASSEMBLY`](noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).
1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.
1. Enter the option into the **Additional Options** box.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AdditionalOptions%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC Linker Options](linker-options.md)
