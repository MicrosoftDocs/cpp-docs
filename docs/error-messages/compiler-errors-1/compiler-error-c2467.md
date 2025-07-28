---
title: "Compiler Error C2467"
description: "Learn more about: Compiler Error C2467"
ms.date: 11/04/2016
f1_keywords: ["C2467"]
helpviewer_keywords: ["C2467"]
---
# Compiler Error C2467

> illegal declaration of anonymous 'user-defined-type'

## Remarks

A nested user-defined type was declared. This is an error when compiling C source code with the ANSI compatibility option ([/Za](../../build/reference/za-ze-disable-language-extensions.md)) enabled.

## Example

The following example generates C2467:

```c
//C2467.c
// compile with: /Za
int main() {
   struct X {
      union { int i; };   // C2467, nested declaration
   };
}
```
