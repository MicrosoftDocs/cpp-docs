---
description: "Learn more about: Compiler Warning (Level 1) C4731"
title: "Compiler Warning (Level 1) C4731"
ms.date: "11/04/2016"
f1_keywords: ["C4731"]
helpviewer_keywords: ["C4731"]
ms.assetid: 5658c24c-3e6f-4505-835b-1fb92d47cab0
---
# Compiler Warning (Level 1) C4731

'pointer' : frame pointer register 'register' modified by inline assembly code

A frame pointer register was modified. You must save and restore the register in your inline assembly block or frame variable (local or parameter, depending on the register modified), or your code may not work properly.

The following sample generates C4731:

```cpp
// C4731.cpp
// compile with: /W1 /LD
// processor: x86
// C4731 expected
void bad(int p) {
   __asm
   {
      mov ebp, 1
   }

   if (p == 1)
   {
      // ...
   }
}
```

EBP is the frame pointer (FPO is disallowed) and it is being modified. When `p` is later referenced, it is referenced relative to `EBP`. But `EBP` has been overwritten by the code, so the program will not work properly and may even fault.
