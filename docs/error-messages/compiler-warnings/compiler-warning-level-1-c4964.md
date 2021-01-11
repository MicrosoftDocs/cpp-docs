---
description: "Learn more about: Compiler Warning (level 1) C4964"
title: "Compiler Warning (level 1) C4964"
ms.date: "11/04/2016"
f1_keywords: ["C4964"]
helpviewer_keywords: ["C4964"]
ms.assetid: b89c9274-8a92-4b7c-aa30-3fbb1b68ac73
---
# Compiler Warning (level 1) C4964

No optimization options were specified; profile info will not be collected

[/GL](../../build/reference/gl-whole-program-optimization.md) and [/LTCG](../../build/reference/ltcg-link-time-code-generation.md) were specified, but no optimizations were requested, so no .pgc files will be generated and, therefore, no profile-guided optimizations will be possible.

If you want .pgc files to be generated when you run your application, specify one of the [/O](../../build/reference/o-options-optimize-code.md) compiler options.

The following sample generates C4964:

```cpp
// C4964.cpp
// compile with: /W1 /GL /link /ltcg:pgi
// C4964 expected
// Add /O2, for example, to the command line to resolve this warning.
int main() {
   int i;
}
```
