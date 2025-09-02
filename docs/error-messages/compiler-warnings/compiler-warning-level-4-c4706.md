---
description: "Learn more about: Compiler Warning (level 4) C4706"
title: "Compiler Warning (level 4) C4706"
ms.date: "3/5/2025"
f1_keywords: ["C4706"]
helpviewer_keywords: ["C4706"]
---
# Compiler Warning (level 4) C4706

> assignment used as a condition

## Remarks

The test value in a conditional expression is the result of an assignment.

An assignment has a value (the value on the left side of the assignment) that can be used legally in another expression, including a test expression.

## Example

The following sample generates C4706:

```cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if (a = b) // C4706
   {
   }
}
```

Suppress the warning with `((`*expression*`))`. For example:

```cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ((a = b)) // No warning
   {
   }
}
```

If your intention is to test a relation, not to make an assignment, use the `==` operator. For example, the following tests whether a and b are equal:

```cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if (a == b)
   {
   }
}
```

If you intend to make your test value the result of an assignment, test to ensure that the assignment is non-zero or non-null. For example, the following code doesn't generate this warning:

```cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ((a = b) != 0)
   {
   }
}
```
