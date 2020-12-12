---
description: "Learn more about: _environ, _wenviron"
title: "_environ, _wenviron"
ms.date: "11/04/2016"
f1_keywords: ["environ", "wenviron", "_wenviron", "_environ"]
helpviewer_keywords: ["environ function", "_environ function", "_wenviron function", "process environment", "wenviron function"]
ms.assetid: 7e639962-6536-47cd-8095-0cbe44a56e03
---
# _environ, _wenviron

The `_environ` variable is a pointer to an array of pointers to the multibyte-character strings that constitute the process environment. This global variable has been deprecated for the more secure functional versions [getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md) and [_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md), which should be used in place of the global variable. `_environ` is declared in Stdlib.h.

> [!IMPORTANT]
> This API cannot be used in applications that execute in the Windows Runtime. For more information, see [CRT functions not supported in Universal Windows Platform apps](../cppcx/crt-functions-not-supported-in-universal-windows-platform-apps.md).

## Syntax

```
extern char **_environ;
```

## Remarks

In a program that uses the `main` function, `_environ` is initialized at program startup according to settings taken from the operating-system environment. The environment consists of one or more entries of the form

`ENVVARNAME` `=string`

`getenv_s` and `putenv_s` use the `_environ` variable to access and modify the environment table. When `_putenv` is called to add or delete environment settings, the environment table changes size. Its location in memory may also change, depending on the program's memory requirements. The value of `_environ` is automatically adjusted accordingly.

The `_wenviron` variable, declared in Stdlib.h as:

```
extern wchar_t **_wenviron;
```

is a wide-character version of `_environ`. In a program that uses the `wmain` function, `_wenviron` is initialized at program startup according to settings taken from the operating-system environment.

In a program that uses `main`, `_wenviron` is initially **NULL** because the environment is composed of multibyte-character strings. On the first call to `_wgetenv` or `_wputenv`, a corresponding wide-character string environment is created and is pointed to by `_wenviron`.

Similarly, in a program that uses `wmain`, `_environ` is initially **NULL** because the environment is composed of wide-character strings. On the first call to `_getenv` or `_putenv`, a corresponding multibyte-character string environment is created and is pointed to by `_environ`.

When two copies of the environment (MBCS and Unicode) exist simultaneously in a program, the run-time system must maintain both copies, resulting in slower execution time. For example, whenever you call `_putenv`, a call to `_wputenv` is also executed automatically, so that the two environment strings correspond.

> [!CAUTION]
> In rare instances, when the run-time system is maintaining both a Unicode version and a multibyte version of the environment, these two environment versions might not correspond exactly. This is because, although any unique multibyte-character string maps to a unique Unicode string, the mapping from a unique Unicode string to a multibyte-character string is not necessarily unique. Therefore, two distinct Unicode strings might map to the same multibyte string.

Polling `_environ` in a Unicode context is meaningless when [/MD](../build/reference/md-mt-ld-use-run-time-library.md) or `/MDd` linkage is used. For the CRT DLL, the type (wide or multibyte) of the program is unknown. Only the multibyte type is created because that is the most likely scenario.

The following pseudo-code illustrates how this can happen.

```
int i, j;
i = _wputenv( "env_var_x=string1" );  // results in the implicit call:
                                      // putenv ("env_var_z=string1")
j = _wputenv( "env_var_y=string2" );  // also results in implicit call:
                                      // putenv("env_var_z=string2")
```

In the notation used for this example, the character strings are not C string literals; rather, they are placeholders that represent Unicode environment string literals in the `_wputenv` call and multibyte environment strings in the `putenv` call. The character placeholders '`x`' and '`y`' in the two distinct Unicode environment strings do not map uniquely to characters in the current MBCS. Instead, both map to some MBCS character '`z`' that is the default result of the attempt to convert the strings.

Thus, in the multibyte environment, the value of "`env_var_z`" after the first implicit call to `putenv` would be "`string1`", but this value would be overwritten on the second implicit call to `putenv`, when the value of "`env_var_z`" is set to "`string2`". The Unicode environment (in `_wenviron`) and the multibyte environment (in `_environ`) would therefore differ following this series of calls.

## See also

[Global Variables](../c-runtime-library/global-variables.md)<br/>
[getenv, _wgetenv](../c-runtime-library/reference/getenv-wgetenv.md)<br/>
[getenv_s, _wgetenv_s](../c-runtime-library/reference/getenv-s-wgetenv-s.md)<br/>
[_putenv, _wputenv](../c-runtime-library/reference/putenv-wputenv.md)<br/>
[_putenv_s, _wputenv_s](../c-runtime-library/reference/putenv-s-wputenv-s.md)
