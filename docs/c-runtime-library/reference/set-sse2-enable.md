---
description: "Learn more about: _set_SSE2_enable"
title: "_set_SSE2_enable"
ms.date: "04/05/2018"
api_name: ["_set_SSE2_enable"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_set_SSE2_enable", "set_SSE2_enable"]
helpviewer_keywords: ["_set_SSE2_enable function", "Streaming SIMD Extensions 2 instructions", "set_SSE2_enable function"]
ms.assetid: 55db895d-fc1e-475a-9110-b781a9bb51c5
---
# _set_SSE2_enable

Enables or disables the use of Streaming SIMD Extensions 2 (SSE2) instructions in CRT math routines. (This function is not available on x64 architectures because SSE2 is enabled by default.)

## Syntax

```C
int _set_SSE2_enable(
   int flag
);
```

### Parameters

*flag*<br/>
1 to enable the SSE2 implementation; 0 to disable the SSE2 implementation. By default, SSE2 implementation is enabled on processors that support it.

## Return Value

Nonzero if SSE2 implementation is enabled; zero if SSE2 implementation is disabled.

## Remarks

The following functions have SSE2 implementations that can be enabled by using **_set_SSE2_enable**:

- [atan](atan-atanf-atanl-atan2-atan2f-atan2l.md)

- [ceil](ceil-ceilf-ceill.md)

- [exp](exp-expf.md)

- [floor](floor-floorf-floorl.md)

- [log](log-logf-log10-log10f.md)

- [log10](log-logf-log10-log10f.md)

- [modf](modf-modff-modfl.md)

- [pow](pow-powf-powl.md)

The SSE2 implementations of these functions might give slightly different answers than the default implementations, because SSE2 intermediate values are 64-bit floating-point quantities but the default implementation intermediate values are 80-bit floating-point quantities.

> [!NOTE]
> If you use the [/Oi (Generate Intrinsic Functions)](../../build/reference/oi-generate-intrinsic-functions.md) compiler option to compile the project, it may appear that **_set_SSE2_enable** has no effect. The **/Oi** compiler option gives the compiler the authority to use intrinsics to replace CRT calls; this behavior overrides the effect of **_set_SSE2_enable**. If you want to guarantee that **/Oi** does not override **_set_SSE2_enable**, use **/Oi-** to compile your project. This might also be good practice when you use other compiler switches that imply **/Oi**.

The SSE2 implementation is only used if all exceptions are masked. Use [_control87, _controlfp](control87-controlfp-control87-2.md) to mask exceptions.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_set_SSE2_enable**|\<math.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// crt_set_SSE2_enable.c
// processor: x86
#include <math.h>
#include <stdio.h>

int main()
{
   int i = _set_SSE2_enable(1);

   if (i)
      printf("SSE2 enabled.\n");
   else
      printf("SSE2 not enabled; processor does not support SSE2.\n");
}
```

```Output
SSE2 enabled.
```

## See also

[CRT Library Features](../../c-runtime-library/crt-library-features.md)<br/>
