---
description: "Learn more about: Compiler Error C2362"
title: "Compiler Error C2362"
ms.date: "06/03/2019"
f1_keywords: ["C2362"]
helpviewer_keywords: ["C2362"]
ms.assetid: 7aafecbc-b3cf-45a6-9ec3-a17e3f222511
---
# Compiler Error C2362

> initialization of '*identifier*' is skipped by 'goto *label*'

When compiled by using [/Za](../../build/reference/za-ze-disable-language-extensions.md), a jump to the label prevents the identifier from being initialized.

You can only jump past a declaration with an initializer if the declaration is enclosed in a block that isn't entered, or if the variable has already been initialized.

The following sample generates C2362:

```cpp
// C2362.cpp
// compile with: /Za
int main() {
   goto label1;
   int i = 1;      // C2362, initialization skipped
label1:;
}
```

Possible resolution:

```cpp
// C2362b.cpp
// compile with: /Za
int main() {
   goto label1;
   {
      int j = 1;   // OK, this block is never entered
   }
label1:;
}
```
