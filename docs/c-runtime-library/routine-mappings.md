---
title: "Generic-text function mappings"
description: "Learn more about: Microsoft specific generic-text functions and the CRT functions they map to."
ms.date: 11/04/2016
ms.author: twhitney
f1_keywords: ["_cgetts", "_cgetts_s", "_cputts", "_fgettc", "_fgettchar", "_fgetts", "_fputtc", "_fputtchar", "_fputts", "_ftscanf", "_ftscanf_s", "_gettc", "_gettch", "_gettchar", "_gettche", "_getts", "_getts_s", "_istalnum", "_istalpha", "_istascii", "_istcntrl", "_istdigit", "_istgraph", "_istlead", "_istleadbyte", "_istlegal", "_istlower", "_istprint", "_istpunct", "_istspace", "_istupper", "_istxdigit", "_itot", "_itot_s", "_ltot", "_ltot_s", "_puttc", "_puttch", "_puttchar", "_putts", "_sctprintf", "_sntprintf", "_sntprintf_s", "_sntscanf", "_sntscanf_s", "_stprintf", "_stprintf_s", "_stscanf", "_stscanf_s", "_taccess", "_tasctime", "_tasctime_s", "_tccmp", "_tccpy", "_tccpy_s", "_tchdir", "_tclen", "_tchmod", "_tcprintf", "_tcprintf_s", "_tcreat", "_tcscanf", "_tcscanf_s", "_tcscat", "_tcscat_s", "_tcschr", "_tcsclen", "_tcsclen_s", "_tcscmp", "_tcscoll", "_tcscpy", "_tcscpy_s", "_tcscspn", "_tcsdec", "_tcsdup", "_tcserror", "_tcserror_s", "_tcsftime", "_tcsicmp", "_tcsicoll", "_tcsinc", "_tcslen", "_tcslwr", "_tcslwr_s", "_tcsnbcnt", "_tcsncat", "_tcsncat_s", "_tcsnccat", "_tcsnccmp", "_tcsnccmp_s", "_tcsnccoll", "_tcsncmp", "_tcsnccnt", "_tcsnccpy", "_tcsncicmp", "_tcsncicoll", "_tcsncpy", "_tcsncset", "_tcsnextc", "_tcsnicmp", "_tcsnicoll", "_tcsninc", "_tcsnccnt", "_tcsnset", "_tcspbrk", "_tcsspnp", "_tcsrchr", "_tcsrev", "_tcsset", "_tcsspn", "_tcsstr", "_tcstod", "_tcstoi64", "_tcstok", "_tcstok_s", "_tcstol", "_tcstoui64", "_tcstoul", "_tcsupr", "_tcsupr_s", "_tcsxfrm", "_tctime", "_tctime_s", "_tctime32", "_tctime32_s", "_tctime64", "_tctime64_s", "_texecl", "_texecle", "_texeclp", "_texeclpe", "_texecv", "_texecve", "_texecvp", "_texecvpe", "_tfdopen", "_tfindfirst", "_tfindnext", "_tfindnext32", "_tfindnext64", "_tfindnexti64", "_tfindnexti6432", "_tfindnext32i64", "_tfopen", "_tfopen_s", "_tfreopen", "_tfreopen_s", "_tfsopen", "_tfullpath", "_tgetcwd", "_tgetdcwd", "_tgetenv", "_tgetenv_s", "_tmain", "_tmakepath", "_tmakepath_s", "_tmkdir", "_tmktemp", "_tmktemp_s", "_topen", "_topen_s", "_totlower", "_totupper", "_tperror", "_tpopen", "_tprintf", "_tprintf_s", "_tputenv", "_tremove", "_trename", "_trmdir", "_tsearchenv", "_tsearchenv_s", "_tscanf", "_tscanf_s", "_tsetlocale", "_tsopen", "_tsopen_s", "_tspawnl", "_tspawnle", "_tspawnlp", "_tspawnlpe", "_tspawnv", "_tspawnve", "_tspawnvp", "_tspawnvpe", "_tsplitpath", "_tstat", "_tstat32", "_tstati32", "_tstat64", "_tstati64", "_tstof", "_tstoi", "_tstoi64", "_tstol", "_tstrdate", "_tstrdate_s", "_tstrtime", "_tstrtime_s", "_tsystem", "_ttempnam", "_ttmpnam", "_ttmpnam_s", "_ttoi", "_ttoi64", "_ttol", "_tunlink", "_tutime", "_tutime32", "_tutime64", "_tWinMain", "_ui64tot", "_ui64tot_s", "_ultot", "_ultot_s", "_ungettc", "_ungettch", "_vftprintf", "_vftprintf_s", "_vsctprintf", "_vsctprintf_s", "_vsntprintf", "_vsntprintf_s", "_vstprintf", "_vtprintf", "_vtprintf_s"]
helpviewer_keywords: ["_tWinMain", "TCHAR.H functions, list of generic-text function mappings", "generic-text mappings", "_cgetts function", "_cgetts_s function", "_cputts function", "_fgettc function", "_fgettchar function", "_fgetts function", "_fputtc function", "_fputtchar function", "_fputts function", "_ftscanf function", "_ftscanf_s function", "_gettc function", "_gettch function", "_gettchar function", "_gettche function", "_getts function", "_getts_s function", "_istalnum function", "_istalpha function", "_istascii function", "_istcntrl function", "_istdigit function", "_istgraph function", "_istlead function", "_istleadbyte function", "_istlegal function", "_istlower function", "_istprint function", "_istpunct function", "_istspace function", "_istupper function", "_istxdigit function", "_itot function", "_itot_s function", "_ltot function", "_ltot_s function", "_puttc function", "_puttch function", "_puttchar function", "_putts function", "_sctprintf function", "_sntprintf function", "_sntprintf_s function", "_sntscanf function", "_sntscanf_s function", "_stprintf function", "_stprintf_s function", "_stscanf function", "_stscanf_s function", "_taccess function", "_tasctime function", "_tasctime_s function", "_tccmp function", "_tccpy function", "_tccpy_s function", "_tchdir function", "_tclen function", "_tchmod function", "_tcprintf function", "_tcprintf_s function", "_tcreat function", "_tcscanf function", "_tcscanf_s function", "_tcscat function", "_tcscat_s function", "_tcschr function", "_tcsclen function", "_tcsclen_s function", "_tcscmp function", "_tcscoll function", "_tcscpy function", "_tcscpy_s function", "_tcscspn function", "_tcsdec function", "_tcsdup function", "_tcserror function", "_tcserror_s function", "_tcsftime function", "_tcsicmp function", "_tcsicoll function", "_tcsinc function", "_tcslen function", "_tcslwr function", "_tcslwr_s function", "_tcsnbcnt function", "_tcsncat function", "_tcsncat_s function", "_tcsnccat function", "_tcsnccmp function", "_tcsnccmp_s function", "_tcsnccoll function", "_tcsncmp function", "_tcsnccnt function", "_tcsnccpy function", "_tcsncicmp function", "_tcsncicoll function", "_tcsncpy function", "_tcsncset function", "_tcsnextc function", "_tcsnicmp function", "_tcsnicoll function", "_tcsninc function", "_tcsnccnt function", "_tcsnset function", "_tcspbrk function", "_tcsspnp function", "_tcsrchr function", "_tcsrev function", "_tcsset function", "_tcsspn function", "_tcsstr function", "_tcstod function", "_tcstoi64 function", "_tcstok function", "_tcstok_s function", "_tcstol function", "_tcstoui64 function", "_tcstoul function", "_tcsupr function", "_tcsupr_s function", "_tcsxfrm function", "_tctime function", "_tctime_s function", "_tctime32 function", "_tctime32_s function", "_tctime64 function", "_tctime64_s function", "_texecl function", "_texecle function", "_texeclp function", "_texeclpe function", "_texecv function", "_texecve function", "_texecvp function", "_texecvpe function", "_tfdopen function", "_tfindfirst function", "_tfindnext function", "_tfindnext32 function", "_tfindnext64 function", "_tfindnexti64 function", "_tfindnexti6432 function", "_tfindnext32i64 function", "_tfopen function", "_tfopen_s function", "_tfreopen function", "_tfreopen_s function", "_tfsopen function", "_tfullpath function", "_tgetcwd function", "_tgetdcwd function", "_tgetenv function", "_tgetenv_s function", "_tmain function", "_tmakepath function", "_tmakepath_s function", "_tmkdir function", "_tmktemp function", "_tmktemp_s function", "_topen function", "_topen_s function", "_totlower function", "_totupper function", "_tperror function", "_tpopen function", "_tprintf function", "_tprintf_s function", "_tputenv function", "_tremove function", "_trename function", "_trmdir function", "_tsearchenv function", "_tsearchenv_s function", "_tscanf function", "_tscanf_s function", "_tsetlocale function", "_tsopen function", "_tsopen_s function", "_tspawnl function", "_tspawnle function", "_tspawnlp function", "_tspawnlpe function", "_tspawnv function", "_tspawnve function", "_tspawnvp function", "_tspawnvpe function", "_tsplitpath function", "_tstat function", "_tstat32 function", "_tstati32 function", "_tstat64 function", "_tstati64 function", "_tstof function", "_tstoi function", "_tstoi64 function", "_tstol function", "_tstrdate function", "_tstrdate_s function", "_tstrtime function", "_tstrtime_s function", "_tsystem function", "_ttempnam function", "_ttmpnam function", "_ttmpnam_s function", "_ttoi function", "_ttoi64 function", "_ttol function", "_tunlink function", "_tutime function", "_tutime32 function", "_tutime64 function", "_tWinMain function", "_ui64tot function", "_ui64tot_s function", "_ultot function", "_ultot_s function", "_ungettc function", "_ungettch function", "_vftprintf function", "_vftprintf_s function", "_vsctprintf function", "_vsctprintf_s function", "_vsntprintf function", "_vsntprintf_s function", "_vstprintf function", "_vtprintf function", "_vtprintf_s function"]
---
# Generic-text function mappings

The generic-text routine mappings are defined in `TCHAR.H`. `_tccpy` and `_tclen` map to functions in the MBCS model; they're mapped to macros or inline functions in the SBCS and Unicode models for completeness. For information on a generic text routine, see the help article about the corresponding `SBCS`-, `_MBCS`-, or `_UNICODE`-related routine.

More specific information about individual routines listed in the left column in the following table isn't available in this documentation. However, you can easily look up the information on a corresponding `SBCS`-, `_MBCS`-, or `_UNICODE`-related routine. Use the **Search** command on the **Help** menu to look up any generic-text routine listed below.

For related information, see [Generic-text mappings in tchar.h](../text/generic-text-mappings-in-tchar-h.md).

### Function mappings

| Generic-text routine name | `SBCS` (`_UNICODE` and `MBCS` not defined) | `_MBCS` defined | `_UNICODE` defined |
|---|---|---|---|
| `_cgetts` | `_cgets` | `_cgets` | `_cgetws` |
| `_cgetts_s` | `_cgets_s` | `_cgets_s` | `_cgetws_s` |
| `_cputts` | `_cputs` | `_cputs` | `_cputws` |
| `_fgettc` | `fgetc` | `fgetc` | `fgetwc` |
| `_fgettchar` | `_fgetchar` | `_fgetchar` | `_fgetwchar` |
| `_fgetts` | `fgets` | `fgets` | `fgetws` |
| `_fputtc` | `fputc` | `fputc` | `fputwc` |
| `_fputtchar` | `_fputchar` | `_fputchar` | `_fputwchar` |
| `_fputts` | `fputs` | `fputs` | `fputws` |
| `_ftprintf` | `fprintf` | `fprintf` | `fwprintf` |
| `_ftprintf_l` | `_fprintf_l` | `_fprintf_l` | `_fwprintf_l` |
| `_ftprintf_s` | `fprintf_s` | `fprintf_s` | `fwprintf_s` |
| `_ftscanf` | `fscanf` | `fscanf` | `fwscanf` |
| `_ftscanf_s` | `fscanf_s` | `fscanf_s` | `fwscanf_s` |
| `_gettc` | `getc` | `getc` | `getwc` |
| `_gettch` | `_getch` | `_getch` | `_getwch` |
| `_gettchar` | `getchar` | `getchar` | `getwchar` |
| `_gettche` | `_getche` | `_getche` | `_getwche` |
| `_getts` | `gets` | `gets` | `getws` |
| `_getts_s` | `gets_s` | `gets_s` | `getws_s` |
| `_istalnum` | `isalnum` | `_ismbcalnum` | `iswalnum` |
| `_istalpha` | `isalpha` | `_ismbcalpha` | `iswalpha` |
| `_istascii` | `isascii` | `isascii` | `iswascii` |
| `_istcntrl` | `iscntrl` | `iscntrl` | `iswcntrl` |
| `_istdigit` | `isdigit` | `_ismbcdigit` | `iswdigit` |
| `_istgraph` | `isgraph` | `_ismbcgraph` | `iswgraph` |
| `_istlead` | Always returns false | `_ismbblead` | Always returns false |
| `_istleadbyte` | Always returns false | `isleadbyte` | Always returns false |
| `_istlegal` | Always returns true | `_ismbclegal` | Always returns true |
| `_istlower` | `islower` | `_ismbclower` | `iswlower` |
| `_istprint` | `isprint` | `_ismbcprint` | `iswprint` |
| `_istpunct` | `ispunct` | `_ismbcpunct` | `iswpunct` |
| `_istspace` | `isspace` | `_ismbcspace` | `iswspace` |
| `_istupper` | `isupper` | `_ismbcupper` | `iswupper` |
| `_istxdigit` | `isxdigit` | `isxdigit` | `iswxdigit` |
| `_itot` | `_itoa` | `_itoa` | `_itow` |
| `_itot_s` | `_itoa_s` | `_itoa_s` | `_itow_s` |
| `_ltot` | `_ltoa` | `_ltoa` | `_ltow` |
| `_ltot_s` | `_ltoa_s` | `_ltoa_s` | `_ltow_s` |
| `_puttc` | `putc` | `putc` | `putwc` |
| `_puttch` | `_putch` | `_putch` | `_putwch` |
| `_puttchar` | `putchar` | `putchar` | `putwchar` |
| `_putts` | `puts` | `puts` | `_putws` |
| `_sctprintf` | `_scprintf` | `_scprintf` | `_scwprintf` |
| `_sntprintf` | `_snprintf` | `_snprintf` | `_snwprintf` |
| `_sntprintf_s` | `_snprintf_s` | `_snprintf_s` | `_snwprintf_s` |
| `_sntscanf` | `_snscanf` | `_snscanf` | `_snwscanf` |
| `_sntscanf_s` | `_snscanf_s` | `_snscanf_s` | `_snwscanf_s` |
| `_stprintf` | `sprintf` | `sprintf` | `swprintf` |
| `_stprintf_s` | `sprintf_s` | `sprintf_s` | `swprintf_s` |
| `_stscanf` | `sscanf` | `sscanf` | `swscanf` |
| `_stscanf_s` | `sscanf_s` | `sscanf_s` | `swscanf_s` |
| `_taccess` | `_access` | `_access` | `_waccess` |
| `_taccess_s` | `_access_s` | `_access_s` | `_waccess_s` |
| `_tasctime` | `asctime` | `asctime` | `_wasctime` |
| `_tasctime_s` | `asctime_s` | `asctime_s` | `_wasctime_s` |
| `_tccmp` | Maps to macro or inline function | `_mbsncmp` | Maps to macro or inline function |
| `_tccpy` | Maps to macro or inline function | `_mbccpy` | Maps to macro or inline function |
| `_tccpy_s` | `strcpy_s` | `_mbccpy_s` | `wcscpy_s` |
| `_tchdir` | `_chdir` | `_chdir` | `_wchdir` |
| `_tclen` | Maps to macro or inline function | `_mbclen` | Maps to macro or inline function |
| `_tchmod` | `_chmod` | `_chmod` | `_wchmod` |
| `_tcprintf` | `_cprintf` | `_cprintf` | `_cwprintf` |
| `_tcprintf_s` | `_cprintf_s` | `_cprintf_s` | `_cwprintf_s` |
| `_tcreat` | `_creat` | `_creat` | `_wcreat` |
| `_tcscanf` | `_cscanf` | `_cscanf` | `_cwscanf` |
| `_tcscanf_s` | `_cscanf_s` | `_cscanf_s` | `_cwscanf_s` |
| `_tcscat` | `strcat` | `_mbscat` | `wcscat` |
| `_tcscat_s` | `strcat_s` | `_mbscat_s` | `wcscat_s` |
| `_tcschr` | `strchr` | `_mbschr` | `wcschr` |
| `_tcsclen` | `strlen` | `_mbslen` | `wcslen` |
| `_tcsclen_s` | `strlen_s` | `_mbslen_s` | `wcslen_s` |
| `_tcscmp` | `strcmp` | `_mbscmp` | `wcscmp` |
| `_tcscoll` | `strcoll` | `_mbscoll` | `wcscoll` |
| `_tcscpy` | `strcpy` | `_mbscpy` | `wcscpy` |
| `_tcscpy_s` | `strcpy_s` | `_mbscpy_s` | `wcscpy_s` |
| `_tcscspn` | `strcspn` | `_mbscspn` | `wcscspn` |
| `_tcsdec` | `_strdec` | `_mbsdec` | `_wcsdec` |
| `_tcsdup` | `_strdup` | `_mbsdup` | `_wcsdup` |
| `_tcserror` | `strerror` | `strerror` | `_wcserror` |
| `_tcserror_s` | `strerror_s` | `strerror_s` | `_wcserror_s` |
| `_tcsftime` | `strftime` | `strftime` | `wcsftime` |
| `_tcsicmp` | `_stricmp` | `_mbsicmp` | `_wcsicmp` |
| `_tcsicoll` | `_stricoll` | `_mbsicoll` | `_wcsicoll` |
| `_tcsinc` | `_strinc` | `_mbsinc` | `_wcsinc` |
| `_tcslen` | `strlen` | `strlen` | `wcslen` |
| `_tcslwr` | `_strlwr` | `_mbslwr` | `_wcslwr` |
| `_tcslwr_s` | `_strlwr_s` | `_mbslwr_s` | `_wcslwr_s` |
| `_tcsnbcnt` | `_strncnt` | `_mbsnbcnt` | `_wcsncnt` |
| `_tcsncat` | `strncat` | `_mbsnbcat` | `wcsncat` |
| `_tcsncat_s` | `strncat_s` | `_mbsnbcat_s` | `wcsncat_s` |
| `_tcsnccat` | `strncat` | `_mbsncat` | `wcsncat` |
| `_tcsnccmp` | `strncmp` | `_mbsncmp` | `wcsncmp` |
| `_tcsnccmp_s` | `strncmp_s` | `_mbsncmp_s` | `wcsncmp_s` |
| `_tcsnccoll` | `_strncoll` | `_mbsncoll` | `_wcsncoll` |
| `_tcsncmp` | `strncmp` | `_mbsnbcmp` | `wcsncmp` |
| `_tcsnccnt` | `_strncnt` | `_mbsnccnt` | `_wcsncnt` |
| `_tcsnccpy` | `strncpy` | `_mbsncpy` | `wcsncpy` |
| `_tcsnccpy_s` | `strncpy_s` | `_mbsncpy_s` | `wcsncpy_s` |
| `_tcsncicmp` | `_strnicmp` | `_mbsnicmp` | `_wcsnicmp` |
| `_tcsncicoll` | `_strnicoll` | `_mbsnicoll` | `_wcsnicoll` |
| `_tcsncpy` | `strncpy` | `_mbsnbcpy` | `wcsncpy` |
| `_tcsncpy_s` | `strncpy_s` | `_mbsnbcpy_s` | `wcsncpy_s` |
| `_tcsncset` | `_strnset` | `_mbsnset` | `_wcsnset` |
| `_tcsnextc` | `_strnextc` | `_mbsnextc` | `_wcsnextc` |
| `_tcsnicmp` | `_strnicmp` | `_mbsnbicmp` | `_wcsnicmp` |
| `_tcsnicoll` | `_strnicoll` | `_mbsnbicoll` | `_wcsnicoll` |
| `_tcsninc` | `_strninc` | `_mbsninc` | `_wcsninc` |
| `_tcsnset` | `_strnset` | `_mbsnbset` | `_wcsnset` |
| `_tcspbrk` | `strpbrk` | `_mbspbrk` | `wcspbrk` |
| `_tcsspnp` | `_strspnp` | `_mbsspnp` | `_wcsspnp` |
| `_tcsrchr` | `strrchr` | `_mbsrchr` | `wcsrchr` |
| `_tcsrev` | `_strrev` | `_mbsrev` | `_wcsrev` |
| `_tcsset` | `_strset` | `_mbsset` | `_wcsset` |
| `_tcsspn` | `strspn` | `_mbsspn` | `wcsspn` |
| `_tcsstr` | `strstr` | `_mbsstr` | `wcsstr` |
| `_tcstod` | `strtod` | `strtod` | `wcstod` |
| `_tcstoi64` | `_strtoi64` | `_strtoi64` | `_wcstoi64` |
| `_tcstok` | `strtok` | `_mbstok` | `wcstok` |
| `_tcstok_s` | `strtok_s` | `_mbstok_s` | `wcstok_s` |
| `_tcstol` | `strtol` | `strtol` | `wcstol` |
| `_tcstoui64` | `_strtoui64` | `_strtoui64` | `_wcstoui64` |
| `_tcstoul` | `strtoul` | `strtoul` | `wcstoul` |
| `_tcsupr` | `_strupr` | `_mbsupr` | `_wcsupr` |
| `_tcsupr_s` | `_strupr_s` | `_mbsupr_s` | `_wcsupr_s` |
| `_tcsxfrm` | `strxfrm` | `strxfrm` | `wcsxfrm` |
| `_tctime` | `ctime` | `ctime` | `_wctime` |
| `_tctime_s` | `ctime_s` | `ctime_s` | `_wctime_s` |
| `_tctime32` | `_ctime32` | `_ctime32` | `_wctime32` |
| `_tctime32_s` | `_ctime32_s` | `_ctime32_s` | `_wctime32_s` |
| `_tctime64` | `_ctime64` | `_ctime64` | `_wctime64` |
| `_tctime64_s` | `_ctime64_s` | `_ctime64_s` | `_wctime64_s` |
| `_texecl` | `_execl` | `_execl` | `_wexecl` |
| `_texecle` | `_execle` | `_execle` | `_wexecle` |
| `_texeclp` | `_execlp` | `_execlp` | `_wexeclp` |
| `_texeclpe` | `_execlpe` | `_execlpe` | `_wexeclpe` |
| `_texecv` | `_execv` | `_execv` | `_wexecv` |
| `_texecve` | `_execve` | `_execve` | `_wexecve` |
| `_texecvp` | `_execvp` | `_execvp` | `_wexecvp` |
| `_texecvpe` | `_execvpe` | `_execvpe` | `_wexecvpe` |
| `_tfdopen` | `_fdopen` | `_fdopen` | `_wfdopen` |
| `_tfindfirst` | `_findfirst` | `_findfirst` | `_wfindfirst` |
| `_tfindnext` | `_findnext` | `_findnext` | `_wfindnext` |
| `_tfindnext32` | `_findnext32` | `_findnext32` | `_wfindnext32` |
| `_tfindnext64` | `_findnext64` | `_findnext64` | `_wfindnext64` |
| `_tfindnexti64` | `_findnexti64` | `_findnexti64` | `_wfindnexti64` |
| `_tfindnexti6432` | `_findnexti6432` | `_findnexti6432` | `_wfindnexti6432` |
| `_tfindnext32i64` | `_findnext32i64` | `_findnext32i64` | `_wfindnext32i64` |
| `_tfopen` | `fopen` | `fopen` | `_wfopen` |
| `_tfopen_s` | `fopen_s` | `fopen_s` | `_wfopen_s` |
| `_tfreopen` | `freopen` | `freopen` | `_wfreopen` |
| `_tfreopen_s` | `freopen_s` | `freopen_s` | `_wfreopen_s` |
| `_tfsopen` | `_fsopen` | `_fsopen` | `_wfsopen` |
| `_tfullpath` | `_fullpath` | `_fullpath` | `_wfullpath` |
| `_tgetcwd` | `_getcwd` | `_getcwd` | `_wgetcwd` |
| `_tgetdcwd` | `_getdcwd` | `_getdcwd` | `_wgetdcwd` |
| `_tgetenv` | `getenv` | `getenv` | `_wgetenv` |
| `_tgetenv_s` | `getenv_s` | `getenv_s` | `_wgetenv_s` |
| `_tmain` | `main` | `main` | `wmain` |
| `_tmakepath` | `_makepath` | `_makepath` | `_wmakepath` |
| `_tmakepath_s` | `_makepath_s` | `_makepath_s` | `_wmakepath_s` |
| `_tmkdir` | `_mkdir` | `_mkdir` | `_wmkdir` |
| `_tmktemp` | `_mktemp` | `_mktemp` | `_wmktemp` |
| `_tmktemp_s` | `_mktemp_s` | `_mktemp_s` | `_wmktemp_s` |
| `_topen` | `_open` | `_open` | `_wopen` |
| `_topen_s` | `_open_s` | `_open_s` | `_wopen_s` |
| `_totlower` | `tolower` | `_mbctolower` | `towlower` |
| `_totupper` | `toupper` | `_mbctoupper` | `towupper` |
| `_tperror` | `perror` | `perror` | `_wperror` |
| `_tpopen` | `_popen` | `_popen` | `_wpopen` |
| `_tprintf` | `printf` | `printf` | `wprintf` |
| `_tprintf_s` | `printf_s` | `printf_s` | `wprintf_s` |
| `_tputenv` | `_putenv` | `_putenv` | `_wputenv` |
| `_tputenv_s` | `_putenv_s` | `_putenv_s` | `_wputenv_s` |
| `_tremove` | `remove` | `remove` | `_wremove` |
| `_trename` | `rename` | `rename` | `_wrename` |
| `_trmdir` | `_rmdir` | `_rmdir` | `_wrmdir` |
| `_tsearchenv` | `_searchenv` | `_searchenv` | `_wsearchenv` |
| `_tsearchenv_s` | `_searchenv_s` | `_searchenv_s` | `_wsearchenv_s` |
| `_tscanf` | `scanf` | `scanf` | `wscanf` |
| `_tscanf_s` | `scanf_s` | `scanf_s` | `wscanf_s` |
| `_tsetlocale` | `setlocale` | `setlocale` | `_wsetlocale` |
| `_tsopen` | `_sopen` | `_sopen` | `_wsopen` |
| `_tsopen_s` | `_sopen_s` | `_sopen_s` | `_wsopen_s` |
| `_tspawnl` | `_spawnl` | `_spawnl` | `_wspawnl` |
| `_tspawnle` | `_spawnle` | `_spawnle` | `_wspawnle` |
| `_tspawnlp` | `_spawnlp` | `_spawnlp` | `_wspawnlp` |
| `_tspawnlpe` | `_spawnlpe` | `_spawnlpe` | `_wspawnlpe` |
| `_tspawnv` | `_spawnv` | `_spawnv` | `_wspawnv` |
| `_tspawnve` | `_spawnve` | `_spawnve` | `_wspawnve` |
| `_tspawnvp` | `_spawnvp` | `_spawnvp` | `_wspawnvp` |
| `_tspawnvpe` | `_spawnvpe` | `_spawnvpe` | `_wspawnvpe` |
| `_tsplitpath` | `_splitpath` | `_splitpath` | `_wsplitpath` |
| `_tstat` | `_stat` | `_stat` | `_wstat` |
| `_tstat32` | `_stat32` | `_stat32` | `_wstat32` |
| `_tstati32` | `_stati32` | `_stati32` | `_wstati32` |
| `_tstat64` | `_stat64` | `_stat64` | `_wstat64` |
| `_tstati64` | `_stati64` | `_stati64` | `_wstati64` |
| `_tstof` | `atof` | `atof` | `_wtof` |
| `_tstoi` | `atoi` | `atoi` | `_wtoi` |
| `_tstoi64` | `_atoi64` | `_atoi64` | `_wtoi64` |
| `_tstol` | `atol` | `atol` | `_wtol` |
| `_tstrdate` | `_strdate` | `_strdate` | `_wstrdate` |
| `_tstrdate_s` | `_strdate_s` | `_strdate_s` | `_wstrdate_s` |
| `_tstrtime` | `_strtime` | `_strtime` | `_wstrtime` |
| `_tstrtime_s` | `_strtime_s` | `_strtime_s` | `_wstrtime_s` |
| `_tsystem` | `system` | `system` | `_wsystem` |
| `_ttempnam` | `_tempnam` | `_tempnam` | `_wtempnam` |
| `_ttmpnam` | `tmpnam` | `tmpnam` | `_wtmpnam` |
| `_ttmpnam_s` | `tmpnam_s` | `tmpnam_s` | `_wtmpnam_s` |
| `_ttoi` | `atoi` | `atoi` | `_wtoi` |
| `_ttoi64` | `_atoi64` | `_atoi64` | `_wtoi64` |
| `_ttol` | `atol` | `atol` | `_wtol` |
| `_tunlink` | `_unlink` | `_unlink` | `_wunlink` |
| `_tutime` | `_utime` | `_utime` | `_wutime` |
| `_tutime32` | `_utime32` | `_utime32` | `_wutime32` |
| `_tutime64` | `_utime64` | `_utime64` | `_wutime64` |
| `_tWinMain` | `WinMain` | `WinMain` | `wWinMain` |
| `_ui64tot` | `_ui64toa` | `_ui64toa` | `_ui64tow` |
| `_ui64tot_s` | `_ui64toa_s` | `_ui64toa_s` | `_ui64tow_s` |
| `_ultot` | `_ultoa` | `_ultoa` | `_ultow` |
| `_ultot_s` | `_ultoa_s` | `_ultoa_s` | `_ultow_s` |
| `_ungettc` | `ungetc` | `ungetc` | `ungetwc` |
| `_ungettch` | `_ungetch` | `_ungetch` | `_ungetwch` |
| `_vftprintf` | `vfprintf` | `vfprintf` | `vfwprintf` |
| `_vftprintf_s` | `vfprintf_s` | `vfprintf_s` | `vfwprintf_S` |
| `_vsctprintf` | `_vscprintf` | `_vscprintf` | `_vscwprintf` |
| `_vsctprintf_s` | `_vscprintf_s` | `_vscprintf_s` | `_vscwprintf_S` |
| `_vsntprintf` | `_vsnprintf` | `_vsnprintf` | `_vsnwprintf` |
| `_vsntprintf_s` | `_vsnprintf_s` | `_vsnprintf_s` | `_vsnwprintf_s` |
| `_vstprintf` | `vsprintf` | `vsprintf` | `vswprintf` |
| `_vstprintf_s` | `vsprintf_s` | `vsprintf_s` | `vswprintf_s` |
| `_vtprintf` | `vprintf` | `vprintf` | `vwprintf` |
| `_vtprintf_s` | `vprintf_s` | `vprintf_s` | `vwprintf_s` |

## See also

[Generic-text mappings](./generic-text-mappings.md)\
[Data type mappings](./data-type-mappings.md)\
[Constant and global variable mappings](./constant-and-global-variable-mappings.md)\
[A sample generic-text program](./a-sample-generic-text-program.md)\
[Using generic-text mappings](./using-generic-text-mappings.md)
