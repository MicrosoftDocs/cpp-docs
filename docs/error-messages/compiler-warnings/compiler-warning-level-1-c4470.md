---
description: "Learn more about: Compiler Warning (level 1) C4470"
title: "Compiler Warning (level 1) C4470"
ms.date: "11/04/2016"
f1_keywords: ["C4470"]
helpviewer_keywords: ["C4470"]
ms.assetid: f52a3eaa-a235-4747-a47d-9ec4ad4cb0ea
---
# Compiler Warning (level 1) C4470

floating-point control pragmas ignored under /clr

The float-control pragmas:

- [fenv_access](../../preprocessor/fenv-access.md)

- [float_control](../../preprocessor/float-control.md)

- [fp_contract](../../preprocessor/fp-contract.md)

have no effect under [/clr](../../build/reference/clr-common-language-runtime-compilation.md).

The following sample generates C4470:

```cpp
// C4470.cpp
// compile with: /clr /W1 /LD
#pragma float_control(except, on)   // C4470
```
