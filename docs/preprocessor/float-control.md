---
title: "float_control pragma"
description: "Describes the usage and effects of the float_control pragma directive. The float_control directive controls the state of floating-point precise semantics and exception semantics at runtime."
ms.date: "11/18/2019"
f1_keywords: ["vc-pragma.float_control", "float_control_CPP"]
helpviewer_keywords: ["float_control pragma", "pragmas, float_control"]
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
---
# float_control pragma

Specifies floating-point behavior for a function.

## Syntax

> **#pragma float_control**\
> **#pragma float_control( precise,** { **on** | **off** } [ **, push** ] **)**\
> **#pragma float_control( except,** { **on** | **off** } [ **, push** ] **)**\
> **#pragma float_control(** { **push** | **pop** } **)**

## Options

**precise**, **on** | **off**, **push**\
Specifies whether to enable (**on**) or disable (**off**) precise floating-point semantics. For information on how this option differs from the similarly named **/fp:precise** compiler option, see the Remarks section. The optional **push** token tells the compiler to push the current setting for **float_control** on the internal compiler stack.

**except**, **on** | **off**, **push**\
Specifies whether to enable (**on**) or disable (**off**) floating-point exception semantics. For information on how this option differs from the similarly named **/fp:except** compiler option, see the Remarks section. The optional **push** token tells the compiler to push the current setting for **float_control** on the internal compiler stack.

**except** can only be set to **on** when **precise** is also set to **on**.

**push**\
Pushes the current **float_control** setting on to the internal compiler stack.

**pop**\
Removes the **float_control** setting from the top of the internal compiler stack, and makes that the new **float_control** setting.

## Remarks

The **precise** and **except** options don't have exactly the same behavior as the [/fp](../build/reference/fp-specify-floating-point-behavior.md) compiler options of the same names. The **float_control** pragma only governs part of the floating-point behavior. It must be combined with [fp_contract](../preprocessor/fp-contract.md) and [fenv_access](../preprocessor/fenv-access.md) pragmas to recreate the **/fp** compiler options. The following table shows the equivalent pragma settings for each compiler option:

| | float_control(precise, \*) | float_control(except, \*) | fp_contract(\*) | fenv_access(\*) |
|-|-|-|-|-|
| /fp:strict             | on  | on  | off | on  |
| /fp:strict /fp:except- | on  | off | off | on  |
| /fp:precise            | on  | off | on  | off |
| /fp:precise /fp:except | on  | on  | on  | off |
| /fp:fast               | off | off | on  | off |

In other words, you must use several pragmas in combination to emulate the **/fp:fast**, **/fp:precise**, **/fp:strict**, and **/fp:except** command-line options.

There are restrictions on the ways you can use the **float_control** and **fenv_access** floating-point pragmas in combination:

- You can only use **float_control** to set **except** to **on** if precise semantics are enabled. Precise semantics can be enabled either by the **float_control** pragma, or by using the **/fp:precise** or **/fp:strict** compiler options.

- You can't use **float_control** to turn **precise** off when exception semantics are enabled, whether by a **float_control** pragma or a **/fp:except** compiler option.

- You can't enable **fenv_access** unless precise semantics are enabled, whether by a **float_control** pragma or a compiler option.

- You can't use **float_control** to turn **precise** off when **fenv_access** is enabled.

These restrictions mean the order of some floating-point pragmas is significant. To go from a fast model to a strict model using the **float_control** and related pragmas, use the following code:

```cpp
#pragma float_control(precise, on)  // enable precise semantics
#pragma fenv_access(on)             // enable environment sensitivity
#pragma float_control(except, on)   // enable exception semantics
#pragma fp_contract(off)            // disable contractions
```

To go from a strict model to a fast model by using the **float_control** pragma, use the following code:

```cpp
#pragma float_control(except, off)  // disable exception semantics
#pragma fenv_access(off)            // disable environment sensitivity
#pragma float_control(precise, off) // disable precise semantics
#pragma fp_contract(on)             // ensable contractions
```

If no options are specified, **float_control** has no effect.

## Example

The following sample shows how to catch an overflow floating-point exception by using pragma **float_control**.

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

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)\
[fenv_access](../preprocessor/fenv-access.md)\
[fp_contract](../preprocessor/fp-contract.md)
