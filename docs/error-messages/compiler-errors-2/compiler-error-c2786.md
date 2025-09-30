---
title: "Compiler Error C2786"
description: "Learn more about: Compiler Error C2786"
ms.date: 11/04/2016
f1_keywords: ["C2786"]
helpviewer_keywords: ["C2786"]
---
# Compiler Error C2786

> 'type' : invalid operand for __uuidof

## Remarks

The [__uuidof](../../cpp/uuidof-operator.md) operator takes a user-defined type with a GUID attached or an object of such a user-defined type.  Possible causes:

1. The argument is not a user-defined type.

1. **`__uuidof`** cannot extract the GUID from the argument.

## Example

The following example generates C2786:

```cpp
// C2786.cpp
struct __declspec(uuid("00000000-0000-0000-0000-000000000000")) A {};

int main() {
   __uuidof(int);   // C2786
   __uuidof(int *);   // C2786
   __uuidof(A **);   // C2786

   // no error
   __uuidof(A);
   __uuidof(A *);
   __uuidof(A &);
   __uuidof(A[]);

   int i;
   int *pi;
   A **ppa;

   __uuidof(i);      // C2786
   __uuidof(pi);     // C2786
   __uuidof(ppa);    // C2786
}
```
