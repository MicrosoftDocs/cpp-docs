---
description: "Learn more about: fetestexcept"
title: "fetestexcept"
ms.date: "04/05/2018"
api_name: ["fetestexcept"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["fetestexcept", "fenv/fetestexcept"]
helpviewer_keywords: ["fetestexept function"]
ms.assetid: ca4dc43f-5573-440d-bc19-ead7571b13dc
---
# fetestexcept

Determines which of the specified floating-point exception status flags are currently set.

## Syntax

```C
int fetestexcept(
   int excepts
);
```

### Parameters

*excepts*<br/>
A bitwise OR of the floating-point     status flags to test.

## Return Value

On success, returns a bitmask containing a bitwise OR of the floating-point exception macros that correspond to the exception status flags currently set. Returns 0 if none of the exceptions are set.

## Remarks

Use the fetestexcept function to determine which exceptions were raised by a floating point operation. Use the *excepts* parameter to specify which exception status flags to test. The **fetestexcept** function uses these exception macros defined in \<fenv.h> in *excepts* and the return value:

|Exception Macro|Description|
|---------------------|-----------------|
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|
|FE_ALL_EXCEPT|The bitwise OR of all supported floating-point exceptions.|

The specified *excepts* argument may be 0, one of the supported floating-point exception macros, or the bitwise OR of two or more of the macros. The effect of any other *excepts* argument value is undefined.

To use this function, you must turn off floating-point optimizations that could prevent access by using the `#pragma fenv_access(on)` directive prior to the call. For more information, see [fenv_access](../../preprocessor/fenv-access.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**fetestexcept**|\<fenv.h>|\<cfenv>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[feclearexcept](feclearexcept1.md)<br/>
[feraiseexcept](feraiseexcept.md)<br/>
