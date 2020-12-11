---
description: "Learn more about: _set_controlfp"
title: "_set_controlfp"
ms.date: "04/05/2018"
api_name: ["_set_controlfp"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["set_controlfp", "_set_controlfp"]
helpviewer_keywords: ["set_controlfp function", "floating-point functions, setting control word", "_set_controlfp function"]
ms.assetid: e0689d50-f68a-4028-a9c1-fb23eedee4ad
---
# _set_controlfp

Sets the floating-point control word.

## Syntax

```C
void __cdecl _set_controlfp(
    unsigned int newControl,
    unsigned int mask
);
```

### Parameters

*newControl*<br/>
New control-word bit values.

*mask*<br/>
Mask for new control-word bits to set.

## Return Value

None.

## Remarks

The **_set_controlfp** function is similar to **_control87**, but it only sets the floating-point control word to *newControl*. The bits in the values indicate the floating-point control state. The floating-point control state allows the program to change the precision, rounding, and infinity modes in the floating-point math package. You can also mask or unmask floating-point exceptions using **_set_controlfp**. For more information, see [_control87, _controlfp, \__control87_2](control87-controlfp-control87-2.md).

This function is deprecated when compiling with [/clr (Common Language Runtime Compilation)](../../build/reference/clr-common-language-runtime-compilation.md) because the common language runtime only supports the default floating-point precision.

## Requirements

|Routine|Required header|Compatibility|
|-------------|---------------------|-------------------|
|**_set_controlfp**|\<float.h>|x86 processor only|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-Point Support](../../c-runtime-library/floating-point-support.md)<br/>
[_clear87, _clearfp](clear87-clearfp.md)<br/>
[_status87, _statusfp, _statusfp2](status87-statusfp-statusfp2.md)<br/>
