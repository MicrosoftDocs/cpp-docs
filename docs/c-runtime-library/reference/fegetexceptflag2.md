---
description: "Learn more about: fegetexceptflag"
title: "fegetexceptflag"
ms.date: "04/05/2018"
api_name: ["fegetexceptflag"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fegetexceptflag", "fenv/fegetexceptflag"]
helpviewer_keywords: ["fegetexceptflag function"]
ms.assetid: 2d28f0ca-70c9-4cff-be8b-3d876eacde71
---
# fegetexceptflag

Stores the current state of the specified floating-point exception flags.

## Syntax

```C
int fegetexceptflag(
   fexcept_t* pstatus,
   int excepts
);
```

### Parameters

*pstatus*<br/>
A pointer to a **fexcept_t** object to contain the current values of the  exception flags specified by *excepts*.

*excepts*<br/>
The floating-point exception flags to store in *pstatus*.

## Return Value

On success, returns 0. Otherwise, returns a non-zero value.

## Remarks

The **fegetexceptflag** function stores the current state of the floating-point exception status flags specified by *excepts* in the **fexcept_t** object pointed to by *pstatus*.  *pstatus* must point to a valid **fexcept_t** object, or subsequent behavior is undefined. The **fegetexceptflag** function supports these exception macros, defined in \<fenv.h>:

|Exception Macro|Description|
|---------------------|-----------------|
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|
|FE_ALL_EXCEPT|The bitwise OR of all supported floating-point exceptions.|

The *excepts* argument may be zero, one of the supported floating-point exception macros, or the bitwise OR of two or more of the macros. The effect of any other argument value is undefined.

To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**fegetexceptflag**|\<fenv.h>|\<cfenv>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[fesetexceptflag](fesetexceptflag2.md)<br/>
