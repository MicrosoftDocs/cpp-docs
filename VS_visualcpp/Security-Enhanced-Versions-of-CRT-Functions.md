---
title: "Security-Enhanced Versions of CRT Functions"
ms.custom: na
ms.date: 10/03/2016
ms.devlang: 
  - C++
  - C
ms.prod: visual-studio-dev14
ms.reviewer: na
ms.suite: na
ms.technology: 
  - devlang-cpp
ms.tgt_pltfrm: na
ms.topic: article
ms.assetid: f87e5a01-4cb2-4379-9e8f-d4693828c55a
caps.latest.revision: 23
manager: ghogen
translation.priority.ht: 
  - de-de
  - es-es
  - fr-fr
  - it-it
  - ja-jp
  - ko-kr
  - ru-ru
  - zh-cn
  - zh-tw
translation.priority.mt: 
  - cs-cz
  - pl-pl
  - pt-br
  - tr-tr
---
# Security-Enhanced Versions of CRT Functions
More secure versions of run-time library routines are available. For further information concerning Security Enhancements in the CRT, see [Security Features in the CRT](../VS_visualcpp/Security-Features-in-the-CRT.md).  
  
 **Secure Functions**  
  
|CRT Function|Security enhanced function|Use|  
|------------------|--------------------------------|---------|  
|[_access, _waccess](../VS_visualcpp/_access--_waccess.md)|[_access_s, _waccess_s](../VS_visualcpp/_access_s--_waccess_s.md)|Determine file-access permission|  
|[_alloca](../VS_visualcpp/_alloca.md)|[_malloca](../VS_visualcpp/_malloca.md)|Allocate memory on the stack|  
|[asctime, _wasctime](../VS_visualcpp/asctime--_wasctime.md)|[asctime_s, _wasctime_s](../VS_visualcpp/asctime_s--_wasctime_s.md)|Convert time from type `struct tm` to character string|  
|[bsearch](../VS_visualcpp/bsearch.md)|[bsearch_s](../VS_visualcpp/bsearch_s.md)|Perform a binary search of a sorted array|  
|Obsolete function|[_cgets_s, _cgetws_s](../VS_visualcpp/_cgets_s--_cgetws_s.md)|Get a character string from the console|  
|[_chsize](../VS_visualcpp/_chsize.md)|[_chsize_s](../VS_visualcpp/_chsize_s.md)|Change the size of a file|  
|[clearerr](../VS_visualcpp/clearerr.md)|[clearerr_s](../VS_visualcpp/clearerr_s.md)|Reset the error indicator for a stream|  
|[_control87, _controlfp, \__control87_2](../VS_visualcpp/_control87--_controlfp--__control87_2.md)|[_controlfp_s](../VS_visualcpp/_controlfp_s.md)|Get and set the floating-point control word|  
|[_cprintf, _cprintf_l, _cwprintf, _cwprintf_l](../VS_visualcpp/_cprintf--_cprintf_l--_cwprintf--_cwprintf_l.md)|[_cprintf_s, _cprintf_s_l, _cwprintf_s, _cwprintf_s_l](../VS_visualcpp/_cprintf_s--_cprintf_s_l--_cwprintf_s--_cwprintf_s_l.md)|Format and print to the console|  
|[_cscanf, _cscanf_l, _cwscanf, _cwscanf_l](../VS_visualcpp/_cscanf--_cscanf_l--_cwscanf--_cwscanf_l.md)|[_cscanf_s, _cscanf_s_l, _cwscanf_s, _cwscanf_s_l](../VS_visualcpp/_cscanf_s--_cscanf_s_l--_cwscanf_s--_cwscanf_s_l.md)|Read formatted data from the console|  
|[ctime, _ctime32, _ctime64, _wctime, _wctime32, _wctime64](../VS_visualcpp/ctime--_ctime32--_ctime64--_wctime--_wctime32--_wctime64.md)|[_ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](../VS_visualcpp/ctime_s--_ctime32_s--_ctime64_s--_wctime_s--_wctime32_s--_wctime64_s.md)|Convert time from type `time_t`, `__time32_t` or `__time64_t` to character string|  
|[_ecvt](../VS_visualcpp/_ecvt.md)|[_ecvt_s](../VS_visualcpp/_ecvt_s.md)|Convert a `double` number to a string|  
|[_fcvt](../VS_visualcpp/_fcvt.md)|[_fcvt_s](../VS_visualcpp/_fcvt_s.md)|Converts a floating-point number to a string|  
|[fopen, _wfopen](../VS_visualcpp/fopen--_wfopen.md)|[fopen_s, _wfopen_s](../VS_visualcpp/fopen_s--_wfopen_s.md)|Open a file|  
|[fprintf, _fprintf_l, fwprintf, _fwprintf_l](../VS_visualcpp/fprintf--_fprintf_l--fwprintf--_fwprintf_l.md)|[fprintf_s, _fprintf_s_l, fwprintf_s, _fwprintf_s_l](../VS_visualcpp/fprintf_s--_fprintf_s_l--fwprintf_s--_fwprintf_s_l.md)|Print formatted data to a stream|  
|[fread](../VS_visualcpp/fread.md)|[fread_s](../VS_visualcpp/fread_s.md)|Read from a file|  
|[_fread_nolock](../VS_visualcpp/_fread_nolock.md)|[_fread_nolock_s](../VS_visualcpp/_fread_nolock_s2.md)|Read from a file without using a multi-thread write lock|  
|[freopen, _wfreopen](../VS_visualcpp/freopen--_wfreopen.md)|[freopen_s, _wfreopen_s](../VS_visualcpp/freopen_s--_wfreopen_s.md)|Reopen the file|  
|[fscanf, _fscanf_l, fwscanf, _fwscanf_l](../VS_visualcpp/fscanf--_fscanf_l--fwscanf--_fwscanf_l.md)|[fscanf_s, _fscanf_s_l, fwscanf_s, _fwscanf_s_l](../VS_visualcpp/fscanf_s--_fscanf_s_l--fwscanf_s--_fwscanf_s_l.md)|Read formatted data from a stream|  
|[_ftime, _ftime32, _ftime64](../VS_visualcpp/_ftime--_ftime32--_ftime64.md)|[_ftime_s, _ftime32_s, _ftime64_s](../VS_visualcpp/_ftime_s--_ftime32_s--_ftime64_s.md)|Get the current time|  
|[_gcvt](../VS_visualcpp/_gcvt.md)|[_gcvt_s](../VS_visualcpp/_gcvt_s.md)|Convert a floating-point value to a string, and store it in a buffer|  
|[getenv, _wgetenv](../VS_visualcpp/getenv--_wgetenv.md)|[getenv_s, _wgetenv_s](../VS_visualcpp/getenv_s--_wgetenv_s.md)|Get a value from the current environment.|  
|Obsolete function|[gets_s, _getws_s](../VS_visualcpp/gets_s--_getws_s.md)|Get a line from the `stdin` stream|  
|[gmtime, _gmtime32, _gmtime64](../VS_visualcpp/gmtime--_gmtime32--_gmtime64.md)|[_gmtime32_s, _gmtime64_s](../VS_visualcpp/gmtime_s--_gmtime32_s--_gmtime64_s.md)|Convert time from type `time_t` to `struct``tm` or from type `__time64_t` to `struct tm`|  
|[_itoa, _i64toa, _ui64toa, _itow, _i64tow, _ui64tow](../VS_visualcpp/_itoa--_i64toa--_ui64toa--_itow--_i64tow--_ui64tow.md)|[_itoa_s, _i64toa_s, _ui64toa_s, _itow_s, _i64tow_s, _ui64tow_s](../VS_visualcpp/_itoa_s--_i64toa_s--_ui64toa_s--_itow_s--_i64tow_s--_ui64tow_s.md)|Convert an integer to a string|  
|[_lfind](../VS_visualcpp/_lfind.md)|[_lfind_s](../VS_visualcpp/_lfind_s.md)|Perform a linear search for the specified key|  
|[localtime, _localtime32, _localtime64](../VS_visualcpp/localtime--_localtime32--_localtime64.md)|[localtime_s, _localtime32_s, _localtime64_s](../VS_visualcpp/localtime_s--_localtime32_s--_localtime64_s.md)|Convert time from type `time_t` to `struct tm` or from type `__time64_t` to `struct tm`with local correction|  
|[_lsearch](../VS_visualcpp/_lsearch.md)|[_lsearch_s](../VS_visualcpp/_lsearch_s.md)|Perform a linear search for a value; adds to end of list if not found|  
|[_ltoa, _ltow](../VS_visualcpp/_ltoa--_ltow.md)|[_ltoa_s, _ltow_s](../VS_visualcpp/_ltoa_s--_ltow_s.md)|Convert a long integer to a string|  
|[_makepath, _wmakepath](../VS_visualcpp/_makepath--_wmakepath.md)|[_makepath_s, _wmakepath_s](../VS_visualcpp/_makepath_s--_wmakepath_s.md)|Create a path name from components|  
|[_mbccpy, _mbccpy_l](../VS_visualcpp/_mbccpy--_mbccpy_l.md)|[_mbccpy_s, _mbccpy_s_l](../VS_visualcpp/_mbccpy_s--_mbccpy_s_l.md)|Copy a multibyte character from one string to another string|  
|[_mbsnbcat, _mbsnbcat_l](../VS_visualcpp/_mbsnbcat--_mbsnbcat_l.md)|[_mbsnbcat_s, _mbsnbcat_s_l](../VS_visualcpp/_mbsnbcat_s--_mbsnbcat_s_l.md)|Append, at most, the first `n` bytes of one multibyte character string to another|  
|[_mbsnbcpy, _mbsnbcpy_l](../VS_visualcpp/_mbsnbcpy--_mbsnbcpy_l.md)|[_mbsnbcpy_s, _mbsnbcpy_s_l](../VS_visualcpp/_mbsnbcpy_s--_mbsnbcpy_s_l.md)|Copy `n` bytes of a string to a destination string|  
|[_mbsnbset, _mbsnbset_l](../VS_visualcpp/_mbsnbset--_mbsnbset_l.md)|[_mbsnbset_s, _mbsnbset_s_l](../VS_visualcpp/_mbsnbset_s--_mbsnbset_s_l.md)|Set the first `n` bytes of a string to a specified character|  
|[mbsrtowcs](../VS_visualcpp/mbsrtowcs.md)|[mbsrtowcs_s](../VS_visualcpp/mbsrtowcs_s.md)|Convert a multibyte character string to a corresponding wide character string|  
|[mbstowcs, _mbstowcs_l](../VS_visualcpp/mbstowcs--_mbstowcs_l.md)|[mbstowcs_s, _mbstowcs_s_l](../VS_visualcpp/mbstowcs_s--_mbstowcs_s_l.md)|Convert a sequence of multibyte characters to a corresponding sequence of wide characters|  
|[memcpy, wmemcpy](../VS_visualcpp/memcpy--wmemcpy.md)|[memcpy_s, wmemcpy_s](../VS_visualcpp/memcpy_s--wmemcpy_s.md)|Copy characters between buffers|  
|[memmove, wmemmove](../VS_visualcpp/memmove--wmemmove.md)|[memmove_s, wmemmove_s](../VS_visualcpp/memmove_s--wmemmove_s.md)|Move one buffer to another|  
|[_mktemp, _wmktemp](../VS_visualcpp/_mktemp--_wmktemp.md)|[_mktemp_s, _wmktemp_s](../VS_visualcpp/_mktemp_s--_wmktemp_s.md)|Create a unique filename|  
|[printf, _printf_l, wprintf, _wprintf_l](../VS_visualcpp/printf--_printf_l--wprintf--_wprintf_l.md)|[printf_s, _printf_s_l, wprintf_s, _wprintf_s_l](../VS_visualcpp/printf_s--_printf_s_l--wprintf_s--_wprintf_s_l.md)|Print formatted output to the standard output stream|  
|[_putenv, _wputenv](../VS_visualcpp/_putenv--_wputenv.md)|[_putenv_s, _wputenv_s](../VS_visualcpp/_putenv_s--_wputenv_s.md)|Create, modify, or remove environment variables|  
|[qsort](../VS_visualcpp/qsort.md)|[qsort_s](../VS_visualcpp/qsort_s.md)|Perform a quick sort|  
|[rand](../VS_visualcpp/rand.md)|[rand_s](../VS_visualcpp/rand_s.md)|Generate a pseudorandom number|  
|[scanf, _scanf_l, wscanf, _wscanf_l](../VS_visualcpp/scanf--_scanf_l--wscanf--_wscanf_l.md)|[scanf_s, _scanf_s_l, wscanf_s, _wscanf_s_l](../VS_visualcpp/scanf_s--_scanf_s_l--wscanf_s--_wscanf_s_l.md)|Read formatted data from the standard input stream|  
|[_searchenv, _wsearchenv](../VS_visualcpp/_searchenv--_wsearchenv.md)|[_searchenv_s, _wsearchenv_s](../VS_visualcpp/_searchenv_s--_wsearchenv_s.md)|Search for a file using environment paths|  
|[snprintf, _snprintf, _snprintf_l, _snwprintf, _snwprintf_l](../VS_visualcpp/snprintf--_snprintf--_snprintf_l--_snwprintf--_snwprintf_l.md)|[_snprintf_s, _snprintf_s_l, _snwprintf_s, _snwprintf_s_l](../VS_visualcpp/_snprintf_s--_snprintf_s_l--_snwprintf_s--_snwprintf_s_l.md)|Write formatted data to a string|  
|[_snscanf, _snscanf_l, _snwscanf, _snwscanf_l](../VS_visualcpp/_snscanf--_snscanf_l--_snwscanf--_snwscanf_l.md)|[_snscanf_s, _snscanf_s_l, _snwscanf_s, _snwscanf_s_l](../VS_visualcpp/_snscanf_s--_snscanf_s_l--_snwscanf_s--_snwscanf_s_l.md)|Read formatted data of a specified length from a string.|  
|[_sopen, _wsopen](../VS_visualcpp/_sopen--_wsopen.md)|[_sopen_s, _wsopen_s](../VS_visualcpp/_sopen_s--_wsopen_s.md)|Open a file for sharing|  
|[_splitpath, _wsplitpath](../VS_visualcpp/_splitpath--_wsplitpath.md)|[_splitpath_s, _wsplitpath_s](../VS_visualcpp/_splitpath_s--_wsplitpath_s.md)|Break a path name into components|  
|[sprintf, _sprintf_l, swprintf, _swprintf_l, \__swprintf_l](../VS_visualcpp/sprintf--_sprintf_l--swprintf--_swprintf_l--__swprintf_l.md)|[sprintf_s, _sprintf_s_l, swprintf_s, _swprintf_s_l](../VS_visualcpp/sprintf_s--_sprintf_s_l--swprintf_s--_swprintf_s_l.md)|Write formatted data to a string|  
|[sscanf, _sscanf_l, swscanf, _swscanf_l](../VS_visualcpp/sscanf--_sscanf_l--swscanf--_swscanf_l.md)|[sscanf_s, _sscanf_s_l, swscanf_s, _swscanf_s_l](../VS_visualcpp/sscanf_s--_sscanf_s_l--swscanf_s--_swscanf_s_l.md)|Read formatted data from a string|  
|[strcat, wcscat, _mbscat](../VS_visualcpp/strcat--wcscat--_mbscat.md)|[strcat_s, wcscat_s, _mbscat_s](../VS_visualcpp/strcat_s--wcscat_s--_mbscat_s.md)|Append a string|  
|[strcpy, wcscpy, _mbscpy](../VS_visualcpp/strcpy--wcscpy--_mbscpy.md)|[strcpy_s, wcscpy_s, _mbscpy_s](../VS_visualcpp/strcpy_s--wcscpy_s--_mbscpy_s.md)|Copy a string|  
|[_strdate, _wstrdate](../VS_visualcpp/_strdate--_wstrdate.md)|[_strdate_s, _wstrdate_s](../VS_visualcpp/_strdate_s--_wstrdate_s.md)|Return current system date as string|  
|[strerror, _strerror, _wcserror, \__wcserror](../VS_visualcpp/strerror--_strerror--_wcserror--__wcserror.md)|[strerror_s, _strerror_s, _wcserror_s, \__wcserror_s](../VS_visualcpp/strerror_s--_strerror_s--_wcserror_s--__wcserror_s.md)|Get a system error message (`strerror`, `_wcserror`) or print a user-supplied error message (`_strerror`, `__wcserror`)|  
|[_strlwr, _wcslwr, _mbslwr, _strlwr_l, _wcslwr_l, _mbslwr_l](../VS_visualcpp/_strlwr--_wcslwr--_mbslwr--_strlwr_l--_wcslwr_l--_mbslwr_l.md)|[_strlwr_s, _strlwr_s_l, _mbslwr_s, _mbslwr_s_l, _wcslwr_s, _wcslwr_s_l](../VS_visualcpp/_strlwr_s--_strlwr_s_l--_mbslwr_s--_mbslwr_s_l--_wcslwr_s--_wcslwr_s_l.md)|Convert a string to lowercase|  
|[strncat, _strncat_l, wcsncat, _wcsncat_l, _mbsncat, _mbsncat_l](../VS_visualcpp/strncat--_strncat_l--wcsncat--_wcsncat_l--_mbsncat--_mbsncat_l.md)|[strncat_s, _strncat_s_l, wcsncat_s, _wcsncat_s_l, _mbsncat_s, _mbsncat_s_l](../VS_visualcpp/strncat_s--_strncat_s_l--wcsncat_s--_wcsncat_s_l--_mbsncat_s--_mbsncat_s_l.md)|Append characters to a string|  
|[strncpy, _strncpy_l, wcsncpy, _wcsncpy_l, _mbsncpy, _mbsncpy_l](../VS_visualcpp/strncpy--_strncpy_l--wcsncpy--_wcsncpy_l--_mbsncpy--_mbsncpy_l.md)|[strncpy_s, _strncpy_s_l, wcsncpy_s, _wcsncpy_s_l, _mbsncpy_s, _mbsncpy_s_l](../VS_visualcpp/strncpy_s--_strncpy_s_l--wcsncpy_s--_wcsncpy_s_l--_mbsncpy_s--_mbsncpy_s_l.md)|Copy characters of one string to another|  
|[_strnset, _strnset_l, _wcsnset, _wcsnset_l, _mbsnset, _mbsnset_l](../VS_visualcpp/_strnset--_strnset_l--_wcsnset--_wcsnset_l--_mbsnset--_mbsnset_l.md)|[_strnset_s, _strnset_s_l, _wcsnset_s, _wcsnset_s_l, _mbsnset_s, _mbsnset_s_l](../VS_visualcpp/_strnset_s--_strnset_s_l--_wcsnset_s--_wcsnset_s_l--_mbsnset_s--_mbsnset_s_l.md)|Set the first n characters of a string to the specified character|  
|[_strset, _strset_l, _wcsset, _wcsset_l, _mbsset, _mbsset_l](../VS_visualcpp/_strset--_strset_l--_wcsset--_wcsset_l--_mbsset--_mbsset_l.md)|[_strset_s, _strset_s_l, _wcsset_s, _wcsset_s_l, _mbsset_s, _mbsset_s_l](../VS_visualcpp/_strset_s--_strset_s_l--_wcsset_s--_wcsset_s_l--_mbsset_s--_mbsset_s_l.md)|Set all the characters of a string to the specified character|  
|[_strtime, _wstrtime](../VS_visualcpp/_strtime--_wstrtime.md)|[_strtime_s, _wstrtime_s](../VS_visualcpp/_strtime_s--_wstrtime_s.md)|Return current system time as string|  
|[strtok, _strtok_l, wcstok, _wcstok_l, _mbstok, _mbstok_l](../VS_visualcpp/strtok--_strtok_l--wcstok--_wcstok_l--_mbstok--_mbstok_l.md)|[strtok_s, _strtok_s_l, wcstok_s, _wcstok_s_l, _mbstok_s, _mbstok_s_l](../VS_visualcpp/strtok_s--_strtok_s_l--wcstok_s--_wcstok_s_l--_mbstok_s--_mbstok_s_l.md)|Find the next token in a string, using the current locale or a locale passed in|  
|[_strupr, _strupr_l, _mbsupr, _mbsupr_l, _wcsupr_l, _wcsupr](../VS_visualcpp/_strupr--_strupr_l--_mbsupr--_mbsupr_l--_wcsupr_l--_wcsupr.md)|[_strupr_s, _strupr_s_l, _mbsupr_s, _mbsupr_s_l, _wcsupr_s, _wcsupr_s_l](../VS_visualcpp/_strupr_s--_strupr_s_l--_mbsupr_s--_mbsupr_s_l--_wcsupr_s--_wcsupr_s_l.md)|Convert a string to uppercase|  
|[tmpfile](../VS_visualcpp/tmpfile.md)|[tmpfile_s](../VS_visualcpp/tmpfile_s.md)|Create a temporary file|  
|[_tempnam, _wtempnam, tmpnam, _wtmpnam](../VS_visualcpp/_tempnam--_wtempnam--tmpnam--_wtmpnam.md)|[tmpnam_s, _wtmpnam_s](../VS_visualcpp/tmpnam_s--_wtmpnam_s.md)|Generate names you can use to create temporary files|  
|[_ultoa, _ultow](../VS_visualcpp/_ultoa--_ultow.md)|[_ultoa_s, _ultow_s](../VS_visualcpp/_ultoa_s--_ultow_s.md)|Convert an unsigned long integer to a string|  
|[_umask](../VS_visualcpp/_umask.md)|[_umask_s](../VS_visualcpp/_umask_s.md)|Set the default file-permission mask|  
|[_vcprintf, _vcprintf_l, _vcwprintf, _vcwprintf_l](../VS_visualcpp/_vcprintf--_vcprintf_l--_vcwprintf--_vcwprintf_l.md)|[_vcprintf_s, _vcprintf_s_l, _vcwprintf_s, _vcwprintf_s_l](../VS_visualcpp/_vcprintf_s--_vcprintf_s_l--_vcwprintf_s--_vcwprintf_s_l.md)|Write formatted output to the console using a pointer to a list of arguments|  
|[vfprintf, _vfprintf_l, vfwprintf, _vfwprintf_l](../VS_visualcpp/vfprintf--_vfprintf_l--vfwprintf--_vfwprintf_l.md)|[vfprintf_s, _vfprintf_s_l, vfwprintf_s, _vfwprintf_s_l](../VS_visualcpp/vfprintf_s--_vfprintf_s_l--vfwprintf_s--_vfwprintf_s_l.md)|Write formatted output using a pointer to a list of arguments|  
|[vfscanf, vfwscanf](../VS_visualcpp/vfscanf--vfwscanf.md)|[vfscanf_s, vfwscanf_s](../VS_visualcpp/vfscanf_s--vfwscanf_s.md)|Read formatted data from a stream|  
|[vprintf, _vprintf_l, vwprintf, _vwprintf_l](../VS_visualcpp/vprintf--_vprintf_l--vwprintf--_vwprintf_l.md)|[vprintf_s, _vprintf_s_l, vwprintf_s, _vwprintf_s_l](../VS_visualcpp/vprintf_s--_vprintf_s_l--vwprintf_s--_vwprintf_s_l.md)|Write formatted output using a pointer to a list of arguments|  
|[vscanf, vwscanf](../VS_visualcpp/vscanf--vwscanf.md)|[vscanf_s, vwscanf_s](../VS_visualcpp/vscanf_s--vwscanf_s.md)|Read formatted data from the standard input stream|  
|[vsnprintf, _vsnprintf, _vsnprintf_l, _vsnwprintf, _vsnwprintf_l](../VS_visualcpp/vsnprintf--_vsnprintf--_vsnprintf_l--_vsnwprintf--_vsnwprintf_l.md)|[vsnprintf_s, _vsnprintf_s, _vsnprintf_s_l, _vsnwprintf_s, _vsnwprintf_s_l](../VS_visualcpp/vsnprintf_s--_vsnprintf_s--_vsnprintf_s_l--_vsnwprintf_s--_vsnwprintf_s_l.md)|Write formatted output using a pointer to a list of arguments|  
|[vsprintf, _vsprintf_l, vswprintf, _vswprintf_l, \__vswprintf_l](../VS_visualcpp/vsprintf--_vsprintf_l--vswprintf--_vswprintf_l--__vswprintf_l.md)|[vsprintf_s, _vsprintf_s_l, vswprintf_s, _vswprintf_s_l](../VS_visualcpp/vsprintf_s--_vsprintf_s_l--vswprintf_s--_vswprintf_s_l.md)|Write formatted output using a pointer to a list of arguments|  
|[vsscanf, vswscanf](../VS_visualcpp/vsscanf--vswscanf.md)|[vsscanf_s, vswscanf_s](../VS_visualcpp/vsscanf_s--vswscanf_s.md)|Read formatted data from a string|  
|[wcrtomb](../VS_visualcpp/wcrtomb.md)|[wcrtomb_s](../VS_visualcpp/wcrtomb_s.md)|Convert a wide character into its multibyte character representation|  
|[wcsrtombs](../VS_visualcpp/wcsrtombs.md)|[wcsrtombs_s](../VS_visualcpp/wcsrtombs_s.md)|Convert a wide character string to its multibyte character string representation|  
|[wcstombs, _wcstombs_l](../VS_visualcpp/wcstombs--_wcstombs_l.md)|[wcstombs_s, _wcstombs_s_l](../VS_visualcpp/wcstombs_s--_wcstombs_s_l.md)|Convert a sequence of wide characters to a corresponding sequence of multibyte characters|  
|[wctomb, _wctomb_l](../VS_visualcpp/wctomb--_wctomb_l.md)|[wctomb_s, _wctomb_s_l](../VS_visualcpp/wctomb_s--_wctomb_s_l.md)|Convert a wide character to the corresponding multibyte character|  
  
## See Also  
 [CRT Library Features](../VS_visualcpp/CRT-Library-Features.md)