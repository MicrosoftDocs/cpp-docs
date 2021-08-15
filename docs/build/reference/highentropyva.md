---
description: "Learn more about: /HIGHENTROPYVA"
title: "/HIGHENTROPYVA"
ms.date: "06/12/2018"
f1_keywords: ["/HIGHENTROPYVA"]
helpviewer_keywords: ["HIGHENTROPYVA editbin option", "-HIGHENTROPYVA editbin option", "/HIGHENTROPYVA editbin option"]
ms.assetid: ef4b7c63-440d-40ca-b39d-edefb3217505
---
# /HIGHENTROPYVA

Specifies whether the executable image supports high-entropy 64-bit address space layout randomization (ASLR).

## Syntax

> **`/HIGHENTROPYVA`**[**`:NO`**]

## Remarks

This option modifies the header of an *executable image* file (for example, a *`.dll`* or *`.exe`* file), to indicate support for 64-bit address ASLR. To have an effect, set the option on both the executable and all modules that it depends on. Then operating systems that support 64-bit ASLR can rebase the executable image's segments at load time by using randomized 64-bit virtual addresses. This large address space makes it more difficult for an attacker to guess the location of a particular memory region.

By default, the linker enables **`/HIGHENTROPYVA`** for 64-bit executable images. This option requires both [`/DYNAMICBASE`](dynamicbase.md) and [`/LARGEADDRESSAWARE`](largeaddressaware.md), which are also enabled by default for 64-bit images. **`/HIGHENTROPYVA`** isn't applicable to 32-bit executable images, where the option is ignored. To explicitly disable this option, use **`/HIGHENTROPYVA:NO`**.

## See also

[EDITBIN Options](editbin-options.md)\
[`/DYNAMICBASE`](dynamicbase.md)\
[`/LARGEADDRESSAWARE`](largeaddressaware.md)\
[Windows ISV Software Security Defenses](/previous-versions/bb430720(v=msdn.10))
