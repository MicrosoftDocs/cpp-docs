---
title: "Compiler Error C2362"
description: "Learn more about: Compiler Error C2362"
ms.date: 06/03/2019
f1_keywords: ["C2362"]
helpviewer_keywords: ["C2362"]
---
# Compiler Error C2362

> initialization of '*identifier*' is skipped by 'goto *label*'

## Remarks

When compiled by using [/Za](../../build/reference/za-ze-disable-language-extensions.md), a jump to the label prevents the identifier from being initialized.

You can only jump past a declaration with an initializer if the declaration is enclosed in a block that isn't entered, or if the variable has already been initialized.

## Example

The following example generates C2362:

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
