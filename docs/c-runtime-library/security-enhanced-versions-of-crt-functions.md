---
description: "Learn more about: Security-Enhanced Versions of CRT Functions"
title: "Security-Enhanced Versions of CRT Functions"
ms.date: "03/21/2018"
helpviewer_keywords: ["security [CRT]", "security-enhanced CRT", "CRT, security enhancements"]
ms.assetid: f87e5a01-4cb2-4379-9e8f-d4693828c55a
---
# Security-enhanced versions of CRT functions

More secure versions of run-time library routines are available. For more information about security enhancements in the CRT, see [Security features in the CRT](./security-features-in-the-crt.md).

## Secure functions

| CRT Function | Security enhanced function | Use |
|---|---|---|
| [`_access`, `_waccess`](./reference/access-waccess.md) | [`_access_s`, `_waccess_s`](./reference/access-s-waccess-s.md) | Determine file-access permission |
| [`_alloca`](./reference/alloca.md) | [`_malloca`](./reference/malloca.md) | Allocate memory on the stack |
| [`asctime`, `_wasctime`](./reference/asctime-wasctime.md) | [`asctime_s`, `_wasctime_s`](./reference/asctime-s-wasctime-s.md) | Convert time from type `struct tm` to character string |
| [`bsearch`](./reference/bsearch.md) | [`bsearch_s`](./reference/bsearch-s.md) | Perform a binary search of a sorted array |
| [`_cgets`, `_cgetws`](./cgets-cgetws.md) | [`_cgets_s`, `_cgetws_s`](./reference/cgets-s-cgetws-s.md) | Get a character string from the console |
| [`_chsize`](./reference/chsize.md) | [`_chsize_s`](./reference/chsize-s.md) | Change the size of a file |
| [`clearerr`](./reference/clearerr.md) | [`clearerr_s`](./reference/clearerr-s.md) | Reset the error indicator for a stream |
| [`_control87`, `_controlfp`, `__control87_2`](./reference/control87-controlfp-control87-2.md) | [`_controlfp_s`](./reference/controlfp-s.md) | Get and set the floating-point control word |
| [`_cprintf`, `_cprintf_l`, `_cwprintf`, `_cwprintf_l`](./reference/cprintf-cprintf-l-cwprintf-cwprintf-l.md) | [`_cprintf_s`, `_cprintf_s_l`, `_cwprintf_s`, `_cwprintf_s_l`](./reference/cprintf-s-cprintf-s-l-cwprintf-s-cwprintf-s-l.md) | Format and print to the console |
| [`_cscanf`, `_cscanf_l`, `_cwscanf`, `_cwscanf_l`](./reference/cscanf-cscanf-l-cwscanf-cwscanf-l.md) | [`_cscanf_s`, `_cscanf_s_l`, `_cwscanf_s`, `_cwscanf_s_l`](./reference/cscanf-s-cscanf-s-l-cwscanf-s-cwscanf-s-l.md) | Read formatted data from the console |
| [`ctime`, `_ctime32`, `_ctime64`, `_wctime`, `_wctime32`, `_wctime64`](./reference/ctime-ctime32-ctime64-wctime-wctime32-wctime64.md) | [`_ctime_s`, `_ctime32_s`, `_ctime64_s`, `_wctime_s`, `_wctime32_s`, `_wctime64_s`](./reference/ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md) | Convert time from type `time_t`, `__time32_t` or `__time64_t` to character string |
| [`_ecvt`](./reference/ecvt.md) | [`_ecvt_s`](./reference/ecvt-s.md) | Convert a **`double`** number to a string |
| [`_fcvt`](./reference/fcvt.md) | [`_fcvt_s`](./reference/fcvt-s.md) | Converts a floating-point number to a string |
| [`fopen`, `_wfopen`](./reference/fopen-wfopen.md) | [`fopen_s`, `_wfopen_s`](./reference/fopen-s-wfopen-s.md) | Open a file |
| [`fprintf`, `_fprintf_l`, `fwprintf`, `_fwprintf_l`](./reference/fprintf-fprintf-l-fwprintf-fwprintf-l.md) | [`fprintf_s`, `_fprintf_s_l`, `fwprintf_s`, `_fwprintf_s_l`](./reference/fprintf-s-fprintf-s-l-fwprintf-s-fwprintf-s-l.md) | Print formatted data to a stream |
| [`fread`](./reference/fread.md) | [`fread_s`](./reference/fread-s.md) | Read from a file |
| [`_fread_nolock`](./reference/fread-nolock.md) | [`_fread_nolock_s`](./reference/fread-nolock-s2.md) | Read from a file without using a multi-thread write lock |
| [`freopen`, `_wfreopen`](./reference/freopen-wfreopen.md) | [`freopen_s`, `_wfreopen_s`](./reference/freopen-s-wfreopen-s.md) | Reopen the file |
| [`fscanf`, `_fscanf_l`, `fwscanf`, `_fwscanf_l`](./reference/fscanf-fscanf-l-fwscanf-fwscanf-l.md) | [`fscanf_s`, `_fscanf_s_l`, `fwscanf_s`, `_fwscanf_s_l`](./reference/fscanf-s-fscanf-s-l-fwscanf-s-fwscanf-s-l.md) | Read formatted data from a stream |
| [`_ftime`, `_ftime32`, `_ftime64`](./reference/ftime-ftime32-ftime64.md) | [`_ftime_s`, `_ftime32_s`, `_ftime64_s`](./reference/ftime-s-ftime32-s-ftime64-s.md) | Get the current time |
| [`_gcvt`](./reference/gcvt.md) | [`_gcvt_s`](./reference/gcvt-s.md) | Convert a floating-point value to a string, and store it in a buffer |
| [`getenv`, `_wgetenv`](./reference/getenv-wgetenv.md) | [`getenv_s`, `_wgetenv_s`](./reference/getenv-s-wgetenv-s.md) | Get a value from the current environment. |
| [`gets`, `getws`](./gets-getws.md) | [`gets_s`, `_getws_s`](./reference/gets-s-getws-s.md) | Get a line from the `stdin` stream |
| [`gmtime`, `_gmtime32`, `_gmtime64`](./reference/gmtime-gmtime32-gmtime64.md) | [`_gmtime32_s`, `_gmtime64_s`](./reference/gmtime-s-gmtime32-s-gmtime64-s.md) | Convert time from type `time_t` to `struct tm` or from type `__time64_t` to `struct tm` |
| [`itoa`, `_itoa`, `ltoa`, `_ltoa`, `ultoa`, `_ultoa`, `_i64toa`, `_ui64toa`, `_itow`, `_ltow`, `_ultow`, `_i64tow`, `_ui64tow`](./reference/itoa-itow.md) | [`_itoa_s`, `_ltoa_s`, `_ultoa_s`, `_i64toa_s`, `_ui64toa_s`, `_itow_s`, `_ltow_s`, `_ultow_s`, `_i64tow_s`, `_ui64tow_s`](./reference/itoa-s-itow-s.md) | Convert an integral type to a string |
| [`_lfind`](./reference/lfind.md) | [`_lfind_s`](./reference/lfind-s.md) | Perform a linear search for the specified key |
| [`localtime`, `_localtime32`, `_localtime64`](./reference/localtime-localtime32-localtime64.md) | [`localtime_s`, `_localtime32_s`, `_localtime64_s`](./reference/localtime-s-localtime32-s-localtime64-s.md) | Convert time from type `time_t` to `struct tm` or from type `__time64_t` to `struct tm` with local correction |
| [`_lsearch`](./reference/lsearch.md) | [`_lsearch_s`](./reference/lsearch-s.md) | Perform a linear search for a value; adds to end of list if not found |
| [`_makepath`, `_wmakepath`](./reference/makepath-wmakepath.md) | [`_makepath_s`, `_wmakepath_s`](./reference/makepath-s-wmakepath-s.md) | Create a path name from components |
| [`_mbccpy`, `_mbccpy_l`](./reference/mbccpy-mbccpy-l.md) | [`_mbccpy_s`, `_mbccpy_s_l`](./reference/mbccpy-s-mbccpy-s-l.md) | Copy a multibyte character from one string to another string |
| [`_mbsnbcat`, `_mbsnbcat_l`](./reference/mbsnbcat-mbsnbcat-l.md) | [`_mbsnbcat_s`, `_mbsnbcat_s_l`](./reference/mbsnbcat-s-mbsnbcat-s-l.md) | Append at most the first *n* bytes of one multibyte character string to another |
| [`_mbsnbcpy`, `_mbsnbcpy_l`](./reference/mbsnbcpy-mbsnbcpy-l.md) | [`_mbsnbcpy_s`, `_mbsnbcpy_s_l`](./reference/mbsnbcpy-s-mbsnbcpy-s-l.md) | Copy *n* bytes of a string to a destination string |
| [`_mbsnbset`, `_mbsnbset_l`](./reference/mbsnbset-mbsnbset-l.md) | [`_mbsnbset_s`, `_mbsnbset_s_l`](./reference/mbsnbset-s-mbsnbset-s-l.md) | Set the first *n* bytes of a string to a specified character |
| [`mbsrtowcs`](./reference/mbsrtowcs.md) | [`mbsrtowcs_s`](./reference/mbsrtowcs-s.md) | Convert a multibyte character string to a corresponding wide character string |
| [`mbstowcs`, `_mbstowcs_l`](./reference/mbstowcs-mbstowcs-l.md) | [`mbstowcs_s`, `_mbstowcs_s_l`](./reference/mbstowcs-s-mbstowcs-s-l.md) | Convert a sequence of multibyte characters to a corresponding sequence of wide characters |
| [`memcpy`, `wmemcpy`](./reference/memcpy-wmemcpy.md) | [`memcpy_s`, `wmemcpy_s`](./reference/memcpy-s-wmemcpy-s.md) | Copy characters between buffers |
| [`memmove`, `wmemmove`](./reference/memmove-wmemmove.md) | [`memmove_s`, `wmemmove_s`](./reference/memmove-s-wmemmove-s.md) | Move one buffer to another |
| [`_mktemp`, `_wmktemp`](./reference/mktemp-wmktemp.md) | [`_mktemp_s`, `_wmktemp_s`](./reference/mktemp-s-wmktemp-s.md) | Create a unique filename |
| [`printf`, `_printf_l`, `wprintf`, `_wprintf_l`](./reference/printf-printf-l-wprintf-wprintf-l.md) | [`printf_s`, `_printf_s_l`, `wprintf_s`, `_wprintf_s_l`](./reference/printf-s-printf-s-l-wprintf-s-wprintf-s-l.md) | Print formatted output to the standard output stream |
| [`_putenv`, `_wputenv`](./reference/putenv-wputenv.md) | [`_putenv_s`, `_wputenv_s`](./reference/putenv-s-wputenv-s.md) | Create, modify, or remove environment variables |
| [`qsort`](./reference/qsort.md) | [`qsort_s`](./reference/qsort-s.md) | Perform a quick sort |
| [`rand`](./reference/rand.md) | [`rand_s`](./reference/rand-s.md) | Generate a pseudorandom number |
| [`scanf`, `_scanf_l`, `wscanf`, `_wscanf_l`](./reference/scanf-scanf-l-wscanf-wscanf-l.md) | [`scanf_s`, `_scanf_s_l`, `wscanf_s`, `_wscanf_s_l`](./reference/scanf-s-scanf-s-l-wscanf-s-wscanf-s-l.md) | Read formatted data from the standard input stream |
| [`_searchenv`, `_wsearchenv`](./reference/searchenv-wsearchenv.md) | [`_searchenv_s`, `_wsearchenv_s`](./reference/searchenv-s-wsearchenv-s.md) | Search for a file using environment paths |
| [`snprintf`, `_snprintf`, `_snprintf_l`, `_snwprintf`, `_snwprintf_l`](./reference/snprintf-snprintf-snprintf-l-snwprintf-snwprintf-l.md) | [`_snprintf_s`, `_snprintf_s_l`, `_snwprintf_s`, `_snwprintf_s_l`](./reference/snprintf-s-snprintf-s-l-snwprintf-s-snwprintf-s-l.md) | Write formatted data to a string |
| [`_snscanf`, `_snscanf_l`, `_snwscanf`, `_snwscanf_l`](./reference/snscanf-snscanf-l-snwscanf-snwscanf-l.md) | [`_snscanf_s`, `_snscanf_s_l`, `_snwscanf_s`, `_snwscanf_s_l`](./reference/snscanf-s-snscanf-s-l-snwscanf-s-snwscanf-s-l.md) | Read formatted data of a specified length from a string. |
| [`_sopen`, `_wsopen`](./reference/sopen-wsopen.md) | [`_sopen_s`, `_wsopen_s`](./reference/sopen-s-wsopen-s.md) | Open a file for sharing |
| [`_splitpath`, `_wsplitpath`](./reference/splitpath-wsplitpath.md) | [`_splitpath_s`, `_wsplitpath_s`](./reference/splitpath-s-wsplitpath-s.md) | Break a path name into components |
| [`sprintf`, `_sprintf_l`, `swprintf`, `_swprintf_l`, `__swprintf_l`](./reference/sprintf-sprintf-l-swprintf-swprintf-l-swprintf-l.md) | [`sprintf_s`, `_sprintf_s_l`, `swprintf_s`, `_swprintf_s_l`](./reference/sprintf-s-sprintf-s-l-swprintf-s-swprintf-s-l.md) | Write formatted data to a string |
| [`sscanf`, `_sscanf_l`, `swscanf`, `_swscanf_l`](./reference/sscanf-sscanf-l-swscanf-swscanf-l.md) | [`sscanf_s`, `_sscanf_s_l`, `swscanf_s`, `_swscanf_s_l`](./reference/sscanf-s-sscanf-s-l-swscanf-s-swscanf-s-l.md) | Read formatted data from a string |
| [`strcat`, `wcscat`, `_mbscat`](./reference/strcat-wcscat-mbscat.md) | [`strcat_s`, `wcscat_s`, `_mbscat_s`](./reference/strcat-s-wcscat-s-mbscat-s.md) | Append a string |
| [`strcpy`, `wcscpy`, `_mbscpy`](./reference/strcpy-wcscpy-mbscpy.md) | [`strcpy_s`, `wcscpy_s`, `_mbscpy_s`](./reference/strcpy-s-wcscpy-s-mbscpy-s.md) | Copy a string |
| [`_strdate`, `_wstrdate`](./reference/strdate-wstrdate.md) | [`_strdate_s`, `_wstrdate_s`](./reference/strdate-s-wstrdate-s.md) | Return current system date as string |
| [`strerror`, `_strerror`, `_wcserror`, `__wcserror`](./reference/strerror-strerror-wcserror-wcserror.md) | [`strerror_s`, `_strerror_s`, `_wcserror_s`, `__wcserror_s`](./reference/strerror-s-strerror-s-wcserror-s-wcserror-s.md) | Get a system error message (`strerror`, `_wcserror`) or print a user-supplied error message (`_strerror`, `__wcserror`) |
| [`_strlwr`, `_wcslwr`, `_mbslwr`, `_strlwr_l`, `_wcslwr_l`, `_mbslwr_l`](./reference/strlwr-wcslwr-mbslwr-strlwr-l-wcslwr-l-mbslwr-l.md) | [`_strlwr_s`, `_strlwr_s_l`, `_mbslwr_s`, `_mbslwr_s_l`, `_wcslwr_s`, `_wcslwr_s_l`](./reference/strlwr-s-strlwr-s-l-mbslwr-s-mbslwr-s-l-wcslwr-s-wcslwr-s-l.md) | Convert a string to lowercase |
| [`strncat`, `_strncat_l`, `wcsncat`, `_wcsncat_l`, `_mbsncat`, `_mbsncat_l`](./reference/strncat-strncat-l-wcsncat-wcsncat-l-mbsncat-mbsncat-l.md) | [`strncat_s`, `_strncat_s_l`, `wcsncat_s`, `_wcsncat_s_l`, `_mbsncat_s`, `_mbsncat_s_l`](./reference/strncat-s-strncat-s-l-wcsncat-s-wcsncat-s-l-mbsncat-s-mbsncat-s-l.md) | Append characters to a string |
| [`strncpy`, `_strncpy_l`, `wcsncpy`, `_wcsncpy_l`, `_mbsncpy`, `_mbsncpy_l`](./reference/strncpy-strncpy-l-wcsncpy-wcsncpy-l-mbsncpy-mbsncpy-l.md) | [`strncpy_s`, `_strncpy_s_l`, `wcsncpy_s`, `_wcsncpy_s_l`, `_mbsncpy_s`, `_mbsncpy_s_l`](./reference/strncpy-s-strncpy-s-l-wcsncpy-s-wcsncpy-s-l-mbsncpy-s-mbsncpy-s-l.md) | Copy characters of one string to another |
| [`_strnset`, `_strnset_l`, `_wcsnset`, `_wcsnset_l`, `_mbsnset`, `_mbsnset_l`](./reference/strnset-strnset-l-wcsnset-wcsnset-l-mbsnset-mbsnset-l.md) | [`_strnset_s`, `_strnset_s_l`, `_wcsnset_s`, `_wcsnset_s_l`, `_mbsnset_s`, `_mbsnset_s_l`](./reference/strnset-s-strnset-s-l-wcsnset-s-wcsnset-s-l-mbsnset-s-mbsnset-s-l.md) | Set the first n characters of a string to the specified character |
| [`_strset`, `_strset_l`, `_wcsset`, `_wcsset_l`, `_mbsset`, `_mbsset_l`](./reference/strset-strset-l-wcsset-wcsset-l-mbsset-mbsset-l.md) | [`_strset_s`, `_strset_s_l`, `_wcsset_s`, `_wcsset_s_l`, `_mbsset_s`, `_mbsset_s_l`](./reference/strset-s-strset-s-l-wcsset-s-wcsset-s-l-mbsset-s-mbsset-s-l.md) | Set all the characters of a string to the specified character |
| [`_strtime`, `_wstrtime`](./reference/strtime-wstrtime.md) | [`_strtime_s`, `_wstrtime_s`](./reference/strtime-s-wstrtime-s.md) | Return current system time as string |
| [`strtok`, `_strtok_l`, `wcstok`, `_wcstok_l`, `_mbstok`, `_mbstok_l`](./reference/strtok-strtok-l-wcstok-wcstok-l-mbstok-mbstok-l.md) | [`strtok_s`, `_strtok_s_l`, `wcstok_s`, `_wcstok_s_l`, `_mbstok_s`, `_mbstok_s_l`](./reference/strtok-s-strtok-s-l-wcstok-s-wcstok-s-l-mbstok-s-mbstok-s-l.md) | Find the next token in a string, using the current locale or a locale passed in |
| [`_strupr`, `_strupr_l`, `_mbsupr`, `_mbsupr_l`, `_wcsupr_l`, `_wcsupr`](./reference/strupr-strupr-l-mbsupr-mbsupr-l-wcsupr-l-wcsupr.md) | [`_strupr_s`, `_strupr_s_l`, `_mbsupr_s`, `_mbsupr_s_l`, `_wcsupr_s`, `_wcsupr_s_l`](./reference/strupr-s-strupr-s-l-mbsupr-s-mbsupr-s-l-wcsupr-s-wcsupr-s-l.md) | Convert a string to uppercase |
| [`tmpfile`](./reference/tmpfile.md) | [`tmpfile_s`](./reference/tmpfile-s.md) | Create a temporary file |
| [`_tempnam`, `_wtempnam`, `tmpnam`, `_wtmpnam`](./reference/tempnam-wtempnam-tmpnam-wtmpnam.md) | [`tmpnam_s`, `_wtmpnam_s`](./reference/tmpnam-s-wtmpnam-s.md) | Generate names you can use to create temporary files |
| [`_umask`](./reference/umask.md) | [`_umask_s`](./reference/umask-s.md) | Set the default file-permission mask |
| [`_vcprintf`, `_vcprintf_l`, `_vcwprintf`, `_vcwprintf_l`](./reference/vcprintf-vcprintf-l-vcwprintf-vcwprintf-l.md) | [`_vcprintf_s`, `_vcprintf_s_l`, `_vcwprintf_s`, `_vcwprintf_s_l`](./reference/vcprintf-s-vcprintf-s-l-vcwprintf-s-vcwprintf-s-l.md) | Write formatted output to the console using a pointer to a list of arguments |
| [`vfprintf`, `_vfprintf_l`, `vfwprintf`, `_vfwprintf_l`](./reference/vfprintf-vfprintf-l-vfwprintf-vfwprintf-l.md) | [`vfprintf_s`, `_vfprintf_s_l`, `vfwprintf_s`, `_vfwprintf_s_l`](./reference/vfprintf-s-vfprintf-s-l-vfwprintf-s-vfwprintf-s-l.md) | Write formatted output using a pointer to a list of arguments |
| [`vfscanf`, `vfwscanf`](./reference/vfscanf-vfwscanf.md) | [`vfscanf_s`, `vfwscanf_s`](./reference/vfscanf-s-vfwscanf-s.md) | Read formatted data from a stream |
| [`vprintf`, `_vprintf_l`, `vwprintf`, `_vwprintf_l`](./reference/vprintf-vprintf-l-vwprintf-vwprintf-l.md) | [`vprintf_s`, `_vprintf_s_l`, `vwprintf_s`, `_vwprintf_s_l`](./reference/vprintf-s-vprintf-s-l-vwprintf-s-vwprintf-s-l.md) | Write formatted output using a pointer to a list of arguments |
| [`vscanf`, `vwscanf`](./reference/vscanf-vwscanf.md) | [`vscanf_s`, `vwscanf_s`](./reference/vscanf-s-vwscanf-s.md) | Read formatted data from the standard input stream |
| [`vsnprintf`, `_vsnprintf`, `_vsnprintf_l`, `_vsnwprintf`, `_vsnwprintf_l`](./reference/vsnprintf-vsnprintf-vsnprintf-l-vsnwprintf-vsnwprintf-l.md) | [`vsnprintf_s`, `_vsnprintf_s`, `_vsnprintf_s_l`, `_vsnwprintf_s`, `_vsnwprintf_s_l`](./reference/vsnprintf-s-vsnprintf-s-vsnprintf-s-l-vsnwprintf-s-vsnwprintf-s-l.md) | Write formatted output using a pointer to a list of arguments |
| [`vsprintf`, `_vsprintf_l`, `vswprintf`, `_vswprintf_l`, `__vswprintf_l`](./reference/vsprintf-vsprintf-l-vswprintf-vswprintf-l-vswprintf-l.md) | [`vsprintf_s`, `_vsprintf_s_l`, `vswprintf_s`, `_vswprintf_s_l`](./reference/vsprintf-s-vsprintf-s-l-vswprintf-s-vswprintf-s-l.md) | Write formatted output using a pointer to a list of arguments |
| [`vsscanf`, `vswscanf`](./reference/vsscanf-vswscanf.md) | [`vsscanf_s`, `vswscanf_s`](./reference/vsscanf-s-vswscanf-s.md) | Read formatted data from a string |
| [`wcrtomb`](./reference/wcrtomb.md) | [`wcrtomb_s`](./reference/wcrtomb-s.md) | Convert a wide character into its multibyte character representation |
| [`wcsrtombs`](./reference/wcsrtombs.md) | [`wcsrtombs_s`](./reference/wcsrtombs-s.md) | Convert a wide character string to its multibyte character string representation |
| [`wcstombs`, `_wcstombs_l`](./reference/wcstombs-wcstombs-l.md) | [`wcstombs_s`, `_wcstombs_s_l`](./reference/wcstombs-s-wcstombs-s-l.md) | Convert a sequence of wide characters to a corresponding sequence of multibyte characters |
| [`wctomb`, `_wctomb_l`](./reference/wctomb-wctomb-l.md) | [`wctomb_s`, `_wctomb_s_l`](./reference/wctomb-s-wctomb-s-l.md) | Convert a wide character to the corresponding multibyte character |

## See also

[C runtime (CRT) and C++ Standard Library (STL) `.lib` files](./crt-library-features.md)
