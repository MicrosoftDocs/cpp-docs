---
description: "Learn more about: _ismbc Routines"
title: "_ismbc Routines"
ms.date: "11/04/2016"
api_location: ["msvcr110.dll", "msvcr110_clr0400.dll", "msvcr100.dll", "msvcrt.dll", "msvcr90.dll", "msvcr120.dll", "msvcr80.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_ismbc"]
helpviewer_keywords: ["ismbc routines", "_ismbc routines"]
ms.assetid: b8995391-7857-4ac3-9a1e-de946eb4464d
---
# _ismbc Routines

Each **_ismbc** routine tests a given multibyte character `c` for a particular condition.

:::row:::
   :::column span="":::
      [_ismbcalnum, _ismbcalnum_l, _ismbcalpha, _ismbcalpha_l, _ismbcdigit, _ismbcdigit_l](../c-runtime-library/reference/ismbcalnum-functions.md)\
      [_ismbcl0, _ismbcl0_l, _ismbcl1, _ismbcl1_l, _ismbcl2, _ismbcl2_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)\
      [_ismbcgraph, _ismbcgraph_l, _ismbcprint, _ismbcprint_l, _ismbcpunct, _ismbcpunct_l, _ismbcblank, _ismbcblank_l, _ismbcspace, _ismbcspace_l](../c-runtime-library/reference/ismbcgraph-functions.md)\
      [_ismbclegal, _ismbclegal_l, _ismbcsymbol, _ismbcsymbol_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)\
      [_ismbchira, _ismbchira_l, _ismbckata, _ismbckata_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)\
      [_ismbclower, _ismbclower_l, _ismbcupper, _ismbcupper_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)
   :::column-end:::
:::row-end:::

## Remarks

The test result of each **_ismbc** routine depends on the multibyte code page in effect. Multibyte code pages have single-byte alphabetic characters. By default, the multibyte code page is set to the system-default ANSI code page obtained from the operating system at program startup. You can query or change the multibyte code page in use with [_getmbcp](../c-runtime-library/reference/getmbcp.md) or [_setmbcp](../c-runtime-library/reference/setmbcp.md), respectively.

The output value is affected by the `LC_CTYPE` category setting of the locale; see [setlocale](../c-runtime-library/reference/setlocale-wsetlocale.md) for more information. The versions of these functions without the **_l** suffix use the current locale for this locale-dependent behavior; the versions with the **_l** suffix are identical except that they use the locale parameter passed in instead.

|Routine|Test condition|Code page 932 example|
|-------------|--------------------|---------------------------|
|[_ismbcalnum, _ismbcalnum_l](../c-runtime-library/reference/ismbcalnum-functions.md)|Alphanumeric|Returns nonzero if and only if `c` is a single-byte representation of an ASCII English letter: See examples for `_ismbcdigit` and `_ismbcalpha`.|
|[_ismbcalpha, _ismbcalpha_l](../c-runtime-library/reference/ismbcalnum-functions.md)|Alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII English letter: See examples for `_ismbcupper` and `_ismbclower`; or a katakana letter: 0xA6<=`c`<=0xDF.|
|[_ismbcdigit, _ismbcdigit_l](../c-runtime-library/reference/ismbcalnum-functions.md)|Digit|Returns nonzero if and only if `c` is a single-byte representation of an ASCII digit: 0x30<=`c`<=0x39.|
|[_ismbcgraph, _ismbcgraph_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Graphic|Returns nonzero if and only if `c` is a single-byte representation of any ASCII or katakana printable character except a white space ( ). See examples for `_ismbcdigit`, `_ismbcalpha`, and `_ismbcpunct`.|
|[_ismbclegal, _ismbclegal_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)|Valid multibyte character|Returns nonzero if and only if the first byte of `c` is within ranges 0x81 - 0x9F or 0xE0 - 0xFC, while the second byte is within ranges 0x40 - 0x7E or 0x80 - FC.|
|[_ismbclower, _ismbclower_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|Lowercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII lowercase English letter: 0x61<=`c`<=0x7A.|
|[_ismbcprint, _ismbcprint_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Printable|Returns nonzero if and only if `c` is a single-byte representation of any ASCII or katakana printable character including a white space ( ): See examples for `_ismbcspace`, `_ismbcdigit`, `_ismbcalpha`, and `_ismbcpunct`.|
|[_ismbcpunct, _ismbcpunct_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Punctuation|Returns nonzero if and only if `c` is a single-byte representation of any ASCII or katakana punctuation character.|
|[_ismbcblank, _ismbcblank_l,](../c-runtime-library/reference/ismbcgraph-functions.md)|Space or horizontal tab|Returns nonzero if and only if `c` is a single-byte representation of a space character or a horizontal tab character: `c`=0x20 or `c`=0x09.|
|[_ismbcspace, _ismbcspace_l](../c-runtime-library/reference/ismbcgraph-functions.md)|Whitespace|Returns nonzero if and only if `c` is a white space character: `c`=0x20 or 0x09<=`c`<=0x0D.|
|[_ismbcsymbol, _ismbcsymbol_l](../c-runtime-library/reference/ismbclegal-ismbclegal-l-ismbcsymbol-ismbcsymbol-l.md)|Multibyte symbol|Returns nonzero if and only if 0x8141<=`c`<=0x81AC.|
|[_ismbcupper, _ismbcupper_l](../c-runtime-library/reference/ismbclower-ismbclower-l-ismbcupper-ismbcupper-l.md)|Uppercase alphabetic|Returns nonzero if and only if `c` is a single-byte representation of an ASCII uppercase English letter: 0x41<=`c`<=0x5A.|

**Code Page 932 Specific**

The following routines are specific to code page 932.

|Routine|Test condition (code page 932 only)|
|-------------|-------------------------------------------|
|[_ismbchira, _ismbchira_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)|Double-byte Hiragana: 0x829F<=`c`<=0x82F1.|
|[_ismbckata, _ismbckata_l](../c-runtime-library/reference/ismbchira-ismbchira-l-ismbckata-ismbckata-l.md)|Double-byte katakana: 0x8340<=`c`<=0x8396.|
|[_ismbcl0, _ismbcl0_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS non-Kanji: 0x8140<=`c`<=0x889E.|
|[_ismbcl1, _ismbcl1_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS level-1: 0x889F<=`c`<=0x9872.|
|[_ismbcl2, _ismbcl2_l](../c-runtime-library/reference/ismbcl0-ismbcl0-l-ismbcl1-ismbcl1-l-ismbcl2-ismbcl2-l.md)|JIS level-2: 0x989F<=`c`<=0xEA9E.|

`_ismbcl0`, `_ismbcl1`, and `_ismbcl2` check that the specified value `c` matches the test conditions described in the preceding table, but do not check that `c` is a valid multibyte character. If the lower byte is in the ranges 0x00 - 0x3F, 0x7F, or 0xFD - 0xFF, these functions return a nonzero value, indicating that the character satisfies the test condition. Use [_ismbbtrail, _ismbbtrail_l](../c-runtime-library/reference/ismbbtrail-ismbbtrail-l.md) to test whether the multibyte character is defined.

**END Code Page 932 Specific**

## See also

[Character Classification](../c-runtime-library/character-classification.md)<br/>
[is, isw Routines](../c-runtime-library/is-isw-routines.md)<br/>
[_ismbb Routines](../c-runtime-library/ismbb-routines.md)
