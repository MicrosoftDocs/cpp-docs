---
title: "/HIGHENTROPYVA (C++) - Visual Studio"
ms.date: "06/12/2018"
f1_keywords: ["/HIGHENTROPYVA"]
helpviewer_keywords: ["HIGHENTROPYVA editbin option", "-HIGHENTROPYVA editbin option", "/HIGHENTROPYVA editbin option"]
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
---
# /HIGHENTROPYVA

Specifies whether the executable image supports high-entropy 64-bit address space layout randomization (ASLR).

## Syntax

> **/HIGHENTROPYVA**[**:NO**]

## Remarks

This option modifies the header of an *executable image*, a .dll file or .exe file, to indicate whether ASLR with 64-bit addresses is supported. When this option is set on an executable and all of the modules that it depends on, an operating system that supports 64-bit ASLR can rebase the segments of the executable image at load time by using randomized addresses in a 64-bit virtual address space. This large address space makes it more difficult for an attacker to guess the location of a particular memory region.

By default, the linker enables **/HIGHENTROPYVA** for 64-bit executable images. This option requires [/LARGEADDRESSAWARE](largeaddressaware.md), which is also enabled by default for 64-bit images. **/HIGHENTROPYVA** is not applicable to 32-bit executable images, where the option is ignored. To explicitly disable this option, use **/HIGHENTROPYVA:NO**. For this option to have an effect, the [/DYNAMICBASE](dynamicbase.md) option must also be set.

## See also

- [EDITBIN Options](editbin-options.md)
- [/DYNAMICBASE](dynamicbase.md)
- [Windows ISV Software Security Defenses](https://msdn.microsoft.com/library/bb430720.aspx)
