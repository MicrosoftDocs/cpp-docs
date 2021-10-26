---
title: "float_control pragma"
description: "Describes the usage and effects of the float_control pragma directive. The float_control directive controls the state of floating-point precise semantics and exception semantics at runtime."
ms.date: 08/10/2021
f1_keywords: ["vc-pragma.float_control", "float_control_CPP"]
helpviewer_keywords: ["float_control pragma", "pragma, float_control"]
no-loc: ["pragma"]
---
# `float_control` pragma

Specifies floating-point behavior for a function.

## Syntax

> **`#pragma float_control`**\
> **`#pragma float_control( precise,`** { **`on`** &vert; **`off`** } [ **`, push`** ] **`)`**\
> **`#pragma float_control( except,`** { **`on`** &vert; **`off`** } [ **`, push`** ] **`)`**\
> **`#pragma float_control(`** { **`push`** &vert; **`pop`** } **`)`**

## Options

**`precise`**, **`on`** | **`off`**, **`push`**\
Specifies whether to enable (**`on`**) or disable (**`off`**) precise floating-point semantics. For information on differences with the **`/fp:precise`** compiler option, see the Remarks section. The optional **`push`** token pushes the current setting for **`float_control`** on the internal compiler stack.

**`except`**, **`on`** | **`off`**, **`push`**\
Specifies whether to enable (**`on`**) or disable (**`off`**) floating-point exception semantics. The optional **`push`** token pushes the current setting for **`float_control`** on the internal compiler stack.

**`except`** can only be set to **`on`** when **`precise`** is also set to **`on`**.

**`push`**\
Pushes the current **`float_control`** setting on to the internal compiler stack.

**`pop`**\
Removes the **`float_control`** setting from the top of the internal compiler stack, and makes that the new **`float_control`** setting.

## Remarks

The **`float_control`** pragma doesn't have the same behavior as the [`/fp`](../build/reference/fp-specify-floating-point-behavior.md) compiler option. The **`float_control`** pragma only governs part of the floating-point behavior. It must be combined with [`fp_contract`](../preprocessor/fp-contract.md) and [`fenv_access`](../preprocessor/fenv-access.md) pragma directives to recreate the **`/fp`** compiler options. The following table shows the equivalent pragma settings for each compiler option:

::: moniker range=">msvc-160"

| Option | `float_control(precise, *)` | `float_control(except, *)` | `fp_contract(*)` | `fenv_access(*)` |
|-|-|-|-|-|
| `/fp:strict`             | `on`  | `on`  | `off` | `on`  |
| `/fp:precise`            | `on`  | `off` | `off`\*  | `off` |
| `/fp:fast`               | `off` | `off` | `on`  | `off` |

\* In versions of Visual Studio before Visual Studio 2022, the **`/fp:precise`** behavior defaulted to `fp_contract(on)`.

::: moniker-end
::: moniker range="<=msvc-160"

| Option | `float_control(precise, *)` | `float_control(except, *)` | `fp_contract(*)` | `fenv_access(*)` |
|-|-|-|-|-|
| `/fp:strict`             | `on`  | `on`  | `off` | `on`  |
| `/fp:precise`            | `on`  | `off` | `off`  | `off` |
| `/fp:fast`               | `off` | `off` | `on`  | `off` |

::: moniker-end

In other words, you may need to use several pragma directives in combination to emulate the **`/fp:fast`**, **`/fp:precise`**, and **`/fp:strict`** command-line options.

There are restrictions on the ways you can use the **`float_control`** and **`fenv_access`** floating-point pragma directives in combination:

- You can only use **`float_control`** to set **`except`** to **`on`** if precise semantics are enabled. Precise semantics can be enabled either by the **`float_control`** pragma, or by using the **`/fp:precise`** or **`/fp:strict`** compiler options.

- You can't use **`float_control`** to turn off **`precise`** when exception semantics are enabled, whether by a **`float_control`** pragma or a **`/fp:except`** compiler option.

- You can't enable **`fenv_access`** unless precise semantics are enabled, whether by a **`float_control`** pragma or a compiler option.

- You can't use **`float_control`** to turn off **`precise`** when **`fenv_access`** is enabled.

These restrictions mean the order of some floating-point pragma directives is significant. To go from a fast model to a strict model using pragma directives, use the following code:

::: moniker range=">msvc-160"

```cpp
#pragma float_control(precise, on)  // enable precise semantics
#pragma fenv_access(on)             // enable environment sensitivity
#pragma float_control(except, on)   // enable exception semantics
```

::: moniker-end
::: moniker range="<=msvc-160"

```cpp
#pragma float_control(precise, on)  // enable precise semantics
#pragma fenv_access(on)             // enable environment sensitivity
#pragma float_control(except, on)   // enable exception semantics
#pragma fp_contract(off)            // disable contractions
```

::: moniker-end

To go from a strict model to a fast model by using the **`float_control`** pragma, use the following code:

```cpp
#pragma float_control(except, off)  // disable exception semantics
#pragma fenv_access(off)            // disable environment sensitivity
#pragma float_control(precise, off) // disable precise semantics
#pragma fp_contract(on)             // enable contractions
```

If no options are specified, **`float_control`** has no effect.

::: moniker range=">msvc-160"

The **`float_control`** directive disables contractions when it turns on **`precise`** or **`except`**. Use of **`float_control`** to turn off **`precise`** or **`except`** restores the previous setting for contractions. You can use the **`fp_contract`** pragma directive to change the compiler behavior on contractions. **`float_control(push)`** and **`float_control(pop)`** push and pop the setting for contractions as part of the **`float_control`** setting on to the internal compiler stack. This behavior is new in Visual Studio 2022. The **`float_control`** directive in previous compiler versions did not affect contraction settings.

::: moniker-end

## Example

The following sample shows how to catch an overflow floating-point exception by using pragma **`float_control`**.

```cpp
// pragma_directive_float_control.cpp
// compile with: /EHa
#include <stdio.h>
#include <float.h>

double func( ) {
   return 1.1e75;
}

#pragma float_control (except, on)

int main( ) {
   float u[1];
   unsigned int currentControl;
   errno_t err;

   err = _controlfp_s(&currentControl, ~_EM_OVERFLOW, _MCW_EM);
   if (err != 0)
      printf_s("_controlfp_s failed!\n");

   try  {
      u[0] = func();
      printf_s ("Fail");
      return(1);
   }

   catch (...)  {
      printf_s ("Pass");
      return(0);
   }
}
```

```Output
Pass
```

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)\
[`fenv_access` pragma](../preprocessor/fenv-access.md)\
[`fp_contract` pragma](../preprocessor/fp-contract.md)
