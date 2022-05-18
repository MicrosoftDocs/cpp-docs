---
description: "Learn more about: /ASSEMBLYDEBUG (Add DebuggableAttribute)"
title: "/ASSEMBLYDEBUG (Add DebuggableAttribute)"
ms.date: 05/11/2022
f1_keywords: ["VC.Project.VCLinkerTool.AssemblyDebug", "/ASSEMBLYDEBUG"]
helpviewer_keywords: ["/ASSEMBLYDEBUG linker option", "-ASSEMBLYDEBUG linker option", "ASSEMBLYDEBUG linker option"]
ms.assetid: 94443af3-470c-41d7-83a0-7434563d7982
---
# `/ASSEMBLYDEBUG` (Add DebuggableAttribute)

Specify whether to emit the `DebuggableAttribute` attribute with debug information tracking and to disable JIT optimizations.

## Syntax

> **`/ASSEMBLYDEBUG`**\[**`:DISABLE`**]

## Remarks

The **`/ASSEMBLYDEBUG`** linker option emits the `DebuggableAttribute` attribute with debug information tracking and disables JIT optimizations. This option is the same as specifying the following attribute in source:

```cpp
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG
```

**`/ASSEMBLYDEBUG:DISABLE`** emits the `DebuggableAttribute` attribute but disables the tracking of debug information and enables JIT optimizations. This option is the same as specifying the following attribute in source:

```cpp
[assembly:Debuggable(false, false)];   // same as /ASSEMBLYDEBUG:DISABLE
```

By default, the linker doesn't emit the `DebuggableAttribute` attribute.

`DebuggableAttribute` can also be added to an assembly directly in source code. For example:

```cpp
[assembly:Debuggable(true, true)];   // same as /ASSEMBLYDEBUG
```

You must explicitly specify that a managed image is debuggable. The [`/Zi`](z7-zi-zi-debug-information-format.md) option alone is insufficient.

Other linker options that affect assembly generation are:

- [`/ASSEMBLYLINKRESOURCE`](assemblylinkresource-link-to-dotnet-framework-resource.md)

- [`/ASSEMBLYMODULE`](assemblymodule-add-a-msil-module-to-the-assembly.md)

- [`/ASSEMBLYRESOURCE`](assemblyresource-embed-a-managed-resource.md)

- [`/DELAYSIGN`](delaysign-partially-sign-an-assembly.md)

- [`/KEYCONTAINER`](keycontainer-specify-a-key-container-to-sign-an-assembly.md)

- [`/KEYFILE`](keyfile-specify-key-or-key-pair-to-sign-an-assembly.md)

- [`/NOASSEMBLY`](noassembly-create-a-msil-module.md)

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Debug** property page.

1. Modify the **Debuggable Assembly** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.AssemblyDebug%2A>.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
