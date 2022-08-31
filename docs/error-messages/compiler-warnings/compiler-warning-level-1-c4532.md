---
description: "Learn more about: Compiler Warning (level 1) C4532"
title: "Compiler Warning (level 1) C4532"
ms.date: 08/30/2022
f1_keywords: ["C4532"]
helpviewer_keywords: ["C4532"]
ms.assetid: 4e2a286a-d233-4106-9f65-29be1a94ca02
---
# Compiler Warning (level 1) C4532

> 'continue' : jump out of __finally/finally block has undefined behavior during termination handling

## Remarks

The compiler encountered one of the following keywords:

- [`continue`](../../cpp/continue-statement-cpp.md)

- [`break`](../../cpp/break-statement-cpp.md)

- [`goto`](../../cpp/goto-statement-cpp.md)

causing a jump out of a [`__finally`](../../cpp/try-finally-statement.md) or [`finally`](../../dotnet/finally.md) block during abnormal termination.

If an exception occurs, and while the stack is being unwound during execution of the termination handlers (the **`__finally`** or finally blocks), and your code jumps out of a **`__finally`** block before the **`__finally`** block ends, the behavior is undefined. Control may not return to the unwinding code, so the exception may not be handled properly.

If you must jump out of a **`__finally`** block, check for abnormal termination first.

The [`/sdl` (Enable Additional Security Checks)](../../build/reference/sdl-enable-additional-security-checks.md) compiler option elevates this warning to an error.

## Example

The following sample generates C4532; delete or comment out the jump statements to resolve the warnings.

```cpp
// C4532.cpp
// compile with: /W1
// C4532 expected
int main() {
   int i;
   for (i = 0; i < 10; i++) {
      __try {
      } __finally {
         // Delete the following line to resolve.
         continue;
      }

      __try {
      } __finally {
         // Delete the following line to resolve.
         break;
      }
   }
}
```
