---
description: "Learn more about: Assembly-Language Comments"
title: "Assembly-Language Comments"
ms.date: "08/30/2018"
helpviewer_keywords: ["assembly language [C++], comments", "comments [C++], assembly language", "macros [C++], assembly language", "__asm keyword [C++], instructions"]
ms.assetid: 0dc10850-77f5-426e-9dab-185ea28e06e4
---
# Assembly-Language Comments

**Microsoft Specific**

Instructions in an **`__asm`** block can use assembly-language comments:

```cpp
__asm mov ax, offset buff ; Load address of buff
```

Because C macros expand into a single logical line, avoid using assembly-language comments in macros. (See [Defining __asm Blocks as C Macros](../../assembler/inline/defining-asm-blocks-as-c-macros.md).) An **`__asm`** block can also contain C-style comments; for more information, see [Using C or C++ in __asm Blocks](../../assembler/inline/using-c-or-cpp-in-asm-blocks.md).

**END Microsoft Specific**

## See also

[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
