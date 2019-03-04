---
title: "Targets in Multiple Description Blocks"
ms.date: "11/04/2016"
helpviewer_keywords: ["description blocks", "blocks, multiple description", "multiple description blocks"]
ms.assetid: 8618dcd9-c11d-4562-91a7-0c904ed438a8
---
# Targets in Multiple Description Blocks

To update a target in more than one description block using different commands, specify two consecutive colons (::) between targets and dependents.

```
target.lib :: one.asm two.asm three.asm
    ml one.asm two.asm three.asm
    lib target one.obj two.obj three.obj
target.lib :: four.c five.c
    cl /c four.c five.c
    lib target four.obj five.obj
```

## See also

[Targets](../build/targets.md)
