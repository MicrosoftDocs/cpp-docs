---
description: "Learn more about: /DELAYSIGN (Partially Sign an Assembly)"
title: "/DELAYSIGN (Partially Sign an Assembly)"
ms.date: "11/04/2016"
f1_keywords: ["/delaysign", "VC.Project.VCLinkerTool.DelaySign"]
helpviewer_keywords: ["/DELAYSIGN linker option", "DELAYSIGN linker option", "-DELAYSIGN linker option"]
ms.assetid: 15244d30-3ecb-492f-a408-ffe81f38de20
---
# /DELAYSIGN (Partially Sign an Assembly)

```
/DELAYSIGN[:NO]
```

## Arguments

**NO**<br/>
Specifies that the assembly should not be partially signed.

## Remarks

Use **/DELAYSIGN** if you only want to place the public key in the assembly. The default is **/DELAYSIGN:NO**.

The **/DELAYSIGN** option has no effect unless used with [/KEYFILE](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md) or [/KEYCONTAINER](keycontainer-specify-a-key-container-to-sign-an-assembly.md).

When you request a fully signed assembly, the compiler hashes the file that contains the manifest (assembly metadata) and signs that hash with the private key. The resulting digital signature is stored in the file that contains the manifest. When an assembly is delay signed, the linker does not compute and store the signature, but reserves space in the file so the signature can be added later.

For example, using **/DELAYSIGN** allows a tester to put the assembly in the global cache. After testing, you can fully sign the assembly by placing the private key in the assembly.

See [Strong Name Assemblies (Assembly Signing) (C++/CLI)](../../dotnet/strong-name-assemblies-assembly-signing-cpp-cli.md) and [Delay Signing an Assembly](/dotnet/framework/app-domains/delay-sign-assembly) for more information on signing an assembly.

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
