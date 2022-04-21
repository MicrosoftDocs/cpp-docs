---
description: "Learn more about: /STACK (Stack allocations)"
title: "/STACK (Stack allocations)"
ms.date: 02/22/2022
f1_keywords: ["VC.Project.VCLinkerTool.StackReserveSize", "VC.Project.VCLinkerTool.StackCommitSize", "/stack"]
helpviewer_keywords: ["STACK linker option", "-STACK linker option", "memory allocation, stack", "/STACK linker option", "stack, setting size"]
ms.assetid: 73283660-e4bd-47cc-b5ca-04c5d739034c
---
# `/STACK` (Stack allocations)

> **`/STACK:`***`reserve`*[**`,`***`commit`*]

## Remarks

The **`/STACK`** linker option sets the size of the stack in bytes. Use this option only when you build an *`.exe`* file. The **`/STACK`** option is ignored when applied to *`.dll`* files.

The *`reserve`* value specifies the total stack allocation in virtual memory. For ARM64, x86, and x64 machines, the default stack size is 1 MB.

The *`commit`* value is subject to interpretation by the operating system. In WindowsRT, it specifies the amount of physical memory to allocate at a time. Committed virtual memory causes space to be reserved in the paging file. A higher *`commit`* value saves time when the application needs more stack space, but increases the memory requirements and possibly the startup time. For ARM64, x86, and x64 machines, the default *`commit`* value is 4 KB.

Specify the *`reserve`* and *`commit`* values in decimal or C-language hexadecimal notation (use a `0x` prefix).

Another way to set the size of the stack is with the [`STACKSIZE`](stacksize.md) statement in a module-definition (*`.def`*) file. **`STACKSIZE`** overrides the Stack Allocations (**`/STACK`**) option if both are specified. You can change the stack size after the *`.exe`* file is built by using the [`EDITBIN`](editbin-reference.md) tool.

### To set this linker option in the Visual Studio development environment

1. Open the project's **Property Pages** dialog box. For details, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **System** property page.

1. Modify one of the following properties:

   - **Stack Commit Size**

   - **Stack Reserve Size**

### To set this linker option programmatically

1. See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackCommitSize%2A> and <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.StackReserveSize%2A> properties.

## See also

[MSVC linker reference](linking.md)\
[MSVC linker options](linker-options.md)
