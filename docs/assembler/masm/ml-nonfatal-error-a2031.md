---
title: "ML Nonfatal Error A2031"
ms.date: "08/30/2018"
ms.topic: "error-reference"
f1_keywords: ["A2031"]
helpviewer_keywords: ["A2031"]
ms.assetid: d5b11f58-4a00-42be-9062-8fa8728e6306
---
# ML Nonfatal Error A2031

**must be index or base register**

An attempt was made to use a register that was not a base or index register in a memory expression.

For example, the following expressions cause this error:

```asm
[ax]
[bl]
```

## See also

- [ML Error Messages](../../assembler/masm/ml-error-messages.md)
