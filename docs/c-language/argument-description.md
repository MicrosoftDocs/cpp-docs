---
description: "Learn more about: Argument Description"
title: "Argument Description"
ms.date: "11/04/2016"
helpviewer_keywords: ["envp argument", "main function, syntax", "arguments [C++], for main function", "argv argument", "argc argument"]
ms.assetid: 91c2cbe3-9aca-4277-afa1-6137eb8fb704
---
# Argument Description

The `argc` parameter in the **main** and **wmain** functions is an integer specifying how many arguments are passed to the program from the command line. Since the program name is considered an argument, the value of `argc` is at least one.

## Remarks

The `argv` parameter is an array of pointers to null-terminated strings representing the program arguments. Each element of the array points to a string representation of an argument passed to **main** (or **wmain**). (For information about arrays, see [Array Declarations](../c-language/array-declarations.md).) The `argv` parameter can be declared either as an array of pointers to type **`char`** (`char *argv[]`) or as a pointer to pointers to type **`char`** (`char **argv`). For **wmain**, the `argv` parameter can be declared either as an array of pointers to type **`wchar_t`** (`wchar_t *argv[]`) or as a pointer to pointers to type **`wchar_t`** (`wchar_t **argv`).

By convention, `argv`**[0]** is the command with which the program is invoked.  However, it is possible to spawn a process using [CreateProcess](/windows/win32/api/processthreadsapi/nf-processthreadsapi-createprocessw) and if you use both the first and second arguments (`lpApplicationName` and `lpCommandLine`), `argv`**[0]** may not be the executable name; use [GetModuleFileName](/windows/win32/api/libloaderapi/nf-libloaderapi-getmodulefilenamew) to retrieve the executable name.

The last pointer (`argv[argc]`) is **NULL**. (See [getenv](../c-runtime-library/reference/getenv-wgetenv.md) in the *Run-Time Library Reference* for an alternative method for getting environment variable information.)

**Microsoft Specific**

The `envp` parameter is a pointer to an array of null-terminated strings that represent the values set in the user's environment variables. The `envp` parameter can be declared as an array of pointers to **`char`** (`char *envp[]`) or as a pointer to pointers to **`char`** (`char **envp`). In a **wmain** function, the `envp` parameter can be declared as an array of pointers to **`wchar_t`** (`wchar_t *envp[]`) or as a pointer to pointers to **`wchar_t`** (`wchar_t **envp`). The end of the array is indicated by a **NULL** \*pointer. Note that the environment block passed to **main** or **wmain** is a "frozen" copy of the current environment. If you subsequently change the environment via a call to _**putenv** or `_wputenv`, the current environment (as returned by `getenv`/`_wgetenv` and the `_environ` or `_wenviron` variables) will change, but the block pointed to by `envp` will not change. The `envp` parameter is ANSI compatible in C, but not in C++.

**END Microsoft Specific**

## See also

[main Function and Program Execution](../c-language/main-function-and-program-execution.md)
