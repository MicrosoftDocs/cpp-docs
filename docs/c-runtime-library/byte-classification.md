---
description: "Learn more about: Byte classification"
title: "Byte classification"
ms.date: "04/04/2018"
f1_keywords: ["c.types.bytes"]
helpviewer_keywords: ["code page 932", "byte classification routines", "bytes, testing"]
ms.assetid: 1cb52d71-fb0c-46ca-aad7-6472c1103370
---
# Byte classification

Each of these routines tests a specified byte of a multibyte character for satisfaction of a condition. Except where specified otherwise, the output value is affected by the setting of the `LC_CTYPE` category setting of the locale. For more information, see [`setlocale`](./reference/setlocale-wsetlocale.md). The versions of these functions without the **`_l`** suffix use the current locale for this locale-dependent behavior; the versions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead.

> [!NOTE]
> By definition, the ASCII characters between 0 and 127 are a subset of all multibyte-character sets. For example, the Japanese katakana character set includes ASCII as well as non-ASCII characters.

The predefined constants in the following table are defined in `<ctype.h>`.

## Multibyte-character byte-classification routines

| Routine | Byte Test Condition |
|--|--|
| [`isleadbyte`, `_isleadbyte_l`](./reference/isleadbyte-isleadbyte-l.md) | Lead byte; test result depends on `LC_CTYPE` category setting of current locale |
| [`_ismbbalnum`, `_ismbbalnum_l`](./reference/ismbbalnum-ismbbalnum-l.md) | `isalnum || _ismbbkalnum` |
| [`_ismbbalpha`, `_ismbbalpha_l`](./reference/ismbbalpha-ismbbalpha-l.md) | `isalpha || _ismbbkalpha` |
| [`_ismbbgraph`, `_ismbbgraph_l`](./reference/ismbbgraph-ismbbgraph-l.md) | Same as `_ismbbprint`, but `_ismbbgraph` doesn't include the space character (0x20) |
| [`_ismbbkalnum`, `_ismbbkalnum_l`](./reference/ismbbkalnum-ismbbkalnum-l.md) | Non-ASCII text symbol other than punctuation. For example, in code page 932 only, `_ismbbkalnum` tests for katakana alphanumeric |
| [`_ismbbkana`, `_ismbbkana_l`](./reference/ismbbkana-ismbbkana-l.md) | Katakana (0xA1 - 0xDF), code page 932 only |
| [`_ismbbkprint`, `_ismbbkprint_l`](./reference/ismbbkprint-ismbbkprint-l.md) | Non-ASCII text or non-ASCII punctuation symbol. For example, in code page 932 only, `_ismbbkprint` tests for katakana alphanumeric or katakana punctuation (range: 0xA1 - 0xDF). |
| [`_ismbbkpunct`, `_ismbbkpunct_l`](./reference/ismbbkpunct-ismbbkpunct-l.md) | Non-ASCII punctuation. For example, in code page 932 only, `_ismbbkpunct` tests for katakana punctuation. |
| [`_ismbblead`, `_ismbblead_l`](./reference/ismbblead-ismbblead-l.md) | First byte of multibyte character. For example, in code page 932 only, valid ranges are 0x81 - 0x9F, 0xE0 - 0xFC. |
| [`_ismbbprint`, `_ismbbprint_l`](./reference/ismbbprint-ismbbprint-l.md) | `isprint || _ismbbkprint`. `ismbbprint` includes the space character (0x20) |
| [`_ismbbpunct`, `_ismbbpunct_l`](./reference/ismbbpunct-ismbbpunct-l.md) | `ispunct || _ismbbkpunct` |
| [`_ismbbtrail`, `_ismbbtrail_l`](./reference/ismbbtrail-ismbbtrail-l.md) | Second byte of multibyte character. For example, in code page 932 only, valid ranges are 0x40 - 0x7E, 0x80 - 0xEC. |
| [`_ismbslead`, `_ismbslead_l`](./reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md) | Lead byte (in string context) |
| [`ismbstrail`, `_ismbstrail_l`](./reference/ismbslead-ismbstrail-ismbslead-l-ismbstrail-l.md) | Trail byte (in string context) |
| [`_mbbtype`, `_mbbtype_l`](./reference/mbbtype-mbbtype-l.md) | Return byte type based on previous byte |
| [`_mbsbtype`, `_mbsbtype_l`](./reference/mbsbtype-mbsbtype-l.md) | Return type of byte within string |
| [`mbsinit`](./reference/mbsinit.md) | Tracks the state of a multibyte character conversion. |

The `MB_LEN_MAX` macro, defined in `<limits.h>`, expands to the maximum length in bytes that any multibyte character can have. `MB_CUR_MAX`, defined in `<stdlib.h>`, expands to the maximum length in bytes of any multibyte character in the current locale.

## See also

[Universal C runtime routines by category](./run-time-routines-by-category.md)
