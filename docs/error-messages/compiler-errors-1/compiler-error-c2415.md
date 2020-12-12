---
description: "Learn more about: Compiler Error C2415"
title: "Compiler Error C2415"
ms.date: "11/04/2016"
f1_keywords: ["C2415"]
helpviewer_keywords: ["C2415"]
ms.assetid: f225c913-2bea-46b1-b096-3d358ac94a15
---
# Compiler Error C2415

improper operand type

The opcode does not use operands of this type.

### To fix by checking the following possible causes

1. The opcode does not support the number of operands used. Check an assembly-language reference manual to determine the correct number of operands.

1. A newer processor supports the instruction with additional types. Adjust the [/arch (Minimum CPU Architecture)](../../build/reference/arch-minimum-cpu-architecture.md) option to use the later processor.
