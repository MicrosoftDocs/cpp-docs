---
description: "Learn more about: feclearexcept"
title: "feclearexcept1"
ms.date: "04/05/2018"
api_name: ["feclearexcept"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["feclearexcept", "fenv/feclearexcept"]
helpviewer_keywords: ["feclearexcept function"]
ms.assetid: ef419da3-c248-4432-b53c-8e7a475d9533
---
# feclearexcept

Attempts to clear the floating-point exception flags        specified by the argument.

## Syntax

```C
int feclearexcept(
   int excepts
);
```

### Parameters

*excepts*<br/>
The exception status flags to clear.

## Return Value

Returns zero if *excepts* is zero, or if all        the specified exceptions were successfully cleared. Otherwise, returns a nonzero value.

## Remarks

The **feclearexcept** function attempts to clear the floating point exception status flags specified by *excepts*. The function supports these exception macros, defined in fenv.h:

|Exception Macro|Description|
|---------------------|-----------------|
|FE_DIVBYZERO|A singularity or pole error occurred in an earlier floating-point operation; an infinity value was created.|
|FE_INEXACT|The function was forced to round the stored result of an earlier floating-point operation.|
|FE_INVALID|A domain error occurred in an earlier floating-point operation.|
|FE_OVERFLOW|A range error occurred; an earlier floating-point operation result was too large to be represented.|
|FE_UNDERFLOW|An earlier floating-point operation result was too small to be represented at full precision; a denormal value was created.|
|FE_ALL_EXCEPT|The bitwise OR of all supported floating-point exceptions.|

The *excepts* argument may be zero, or the bitwise OR of one or more of the supported exception macros. The result of any other argument value is undefined.

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**feclearexcept**|\<fenv.h>|\<cfenv>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[fetestexcept](fetestexcept1.md)<br/>
