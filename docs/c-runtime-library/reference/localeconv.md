---
description: "Learn more about: localeconv"
title: "localeconv"
ms.date: "4/2/2020"
api_name: ["localeconv", "_o_localeconv"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-locale-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["localeconv"]
helpviewer_keywords: ["lconv type", "localeconv function", "locales, getting information on"]
ms.assetid: 7ecdb1f2-88f5-4037-a0e7-c754ab003660
---
# localeconv

Gets detailed information on locale settings.

## Syntax

```C
struct lconv *localeconv( void );
```

## Return Value

**localeconv** returns a pointer to a filled-in object of type [struct lconv](../../c-runtime-library/standard-types.md). The values contained in the object are copied from the locale settings in thread-local storage, and can be overwritten by subsequent calls to **localeconv**. Changes made to the values in this object do not modify the locale settings. Calls to [setlocale](setlocale-wsetlocale.md) with *category* values of **LC_ALL**, **LC_MONETARY**, or **LC_NUMERIC** overwrite the contents of the structure.

## Remarks

The **localeconv** function gets detailed information about numeric formatting for the current locale. This information is stored in a structure of type **lconv**. The **lconv** structure, defined in LOCALE.H, contains the following members:

|Field|Meaning|
|-|-|
decimal_point,<br/>_W_decimal_point|Pointer to decimal-point character for nonmonetary quantities.
thousands_sep,<br/>_W_thousands_sep|Pointer to character that separates groups of digits to left of decimal point for nonmonetary quantities.
grouping|Pointer to a **`char`**-sized integer that contains the size of each group of digits in nonmonetary quantities.
int_curr_symbol,<br/>_W_int_curr_symbol|Pointer to international currency symbol for current locale. First three characters specify alphabetic international currency symbol as defined in the *ISO 4217 Codes for the Representation of Currency and Funds* standard. Fourth character (immediately preceding null character) separates international currency symbol from monetary quantity.
currency_symbol,<br/>_W_currency_symbol|Pointer to local currency symbol for current locale.
mon_decimal_point,<br/>_W_mon_decimal_point|Pointer to decimal-point character for monetary quantities.
mon_thousands_sep,<br/>_W_mon_thousands_sep|Pointer to separator for groups of digits to left of decimal place in monetary quantities.
mon_grouping|Pointer to a **`char`**-sized integer that contains the size of each group of digits in monetary quantities.
positive_sign,<br/>_W_positive_sign|String denoting sign for nonnegative monetary quantities.
negative_sign,<br/>_W_negative_sign|String denoting sign for negative monetary quantities.
int_frac_digits|Number of digits to right of decimal point in internationally formatted monetary quantities.
frac_digits|Number of digits to right of decimal point in formatted monetary quantities.
p_cs_precedes|Set to 1 if currency symbol precedes value for nonnegative formatted monetary quantity. Set to 0 if symbol follows value.
p_sep_by_space|Set to 1 if currency symbol is separated by space from value for nonnegative formatted monetary quantity. Set to 0 if there is no space separation.
n_cs_precedes|Set to 1 if currency symbol precedes value for negative formatted monetary quantity. Set to 0 if symbol succeeds value.
n_sep_by_space|Set to 1 if currency symbol is separated by space from value for negative formatted monetary quantity. Set to 0 if there is no space separation.
p_sign_posn|Position of positive sign in nonnegative formatted monetary quantities.
n_sign_posn|Position of positive sign in negative formatted monetary quantities.

Except as specified, members of the **lconv** structure that have `char *` and `wchar_t *` versions are pointers to strings. Any of these that equals **""** (or **L""** for **`wchar_t`** <strong>\*</strong>) is either of zero length or not supported in the current locale. Note that **decimal_point** and **_W_decimal_point** are always supported and of nonzero length.

The **`char`** members of the structure are small nonnegative numbers, not characters. Any of these that equals **CHAR_MAX** is not supported in the current locale.

The values of **grouping** and **mon_grouping** are interpreted according to the following rules:

- **CHAR_MAX** - Do not perform any further grouping.

- 0 - Use previous element for each of remaining digits.

- *n* - Number of digits that make up current group. Next element is examined to determine size of next group of digits before current group.

The values for **int_curr_symbol** are interpreted according to the following rules:

- The first three characters specify the alphabetic international currency symbol as defined in the *ISO 4217 Codes for the Representation of Currency and Funds* standard.

- The fourth character (immediately preceding the null character) separates the international currency symbol from the monetary quantity.

The values for **p_cs_precedes** and **n_cs_precedes** are interpreted according to the following rules (the **n_cs_precedes** rule is in parentheses):

- 0 - Currency symbol follows value for nonnegative (negative) formatted monetary value.

- 1 - Currency symbol precedes value for nonnegative (negative) formatted monetary value.

The values for **p_sep_by_space** and **n_sep_by_space** are interpreted according to the following rules (the **n_sep_by_space** rule is in parentheses):

- 0 - Currency symbol is separated from value by space for nonnegative (negative) formatted monetary value.

- 1 - There is no space separation between currency symbol and value for nonnegative (negative) formatted monetary value.

The values for **p_sign_posn** and **n_sign_posn** are interpreted according to the following rules:

- 0 - Parentheses surround quantity and currency symbol.

- 1 - Sign string precedes quantity and currency symbol.

- 2 - Sign string follows quantity and currency symbol.

- 3 - Sign string immediately precedes currency symbol.

- 4 - Sign string immediately follows currency symbol.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**localeconv**|\<locale.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Libraries

All versions of the [C run-time libraries](../../c-runtime-library/crt-library-features.md).

## See also

[Locale](../../c-runtime-library/locale.md)<br/>
[setlocale](../../preprocessor/setlocale.md)<br/>
[strcoll Functions](../../c-runtime-library/strcoll-functions.md)<br/>
[strftime, wcsftime, _strftime_l, _wcsftime_l](strftime-wcsftime-strftime-l-wcsftime-l.md)<br/>
[strxfrm, wcsxfrm, _strxfrm_l, _wcsxfrm_l](strxfrm-wcsxfrm-strxfrm-l-wcsxfrm-l.md)<br/>
