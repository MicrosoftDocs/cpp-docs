---
description: "Learn more about: srand"
title: "srand"
ms.date: "4/2/2020"
api_name: ["srand", "_o_srand"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-utility-l1-1-0.dll", "ntoskrnl.exe", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["srand"]
helpviewer_keywords: ["random starting point", "random starting point, setting", "random numbers, generating", "srand function", "numbers, pseudorandom", "numbers, random", "pseudorandom numbers", "starting points, setting random", "starting points"]
---
# srand

Sets the starting seed value for the pseudorandom number generator used by the **rand** function.

## Syntax

```C
void srand(
   unsigned int seed
);
```

### Parameters

*seed*<br/>
Seed for pseudorandom number generation

## Remarks

The **srand** function sets the starting point for generating a series of pseudorandom integers in the current thread. To reinitialize the generator to create the same sequence of results, call the **srand** function and use the same *seed* argument again. Any other value for *seed* sets the generator to a different starting point in the pseudorandom sequence. **rand** retrieves the pseudorandom numbers that are generated. Calling **rand** before any call to **srand** generates the same sequence as calling **srand** with *seed* passed as 1.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**srand**|\<stdlib.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [rand](rand.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[rand](rand.md)<br/>
