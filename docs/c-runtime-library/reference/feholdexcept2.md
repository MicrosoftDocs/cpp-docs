---
description: "Learn more about: feholdexcept"
title: "feholdexcept"
ms.date: "04/05/2018"
api_name: ["feholdexcept"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["feholdexcept", "fenv/feholdexcept"]
helpviewer_keywords: ["feholdexcept function"]
ms.assetid: 88e512ae-b5d8-452c-afe9-c824cd3ef1d8
---
# feholdexcept

Saves the current floating-point environment in the specified object, clears the floating-point status flags, and, if possible, puts the floating-point environment into non-stop  mode.

## Syntax

```C
int feholdexcept(
   fenv_t *penv
);
```

### Parameters

*penv*<br/>
Pointer to an **fenv_t** object to contain a copy of the floating-point environment.

## Return Value

Returns zero if and only if the function is able to successfully turn on non-stop floating-point exception handling.

## Remarks

The **feholdexcept** function is used to store the state of the current floating point environment in the **fenv_t** object pointed to by *penv*, and to set the environment to not interrupt execution on floating-point exceptions. This is known as non-stop mode.  This mode continues until the environment is restored using [fesetenv](fesetenv1.md) or [feupdateenv](feupdateenv.md).

You can use this function at the beginning of a subroutine that needs to hide one or more floating-point exceptions from the caller. To report an exception, you can simply clear  the unwanted exceptions by using [feclearexcept,](feclearexcept1.md) and then end the non-stop mode with a call to **feupdateenv**.

To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**feholdexcept**|\<fenv.h>|\<cfenv>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[fesetenv](fesetenv1.md)<br/>
[feupdateenv](feupdateenv.md)<br/>
