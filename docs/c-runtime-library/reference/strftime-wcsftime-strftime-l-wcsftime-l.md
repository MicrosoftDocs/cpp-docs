---
description: "Learn more about: strftime, wcsftime, _strftime_l, _wcsftime_l"
title: "strftime, wcsftime, _strftime_l, _wcsftime_l"
ms.date: "4/2/2020"
api_name: ["strftime", "_wcsftime_l", "_strftime_l", "wcsftime", "_o__strftime_l", "_o__wcsftime_l", "_o_strftime", "_o_wcsftime"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tcsftime", "strftime", "wcsftime", "_strftime_l", "_wcsftime_l"]
helpviewer_keywords: ["_strftime_l function", "strftime function", "tcsftime function", "_wcsftime_l function", "wcsftime function", "_tcsftime function", "time strings"]
ms.assetid: 6330ff20-4729-4c4a-82af-932915d893ea
---
# strftime, wcsftime, _strftime_l, _wcsftime_l

Format a time string.

## Syntax

```C
size_t strftime(
   char *strDest,
   size_t maxsize,
   const char *format,
   const struct tm *timeptr
);
size_t _strftime_l(
   char *strDest,
   size_t maxsize,
   const char *format,
   const struct tm *timeptr,
   _locale_t locale
);
size_t wcsftime(
   wchar_t *strDest,
   size_t maxsize,
   const wchar_t *format,
   const struct tm *timeptr
);
size_t _wcsftime_l(
   wchar_t *strDest,
   size_t maxsize,
   const wchar_t *format,
   const struct tm *timeptr,
   _locale_t locale
);
```

### Parameters

*strDest*<br/>
Output string.

*maxsize*<br/>
Size of the *strDest* buffer, measured in characters (**`char`** or **`wchar_t`**).

*format*<br/>
Format-control string.

*timeptr*<br/>
**tm** data structure.

*locale*<br/>
The locale to use.

## Return Value

**strftime** returns the number of characters placed in *strDest* and **wcsftime** returns the corresponding number of wide characters.

If the total number of characters, including the terminating null, is more than *maxsize*, both **strftime** and **wcsftime** return 0 and the contents of *strDest* are indeterminate.

The number of characters in *strDest* is equal to the number of literal characters in *format* as well as any characters that may be added to *format* via formatting codes. The terminating null of a string is not counted in the return value.

## Remarks

The **strftime** and **wcsftime** functions format the **tm** time value in *timeptr* according to the supplied *format* argument and store the result in the buffer *strDest*. At most, *maxsize* characters are placed in the string. For a description of the fields in the *timeptr* structure, see [asctime](asctime-wasctime.md). **wcsftime** is the wide-character equivalent of **strftime**; its string-pointer argument points to a wide-character string. These functions behave identically otherwise.

This function validates its parameters. If *strDest*, *format*, or *timeptr* is a null pointer, or if the **tm** data structure addressed by *timeptr* is invalid (for example, if it contains out of range values for the time or date), or if the *format* string contains an invalid formatting code, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, the function returns 0 and sets **errno** to **EINVAL**.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tcsftime**|**strftime**|**strftime**|**wcsftime**|

The *format* argument consists of one or more codes; as in **printf**, the formatting codes are preceded by a percent sign (**%**). Characters that do not begin with **%** are copied unchanged to *strDest*. The **LC_TIME** category of the current locale affects the output formatting of **strftime**. (For more information on **LC_TIME**, see [setlocale](setlocale-wsetlocale.md).) The **strftime** and **wcsftime** functions use the currently set locale. The **_strftime_l** and **_wcsftime_l** versions of these functions are identical except that they take the locale as a parameter and use that instead of the currently set locale. For more information, see [Locale](../../c-runtime-library/locale.md).

The **strftime** functions support these formatting codes:

|Code|Replacement string|
|-|-|
|**%a**|Abbreviated weekday name in the locale|
|**%A**|Full weekday name in the locale|
|**%b**|Abbreviated month name in the locale|
|**%B**|Full month name in the locale|
|**%c**|Date and time representation appropriate for locale|
|**%C**|The year divided by 100 and truncated to an integer, as a decimal number (00−99)|
|**%d**|Day of month as a decimal number (01 - 31)|
|**%D**|Equivalent to **%m/%d/%y**|
|**%e**|Day of month as a decimal number (1 - 31), where single digits are preceded by a space|
|**%F**|Equivalent to **%Y-%m-%d**|
|**%g**|The last 2 digits of the ISO 8601 week-based year as a decimal number (00 - 99)|
|**%G**|The ISO 8601 week-based year as a decimal number|
|**%h**|Abbreviated month name (equivalent to **%b**)|
|**%H**|Hour in 24-hour format (00 - 23)|
|**%I**|Hour in 12-hour format (01 - 12)|
|**%j**|Day of the year as a decimal number (001 - 366)|
|**%m**|Month as a decimal number (01 - 12)|
|**%M**|Minute as a decimal number (00 - 59)|
|**%n**|A newline character (**\n**)|
|**%p**|The locale's A.M./P.M. indicator for 12-hour clock|
|**%r**|The locale's 12-hour clock time|
|**%R**|Equivalent to **%H:%M**|
|**%S**|Second as a decimal number (00 - 59)|
|**%t**|A horizontal tab character (**\t**)|
|**%T**|Equivalent to **%H:%M:%S**, the ISO 8601 time format|
|**%u**|ISO 8601 weekday as a decimal number (1 - 7; Monday is 1)|
|**%U**|Week number of the year as a decimal number (00 - 53), where the first Sunday is the first day of week 1|
|**%V**|ISO 8601 week number as a decimal number (00 - 53)|
|**%w**|Weekday as a decimal number (0 - 6; Sunday is 0)|
|**%W**|Week number of the year as a decimal number (00 - 53), where the first Monday is the first day of week 1|
|**%x**|Date representation for the locale|
|**%X**|Time representation for the locale|
|**%y**|Year without century, as decimal number (00 - 99)|
|**%Y**|Year with century, as decimal number|
|**%z**|The offset from UTC in ISO 8601 format; no characters if time zone is unknown|
|**%Z**|Either the locale's time-zone name or time zone abbreviation, depending on registry settings; no characters if time zone is unknown|
|**%%**|Percent sign|

As in the **printf** function, the **#** flag may prefix any formatting code. In that case, the meaning of the format code is changed as follows.

|Format code|Meaning|
|-----------------|-------------|
|**%#a**, **%#A**, **%#b**, **%#B**, **%#g**, **%#G**, **%#h**, **%#n**, **%#p**, **%#t**, **%#u**, **%#w**, **%#X**, **%#z**, **%#Z**, **%#%**|**#** flag is ignored.|
|**%#c**|Long date and time representation, appropriate for the locale. For example: "Tuesday, March 14, 1995, 12:41:29".|
|**%#x**|Long date representation, appropriate to the locale. For example: "Tuesday, March 14, 1995".|
|**%#d**, **%#D**, **%#e**, **%#F**, **%#H**, **%#I**, **%#j**, **%#m**, **%#M**, **%#r**, **%#R**, **%#S**, **%#T**, **%#U**, **%#V**, **%#W**, **%#y**, **%#Y**|Remove leading zeros or spaces (if any).|

The ISO 8601 week and week-based year produced by **%V**, **%g**, and **%G**, uses a week that begins on Monday, where week 1 is the week that contains January 4th, which is the first week that includes at least four days of the year. If the first Monday of the year is the 2nd, 3rd, or 4th, the preceding days are part of the last week of the preceding year. For those days, **%V** is replaced by 53, and both **%g** and **%G** are replaced by the digits of the preceding year.

> [!NOTE]
> When using one of the `strftime` functions with a `tm` pointer returned from `gmtime`, the values printed via the `%Z` and `%z` specifiers will not be accurate. This is because the `tm` struct as specified by the C Standard does not contain the information for time zone name nor offset. Instead, the timezone information is populated via the global variables [`_timezone` and `_dstbias`](../../c-runtime-library/daylight-dstbias-timezone-and-tzname.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**strftime**|\<time.h>|
|**wcsftime**|\<time.h> or \<wchar.h>|
|**_strftime_l**|\<time.h>|
|**_wcsftime_l**|\<time.h> or \<wchar.h>|

The **_strftime_l** and **_wcsftime_l** functions are Microsoft-specific. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

See the example for [time](time-time32-time64.md).

## See also

[Locale](../../c-runtime-library/locale.md) <br/>
[Time Management](../../c-runtime-library/time-management.md) <br/>
[String Manipulation](../../c-runtime-library/string-manipulation-crt.md) <br/>
[localeconv](localeconv.md) <br/>
[setlocale, _wsetlocale](setlocale-wsetlocale.md) <br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md) <br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
