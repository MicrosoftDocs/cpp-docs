---
description: "Learn more about: Compiler Error C2414"
title: "Compiler Error C2414"
ms.date: "11/04/2016"
f1_keywords: ["C2414"]
helpviewer_keywords: ["C2414"]
ms.assetid: bbe94e03-862e-4990-b15e-544ae464727d
---
# Compiler Error C2414

illegal number of operands

### To fix by checking the following possible causes

1. The opcode does not support the number of operands used. Check an assembly-language reference manual to determine the correct number of operands.

1. A newer processor supports the instruction with a different number of operands. Adjust the [/arch (Minimum CPU Architecture)](../../build/reference/arch-minimum-cpu-architecture.md) option to use the later processor.
