---
description: "Learn more about: _get_FMA3_enable, _set_FMA3_enable"
title: "_get_FMA3_enable, _set_FMA3_enable"
ms.date: "04/05/2018"
api_name: ["_get_FMA3_enable", "_set_FMA3_enable"]
api_location: ["msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-runtime-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_get_FMA3_enable", "_set_FMA3_enable", "math/_get_FMA3_enable", "math/_set_FMA3_enable"]
helpviewer_keywords: ["_get_FMA3_enable", "_set_FMA3_enable"]
ms.assetid: 4c1dc4bc-e86b-451b-9211-5a2ba6c98ee4
---
# _get_FMA3_enable, _set_FMA3_enable

Gets or sets a flag that specifies whether the transcendental math floating-point library functions use FMA3 instructions in code compiled for X64 platforms.

## Syntax

```C
int _set_FMA3_enable(int flag);
int _get_FMA3_enable();
```

### Parameters

*flag*<br/>
Set to 1 to enable the FMA3 implementations of the transcendental math floating-point library functions on X64 platforms, or to 0 to use the implementations that do not use FMA3 instructions.

## Return Value

A non-zero value if the FMA3 implementations of the transcendental math floating-point library functions are enabled. Otherwise, zero.

## Remarks

Use the **_set_FMA3_enable** function to enable or disable the use of FMA3 instructions in the transcendental math floating-point functions in the CRT library. The return value reflects the implementation in use after the change. If the CPU does not support FMA3 instructions, this function cannot enable them in the library, and the return value is zero. Use **_get_FMA3_enable** to get the current state of the library. By default, on X64 platforms, the CRT startup code detects whether the CPU supports FMA3 instructions, and enables or disables the FMA3 implementations in the library.

Because the FMA3 implementations use different algorithms, slight differences in the result of computations may be observable when the FMA3 implementations are enabled or disabled, or between computers that do or do not support FMA3. For more information, see [Floating-point migration issues](../../porting/floating-point-migration-issues.md).

## Requirements

The **_set_FMA3_enable** and **_get_FMA3_enable** functions are only available in the X64 versions of the CRT.

|Routine|Required header|
|-------------|---------------------|
|**_set_FMA3_enable**, **_get_FMA3_enable**| C: \<math.h><br />C++: \<cmath> or \<math.h>|

The **_set_FMA3_enable** and **_get_FMA3_enable** functions are Microsoft-specific. For compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Floating-point support](../../c-runtime-library/floating-point-support.md)<br/>
[Floating-point migration issues](../../porting/floating-point-migration-issues.md)<br/>
