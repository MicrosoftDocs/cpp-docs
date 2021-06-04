---
title: "CRT functions not supported in Universal Windows Platform apps"
description: "Reference guide to CRT functions not supported in Universal Windows Platform apps."
ms.date: "04/16/2020"
ms.assetid: cbfc957d-6c60-48f4-97e3-1ed8526743b4
---
# CRT functions not supported in Universal Windows Platform apps

Many C runtime (CRT) functions aren't available when you build Universal Windows Platform (UWP) apps. Sometimes workarounds are available—-for example, you can use Windows Runtime or Win32 APIs. In other cases, CRT functions have been banned because the corresponding features or the supporting APIs aren't applicable to UWP apps. To look for an alternative method that's supported for the Windows Runtime, see [Alternatives to Windows APIs in UWP apps](/uwp/win32-and-com/alternatives-to-windows-apis-uwp).

The following table lists the CRT functions that are unavailable when you build UWP apps. It indicates any workarounds that apply.

## Unsupported CRT Functions

| Function | Description | Workaround |
|-|-|-|
|`_beep` `_sleep` `_seterrormode`|These functions were obsolete in previous versions of the CRT. Also, the corresponding Win32 APIs are not available for UWP apps.|No workaround.|
|`chdir` `_chdrive` `getcwd`|These functions are obsolete or are not thread-safe.|Use `_chdir`, `_getcwd` and related functions.|
|`_cgets` `_cgets_s` `_cgetws` `_cgetws_s` `_cprintf` `_cprintf_l` `_cprintf_p` `_cprintf_p_l` `_cprintf_s` `_cprintf_s_l` `_cputs` `_cputws` `_cscanf` `_cscanf_l` `_cscanf_s` `_cscanf_s_l` `_cwait` `_cwprintf` `_cwprintf_l` `_cwprintf_p` `_cwprintf_p_l` `_cwprintf_s` `_cwprintf_s_l` `_cwscanf` `_cwscanf_l` `_cwscanf_s` `_cwscanf_s_l` `_vcprintf` `_vcprintf_l` `_vcprintf_p` `_vcprintf_p_l` `_vcprintf_s` `_vcprintf_s_l` `_vcwprintf` `_vcwprintf_l` `_vcwprintf_p` `_vcwprintf_p_l` `_vcwprintf_s` `_vcwprintf_s_l` `_getch` `_getch_nolock` `_getche` `_getche_nolock` `_getwch` `_getwch_nolock` `_getwche` `_getwche_nolock` `_putch` `_putch_nolock` `_putwch` `_putwch_nolock` `_ungetch` `_ungetch_nolock` `_ungetwch` `_ungetwch_nolock` `_kbhit` `kbhit` `putch` `cgets` `cprintf` `cputs` `cscanf` `cwait` `getch` `getche` `ungetch`| These console I/O functions are unavailable in GUI-based UWP apps. | UWP console apps can use these functions. For more information, see [Create a Universal Windows Platform console app](/windows/uwp/launch-resume/console-uwp). |
|`getpid` `_getpid` | These functions are obsolete.|Use the Win32 API `GetCurrentProcessId`.|
|`_getdiskfree`|Not available.|Use the Win32 API `GetDiskFreeSpaceExW`.|
|`_getdrive` `_getdrives`|Corresponding API is not available for UWP apps.|No workaround.|
|`_inp` `_inpd` `_inpw` `_outp` `_outpd` `_outpw` `inp` `inpd` `inpw` `outp` `outpd` `outpw`|Port IO is not supported in UWP apps.|No workaround.|
|`_ismbcalnum` `_ismbcalnum_l` `_ismbcalpha` `_ismbcalpha_l` `_ismbcdigit` `_ismbcdigit_l` `_ismbcgraph` `_ismbcgraph_l` `_ismbchira` `_ismbchira_l` `_ismbckata` `_ismbckata_l` `_ismbcl0` `_ismbcl0_l` `_ismbcl1` `_ismbcl1_l` `_ismbcl2` `_ismbcl2_l` `_ismbclegal` `_ismbclegal_l` `_ismbclower` `_ismbclower_l` `_ismbcprint` `_ismbcprint_l` `_ismbcpunct` `_ismbcpunct_l` `_ismbcspace` `_ismbcspace_l` `_ismbcsymbol` `_ismbcsymbol_l` `_ismbcupper` `_ismbcupper_l` `_mbbtombc` `_mbbtombc_l` `_mbbtype` `_mbbtype_l` `_mbccpy` `_mbccpy_l` `_mbccpy_s` `_mbccpy_s_l` `_mbcjistojms` `_mbcjistojms_l` `_mbcjmstojis` `_mbcjmstojis_l` `_mbclen` `_mbclen_l` `_mbctohira` `_mbctohira_l` `_mbctokata` `_mbctokata_l` `_mbctolower` `_mbctolower_l` `_mbctombb` `_mbctombb_l` `_mbctoupper` `_mbctoupper_l` `_mbsbtype` `_mbsbtype_l` `_mbscat` `_mbscat_l` `_mbscat_s` `_mbscat_s_l` `_mbschr` `_mbschr_l` `_mbscmp` `_mbscmp_l` `_mbscoll` `_mbscoll_l` `_mbscpy` `_mbscpy_l` `_mbscpy_s` `_mbscpy_s_l` `_mbscspn` `_mbscspn_l` `_mbsdec` `_mbsdec_l` `_mbsicmp` `_mbsicmp_l` `_mbsicoll` `_mbsicoll_l` `_mbsinc` `_mbsinc_l` `_mbslen` `_mbslen_l` `_mbslwr` `_mbslwr_l` `_mbslwr_s` `_mbslwr_s_l` `_mbsnbcat` `_mbsnbcat_l` `_mbsnbcat_s` `_mbsnbcat_s_l` `_mbsnbcmp` `_mbsnbcmp_l` `_mbsnbcnt` `_mbsnbcnt_l` `_mbsnbcoll` `_mbsnbcoll_l` `_mbsnbcpy` `_mbsnbcpy_l` `_mbsnbcpy_s` `_mbsnbcpy_s_l` `_mbsnbicmp` `_mbsnbicmp_l` `_mbsnbicoll` `_mbsnbicoll_l` `_mbsnbset` `_mbsnbset_l` `_mbsnbset_s` `_mbsnbset_s_l` `_mbsncat` `_mbsncat_l` `_mbsncat_s` `_mbsncat_s_l` `_mbsnccnt` `_mbsnccnt_l` `_mbsncmp` `_mbsncmp_l` `_mbsncoll` `_mbsncoll_l` `_mbsncpy` `_mbsncpy_l` `_mbsncpy_s` `_mbsncpy_s_l` `_mbsnextc` `_mbsnextc_l` `_mbsnicmp` `_mbsnicmp_l` `_mbsnicoll` `_mbsnicoll_l` `_mbsninc` `_mbsninc_l` `_mbsnlen` `_mbsnlen_l` `_mbsnset` `_mbsnset_l` `_mbsnset_s` `_mbsnset_s_l` `_mbspbrk` `_mbspbrk_l` `_mbsrchr` `_mbsrchr_l` `_mbsrev` `_mbsrev_l` `_mbsset` `_mbsset_l` `_mbsset_s` `_mbsset_s_l` `_mbsspn` `_mbsspn_l` `_mbsspnp` `_mbsspnp_l` `_mbsstr` `_mbsstr_l` `_mbstok` `_mbstok_l` `_mbstok_s` `_mbstok_s_l` `_mbsupr` `_mbsupr_l` `_mbsupr_s` `_mbsupr_s_l` `is_wctype`|Multi-byte strings are not supported in UWP apps.|Use Unicode strings instead.|
|`_pclose` `_pipe` `_popen` `_wpopen`|Pipe functionality is not available to UWP apps.|No workaround.|
|`_resetstkoflw`|Supporting Win32 APIs are not available for UWP apps.|No workaround.|
|`_getsystime` `_setsystime`|These were obsolete APIs in previous CRT versions. Also, a user cannot set the system time in a UWP app due to lack of permissions.|To get the system time only, use the Win32 API `GetSystemTime`. System time cannot be set.|
|`_environ` `_putenv` `_putenv_s` `_searchenv` `_searchenv_s` `_dupenv_s` `_wputenv` `_wputenv_s` `_wsearchenv` getenv getenv_s putenv `_wdupenv_s` `_wenviron` `_wgetenv` `_wgetenv_s` `_wsearchenv_s` `tzset`|Environment variables are not available to UWP apps.|No workaround. To set the time zone, use `_tzset`.|
|`_loaddll` `_getdllprocaddr` `_unloaddll`|These were obsolete functions in previous CRT versions. Also, a user can't load DLLs except the ones in the same application package.|Use Win32 APIs `LoadPackagedLibrary`, `GetProcAddress`, and `FreeLibrary` to load and use packaged DLLs.|
|`_wexecl` `_wexecle` `_wexeclp` `_wexeclpe` `_wexecv` `_wexecve` `_wexecvp` `_wexecvpe` `_execl` `_execle` `_execlp` `_execlpe` `_execv` `_execve` `_execvp` `_execvpe` `_spawnl` `_spawnle` `_spawnlp` `_spawnlpe` `_spawnv` `_spawnve` `_spawnvp` `_spawnvpe` `_wspawnl` `_wspawnle` `_wspawnlp` `_wspawnlpe` `_wspawnv` `_wspawnve` `_wspawnvp` `_wspawnvpe` `_wsystem` `execl` `execle` `execlp` `execlpe` `execv` `execve` `execvp` `execvpe` `spawnl` `spawnle` `spawnlp` `spawnlpe` `spawnv` `spawnve` `spawnvp` `spawnvpe` `system`|The functionality is not available in UWP apps. A UWP app cannot invoke another UWP app or a desktop app.|No workaround.|
|`_heapwalk` `_heapadd` `_heapchk` `_heapset` `_heapused`|These functions are typically used to work with the heap. However, corresponding Win32 APIs are not supported in UWP apps. And, apps can no longer create or use private heaps.|No workaround. However, `_heapwalk` is available in the DEBUG CRT, for debugging purposes only. These functions can't be used in apps that are uploaded to the Microsoft Store.|

The following functions are available in the CRT for UWP apps. However, use them only when you can't use the corresponding Win32 or Windows Runtime APIs, such as when you're porting large code bases:

| Functions | Workaround |
|-|-|
|Single-byte string functions—for example, `strcat`, `strcpy`, `strlwr`, and so on.|Make your UWP apps strictly Unicode because all Win32 APIs and Windows Runtime APIs that are exposed use Unicode character sets only.  Single-byte functions were left for porting large code bases, but should otherwise be avoided. The corresponding wide char functions should be used instead when possible.|
|Stream IO and low-level file IO functions—for example, `fopen`, `open`, and so on.|These functions are synchronous, which isn't recommended for UWP apps. In your UWP apps, use asynchronous APIs to open, read from, and write to files to prevent locking of the UI thread. Examples of such APIs are the ones in the `Windows::Storage::FileIO` class.|

## Windows 8.x Store apps and Windows Phone 8.x apps

Both the previously mentioned APIs and the following APIs are unavailable in Windows 8.x Store apps and Windows Phone 8.x apps.

| Functions | Description | Workaround |
|-|-|-|
|`_beginthread` `_beginthreadex` `_endthread` `_endthreadex`|Threading Win32 APIs are not available in Windows 8.x Store apps.|Use the `Windows Runtime Windows::System::Threading::ThreadPool` or `concurrency::task` instead.|
|`_chdir` `_wchdir` `_getcwd` `_getdcwd` `_wgetcwd` `_wgetdcwd`|The concept of a working directory doesn't apply to Windows 8.x Store apps.|Use full paths instead.|
|`_isleadbyte_l` `_ismbbalnum`, `_ismbbalnum_l`, `_ismbbalpha`, `_ismbbalpha` `_ismbbalpha_l` `_ismbbgraph` `_ismbbgraph_l` `_ismbbkalnum` `_ismbbkalnum_l` `_ismbbkana` `_ismbbkana_l` `_ismbbkprint` `_ismbbkprint_l` `_ismbbkpunct` `_ismbbkpunct_l` `_ismbblead` `_ismbblead_l` `_ismbbprint` `_ismbbprint_l` `_ismbbpunct` `_ismbbpunct_l` `_ismbbtrail` `_ismbbtrail_l` `_ismbslead` `_ismbslead_l` `_ismbstrail` `_ismbstrail_l` `_mbsdup` `isleadbyte`|Multi-byte strings are not supported in Windows 8.x Store apps.|Use Unicode strings instead.|
|`_tzset`|Environment variables are not available to Windows  8.x Store apps.|No workaround.|
|`_get_heap_handle`, `_heapmin`|The corresponding Win32 APIs are not supported in Windows 8.x Store apps. And, apps can no longer create private heaps.|No workaround. However, ``_get_heap_handle`` is available in the DEBUG CRT, for debugging purposes only.|
