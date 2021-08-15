---
description: "Learn more about: Compiler Warning (level 4) C4459"
title: "Compiler Warning (level 4) C4459"
ms.date: "11/04/2016"
f1_keywords: ["C4459"]
helpviewer_keywords: ["C4459"]
ms.assetid: ee9f6287-9c70-4b10-82a0-add82a13997f
---
# Compiler Warning (level 4) C4459

> declaration of '*identifier*' hides global declaration

The declaration of *identifier* in the local scope hides the declaration of the identically-named *identifier* in global scope. This warning lets you know that references to *identifier* in this scope resolve to the locally declared version, not the global version, which may or may not be your intent. Generally, we recommend you minimize the use of global variables as a good engineering practice. To minimize pollution of the global namespace, we recommend use of a named namespace for global variables.

This warning was new in Visual Studio 2015, in Microsoft C++ compiler version 18.00. To suppress warnings from that version of the compiler or later while migrating your code, use the [/Wv:18](../../build/reference/compiler-option-warning-level.md) compiler option.

## Example

The following sample generates C4459:

```cpp
// C4459_hide.cpp
// compile with: cl /W4 /EHsc C4459_hide.cpp
int global_or_local = 1;

int main() {
    int global_or_local; // warning C4459
    global_or_local = 2;
}
```

One way to fix this issue is to create a namespace for your globals, but not use a **`using`** directive to bring that namespace into scope, so all references must use the unambiguous qualified names:

```cpp
// C4459_namespace.cpp
// compile with: cl /W4 /EHsc C4459_namespace.cpp
namespace globals {
    int global_or_local = 1;
}

int main() {
    int global_or_local; // OK
    global_or_local = 2;
    globals::global_or_local = 3;
}
```
