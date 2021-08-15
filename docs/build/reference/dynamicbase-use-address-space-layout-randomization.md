---
description: "Learn more about: /DYNAMICBASE (Use address space layout randomization)"
title: "/DYNAMICBASE (Use address space layout randomization)"
ms.date: "06/12/2018"
f1_keywords: ["VC.Project.VCLinkerTool.RandomizedBaseAddress"]
helpviewer_keywords: ["-DYNAMICBASE linker option", "/DYNAMICBASE linker option", "DYNAMICBASE linker option"]
ms.assetid: 6c0ced8e-fe9c-4b63-b956-eb8a55fbceb2
---
# /DYNAMICBASE (Use address space layout randomization)

Specifies whether to generate an executable image that can be randomly rebased at load time by using the address space layout randomization (ASLR) feature of Windows that was first available in Windows Vista.

## Syntax

> **/DYNAMICBASE**[**:NO**]

## Remarks

The **/DYNAMICBASE** option modifies the header of an *executable image*, a .dll or .exe file, to indicate whether the application should be randomly rebased at load time, and enables virtual address allocation randomization, which affects the virtual memory location of heaps, stacks, and other operating system allocations. The **/DYNAMICBASE** option applies to both 32-bit and 64-bit images. ASLR is supported on Windows Vista and later operating systems. The option is ignored by earlier operating systems.

By default, **/DYNAMICBASE** is enabled. To disable this option, use **/DYNAMICBASE:NO**. The **/DYNAMICBASE** option is required for the [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md) option to have an effect.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Advanced** property page.

1. Modify the **Randomized Base Address** property.

### To set this linker option programmatically

- See <xref:Microsoft.VisualStudio.VCProjectEngine.VCLinkerTool.RandomizedBaseAddress%2A>.

## See also

- [MSVC linker reference](linking.md)
- [MSVC Linker Options](linker-options.md)
- [/HIGHENTROPYVA](highentropyva-support-64-bit-aslr.md)
- [Windows ISV Software Security Defenses](/previous-versions/bb430720(v=msdn.10))
