---
description: "Learn more about: _putenv, _wputenv"
title: "_putenv, _wputenv"
ms.date: "4/2/2020"
api_name: ["_putenv", "_wputenv", "_o__putenv", "_o__wputenv"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-environment-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_tputenv", "_wputenv", "_putenv", "wputenv", "tputenv"]
helpviewer_keywords: ["_putenv function", "environment variables, deleting", "putenv function", "tputenv function", "environment variables, creating", "wputenv function", "_wputenv function", "_tputenv function", "environment variables, modifying"]
ms.assetid: 9ba9b7fd-276e-45df-8420-d70c4204b8bd
---
# _putenv, _wputenv

Creates, modifies, or removes environment variables. More secure versions of these functions are available; see [_putenv_s, _wputenv_s](putenv-s-wputenv-s.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
int _putenv(
   const char *envstring
);
int _wputenv(
   const wchar_t *envstring
);
```

### Parameters

*envstring*<br/>
Environment-string definition.

## Return Value

Return 0 if successful or -1 in the case of an error.

## Remarks

The **_putenv** function adds new environment variables or modifies the values of existing environment variables. Environment variables define the environment in which a process executes (for example, the default search path for libraries to be linked with a program). **_wputenv** is a wide-character version of **_putenv**; the *envstring* argument to **_wputenv** is a wide-character string.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|Tchar.h routine|_UNICODE and _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|--------------------------------------|--------------------|-----------------------|
|**_tputenv**|**_putenv**|**_putenv**|**_wputenv**|

The *envstring* argument must be a pointer to a string of the form *varname*=*value_string*, where *varname* is the name of the environment variable to be added or modified and *value_string* is the variable's value. If *varname* is already part of the environment, its value is replaced by *value_string*; otherwise, the new *varname* variable and its *value_string* value are added to the environment. You can remove a variable from the environment by specifying an empty *value_string*, or in other words, by specifying only *varname*=.

**_putenv** and **_wputenv** affect only the environment that is local to the current process; you cannot use them to modify the command-level environment. That is, these functions operate only on data structures accessible to the run-time library and not on the environment segment created for a process by the operating system. When the current process terminates, the environment reverts to the level of the calling process (in most cases, the operating-system level). However, the modified environment can be passed to any new processes created by **_spawn**, **_exec**, or **system**, and these new processes get any new items added by **_putenv** and **_wputenv**.

Do not change an environment entry directly: instead, use **_putenv** or **_wputenv** to change it. In particular, direct freeing elements of the **_environ[]** global array might lead to invalid memory being addressed.

**getenv** and **_putenv** use the global variable **_environ** to access the environment table; **_wgetenv** and **_wputenv** use **_wenviron**. **_putenv** and **_wputenv** might change the value of **_environ** and **_wenviron**, thus invalidating the **_envp** argument to **main** and the **_wenvp** argument to **wmain**. Therefore, it is safer to use **_environ** or **_wenviron** to access the environment information. For more information about the relation of **_putenv** and **_wputenv** to global variables, see [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> The **_putenv** and **_getenv** families of functions are not thread-safe. **_getenv** could return a string pointer while **_putenv** is modifying the string, causing random failures. Make sure that calls to these functions are synchronized.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putenv**|\<stdlib.h>|
|**_wputenv**|\<stdlib.h> or \<wchar.h>|

For more compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

For a sample of how to use **_putenv**, see [getenv, _wgetenv](getenv-wgetenv.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>
