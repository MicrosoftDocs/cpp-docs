---
description: "Learn more about: Strong Name Assemblies (Assembly Signing) (C++/CLI)"
title: "Strong Name Assemblies (Assembly Signing) (C++/CLI)"
ms.date: "11/04/2016"
helpviewer_keywords: ["assemblies [C++]", "signing assemblies", ".NET Framework [C++], assembly signing", "assemblies [C++], signing", "linker [C++], assembly signing", "strong-named assemblies [C++]"]
ms.assetid: c337cd3f-e5dd-4c6f-a1ad-437e85dba1cc
---
# Strong Name Assemblies (Assembly Signing) (C++/CLI)

This topic discusses how you can sign your assembly, often referred to as giving your assembly a strong name.

## Remarks

When using Visual C++, use linker options to sign your assembly to avoid issues related to the CLR attributes for assembly signing:

- <xref:System.Reflection.AssemblyDelaySignAttribute>

- <xref:System.Reflection.AssemblyKeyFileAttribute>

- <xref:System.Reflection.AssemblyKeyNameAttribute>

Reasons for not using the attributes include the fact that the key name is visible in assembly metadata, which can be a security risk if the file name includes confidential information. Also, the build process used by the Visual C++ development environment will invalidate the key with which the assembly is signed if you use CLR attributes to give an assembly a strong name, and then run a post-processing tool like mt.exe on the assembly.

If you build at the command line, use linker options to sign your assembly, and then run a post-processing tool (like mt.exe), you will need to re-sign the assembly with sn.exe. Alternatively, you can build and delay sign the assembly and after running post-processing tools, complete the signing.

If you use the signing attributes when building in the development environment, you can successfully sign the assembly by explicitly calling sn.exe ([Sn.exe (Strong Name Tool)](/dotnet/framework/tools/sn-exe-strong-name-tool)) in a post-build event. For more information, see [Specifying Build Events](../build/specifying-build-events.md). Build times may be less if you use attributes and a post-build event, compared to using a linker options.

The following linker options support assembly signing:

- [/DELAYSIGN (Partially Sign an Assembly)](../build/reference/delaysign-partially-sign-an-assembly.md)

- [/KEYFILE (Specify Key or Key Pair to Sign an Assembly)](../build/reference/keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [/KEYCONTAINER (Specify a Key Container to Sign an Assembly)](../build/reference/keycontainer-specify-a-key-container-to-sign-an-assembly.md)

For more information on strong assemblies, see [Creating and Using Strong-Named Assemblies](/dotnet/framework/app-domains/create-and-use-strong-named-assemblies).

## See also

[.NET Programming with C++/CLI (Visual C++)](../dotnet/dotnet-programming-with-cpp-cli-visual-cpp.md)
