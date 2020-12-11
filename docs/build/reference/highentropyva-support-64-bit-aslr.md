---
description: "Learn more about: /HIGHENTROPYVA (Support 64-Bit ASLR)"
title: "/HIGHENTROPYVA (Support 64-Bit ASLR)"
ms.date: "06/12/2018"
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
---
# /HIGHENTROPYVA (Support 64-Bit ASLR)

Specifies whether the executable image supports high-entropy 64-bit address space layout randomization (ASLR).

## Syntax

> **`/HIGHENTROPYVA`**[**`:NO`**]

## Remarks

**`/HIGHENTROPYVA`** modifies the header of an *executable image* file (for example, a *`.dll`* or *`.exe`* file), to indicate whether ASLR can use the entire 64-bit address space.  To have an effect, set the option on both the executable and all modules that it depends on. Then an operating system that supports 64-bit ASLR can rebase the executable image's segments at load time by using 64-bit randomized virtual addresses. This large address space makes it more difficult for an attacker to guess the location of a particular memory region.

By default, **`/HIGHENTROPYVA`** is enabled for 64-bit executable images. This option requires [`/LARGEADDRESSAWARE`](largeaddressaware-handle-large-addresses.md), which is also enabled by default for 64-bit images. **`/HIGHENTROPYVA`** isn't applicable to 32-bit executable images, where the linker ignores the option. To explicitly disable this option, use **`/HIGHENTROPYVA:NO`**.

For **`/HIGHENTROPYVA`** to have an effect at load time, [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md) must also be enabled. **`/DYNAMICBASE`** is enabled by default, and is required to enable ASLR in Windows Vista and later operating systems. Earlier versions of Windows ignore this flag.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Set C++ compiler and build properties in Visual Studio](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter `/HIGHENTROPYVA` or `/HIGHENTROPYVA:NO`.

## See also

- [MSVC linker reference](linking.md)
- [MSVC linker options](linker-options.md)
- [`/DYNAMICBASE`](dynamicbase-use-address-space-layout-randomization.md)
- [`/LARGEADDRESSAWARE`](largeaddressaware-handle-large-addresses.md)
- [Windows ISV Software Security Defenses](/previous-versions/bb430720(v=msdn.10))
