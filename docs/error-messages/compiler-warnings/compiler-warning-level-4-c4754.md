---
description: "Learn more about: Compiler Warning (level 4) C4754"
title: "Compiler Warning (level 4) C4754"
ms.date: "11/04/2016"
f1_keywords: ["C4754"]
helpviewer_keywords: ["C4754"]
ms.assetid: e0e4606a-754a-4f42-a274-21a34978d21d
---
# Compiler Warning (level 4) C4754

Conversion rules for arithmetic operations in a comparison mean that one branch cannot be executed.

The C4754 warning is issued because the result of the comparison is always the same. This indicates that one of the branches of the condition is never executed, most likely because the associated integer expression is incorrect. This code defect often occurs in incorrect integer overflow checks on 64-bit architectures.

Integer conversion rules are complex and there are many subtle pitfalls. As an alternative to fixing each C4754 warning, you can update the code to use the [SafeInt Library](../../safeint/safeint-library.md).

## Examples

This sample generates C4754:

```cpp
// C4754a.cpp
// Compile with: /W4 /c
#include "errno.h"

int sum_overflow(unsigned long a, unsigned long b)
{
   unsigned long long x = a + b; // C4754

   if (x > 0xFFFFFFFF)
   {
      // never executes!
      return EOVERFLOW;
   }
   return 0;
}
```

The addition `a + b` could cause an arithmetic overflow before the result is upcast to a 64-bit value and assigned to the 64-bit variable `x`. This means that the check on `x` is redundant and will never catch an overflow. In this case, the compiler emits this warning:

```Output
Warning C4754: Conversion rules for arithmetic operations in the comparison at C4754a.cpp (7) mean that one branch cannot be executed. Cast '(a + ...)' to 'ULONG64' (or similar type of 8 bytes).
```

To eliminate the warning, you can change the assignment statement to cast the operands to 8-byte values:

```cpp
// Casting one operand is sufficient to force all the operands in
// the addition be upcast according to C/C++ conversion rules, but
// casting both is clearer.
unsigned long long x =
   (unsigned long long)a + (unsigned long long)b;
```

The next sample also generates C4754.

```cpp
// C4754b.cpp
// Compile with: /W4 /c
#include "errno.h"

int wrap_overflow(unsigned long a)
{
   if (a + sizeof(unsigned long) < a) // C4754
   {
      // never executes!
      return EOVERFLOW;
   }
   return 0;
}
```

The `sizeof()` operator returns a `size_t`, whose size is architecture-dependent. The example code works on 32-bit architectures where a `size_t` is a 32-bit type. However, on 64-bit architectures, `size_t` is a 64-bit type. The conversion rules for integers mean that `a` is upcast to a 64-bit value in the expression `a + b < a` as if it were written `(size_t)a + (size_t)b < (size_t)a`. When `a` and `b` are 32-bit integers, the 64-bit addition operation can never overflow, and the constraint never holds. As a result, the code never detects an integer overflow condition on 64-bit architectures. This example causes the compiler to emit this warning:

```Output
Warning C4754: Conversion rules for arithmetic operations in the comparison at C4754b.cpp (7) mean that one branch cannot be executed. Cast '4' to 'ULONG' (or similar type of 4 bytes).
```

Notice that the warning message explicitly lists the constant value 4 instead of the original source string—by the time the warning analysis encounters the offending code, `sizeof(unsigned long)` has already been converted to a constant. Therefore, you may have to track down which expression in the source code is associated with the constant value in the warning message. The most common sources of code resolved to constants in C4754 warning messages are expressions such as `sizeof(TYPE)` and `strlen(szConstantString)`.

In this case, the fixed code would resemble this:

```cpp
// Casting the result of sizeof() to unsigned long ensures
// that all the addition operands are 32-bit, so any overflow
// is detected by the check.
if (a + (unsigned long)sizeof(unsigned long) < a)
```

**Note** The line number referred to in compiler warnings is the last line of a statement. In a warning message about a complex conditional statement that's spread over multiple lines, the line that has the code defect may be several lines before the line that's reported. For example:

```cpp
unsigned long a;

if (a + sizeof(unsigned long) < a || // incorrect check
    condition1() ||
    a == 0) {    // C4754 warning reported on this line
         // never executes!
         return INVALID_PARAMETER;
}
```
