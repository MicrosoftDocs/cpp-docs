---
description: "Learn more about: Compiler Warning (level 1) C4077"
title: "Compiler Warning (level 1) C4077"
ms.date: "11/04/2016"
f1_keywords: ["C4077"]
helpviewer_keywords: ["C4077"]
ms.assetid: c2d28805-b33f-41ad-afba-33b3f788c649
---
# Compiler Warning (level 1) C4077

unknown check_stack option

The old form of the **check_stack** pragma is used with an unknown argument. The argument must be `+`, `-`, `(on)`, `(off)`, or empty.

The compiler ignores the pragma and leaves the stack checking unchanged.

## Example

```cpp
// C4077.cpp
// compile with: /W1 /LD
#pragma check_stack yes // C4077
#pragma check_stack +    // Correct old form
#pragma check_stack (on) // Correct new form
```
