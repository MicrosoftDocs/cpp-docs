---
description: "Learn more about: Compiler Error C2078"
title: "Compiler Error C2078"
ms.date: "11/04/2016"
f1_keywords: ["C2078"]
helpviewer_keywords: ["C2078"]
ms.assetid: 9bead850-4123-46cf-a634-5c77ba974b2b
---
# Compiler Error C2078

too many initializers

The number of initializers exceeds the number of objects to be initialized.

The compiler can deduce the correct assignment of initializers to objects and inner objects when inner braces are elided from the initializer list. Complete bracing also eliminates ambiguity and results in correct assignment. Partial bracing can cause C2078 because of ambiguity in the assignment of initializers to objects.

The following sample generates C2078 and shows how to fix it:

```cpp
// C2078.cpp
// Compile by using: cl /c /W4 C2078.cpp
struct S {
   struct {
      int x, y;
   } z[2];
};

int main() {
   int d[2] = {1, 2, 3};   // C2078
   int e[2] = {1, 2};      // OK

   char a[] = {"a", "b"};  // C2078
   char *b[] = {"a", "b"}; // OK
   char c[] = {'a', 'b'};  // OK

   S s1{1, 2, 3, 4};       // OK
   S s2{{1, 2}, {3, 4}};   // C2078
   S s3{{1, 2, 3, 4}};     // OK
   S s4{{{1, 2}, {3, 4}}}; // OK
}
```
