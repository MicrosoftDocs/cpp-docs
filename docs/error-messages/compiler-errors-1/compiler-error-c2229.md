---
description: "Learn more about: Compiler Error C2229"
title: "Compiler Error C2229"
ms.date: "11/04/2016"
f1_keywords: ["C2229"]
helpviewer_keywords: ["C2229"]
ms.assetid: 933c7cf2-a463-4e74-b0b4-59dedad987fb
---
# Compiler Error C2229

type 'identifier' has an illegal zero-sized array

A member of a structure or bit field contains a zero-sized array that is not the last member.

Because you can have a zero sized array as the last member of the struct, you must specify its size when you allocate the struct.

If the zero sized array is not the last member of the struct, the compiler can't calculate the offset for the remaining fields.

The following sample generates C2229:

```cpp
// C2229.cpp
struct S {
   int a[0];  // C2229  zero-sized array
   int b[1];
};

struct S2 {
   int a;
   int b[0];
};

int main() {
   // allocate 7 elements for b field
   S2* s2 = (S2*)new int[sizeof(S2) + 7*sizeof(int)];
   s2->b[6] = 100;
}
```
