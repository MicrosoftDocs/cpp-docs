---
description: "Learn more about: _ismbb Routines"
title: "_ismbb Routines"
ms.date: "11/04/2016"
api_location: ["msvcr110.dll", "msvcrt.dll", "msvcr80.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr90.dll", "msvcr100.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbb", "ismbb"]
helpviewer_keywords: ["ismbb routines", "_ismbb routines"]
ms.assetid: d63c232e-3fe4-4844-aafd-2133846ece4b
---
# _ismbb Routines

Tests the given integer value `c` for a particular condition, by using the current locale or a specified LC_CTYPE conversion state category.

:::row:::
   :::column span="":::
      [_ismbbalnum, _ismbbalnum_l](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)\
      [_ismbbalpha, _ismbbalpha_l](../c-runtime-library/reference/ismbbalpha-ismbbalpha-l.md)\
      [_ismbbblank, _ismbbblank_l](../c-runtime-library/reference/ismbbblank-ismbbblank-l.md)\
      [_ismbbgraph, _ismbbgraph_l](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)\
      [_ismbbkalnum, _ismbbkalnum_l](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)\
      [_ismbbkana, _ismbbkana_l](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)\
   :::column-end:::
   :::column span="":::
      [_ismbbkprint, _ismbbkprint_l](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)\
      [_ismbbkpunct, _ismbbkpunct_l](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)\
      [_ismbblead, _ismbblead_l](../c-runtime-library/reference/ismbblead-ismbblead-l.md)\
      [_ismbbprint, _ismbbprint_l](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)\
      [_ismbbpunct, _ismbbpunct_l](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)\
      [_ismbbtrail, _ismbbtrail_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)\
   :::column-end:::
:::row-end:::

## Remarks

Every routine in the `_ismbb` family tests the given integer value `c` for a particular condition. The test result depends on the multibyte code page that's in effect. By default, the multibyte code page is set to the ANSI code page that's obtained from the operating system at program startup. You can use [_getmbcp](../c-runtime-library/reference/getmbcp.md) to query for the multibyte code page that's in use, or [_setmbcp](../c-runtime-library/reference/setmbcp.md) to change it.

The output value is affected by the setting of the `LC_CTYPE` category setting of the locale; for more information, see [setlocale, _wsetlocale](../c-runtime-library/reference/setlocale-wsetlocale.md). The versions of these functions that don't have the **_l** suffix use the current locale for this locale-dependent behavior; the versions that do have the **_l** suffix are identical except that instead they use the locale parameter that's passed in.

The routines in the `_ismbb` family test the given integer `c` as follows.

|Routine|Byte test condition|
|-------------|-------------------------|
|[_ismbbalnum](../c-runtime-library/reference/ismbbalnum-ismbbalnum-l.md)|`isalnum` &#124;&#124; `_ismbbkalnum`.|
|[_ismbbalpha](reference/ismbbalpha-ismbbalpha-l.md)|`isalpha` &#124;&#124; `_ismbbkalnum`.|
|[_ismbbblank](../c-runtime-library/reference/ismbbblank-ismbbblank-l.md)|`isblank`|
|[_ismbbgraph](../c-runtime-library/reference/ismbbgraph-ismbbgraph-l.md)|Same as `_ismbbprint`, but `_ismbbgraph` does not include the space character (0x20).|
|[_ismbbkalnum](../c-runtime-library/reference/ismbbkalnum-ismbbkalnum-l.md)|Non-ASCII text symbol other than punctuation. For example, in code page 932 only, `_ismbbkalnum` tests for katakana alphanumeric.|
|[_ismbbkana](../c-runtime-library/reference/ismbbkana-ismbbkana-l.md)|Katakana (0xA1 - 0xDF). Specific to code page 932.|
|[_ismbbkprint](../c-runtime-library/reference/ismbbkprint-ismbbkprint-l.md)|Non-ASCII text or non-ASCII punctuation symbol. For example, in code page 932 only, `_ismbbkprint` tests for katakana alphanumeric or katakana punctuation (range: 0xA1 - 0xDF).|
|[_ismbbkpunct](../c-runtime-library/reference/ismbbkpunct-ismbbkpunct-l.md)|Non-ASCII punctuation. For example, in code page 932 only, `_ismbbkpunct` tests for katakana punctuation.|
|[_ismbblead](../c-runtime-library/reference/ismbblead-ismbblead-l.md)|First byte of multibyte character. For example, in code page 932 only, valid ranges are 0x81 - 0x9F, 0xE0 - 0xFC.|
|[_ismbbprint](../c-runtime-library/reference/ismbbprint-ismbbprint-l.md)|`isprint` &#124;&#124; `_ismbbkprint`. **ismbbprint** includes the space character (0x20).|
|[_ismbbpunct](../c-runtime-library/reference/ismbbpunct-ismbbpunct-l.md)|`ispunct` &#124;&#124; `_ismbbkpunct`.|
|[_ismbbtrail](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md)|Second byte of multibyte character. For example, in code page 932 only, valid ranges are 0x40 - 0x7E, 0x80 - 0xEC.|

The following table shows the ORed values that compose the test conditions for these routines. The manifest constants `_BLANK`, `_DIGIT`, `_LOWER`, `_PUNCT`, and `_UPPER` are defined in Ctype.h.

|Routine|_BLANK|_DIGIT|LOWER|_PUNCT|UPPER|Non-<br /><br /> ASCII<br /><br /> text|Non-<br /><br /> ASCII<br /><br /> punct|
|-------------|-------------|-------------|-----------|-------------|-----------|------------------------------|-------------------------------|
|`_ismbbalnum`|—|x|x|—|x|x|—|
|`_ismbbalpha`|—|—|x|—|x|x|—|
|`_ismbbblank`|x|—|—|—|—|—|—|
|`_ismbbgraph`|—|x|x|x|x|x|x|
|`_ismbbkalnum`|—|—|—|—|—|x|—|
|`_ismbbkprint`|—|—|—|—|—|x|x|
|`_ismbbkpunct`|—|—|—|—|—|—|x|
|`_ismbbprint`|x|x|x|x|x|x|x|
|`_ismbbpunct`|—|—|—|x|—|—|x|

The `_ismbb` routines are implemented both as functions and as macros. For more information about how to choose either implementation, see [Recommendations for Choosing Between Functions and Macros](../c-runtime-library/recommendations-for-choosing-between-functions-and-macros.md).

## See also

[Byte Classification](../c-runtime-library/byte-classification.md)<br/>
[is, isw Routines](../c-runtime-library/is-isw-routines.md)<br/>
[_mbbtombc, _mbbtombc_l](../c-runtime-library/reference/mbbtombc-mbbtombc-l.md)<br/>
[_mbctombb, _mbctombb_l](../c-runtime-library/reference/mbctombb-mbctombb-l.md)
