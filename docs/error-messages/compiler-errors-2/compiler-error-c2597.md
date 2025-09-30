---
title: "Compiler Error C2597"
description: "Learn more about: Compiler Error C2597"
ms.date: 11/04/2016
f1_keywords: ["C2597"]
helpviewer_keywords: ["C2597"]
---
# Compiler Error C2597

> illegal reference to non-static member 'identifier'

## Remarks

Possible causes:

1. A nonstatic member is specified in a static member function. To access the nonstatic member, you must pass in or create a local instance of the class and use a member-access operator (`.` or `->`).

1. The specified identifier is not a member of a class, structure, or union. Check identifier spelling.

1. A member access operator refers to a nonmember function.

## Example

1. The following example generates C2597 and shows how to fix it:

```cpp
// C2597.cpp
// compile with: /c
struct s1 {
   static void func();
   static void func2(s1&);
   int i;
};

void s1::func() {
   i = 1;    // C2597 - static function can't access non-static data member
}

// OK - fix by passing an instance of s1
void s1::func2(s1& a) {
   a.i = 1;
}
```
