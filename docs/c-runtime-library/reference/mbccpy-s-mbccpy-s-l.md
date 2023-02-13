---
description: "Learn more about: _mbccpy_s, _mbccpy_s_l"
title: "_mbccpy_s, _mbccpy_s_l"
ms.date: "4/2/2020"
api_name: ["_mbccpy_s", "_mbccpy_s_l", "_o__mbccpy_s", "_o__mbccpy_s_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbccpy_s_l", "mbccpy_s_l", "mbccpy_s", "_mbccpy_s"]
helpviewer_keywords: ["tccpy_s_l function", "_tccpy_s function", "_mbccpy_s function", "mbccpy_s function", "tccpy_s function", "mbccpy_s_l function", "_tccpy_s_l function", "_mbccpy_s_l function"]
ms.assetid: b6e965fa-53c1-4ec3-85ef-a1c4b4f2b2da
---
# `_mbccpy_s`, `_mbccpy_s_l`

Copies one multibyte character from a string to another string. These versions of [`_mbccpy`, `_mbccpy_l`](mbccpy-mbccpy-l.md) have security enhancements, as described in [Security features in the CRT](../security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _mbccpy_s(
   unsigned char *dest,
   size_t buffSizeInBytes,
   int * pCopied,
   const unsigned char *src
);
errno_t _mbccpy_s_l(
   unsigned char *dest,
   size_t buffSizeInBytes,
   int * pCopied,
   const unsigned char *src,
   _locale_t locale
);
template <size_t size>
errno_t _mbccpy_s(
   unsigned char (&dest)[size],
   int * pCopied,
   const unsigned char *src
); // C++ only
template <size_t size>
errno_t _mbccpy_s_l(
   unsigned char (&dest)[size],
   int * pCopied,
   const unsigned char *src,
   _locale_t locale
); // C++ only
```

### Parameters

*`dest`*\
Copy destination.

*`buffSizeInBytes`*\
Size of the destination buffer.

*`pCopied`*\
Filled with the number of bytes copied (1 or 2 if successful). Pass `NULL` if you don't care about the number.

*`src`*\
Multibyte character to copy.

*`locale`*\
Locale to use.

## Return value

Zero if successful; an error code on failure. If *`src`* or *`dest`* is `NULL`, or if more than `buffSizeinBytes` bytes would be copied to *`dest`*, then the invalid parameter handler is invoked, as described in [Parameter validation](../parameter-validation.md). If execution is allowed to continue, the functions return `EINVAL`, and `errno` is set to `EINVAL`.

## Remarks

The **`_mbccpy_s`** function copies one multibyte character from *`src`* to *`dest`*. If *`src`* doesn't point to the lead byte of a multibyte character as determined by an implicit call to [`_ismbblead`](ismbblead-ismbblead-l.md), then the single byte that *`src`* points to is copied. If *`src`* points to a lead byte, but the following byte is 0 and thus invalid, then 0 is copied to *`dest`*, `errno` is set to `EILSEQ`, and the function returns `EILSEQ`.

**`_mbccpy_s`** doesn't append a null terminator; however, if *`src`* points to a null character, then that null is copied to *`dest`* (as a regular single-byte copy).

The value in *`pCopied`* is filled with the number of bytes copied. Possible values are 1 and 2 if the operation is successful. If `NULL` is passed in, this parameter is ignored.

| *`src`* | copied to *`dest`* | *`pCopied`* | Return value |
|---|---|---|---|
| non-lead-byte | non-lead-byte | 1 | 0 |
| 0 | 0 | 1 | 0 |
| lead-byte followed by non-0 | lead-byte followed by non-0 | 2 | 0 |
| lead-byte followed by 0 | 0 | 1 | `EILSEQ` |

The second row is just a special case of the first row. The table assumes *`buffSizeInBytes`* >= *`pCopied`*.

**`_mbccpy_s`** uses the current locale for any locale-dependent behavior. **`_mbccpy_s_l`** is identical to **`_mbccpy_s`** except that **`_mbccpy_s_l`** uses the locale passed in for any locale-dependent behavior.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically, eliminating the need to specify a size argument. For more information, see [Secure template overloads](../secure-template-overloads.md).

By default, this function's global state is scoped to the application. To change this behavior, see [Global state in the CRT](../global-state.md).

### Generic-text routine mappings

| Tchar.h routine | `_UNICODE` and `_MBCS` not defined | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_tccpy_s` | Maps to macro or inline function. | **`_mbccpy_s`** | Maps to macro or inline function. |

## Requirements

| Routine | Required header |
|---|---|
| **`_mbccpy_s`** | \<mbstring.h> |
| **`_mbccpy_s_l`** | \<mbstring.h> |

For more compatibility information, see [Compatibility](../compatibility.md).

## See also

[Locale](../locale.md)\
[Interpretation of multibyte-character sequences](../interpretation-of-multibyte-character-sequences.md)\
[`_mbclen`, `mblen`, `_mblen_l`](mbclen-mblen-mblen-l.md)
