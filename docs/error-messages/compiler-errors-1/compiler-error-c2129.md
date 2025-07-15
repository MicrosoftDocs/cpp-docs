---
description: "Learn more about: Compiler Error C2129"
title: "Compiler Error C2129"
ms.date: "11/04/2016"
f1_keywords: ["C2129"]
helpviewer_keywords: ["C2129"]
ms.assetid: 21a8223e-1d22-4baa-9ca1-922b7f751dd0
---
# Compiler Error C2129

> static function 'function' declared but not defined

## Remarks

A forward reference is made to a **`static`** function that is never defined.

A **`static`** function must be defined within file scope. If the function is defined in another file, it must be declared **`extern`**.

## Example

The following sample generates C2129:

```cpp
// C2129.cpp
static void foo();   // C2129

int main() {
   foo();
}
```

Possible resolution:

```cpp
// C2129b.cpp
static void foo();

int main() {
   foo();
}

static void foo() {}
```
