---
description: "Learn more about: _putenv_s, _wputenv_s"
title: "_putenv_s, _wputenv_s"
ms.date: "4/2/2020"
api_name: ["_wputenv_s", "_putenv_s", "_o__putenv_s", "_o__wputenv_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-environment-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["putenv_s", "wputenv_s", "_wputenv_s", "_putenv_s"]
helpviewer_keywords: ["wputenv_s function", "_putenv_s function", "environment variables, deleting", "putenv_s function", "_wputenv_s function", "environment variables, creating", "environment variables, modifying"]
ms.assetid: fbf51225-a8da-4b9b-9d7c-0b84ef72df18
---
# _putenv_s, _wputenv_s

Creates, modifies, or removes environment variables. These are versions of [_putenv, _wputenv](putenv-wputenv.md) but have security enhancements, as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```C
errno_t _putenv_s(
   const char *varname,
   const char *value_string
);
errno_t _wputenv_s(
   const wchar_t *varname,
   const wchar_t *value_string
);
```

### Parameters

*varname*<br/>
The environment variable name.

*value_string*<br/>
The value to set the environment variable to.

## Return Value

Returns 0 if successful, or an error code.

### Error Conditions

|*varname*|*value_string*|Return value|
|------------|-------------|------------------|
|**NULL**|any|**EINVAL**|
|any|**NULL**|**EINVAL**|

If one of the error conditions occurs, these functions invoke an invalid parameter handler, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). If execution is allowed to continue, these functions return **EINVAL** and set **errno** to **EINVAL**.

## Remarks

The **_putenv_s** function adds new environment variables or modifies the values of existing environment variables. Environment variables define the environment in which a process executes (for example, the default search path for libraries to be linked with a program). **_wputenv_s** is a wide-character version of **_putenv_s**; the *envstring* argument to **_wputenv_s** is a wide-character string.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mappings

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tputenv_s**|**_putenv_s**|**_putenv_s**|**_wputenv_s**|

*varname* is the name of the environment variable to be added or modified and *value_string* is the variable's value. If *varname* is already part of the environment, its value is replaced by *value_string*; otherwise, the new *varname* variable and its *value_string* are added to the environment. You can remove a variable from the environment by specifying an empty string (that is, "") for *value_string*.

**_putenv_s** and **_wputenv_s** affect only the environment that is local to the current process; you cannot use them to modify the command-level environment. These functions operate only on data structures that are accessible to the run-time library and not on the environment "segment" that the operating system creates for a process. When the current process terminates, the environment reverts to the level of the calling process, which in most cases is the operating-system level. However, the modified environment can be passed to any new processes that are created by **_spawn**, **_exec**, or **system**, and these new processes get any new items that are added by **_putenv_s** and **_wputenv_s**.

Do not change an environment entry directly; instead, use **_putenv_s** or **_wputenv_s** to change it. In particular, directly freeing elements of the **_environ[]** global array might cause invalid memory to be addressed.

**getenv** and **_putenv_s** use the global variable **_environ** to access the environment table; **_wgetenv** and **_wputenv_s** use **_wenviron**. **_putenv_s** and **_wputenv_s** may change the value of **_environ** and **_wenviron**, and thereby invalidate the *envp* argument to **main** and the **_wenvp** argument to **wmain**. Therefore, it is safer to use **_environ** or **_wenviron** to access the environment information. For more information about the relationship of **_putenv_s** and **_wputenv_s** to global variables, see [_environ, _wenviron](../../c-runtime-library/environ-wenviron.md).

> [!NOTE]
> The **_putenv_s** and **_getenv_s** families of functions are not thread-safe. **_getenv_s** could return a string pointer while **_putenv_s** is modifying the string, and thereby cause random failures. Make sure that calls to these functions are synchronized.

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_putenv_s**|\<stdlib.h>|
|**_wputenv_s**|\<stdlib.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

For a sample that shows how to use **_putenv_s**, see [getenv_s, _wgetenv_s](getenv-s-wgetenv-s.md).

## See also

[Process and Environment Control](../../c-runtime-library/process-and-environment-control.md)<br/>
[getenv, _wgetenv](getenv-wgetenv.md)<br/>
[_searchenv, _wsearchenv](searchenv-wsearchenv.md)<br/>
