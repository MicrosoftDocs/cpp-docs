---
title: "fenv_access pragma"
description: "Describes the usage and effects of the fenv_access pragma directive. The fenv_access directive controls access to the floating-point environment at runtime."
ms.date: 08/10/2021
f1_keywords: ["vc-pragma.fenv_access", "fenv_access_CPP"]
helpviewer_keywords: ["pragma, fenv_access", "fenv_access pragma"]
no-loc: ["pragma"]
---
# `fenv_access` pragma

Disables (**`on`**) or enables (**`off`**) optimizations that could change floating-point environment flag tests and mode changes.

## Syntax

> **`#pragma fenv_access (`** { **`on`** | **`off`** } **`)`**

## Remarks

By default, **`fenv_access`** is **`off`**. The compiler assumes your code doesn't access or manipulate the floating-point environment. If environment access isn't required, the compiler can do more to optimize your floating-point code.

Enable **`fenv_access`** if your code tests floating-point status flags, exceptions, or sets control mode flags. The compiler disables floating-point optimizations, so your code can access the floating-point environment consistently.

The [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) command-line option automatically enables **`fenv_access`**. For more information on this and other floating-point behavior, see [/fp (Specify Floating-Point Behavior)](../build/reference/fp-specify-floating-point-behavior.md).

There are restrictions on the ways you can use the **`fenv_access`** pragma in combination with other floating-point settings:

- You can't enable **`fenv_access`** unless precise semantics are enabled. Precise semantics can be enabled either by the [`float_control`](float-control.md) pragma, or by using the [`/fp:precise`](../build/reference/fp-specify-floating-point-behavior.md) or [`/fp:strict`](../build/reference/fp-specify-floating-point-behavior.md) compiler options. The compiler defaults to **`/fp:precise`** if no other floating-point command-line option is specified.

- You can't use **`float_control`** to disable precise semantics when **`fenv_access(on)`** is set.

::: moniker range=">msvc-160"

The **`fenv_access(on)`** directive disables generation of floating-point *contractions*, machine instructions that combine floating-point operations. **`fenv_access(off)`** restores the previous behavior for contractions. This behavior is new in Visual Studio 2022. Previous compiler versions could generate contractions by default under **`fenv_access(on)`**. For more information about floating-point contractions, see [`/fp:contract`](../build/reference/fp-specify-floating-point-behavior.md#contract).

::: moniker-end

The kinds of optimizations that are subject to **`fenv_access`** are:

- Global common subexpression elimination

- Code motion

- Constant folding

Other floating-point pragma directives include:

- [float_control](../preprocessor/float-control.md)

- [fp_contract](../preprocessor/fp-contract.md)

## Examples

This example sets **`fenv_access`** to **`on`** to set the floating-point control register for 24-bit precision:

```cpp
// pragma_directive_fenv_access_x86.cpp
// compile with: /O2 /arch:IA32
// processor: x86
#include <stdio.h>
#include <float.h>
#include <errno.h>
#pragma fenv_access (on)

int main() {
   double z, b = 0.1, t = 0.1;
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);
   if (err != 0) {
      printf_s("The function _controlfp_s failed!\n");
      return -1;
   }
   z = b * t;
   printf_s ("out=%.15e\n",z);
}
```

```Output
out=9.999999776482582e-03
```

If you comment out `#pragma fenv_access (on)` from the previous sample, the output is different. It's because the compiler does compile-time evaluation, which doesn't use the control mode.

```cpp
// pragma_directive_fenv_access_2.cpp
// compile with: /O2 /arch:IA32
#include <stdio.h>
#include <float.h>

int main() {
   double z, b = 0.1, t = 0.1;
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, _PC_24, _MCW_PC);
   if (err != 0) {
      printf_s("The function _controlfp_s failed!\n");
      return -1;
   }
   z = b * t;
   printf_s ("out=%.15e\n",z);
}
```

```Output
out=1.000000000000000e-02
```

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
