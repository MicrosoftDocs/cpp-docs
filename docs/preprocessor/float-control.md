---
title: "float_control pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.float_control", "float_control_CPP"]
helpviewer_keywords: ["float_control pragma", "pragmas, float_control"]
ms.assetid: 4f4ba5cf-3707-413e-927d-5ecdbc0a9a43
---
# float_control pragma

Specifies floating-point behavior for a function.

## Syntax

> **#pragma float_control**\
> **#pragma float_control(** { **precise** | **strict** | **except** } **,** { **on** | **off** } [ **, push** ] **)**\
> **#pragma float_control(** { **push** | **pop** } **)**

## Options

**precise** | **strict** | **except**, **on** | **off**, **push**\
Specifies floating-point behavior, which can be **precise**, **strict**, or **except**. For more information, see [/fp (Specify Floating-Point Behavior)](../build/reference/fp-specify-floating-point-behavior.md). The setting can either be **on** or **off**.

When **strict**, the settings for both **strict** and **except** are specified by the **on** or **off** setting. **except** can only be set to **on** when **precise** or **strict** is also set to **on**.

If the optional **push** token is added, the current setting for **float_control** is pushed on to the internal compiler stack.

**push**\
Push the current **float_control** setting on to the internal compiler stack

**pop**\
Removes the **float_control** setting from the top of the internal compiler stack and makes that the new **float_control** setting.

## Remarks

For **float_control(strict, on)** to behave like the [/fp:strict](../build/reference/fp-specify-floating-point-behavior.md) compiler option, you must also use the [fp_contract](../preprocessor/fp-contract.md) pragma to turn off contractions, and use the [fenv_access](../preprocessor/fenv-access.md) pragma to enable floating-point environment access. The **float_control** pragma doesn't affect these other properties.

You can't use **float_control** to turn **precise** off when **except** is on. Similarly, **precise** can't be turned off when [fenv_access](../preprocessor/fenv-access.md) is on. To go from strict model to a fast model by using the **float_control** pragma, use the following code:

```cpp
#pragma float_control(except, off)
#pragma fenv_access(off)
#pragma fp_contract(on)
#pragma float_control(precise, off)
```

To go from fast model to a strict model with the **float_control** pragma, use the following code:

```cpp
#pragma float_control(precise, on)
#pragma fenv_access(on)
#pragma fp_contract(off)
#pragma float_control(except, on)
```

If no options are specified, **float_control** has no effect.

Other floating-point pragmas include:

- [fenv_access](../preprocessor/fenv-access.md)

- [fp_contract](../preprocessor/fp-contract.md)

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

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
