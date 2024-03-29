---
description: "Learn more about: __assume"
title: "__assume"
ms.date: 08/03/2022
f1_keywords: ["__assume", "_assume", "__assume_cpp"]
helpviewer_keywords: ["__assume keyword [C++]"]
ms.assetid: d8565123-b132-44b1-8235-5a8c8bff85a7
---
# `__assume`

**Microsoft Specific**

Passes a hint to the optimizer.

## Syntax

```C
__assume(
   expression
)
```

### Parameters

*`expression`*\
For reachable code, any expression that is assumed to evaluate to **`true`**. Use `0` to indicate unreachable code to the optimizer.

## Remarks

The optimizer assumes that the condition represented by `expression` is **`true`** at the point where the keyword appears and remains true until `expression` is modified (for example, by assignment to a variable). Selective use of hints passed to the optimizer by **`__assume`** can improve optimization.

If the **`__assume`** statement is written as a contradiction (an expression that always evaluates to **`false`**), it's always treated as `__assume(0)`. If your code isn't behaving as expected, ensure that the `expression` you defined is valid and **`true`**, as described earlier. The `__assume(0)` statement is a special case. Use `__assume(0)` to indicate a code path that can't be reached.

> [!WARNING]
> A program must not contain an invalid **`__assume`** statement on a reachable path. If the compiler can reach an invalid **`__assume`** statement, the program might cause unpredictable and potentially dangerous behavior.

For compatibility with previous versions, **`_assume`** is a synonym for **`__assume`** unless compiler option [`/Za` (Disable language extensions)](../build/reference/za-ze-disable-language-extensions.md) is specified.

`__assume` isn't a genuine intrinsic. It doesn't have to be declared as a function and it can't be used in a `#pragma intrinsic` directive. Although no code is generated, the code generated by the optimizer is affected.

Use **`__assume`** in an [`ASSERT`](../c-runtime-library/reference/assert-asserte-assert-expr-macros.md) only when the assertion isn't recoverable. Don't use **`__assume`** in an assertion for which you have subsequent error recovery code because the compiler might optimize away the error-handling code.

## Requirements

| Intrinsic | Architecture |
|--|--|
| **`__assume`** | x86, ARM, x64, ARM64, ARM64EC |

## Example

The following example shows how to use `__assume(0)` to indicate that the **`default`** case of a **`switch`** statement can't be reached. It's the most typical use of `__assume(0)`. Here, the programmer knows that the only possible inputs for `p` will be 1 or 2. If another value is passed in for `p`, the program becomes invalid and causes unpredictable behavior.

```cpp
// compiler_intrinsics__assume.cpp

void func1(int /*ignored*/)
{
}

int main(int p)
{
   switch(p)
   {
   case 1:
      func1(1);
      break;
   case 2:
      func1(-1);
      break;
   default:
      __assume(0);
      // This tells the optimizer that the default
      // cannot be reached. As so, it does not have to generate
      // the extra code to check that 'p' has a value
      // not represented by a case arm. This makes the switch
      // run faster.
   }
}
```

As a result of the `__assume(0)` statement, the compiler doesn't generate code to test whether `p` has a value that isn't represented in a case statement.

If you aren't sure that the expression will always be **`true`** at runtime, you can use the `assert` function to protect the code. This macro definition wraps the **`__assume`** statement with a check:

```C
#define ASSUME(e) (((e) || (assert(e), (e))), __assume(e))
```

For the **`default`** case optimization to work, the `__assume(0)` statement must be the first statement in the body of the **`default`** case. Unfortunately, the `assert` in the `ASSUME` macro prevents the compiler from performing this optimization. As an alternative, you can use a separate macro, as shown here:

```C
#ifdef DEBUG
// This code is supposed to be unreachable, so assert
# define NODEFAULT   assert(0)
#else
# define NODEFAULT   __assume(0)
#endif
// . . .
   default:
      NODEFAULT;
```

**END Microsoft Specific**

## See also

[Compiler intrinsics](../intrinsics/compiler-intrinsics.md)\
[Keywords](../cpp/keywords-cpp.md)
