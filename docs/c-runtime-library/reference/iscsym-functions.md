---
description: "Learn more about: iscsym, iscsymf, __iscsym, __iswcsym, __iscsymf, __iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l"
title: "iscsym, iscsymf, __iscsym, __iswcsym, __iscsymf, __iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l"
ms.date: "11/04/2016"
api_name: ["_iswcsym_l", "__iswcsym", "__iscsym", "_iswcsymf_l", "_iscsym_l", "__iswcsymf", "__iscsymf", "_iscsymf_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_iswcsym_l", "_iswcsymf_l", "iscsymf", "iswcsymf", "__iswcsym", "__iswcsymf", "iscsym", "iswcsym", "__iscsym", "_iscsym_l", "_iscsymf_l", "__iscsymf", "ctype/iscsym", "ctype/iscsymf", "ctype/__iscsym", "ctype/__iscsymf", "ctype/__iscsym_l", "ctype/__iscsymf_l", "ctype/__iswcsym", "ctype/__iswcsymf", "ctype/__iswcsym_l", "ctype/__iswcsymf_l"]
helpviewer_keywords: ["iscsymf_l function", "iswsym_l function", "_iswcsym_l function", "iscsym_l function", "_iscsymf_l function", "_iswcsymf_l function", "_iscsym_l function", "__iscsym function", "__iswcsymf function", "iswsymf_l function", "__iscsymf function", "__iswcsym function", "iscsym function", "iscsymf function"]
ms.assetid: 944dfb99-f2b8-498c-9f55-dbcf370d0a2c
---
# iscsym, iscsymf, __iscsym, __iswcsym, __iscsymf, __iswcsymf, _iscsym_l, _iswcsym_l, _iscsymf_l, _iswcsymf_l

Determine if an integer represents a character that may be used in an identifier.

## Syntax

```C
int __iscsym(
   int c
);
int __iswcsym(
   wint_t c
);
int __iscsymf(
   int c
);
int __iswcsymf(
   wint_t c
);
int _iscsym_l(
   int c,
   _locale_t locale
);
int _iswcsym_l(
   wint_t c,
   _locale_t locale
);
int _iscsymf_l(
   int c,
   _locale_t locale
);
int _iswcsymf_l(
   wint_t c,
   _locale_t locale
);
#define iscsym __iscsym
#define iscsymf __iscsymf
```

### Parameters

*c*<br/>
Integer to test. *c* should be in the range of 0-255 for the narrow character version of the function.

*locale*<br/>
The locale to use.

## Return Value

Both **__iscsym** and **__iswcsym** return a nonzero value if *c* is a letter, underscore, or digit. Both **__iscsymf** and **__iswcsymf** return a nonzero value if *c* is a letter or an underscore. Each of these routines returns 0 if *c* does not satisfy the test condition. The versions of these functions with the **_l** suffix are identical except that they use the *locale* passed in instead of the current locale for their locale-dependent behavior. For more information, see [Locale](../../c-runtime-library/locale.md).

## Remarks

These routines are defined as macros unless the preprocessor macro _CTYPE_DISABLE_MACROS is defined. When you use the macro versions of these routines, the arguments can be evaluated more than once. Be careful when you use expressions that have side effects within the argument list.

For backward compatibility, **iscsym** and **iscsymf** are defined as macros only when [&#95;&#95;STDC&#95;&#95;](../../preprocessor/predefined-macros.md) is not defined or is defined as 0; otherwise they are undefined.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**iscsym**, **iscsymf**, **__iscsym**, **__iswcsym**, **__iscsymf**, **__iswcsymf**, **_iscsym_l**, **_iswcsym_l**, **_iscsymf_l**, **_iswcsymf_l**|C: \<ctype.h><br /><br /> C++: \<cctype> or \<ctype.h>|

The **iscsym**, **iscsymf**, **__iscsym**, **__iswcsym**, **__iscsymf**, **__iswcsymf**, **_iscsym_l**, **_iswcsym_l**, **_iscsymf_l**, and **_iswcsymf_l** routines are Microsoft-specific. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Character Classification](../../c-runtime-library/character-classification.md)<br/>
[Locale](../../c-runtime-library/locale.md)<br/>
[is, isw Routines](../../c-runtime-library/is-isw-routines.md)<br/>
