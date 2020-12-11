---
description: "Learn more about: _mbsnbicmp, _mbsnbicmp_l"
title: "_mbsnbicmp, _mbsnbicmp_l"
ms.date: "4/2/2020"
api_name: ["_mbsnbicmp_l", "_mbsnbicmp", "_o__mbsnbicmp", "_o__mbsnbicmp_l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-multibyte-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_mbsnbicmp", "mbsnbicmp", "mbsnbicmp_l", "_mbsnbicmp_l"]
helpviewer_keywords: ["_tcsnicmp_l function", "_strnicmp function", "mbsnbicmp_l function", "_wcsnicmp_l function", "_mbsnbicmp function", "_mbsnbicmp_l function", "_tcsnicmp function", "_strnicmp_l function", "mbsnbicmp function", "_wcsnicmp function"]
ms.assetid: ddb44974-8b0c-42f0-90d0-56c9350bae0c
---
# _mbsnbicmp, _mbsnbicmp_l

Compares **n** bytes of two multibyte-character strings, and ignores case.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _mbsnbicmp(
   const unsigned char *string1,
   const unsigned char *string2,
   size_t count
);
```

### Parameters

*string1*, *string2*<br/>
Null-terminated strings to compare.

*count*<br/>
Number of bytes to compare.

## Return Value

The return value indicates the relationship between the substrings.

|Return value|Description|
|------------------|-----------------|
|< 0|*string1* substring less than *string2* substring.|
|0|*string1* substring identical to *string2* substring.|
|> 0|*string1* substring greater than *string2* substring.|

On an error, **_mbsnbicmp** returns **_NLSCMPERROR**, which is defined in String.h and Mbstring.h.

## Remarks

The **_mbsnbicmp** function performs an ordinal comparison of at most the first *count* bytes of *string1* and *string2*. The comparison is performed by converting each character to lowercase; [_mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md) is a case-sensitive version of **_mbsnbicmp**. The comparison ends if a terminating null character is reached in either string before *count* characters are compared. If the strings are equal when a terminating null character is reached in either string before *count* characters are compared, the shorter string is lesser.

**_mbsnbicmp**  is similar to [_mbsnbcmp](mbsnbcmp-mbsnbcmp-l.md), except that it compares strings up to *count* bytes instead of by characters.

Two strings containing characters located between 'Z' and 'a' in the ASCII table ('[', '\\', ']', '^', '_', and '\`') compare differently, depending on their case. For example, the two strings "ABCDE" and "ABCD^" compare one way if the comparison is lowercase ("abcde" > "abcd^") and the other way ("ABCDE" < "ABCD^") if it is uppercase.

**_mbsnbicmp** recognizes multibyte-character sequences according to the [multibyte code page](../../c-runtime-library/code-pages.md) currently in use. It is not affected by the current locale setting.

If either *string1* or *string2* is a null pointer, **_mbsnbicmp** invokes the invalid parameter handler as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns **_NLSCMPERROR** and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tcsnicmp**|**_strnicmp**|**_mbsnbicmp**|**_wcsnicmp**|
|**_tcsnicmp_l**|**_strnicmp_l**|**_mbsnbicmp_l**|**_wcsnicmp_l**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_mbsnbicmp**|\<mbstring.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md).

## See also

[String Manipulation](../../c-runtime-library/string-manipulation-crt.md)<br/>
[_mbsnbcat, _mbsnbcat_l](mbsnbcat-mbsnbcat-l.md)<br/>
[_mbsnbcmp, _mbsnbcmp_l](mbsnbcmp-mbsnbcmp-l.md)<br/>
[_stricmp, _wcsicmp, _mbsicmp, _stricmp_l, _wcsicmp_l, _mbsicmp_l](stricmp-wcsicmp-mbsicmp-stricmp-l-wcsicmp-l-mbsicmp-l.md)<br/>
