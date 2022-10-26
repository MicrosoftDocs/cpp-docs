---
description: "Learn more about: _pctype, _pwctype, _wctype, _mbctype, _mbcasemap"
title: "_pctype, _pwctype, _wctype, _mbctype, _mbcasemap"
ms.date: "11/04/2016"
api_name: ["_pctype", "_pwctype", "_wctype", "_mbctype", "_mbcasemap"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-string-l1-1-0.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_pctype", "CORECRT_WCTYPE/_pctype", "_pwctype", "CORECRT_WCTYPE/_pcwtype", "_mbctype", "MBCTYPE/_mbctype", "_mbcasemap", "MBCTYPE/_mbcasemap", "_wctype"]
helpviewer_keywords: ["_pctype global variable", "_pwctype global variable", "_wctype global variable", "_mbctype global variable", "_mbcasemap global variable"]
ms.assetid: 7f5e1107-c43b-4b9b-b387-781e6d2373cb
---
# `_pctype`, `_pwctype`, `_wctype`, `_mbctype`, `_mbcasemap`

These global variables contain information used by the character classification functions. They are for internal use only.

## Syntax

```C
extern const unsigned short *_pctype;
extern const wctype_t *_pwctype;
extern const unsigned short _wctype[];
extern unsigned char _mbctype[];
extern unsigned char _mbcasemap[];
```

## Remarks

The information in `_pctype`, `_pwctype`, and `_wctype` is used internally by [`isupper`, `_isupper_l`, `iswupper`, `_iswupper_l`](./reference/isupper-isupper-l-iswupper-iswupper-l.md), [`islower`, `iswlower`, `_islower_l`, `_iswlower_l`](./reference/islower-iswlower-islower-l-iswlower-l.md), [`isdigit`, `iswdigit`, `_isdigit_l`, `_iswdigit_l`](./reference/isdigit-iswdigit-isdigit-l-iswdigit-l.md), [`isxdigit`, `iswxdigit`, `_isxdigit_l`, `_iswxdigit_l`](./reference/isxdigit-iswxdigit-isxdigit-l-iswxdigit-l.md), [`isspace`, `iswspace`, `_isspace_l`, `_iswspace_l`](./reference/isspace-iswspace-isspace-l-iswspace-l.md), [`isalnum`, `iswalnum`, `_isalnum_l`, `_iswalnum_l`](./reference/isalnum-iswalnum-isalnum-l-iswalnum-l.md), [`ispunct`, `iswpunct`, `_ispunct_l`, `_iswpunct_l`](./reference/ispunct-iswpunct-ispunct-l-iswpunct-l.md), [`isgraph`, `iswgraph`, `_isgraph_l`, `_iswgraph_l`](./reference/isgraph-iswgraph-isgraph-l-iswgraph-l.md), [`iscntrl`, `iswcntrl`, `_iscntrl_l`, `_iswcntrl_l`](./reference/iscntrl-iswcntrl-iscntrl-l-iswcntrl-l.md), [`toupper`, `_toupper`, `towupper`, `_toupper_l`, `_towupper_l`](./reference/toupper-toupper-towupper-toupper-l-towupper-l.md), [`tolower`, `_tolower`, `towlower`, `_tolower_l`, and `_towlower_l`](./reference/tolower-tolower-towlower-tolower-l-towlower-l.md) functions. These functions should be used instead of accessing these global variables.

The information in `_mbctype` and `_mbcasemap` is used internally by [`_ismbbkalnum`, `_ismbbkalnum_l`](./reference/ismbbkalnum-ismbbkalnum-l.md), [`_ismbbkana`, `_ismbbkana_l`](./reference/ismbbkana-ismbbkana-l.md), [`_ismbbkpunct`, `_ismbbkpunct_l`](./reference/ismbbkpunct-ismbbkpunct-l.md), [`_ismbbkprint`, `_ismbbkprint_l`](./reference/ismbbkprint-ismbbkprint-l.md), [`_ismbbalpha`](reference/ismbbalpha-ismbbalpha-l.md), [`_ismbbpunct`, `_ismbbpunct_l`](./reference/ismbbpunct-ismbbpunct-l.md), [`_ismbbalnum`, `_ismbbalnum_l`](./reference/ismbbalnum-ismbbalnum-l.md), [`_ismbbprint`, `_ismbbprint_l`](./reference/ismbbprint-ismbbprint-l.md), [`_ismbbgraph`, `_ismbbgraph_l`](./reference/ismbbgraph-ismbbgraph-l.md), [`_ismbblead`, `_ismbblead_l`](./reference/ismbblead-ismbblead-l.md), [`_ismbbtrail`, `_ismbbtrail_l`](./reference/ismbbtrail-ismbbtrail-l.md), [`_ismbslead`, `_ismbstrail`, `_ismbslead_l`, `_ismbstrail_l`](./reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md), [`_ismbslead`, `_ismbstrail`, `_ismbslead_l`, and `_ismbstrail_l`](./reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md). Use these functions instead of accessing the global variables.

## Requirements

Not for public use.

## See also

[`is`, `isw` routines](./is-isw-routines.md)\
[`__pctype_func`](./pctype-func.md)
