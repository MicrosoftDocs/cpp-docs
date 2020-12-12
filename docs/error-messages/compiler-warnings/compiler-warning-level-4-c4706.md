---
description: "Learn more about: Compiler Warning (level 4) C4706"
title: "Compiler Warning (level 4) C4706"
ms.date: "11/04/2016"
f1_keywords: ["C4706"]
helpviewer_keywords: ["C4706"]
ms.assetid: 89cd3f4f-812c-4a4b-9426-65a5a6d1b99c
---
# Compiler Warning (level 4) C4706

assignment within conditional expression

The test value in a conditional expression was the result of an assignment.

An assignment has a value (the value on the left side of the assignment) that can be used legally in another expression, including a test expression.

The following sample generates C4706:

```cpp
// C4706a.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( a  = b ) // C4706
   {
   }
}
```

The warning will occur even if you double the parentheses around the test condition:

```cpp
// C4706b.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( ( a  =  b ) ) // C4706
   {
   }
}
```

If your intention is to test a relation and not to make an assignment, use the `==` operator. For example, the following line tests whether a and b are equal:

```cpp
// C4706c.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( a == b )
   {
   }
}
```

If you intend to make your test value the result of an assignment, test to ensure that the assignment is non-zero or not null. For example, the following code will not generate this warning:

```cpp
// C4706d.cpp
// compile with: /W4
int main()
{
   int a = 0, b = 0;
   if ( ( a = b ) != 0 )
   {
   }
}
```
