---
title: "vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l"
description: "API reference for vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, and _vsnwprintf_l; which write formatted output using a pointer to a list of arguments."
ms.date: "3/9/2021"
api_name: ["_vsnprintf", "_vsnprintf_l", "_vsnwprintf", "_vsnwprintf_l", "_vsnprintf", "_vsnprintf;", "vsnprintf; _vsnprintf", "_vsnwprintf;", "_vsnprintf_l;", "_vsnwprintf_l;"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ntoskrnl.exe", "ucrtbase.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_vsnprintf", "_vsnwprintf", "_vsntprintf", "vsnprintf", "stdio/vsnprintf", "stdio/_vsnprintf", "stdio/_vsnprintf_l", "stdio/_vsnwprintf", "stdio/_vsnwprintf_l", "_vsnprintf_l", "_vsnwprintf_l"]
helpviewer_keywords: ["vsntprintf function", "_vsnwprintf_l function", "vsnwprintf_l function", "vsntprintf_l function", "_vsntprintf function", "_vsnprintf_l function", "vsnprintf function", "_vsntprintf_l function", "vsnprintf_l function", "_vsnwprintf function", "_vsnprintf function", "formatted text [C++]", "vsnwprintf function"]
---
# `vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`

Write formatted output using a pointer to a list of arguments. More secure versions of these functions are available; see [`vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`](vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md).

## Syntax

```C
int vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf(
   char *buffer,
   size_t count,
   const char *format,
   va_list argptr
);
int _vsnprintf_l(
   char *buffer,
   size_t count,
   const char *format,
   locale_t locale,
   va_list argptr
);
int _vsnwprintf(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   va_list argptr
);
int _vsnwprintf_l(
   wchar_t *buffer,
   size_t count,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
);
template <size_t size>
int vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnprintf(
   char (&buffer)[size],
   size_t count,
   const char *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnprintf_l(
   char (&buffer)[size],
   size_t count,
   const char *format,
   locale_t locale,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   va_list argptr
); // C++ only
template <size_t size>
int _vsnwprintf_l(
   wchar_t (&buffer)[size],
   size_t count,
   const wchar_t *format,
   locale_t locale,
   va_list argptr
); // C++ only
```

### Parameters

*`buffer`*<br/>
Storage location for output.

*`count`*<br/>
Maximum number of characters to write.

*`format`*<br/>
Format specification.

*`argptr`*<br/>
Pointer to list of arguments.

*`locale`*<br/>
The locale to use.

For more information, see [Format Specification Syntax: `printf` and `wprintf` Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md).

## Return Value

Let **`len`** be the length of the formatted data string specified by *`format`* and *`argptr`*, not including the terminating null. Both **`len`** and *`count`* are the number of characters for **`vsnprintf`** and **`_vsnprintf`**, and the number of wide characters for **`_vsnwprintf`**.

For all functions, if an encoding error occurs during formatting, the invalid parameter handler is invoked &mdash; as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **`errno`** to **`EINVAL`**.

For all functions, if *`buffer`* is **`NULL`** and *`count`* is zero, **`len`** is returned as the count of characters required to format the output &mdash; not including the terminating null. To make a successful call with the same *`argument`* and *`locale`* parameters, allocate a buffer holding at least **`len`** + 1 characters.

For all functions, if **`len`** < *`count`*, **`len`** characters are stored in *`buffer`*, a null-terminator is appended, and **`len`** is returned.

The **`vsnprintf`** function truncates the output when *`count`* is nonzero and **`len`** >= *`count`*, by placing a null-terminator at `buffer[count-1]` (when *`count`* is zero, no characters are stored in *`buffer`* &mdash; whether it is **`NULL`** or not). In all cases where **`len`** >= *`count`*, the value returned by the **`vsnprintf`** function is **`len`** (the number of characters that would have been output if *`count`* was large enough). As a corollary, if **`vsnprintf`** returns a value > *`count`* - 1, the output has been truncated.

For all functions other than **`vsnprintf`**, if **`len`** = *`count`*, **`len`** characters are stored in *`buffer`*, no null-terminator is appended, and **`len`** is returned. If **`len`** > *`count`* and *`buffer`* is not **`NULL`**, *`count`* characters are stored in *`buffer`*, no null-terminator is appended, and a negative value is returned.

If *`buffer`* is **`NULL`** and *`count`* is nonzero, or if *`format`* is **`NULL`**, the invalid parameter handler is invoked &mdash; as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return -1 and set **`errno`** to **`EINVAL`**.

For information about these and other error codes, see [`errno`, `_doserrno`, `_sys_errlist`, and `_sys_nerr`](../../c-runtime-library/errno-doserrno-sys-errlist-and-sys-nerr.md).

## Remarks

Each of these functions takes a pointer to an argument list, then formats the data, and writes up to *`count`* characters  to the memory pointed to by *`buffer`*. The **`vsnprintf`** function always writes a null terminator, even if it truncates the output. When using **`_vsnprintf`** and **`_vsnwprintf`**, the buffer will be null-terminated only if there's room at the end (that is, if the number of characters to write is less than *`count`*).

> [!IMPORTANT]
> To prevent certain kinds of security risks, ensure that *format* isn't a user-defined string. For more information, see [Avoiding Buffer Overruns](/windows/win32/SecBP/avoiding-buffer-overruns).
> Starting in Windows 10 version 2004 (build 19041), the `printf` family of functions prints exactly representable floating point numbers according to the IEEE 754 rules for rounding. In previous versions of Windows, exactly representable floating point numbers ending in '5' would always round up. IEEE 754 states that they must round to the closest even digit (also known as "Banker's Rounding"). For example, both `printf("%1.0f", 1.5)` and `printf("%1.0f", 2.5)` should round to 2. Previously, 1.5 would round to 2 and 2.5 would round to 3. This change only affects exactly representable numbers. For example, 2.35 (which, when represented in memory, is closer to 2.35000000000000008) continues to round up to 2.4. Rounding done by these functions now also respects the floating point rounding mode set by [`fesetround`](fegetround-fesetround2.md). Previously, rounding always chose `FE_TONEAREST` behavior. This change only affects programs built using Visual Studio 2019 version 16.2 and later. To use the legacy floating point rounding behavior, link with ['legacy_stdio_float_rounding.obj`](../link-options.md).

> [!NOTE]
> To ensure that there's room for the terminating null when calling **`_vsnprintf`**, **`_vsnprintf_l`**, **`_vsnwprintf`** and **`_vsnwprintf_l`**, be sure that *`count`* is strictly less than the buffer length and initialize the buffer to null prior to calling the function.
>
> Because **`vsnprintf`** always writes the terminating null, the *count* parameter may be equal to the size of the buffer.

Beginning with the UCRT in Visual Studio 2015 and Windows 10, **`vsnprintf`** is no longer identical to **`_vsnprintf`**. The **`vsnprintf`** function complies with the C99 standard; **`_vnsprintf`** is kept for backward compatibility with older Visual Studio code.

The versions of these functions with the **`_l`** suffix are identical except that they use the locale parameter passed in instead of the current thread locale.

In C++, these functions have template overloads that invoke the newer, secure counterparts of these functions. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

### Generic-Text Routine Mappings

|`TCHAR.H` routine|`_UNICODE` & `_MBCS` not defined|`_MBCS` defined|`_UNICODE` defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**`_vsntprintf`**|**`_vsnprintf`**|**`_vsnprintf`**|**`_vsnwprintf`**|
|**`_vsntprintf_l`**|**`_vsnprintf_l`**|**`_vsnprintf_l`**|**`_vsnwprintf_l`**|

## Requirements

|Routine|Required header (C)|Required header (C++)|
|-------------|---------------------------|-------------------------------|
|**`vsnprintf`**, **`_vsnprintf`**, **`_vsnprintf_l`**|`<stdio.h>`|`<stdio.h>` or  `<cstdio>`|
|**`_vsnwprintf`**, **`_vsnwprintf_l`**|`<stdio.h>` or `<wchar.h>`|`<stdio.h>`, `<wchar.h>`, `<cstdio>`, or `<cwchar>`|

The **`_vsnprintf`**, **`_vsnprintf_l`**, **`_vsnwprintf`** and **`_vsnwprintf_l`** functions are Microsoft-specific. For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example: Use wide characters with `_vsnwprintf()`

```C
// crt_vsnwprintf.c
// compile by using: cl /W3 crt_vsnwprintf.c

// To turn off error C4996, define this symbol:
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <wtypes.h>

#define BUFFCOUNT (10)

void FormatOutput(LPCWSTR formatstring, ...)
{
    int nSize = 0;
    wchar_t buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    // Note: _vsnwprintf is deprecated; consider vsnwprintf_s instead
    nSize = _vsnwprintf(buff, BUFFCOUNT - 1, formatstring, args); // C4996
    wprintf(L"nSize: %d, buff: %ls\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput(L"%ls %ls", L"Hi", L"there");
    FormatOutput(L"%ls %ls", L"Hi", L"there!");
    FormatOutput(L"%ls %ls", L"Hi", L"there!!");
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: -1, buff: Hi there!
```

The behavior changes if you use vsnprintf instead, along with narrow-string parameters. The *`count`* parameter can be the entire size of the buffer, and the return value is the number of characters that would have been written if *`count`* was large enough:

## Example: Use `vsnprintf()` with narrow strings

```C
// crt_vsnprintf.c
// compile by using: cl /W4 crt_vsnprintf.c
#include <stdio.h>
#include <stdarg.h> // for va_list, va_start
#include <string.h> // for memset

#define BUFFCOUNT (10)

void FormatOutput(char* formatstring, ...)
{
    int nSize = 0;
    char buff[BUFFCOUNT];
    memset(buff, 0, sizeof(buff));
    va_list args;
    va_start(args, formatstring);
    nSize = vsnprintf(buff, sizeof(buff), formatstring, args);
    printf("nSize: %d, buff: %s\n", nSize, buff);
    va_end(args);
}

int main() {
    FormatOutput("%s %s", "Hi", "there");   //  8 chars + null
    FormatOutput("%s %s", "Hi", "there!");  //  9 chars + null
    FormatOutput("%s %s", "Hi", "there!!"); // 10 chars + null
}
```

```Output
nSize: 8, buff: Hi there
nSize: 9, buff: Hi there!
nSize: 10, buff: Hi there!
```

## See also

[Stream I/O](../../c-runtime-library/stream-i-o.md)<br/>
[`vprintf` Functions](../../c-runtime-library/vprintf-functions.md)<br/>
[Format Specification Syntax: `printf` and `wprintf` Functions](../../c-runtime-library/format-specification-syntax-printf-and-wprintf-functions.md)<br/>
[`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](fprintf-fprintf-l-fwprintf-fwprintf-l.md)<br/>
[`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](printf-printf-l-wprintf-wprintf-l.md)<br/>
[`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md)<br/>
[`va_arg`, `va_copy`, `va_end`, `va_start`](va-arg-va-copy-va-end-va-start.md)<br/>
