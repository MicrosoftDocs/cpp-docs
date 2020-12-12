---
description: "Learn more about: Compiler Error C2071"
title: "Compiler Error C2071"
ms.date: "11/04/2016"
f1_keywords: ["C2071"]
helpviewer_keywords: ["C2071"]
ms.assetid: f8c09255-a5c4-47e3-8089-3d875ae43cc5
---
# Compiler Error C2071

'identifier' : illegal storage class

`identifier` was declared with an invalid [storage class](../../c-language/c-storage-classes.md). This error can be caused when more than one storage class is specified for an identifier, or when the definition is incompatible with the storage class declaration.

To fix this issue, understand the intended storage class of the identifier—for example, **`static`** or **`extern`**—and correct the declaration to match.

## Examples

The following sample generates C2071.

```cpp
// C2071.cpp
// compile with: /c
struct C {
   extern int i;   // C2071
};
struct D {
   int i;   // OK, no extern on an automatic
};
```

The following sample generates C2071.

```cpp
// C2071_b.cpp
// compile with: /c
typedef int x(int i) { return i; }   // C2071
typedef int (x)(int);   // OK, no local definition in typedef
```
