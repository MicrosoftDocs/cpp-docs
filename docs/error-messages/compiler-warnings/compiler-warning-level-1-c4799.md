---
description: "Learn more about: Compiler Warning (level 1) C4799"
title: "Compiler Warning (level 1) C4799"
ms.date: "11/04/2016"
f1_keywords: ["C4799"]
helpviewer_keywords: ["C4799"]
ms.assetid: 8ecbd06f-c778-4371-a2fb-c690b6743ec8
---
# Compiler Warning (level 1) C4799

> No EMMS at end of function '*function*'

The function has at least one MMX instruction, but does not have an `EMMS` instruction. When a multimedia instruction is used, an `EMMS` instruction or `_mm_empty` intrinsic should also be used to clear the multimedia tag word at the end of the MMX code.

You may get C4799 when using ivec.h, indicating that the code does not use properly execute the EMMS instruction before returning. This is a false warning for these headers. You may turn these off by defining _SILENCE_IVEC_C4799 in ivec.h. However, be aware that this will also keep the compiler from giving correct warnings of this type.

For related information, see [Intel's MMX Instruction Set](../../assembler/inline/intel-s-mmx-instruction-set.md).
