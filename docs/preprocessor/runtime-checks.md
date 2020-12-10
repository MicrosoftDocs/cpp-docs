---
description: "Learn more about: runtime_checks pragma"
title: "runtime_checks pragma"
ms.date: "08/29/2019"
f1_keywords: ["vc-pragma.runtime_checks", "runtime_checks_CPP"]
helpviewer_keywords: ["runtime_checks pragma", "pragmas, runtime_checks"]
ms.assetid: ae50b43f-f88d-47ad-a2db-3389e9e7df5b
---
# runtime_checks pragma

Disables or restores the [/RTC](../build/reference/rtc-run-time-error-checks.md) settings.

## Syntax

> **#pragma runtime_checks( "** [ *runtime_checks* ] **",** { **restore** | **off** } **)**

## Remarks

You can't enable a run-time check that wasn't enabled by a compiler option. For example, if you don't specify `/RTCs` on the command line, specifying `#pragma runtime_checks( "s", restore)` won't enable stack frame verification.

The **runtime_checks** pragma must appear outside a function, and takes effect at the first function defined after the pragma is seen. The **restore** and **off** arguments turn options specified in the **runtime_checks** on or off.

The **runtime_checks** can be zero or more of the parameters shown in the following table.

### Parameters of the runtime_checks Pragma

| Parameter(s) | Type of run-time check |
|--------------------|-----------------------------|
| **s** | Enables stack (frame) verification. |
| **c** | Reports when a value is assigned to a smaller data type that results in a data loss. |
| **u** | Reports when a variable is used before it's defined. |

These parameters are the same ones used with the `/RTC` compiler option. For example:

```cpp
#pragma runtime_checks( "sc", restore )
```

Using the **runtime_checks** pragma with the empty string (**""**) is a special form of the directive:

- When you use the **off** parameter, it turns the run-time error checks listed in the table above, off.

- When you use the **restore** parameter, it resets the run-time error checks to the ones that you specified using the `/RTC` compiler option.

```cpp
#pragma runtime_checks( "", off )
/* runtime checks are off in this region */
#pragma runtime_checks( "", restore )
```

## See also

[Pragma directives and the __pragma keyword](../preprocessor/pragma-directives-and-the-pragma-keyword.md)
