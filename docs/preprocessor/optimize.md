---
description: "Learn more about: optimize pragma"
title: "optimize pragma"
ms.date: 07/25/2025
f1_keywords: ["vc-pragma.optimize", "optimize_CPP"]
helpviewer_keywords: ["pragma, optimize", "optimize pragma"]
no-loc: ["pragma"]
---
# `optimize` pragma

Specifies optimizations on a function-by-function basis.

## Syntax

> **`#pragma optimize( "`** [ *optimization-list* ] **`",`** { **`on`** | **`off`** } **`)`**

## Remarks

The **`optimize`** pragma must appear outside a function. It takes effect at the first function defined after the pragma is seen. The **`on`** and **`off`** arguments turn options specified in the *optimization-list* on or off.

The *optimization-list* can be zero or more of the parameters shown in the following table.

### Parameters of the optimize Pragma

| Parameter(s) | Type of optimization |
|--------------------|--------------------------|
| **`g`** | Enable global optimizations. Deprecated. For more information, see [`/Og` (Global optimizations)](../build/reference/og-global-optimizations.md). |
| **`s`** or **`t`** | Favor short or fast sequences of machine code. |
| **`y`** | Omit frame pointers on the program stack. |

These parameters are the same letters used with the [`/O`](../build/reference/o-options-optimize-code.md) compiler options. For example, the following pragma is equivalent to the **`/Os`** compiler option:

```cpp
#pragma optimize( "s", on )
```

Using the **`optimize`** pragma with the empty string (**`""`**) is a special form of the directive:

When you use the **`off`** parameter, it turns all the optimizations, **`g`**, **`s`**, **`t`**, and **`y`**, off.

When you use the **`on`** parameter, it resets the optimizations to the ones that you specified using the [`/O`](../build/reference/o-options-optimize-code.md) compiler option.

```cpp
#pragma optimize( "", off )
/* unoptimized code section */
#pragma optimize( "", on )
```

## See also

[Pragma directives and the `__pragma` and `_Pragma` keywords](./pragma-directives-and-the-pragma-keyword.md)
