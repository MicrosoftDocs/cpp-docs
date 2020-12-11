---
description: "Learn more about: _emit Pseudoinstruction"
title: "_emit Pseudoinstruction"
ms.date: "08/30/2018"
f1_keywords: ["_emit"]
helpviewer_keywords: ["byte defining (inline assembly)", "_emit pseudoinstruction"]
ms.assetid: 004c48f3-364c-4e82-9a51-e326f9cc7b2b
---
# _emit Pseudoinstruction

**Microsoft Specific**

The **_emit** pseudoinstruction defines one byte at the current location in the current text segment. The **_emit** pseudoinstruction resembles the [DB](../../assembler/masm/db.md) directive of MASM.

The following fragment places the bytes 0x4A, 0x43, and 0x4B into the code:

```cpp
#define randasm __asm _emit 0x4A __asm _emit 0x43 __asm _emit 0x4B
.
.
.
__asm {
    randasm
    }
```

> [!CAUTION]
> If `_emit` generates instructions that modify registers, and you compile the application with optimizations, the compiler cannot determine what registers are affected. For example, if `_emit` generates an instruction that modifies the **rax** register, the compiler does not know that **rax** has changed. The compiler might then make an incorrect assumption about the value in that register after the inline assembler code executes. Consequently, your application might exhibit unpredictable behavior when it runs.

**END Microsoft Specific**

## See also

[Using Assembly Language in __asm Blocks](../../assembler/inline/using-assembly-language-in-asm-blocks.md)<br/>
