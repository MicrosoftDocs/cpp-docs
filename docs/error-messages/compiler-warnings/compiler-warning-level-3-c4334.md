---
title: "Compiler Warning (level 3) C4334"
description: "Learn more about: Compiler Warning (level 3) C4334"
ms.date: 11/04/2016
f1_keywords: ["C4334"]
helpviewer_keywords: ["C4334"]
---
# Compiler Warning (level 3) C4334

> 'operator': result of 32-bit shift implicitly converted to 64 bits (was 64-bit shift intended?)

## Remarks

The result of 32-bit shift was converted to 64-bit, and the compiler suspects that a 64-bit shift was intended. Resolve this warning by using a 64-bit shift. If a 32-bit shift is intentional, then cast the shift result to 32-bit to make it clear to the compiler.

## Example

The following example generates C4334.

```cpp
// C4334.cpp
// compile with: /W3 /c
void SetBit(unsigned __int64 *p, int i) {
   *p |= (1 << i); // C4334, 32-bit shift cast to 64-bit
   *p |= (1i64 << i); // OK, 64-bit shift
   *p |= static_cast<int>(1 << i); // OK, 32-bit shift saved to 64-bit result
   *p |= static_cast<__int64>(1) << i; // OK, 64-bit shift
}
```
