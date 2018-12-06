---
title: "/HIGHENTROPYVA (Support 64-Bit ASLR)"
ms.date: "06/12/2018"
ms.assetid: fe35f9f7-d28e-4694-9aeb-a79db06168e0
---
# /HIGHENTROPYVA (Support 64-Bit ASLR)

Specifies whether the executable image supports high-entropy 64-bit address space layout randomization (ASLR).

## Syntax

> **/HIGHENTROPYVA**[**:NO**]

## Remarks

**/HIGHENTROPYVA** modifies the header of an *executable image*, a .dll file or .exe file, to indicate whether ASLR can use the entire 64-bit address space. When this option is set on an executable and all of the modules that it depends on, an operating system that supports 64-bit ASLR can rebase the segments of the executable image at load time by using randomized addresses in a 64-bit virtual address space. This large address space makes it more difficult for an attacker to guess the location of a particular memory region.

By default, **/HIGHENTROPYVA** is enabled for 64-bit executable images. This option requires [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md), which is also enabled by default for 64-bit images. **/HIGHENTROPYVA** is not applicable to 32-bit executable images, where the linker ignores the option. To explicitly disable this option, use **/HIGHENTROPYVA:NO**.

For **/HIGHENTROPYVA** to have an effect at load time, [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md) must also be enabled. **/DYNAMICBASE** is enabled by default, and is required to enable ASLR in Windows Vista and later operating systems. Earlier versions of Windows ignore this flag.

### To set this linker option in Visual Studio

1. Open the project **Property Pages** dialog box. For more information, see [Working with Project Properties](../working-with-project-properties.md).

1. Select the **Configuration Properties** > **Linker** > **Command Line** property page.

1. In **Additional Options**, enter `/HIGHENTROPYVA` or `/HIGHENTROPYVA:NO`.

## See also

- [Setting Linker Options](setting-linker-options.md)
- [Linker Options](linker-options.md)
- [/DYNAMICBASE](dynamicbase-use-address-space-layout-randomization.md)
- [/LARGEADDRESSAWARE](largeaddressaware-handle-large-addresses.md)
- [Windows ISV Software Security Defenses](https://msdn.microsoft.com/library/bb430720.aspx)
