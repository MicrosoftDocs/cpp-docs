---
description: "Learn more about: fesetenv"
title: "fesetenv"
ms.date: "04/05/2018"
api_name: ["fesetenv"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fesetenv", "fenv/fesetenv"]
helpviewer_keywords: ["fesetenv function"]
ms.assetid: ffc64fff-8ea7-4d59-9e04-ff96ef8cd012
---
# fesetenv

Sets the current floating-point environment.

## Syntax

```C
int fesetenv(
   const fenv_t *penv
);
```

### Parameters

*penv*<br/>
Pointer to a **fenv_t** object that contains a floating-point environment as set by a call to [fegetenv](fegetenv1.md) or [feholdexcept](feholdexcept2.md). You can also specify the default startup floating-point environment by using the **FE_DFL_ENV** macro.

## Return Value

Returns 0 if the environment was successfully set. Otherwise, returns a nonzero value.

## Remarks

The **fesetenv** function sets the current floating-point environment from the value stored in the **fenv_t** object pointed to by *penv*. The floating point environment is the set of status flags and control modes that affect floating-point calculations. This includes the rounding mode and the status flags for floating-point exceptions.  If *penv* is not **FE_DFL_ENV** or does not point to a valid **fenv_t** object, subsequent behavior is undefined.

A call to this function sets the exception status flags that are in the *penv* object, but it does not raise those exceptions.

To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**fesetenv**|\<fenv.h>|\<cfenv>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[fegetenv](fegetenv1.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feholdexcept](feholdexcept2.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>
